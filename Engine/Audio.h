// © 2025 Trent Cridland Murderbot1@outlook.com All Rights Reserved

// C++ imported files
#include <iostream>
#include <fstream>
#include <string>
#include <stdint.h>
#include <vector>
#include <stdfloat>

// Program imported files


// Function definitions
class AudioParabola {
    public:
        AudioParabola(float A, float B, float C);

        float ParabolaA;
        float ParabolaB;
        float ParabolaC;

        float FindOutput(int64_t CurrentTimeInMS);
};

class AudioExponential {
    public:
        AudioExponential(float A, float B);

        float ExponentialA;
        float ExponentialB;

        float FindOutput(int64_t CurrentTimeInMS);
};

class AudioLinear {
    public:
        AudioLinear(float A, float B);

        float LinearA;
        float LinearB;

        float FindOutput(int64_t CurrentTimeInMS);
};

class AudioCurve {
    public:
        AudioCurve() : IsParabola(false), StoreParabola(nullptr), IsCurve(false), StoreCurve(nullptr), IsLinear(false), StoreLinear(nullptr) {}

        AudioCurve(std::string KindOfCurve, float A, float B, float C);
        AudioCurve(std::string KindOfCurve, float A, float B);

        /* Example curve document
            Is it a parabola (true / false)
            Is it a curve (true / false)
            Is it a linear function (true / false)
            Value of A
            Value of B
            Value of C (nothing here if there is no value)
        */

        bool IsParabola;
        AudioParabola* StoreParabola;

        bool IsCurve;
        AudioExponential* StoreCurve;

        bool IsLinear;
        AudioLinear* StoreLinear;
};

class AudioEffect {
    public:
        AudioEffect(std::string FilePath);

        /* Example effects document
            Start time compared to the channel in miliseconds
            End time compared to the channel in miliseconds
            Is there a volume shift (true / false)
            Max volume shift in deciliter
            Path to the curve file
            Is there a pitch shift (true / false)
            Max pitch shift in hertz
            Path to the curve file
            Is there a reverb (true / false)
            Rate of the reverb
            Number of reverbs before they die off
            Path of the curve file for reverb drop off
        */

        int StartTimeOfEffectInMS;
        int EndTimeOfEffectInMS;

        bool IsVolumeShift;
        int16_t VolumeShiftInDeciliter;
        AudioCurve VolumeShiftCurve;

        bool IsPitchShift;
        int16_t PitchShiftInHertz;
        AudioCurve PitchShiftCurve;

        bool IsReverb;
        int16_t ReverbRate;
        int16_t NumberOfReverbRepeats;
        AudioCurve ReverbVolumeDropoff;
};

class AudioChannel {
    public:
        AudioChannel();
        std::string FilePathOfChannel;
        /* Example audio channel document
            Path to the effects folder
            Length of the channel in miliseconds
            Number of data points a second
            Data point
            Data point
            Data point
            Data point
            Data point
            Data point
            Data point
            Ect...
        */
        std::vector<AudioEffect> Effects;
        std::vector<int8_t> Data;
        int64_t LengthOfChannel;
        int NumberOfDataPointsASecond;
};

class EmbededChannel {
    public:
        EmbededChannel();
        std::string FilePathOfEmbededChannelDoc; 
        /* Example embeded channel
            Path to the AudioChannel's data
            Time when the channel starts in miliseconds
            Volume of channel in deciliters
        */
        AudioChannel Channel;
        int StartTimeInMS;
        int16_t VolumeInDeciliter;
};

class AudioFile {
    public:
        AudioFile();
        std::string FileName;
        std::string FilePath;
        /* Example audio file
            Total time of audio file
            Number of channels
            Path to channel 1
            Path to channel 2
            Path to channel 3
            Path to channel 4
            Path to channel 5
            Path to channel 6
            Path to channel 7
            Ect...
        */
        int TotalTimeInMS;
        int Channels;
        std::vector<EmbededChannel> Channels;
};


class AudioPlay {
    public:
        AudioPlay();
};