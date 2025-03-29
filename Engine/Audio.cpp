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
    while (getline(EffectFile, TempString)) {
        CurveFileData.push_back(TempString);
    }
    
    if(CurveFileData[0] == "L") {
        this->IsParabola = false;
        this->IsCurve = false;
        this->IsLinear = true;
        this->StoreLinear = &AudioLinear(CurveFileData[1], CurveFileData[2]);
    }
    else if(CurveFileData[0] == "C") {
        this->IsParabola = false;
        this->IsCurve = true;
        this->IsLinear = false;
        this->StoreCurve = &AudioExponential(CurveFileData[1], CurveFileData[2]);
    }
    else if(CurveFileData[0] == "P") {
        this->IsParabola = true;
        this->IsCurve = false;
        this->IsLinear = false;
        this->StoreParabola = &AudioParabola(CurveFileData[1], CurveFileData[2], CurveFileData[3]);
    }
    else {
        this->IsParabola = false;
        this->IsCurve = false;
        this->IsLinear = true;
        this->AudioLinear = &AudioLinear(0, 0);
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
    
    this->StartTimeOfEffectInMS = EffectFileData[0];
    this->EndTimeOfEffectInMS = EffectFileData[1];
    this->IsVolumeShift = EffectFileData[2];
    this->VolumeShiftInDeciliter = EffectFileData[3];
    this->VolumeShiftCurve = AudioCurve(EffectFileData[4]);
    this->IsPitchShift = EffectFileData[5];
    this->PitchShiftInHertz = EffectFileData[6];
    this->PitchShiftCurve = AudioCurve(EffectFileData[7]);
    this->IsReverb = EffectFileData[8];
    this->ReverbRate = EffectFileData[9];
    this->NumberOfReverbRepeats = EffectFileData[10];
    this->ReverbVolumeDropoff = AudioCurve(EffectFileData[11]);
}

#endif
