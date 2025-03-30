// © 2025 Trent Cridland Murderbot1@outlook.com All Rights Reserved

#ifndef Audio_CPP
#define Audio_CPP

// CPP files .h file
#include "Audio.h"

// Redefine vars if needed


// Start of program
AudioParabola::AudioParabola(float A, float B, float C) {
    // Assing variables to class object
    this->ParabolaA = A;
    this->ParabolaB = B;
    this->ParabolaC = C;
}

float AudioParabola::FindOutput(int64_t CurrentTimeInMS) {
    // Evaluate for the current time in miliseconds
    float CurrentTime = CurrentTimeInMS / 1000.0f;
    return (this->ParabolaA * (CurrentTime * CurrentTime)) + (this->ParabolaB * CurrentTime) + this->ParabolaC;
}

AudioExponential::AudioExponential(float A, float B) {
    // Assing variables to class object
    this->ExponentialA = A;
    this->ExponentialB = B;
}

float AudioExponential::FindOutput(int64_t CurrentTimeInMS) {
    // Evaluate for the current time in miliseconds
    float CurrentTime = CurrentTimeInMS / 1000.0f;
    return pow(this->ExponentialA, CurrentTime) + this->ExponentialB;
}

AudioLinear::AudioLinear(float A, float B) {
    // Assing variables to class object
    this->LinearA = A;
    this->LinearB = B;
}

float AudioLinear::FindOutput(int64_t CurrentTimeInMS) {
    // Evaluate for the current time in miliseconds
    float CurrentTime = CurrentTimeInMS / 1000.0f;
    return this->LinearA * CurrentTime + this->LinearB;
}

AudioCurve::AudioCurve(std::string KindOfCurve, float A, float B, float C) {
    // Depending on the type of function activate that function
    if(KindOfCurve == "Parabola") {
        this->IsParabola = true;
        this->IsCurve = false;
        this->IsLinear = false;
        this->StoreParabola = &AudioParabola(A, B, C);
    }
    else if(KindOfCurve == "Curve") {
        this->IsParabola = false;
        this->IsCurve = true;
        this->IsLinear = false;
        this->StoreCurve = &AudioExponential(A, B);
    }
    else if(KindOfCurve == "Linear") {
        this->StoreLinear = &AudioLinear(A, B);
        this->IsParabola = false;
        this->IsCurve = false;
        this->IsLinear = true;
    }    
    else {
        this->StoreLinear = &AudioLinear(0, 0);
        this->IsParabola = false;
        this->IsCurve = false;
        this->IsLinear = true;
    }
}

AudioCurve::AudioCurve(std::string KindOfCurve, float A, float B) {
    // Depending on the type of function activate that function
    if(KindOfCurve == "Parabola") {
        this->IsParabola = true;
        this->IsCurve = false;
        this->IsLinear = false;
        this->StoreParabola = &AudioParabola(A, B, 0);
    }
    else if(KindOfCurve == "Curve") {
        this->IsParabola = false;
        this->IsCurve = true;
        this->IsLinear = false;
        this->StoreCurve = &AudioExponential(A, B);
    }
    else if(KindOfCurve == "Linear") {
        this->StoreLinear = &AudioLinear(A, B);
        this->IsParabola = false;
        this->IsCurve = false;
        this->IsLinear = true;
    }   
    else {
        this->StoreLinear = &AudioLinear(0, 0);
        this->IsParabola = false;
        this->IsCurve = false;
        this->IsLinear = true;
    }  
}

AudioCurve::AudioCurve(std::string FilePath) {
    // Open the file and create variables
    std::ifstream CurveFile(FilePath);
    std::vector<std::string> CurveFileData;
    std::string TempString;

    // Get the files data in to a vector string
    while (getline(CurveFile, TempString)) {
        CurveFileData.push_back(TempString);
    }
    
    if(CurveFileData[0] == "L") {
        this->IsParabola = false;
        this->IsCurve = false;
        this->IsLinear = true;
        this->StoreLinear = &AudioLinear(FromBinary::BinaryToFloat(CurveFileData[1]), FromBinary::BinaryToFloat(CurveFileData[2]));
    }
    else if(CurveFileData[0] == "C") {
        this->IsParabola = false;
        this->IsCurve = true;
        this->IsLinear = false;
        this->StoreCurve = &AudioExponential(FromBinary::BinaryToFloat(CurveFileData[1]), FromBinary::BinaryToFloat(CurveFileData[2]));
    }
    else if(CurveFileData[0] == "P") {
        this->IsParabola = true;
        this->IsCurve = false;
        this->IsLinear = false;
        this->StoreParabola = &AudioParabola(FromBinary::BinaryToFloat(CurveFileData[1]), FromBinary::BinaryToFloat(CurveFileData[2]), FromBinary::BinaryToFloat(CurveFileData[3]));
    }
    else {
        this->IsParabola = false;
        this->IsCurve = false;
        this->IsLinear = true;
        this->StoreLinear = &AudioLinear(0, 0);
    }
}

AudioEffect::AudioEffect(std::string FilePath) {
    // Open the file and create variables
    std::ifstream EffectFile(FilePath);
    std::vector<std::string> EffectFileData;
    std::string TempString;

    // Get the files data in to a vector string
    while (getline(EffectFile, TempString)) {
        EffectFileData.push_back(TempString);
    }
    
    this->StartTimeOfEffectInMS = FromBinary::BinaryToInt(EffectFileData[0]);
    this->EndTimeOfEffectInMS = FromBinary::BinaryToInt(EffectFileData[1]);
    this->IsVolumeShift = FromBinary::BinaryStringToBool(EffectFileData[2]);
    this->VolumeShiftInDeciliter = FromBinary::BinaryToInt(EffectFileData[3]);
    this->VolumeShiftCurve = AudioCurve(EffectFileData[4]);
    this->IsPitchShift = FromBinary::BinaryStringToBool(EffectFileData[5]);
    this->PitchShiftInHertz = FromBinary::BinaryToInt(EffectFileData[6]);
    this->PitchShiftCurve = AudioCurve(EffectFileData[7]);
    this->IsReverb = FromBinary::BinaryStringToBool(EffectFileData[8]);
    this->ReverbRate = FromBinary::BinaryToInt(EffectFileData[9]);
    this->NumberOfReverbRepeats = FromBinary::BinaryToInt(EffectFileData[10]);
    this->ReverbVolumeDropoff = AudioCurve(EffectFileData[11]);
}

AudioChannel::AudioChannel(std::string FilePath) {
    // Open the file and create variables
    std::ifstream ChannelFile(FilePath);
    std::vector<std::string> ChannelFileData;
    std::string TempString;

    // Get the files data in to a vector string
    while (getline(ChannelFile, TempString)) {
        ChannelFileData.push_back(TempString);
    }
    
    for (const auto& entry : std::filesystem::directory_iterator(ChannelFileData[0])) {
        this->Effects.push_back(&AudioEffect(entry.path().generic_string()));
    }
    
    this->LengthOfChannel = FromBinary::BinaryToInt(ChannelFileData[1]);
    this->NumberOfDataPointsASecond = FromBinary::BinaryToInt(ChannelFileData[2]);
    int Counter = 0;
    for(std::string DataPoints : ChannelFileData) {
        if(Counter > 2) {
            int16_t PitchData = FromBinary::BinaryToInt(DataPoints.substr(0, 2));
            this->PitchData.push_back(PitchData);
            int16_t VolumeData = FromBinary::BinaryToInt(DataPoints.substr(2, 2));
            this->VolumeData.push_back(VolumeData);
        }
        Counter++;
    }
}

EmbededChannel::EmbededChannel(std::string FilePath) {
    // Open the file and create variables
    std::ifstream EmbededChannelFile(FilePath);
    std::vector<std::string> EmbededChannelFileData;
    std::string TempString;

    // Get the files data in to a vector string
    while (getline(EmbededChannelFile, TempString)) {
        EmbededChannelFileData.push_back(TempString);
    }

    this->Channel = &AudioChannel(EmbededChannelFileData[0]);
    this->StartTimeInMS = FromBinary::BinaryToInt(EmbededChannelFileData[1]);
}

AudioFile::AudioFile(std::string FilePath) {
    // Open the file and create variables
    std::ifstream AudioFileFile(FilePath);
    std::vector<std::string> AudioFileFileData;
    std::string TempString;

    // Get the files data in to a vector string
    while (getline(AudioFileFile, TempString)) {
        AudioFileFileData.push_back(TempString);
    }

    this->TotalTimeInMS = FromBinary::BinaryToInt(AudioFileFileData[0]);

    int Counter = 0;
    for(std::string Channels : AudioFileFileData) {
        if(Counter > 0) {
            this->Channels.push_back(&EmbededChannel::EmbededChannel(Channels));
        }
        Counter++;
    }
}

#endif
