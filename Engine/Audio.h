// © 2025 Trent Cridland Murderbot1@outlook.com All Rights Reserved

// C++ imported files
#include <fstream>
#include <string>
#include <stdint.h>
#include <vector>
#include <filesystem>

// Program imported files
#include "Binary.h"

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
        AudioCurve(std::string FilePath);

        /* Example curve document
            Is it a linear function, curve, or parabola (L, C, P)
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
        AudioChannel(std::string FilePath);
        std::string FilePathOfChannel;
        /* Example audio channel document
            Path to the effects folder
            Length of the channel in miliseconds
            Number of data points a second
            Data point (contains the sound pitch in to bytes then the volume in 2 bytes. Ex "AABB" the first 2 bytes AA control the pitch then BB controls the volume)
            Data point (contains the sound pitch in to bytes then the volume in 2 bytes. Ex "AABB" the first 2 bytes AA control the pitch then BB controls the volume)
            Data point (contains the sound pitch in to bytes then the volume in 2 bytes. Ex "AABB" the first 2 bytes AA control the pitch then BB controls the volume)
            Data point (contains the sound pitch in to bytes then the volume in 2 bytes. Ex "AABB" the first 2 bytes AA control the pitch then BB controls the volume)
            Data point (contains the sound pitch in to bytes then the volume in 2 bytes. Ex "AABB" the first 2 bytes AA control the pitch then BB controls the volume)
            Data point (contains the sound pitch in to bytes then the volume in 2 bytes. Ex "AABB" the first 2 bytes AA control the pitch then BB controls the volume)
            Data point (contains the sound pitch in to bytes then the volume in 2 bytes. Ex "AABB" the first 2 bytes AA control the pitch then BB controls the volume)
            Ect...
        */
        std::vector<AudioEffect*> Effects;
        std::vector<int16_t> PitchData;
        std::vector<int16_t> VolumeData;
        int LengthOfChannel;
        int NumberOfDataPointsASecond;
};

class EmbededChannel {
    public:
        EmbededChannel(std::string FilePath);
        /* Example embeded channel
            Path to the AudioChannel's data (Ex "C:\Users\(WindowsAccount)\Documents\(ExampleGameName)\(ExampleAudioFileName)\AudioChannels")
            Time when the channel starts in miliseconds
        */
        AudioChannel* Channel;
        int StartTimeInMS;
};

class AudioFile {
    public:
        AudioFile(std::string FilePath);
        std::string FileName;
        std::string FilePath;
        /* Example audio file
            Total time of audio file
            Path to channel 1 (Ex "C:\Users\(WindowsAccount)\Documents\(ExampleGameName)\(ExampleAudioFileName)\EmbeddedChannels")
            Path to channel 2 (Ex "C:\Users\(WindowsAccount)\Documents\(ExampleGameName)\(ExampleAudioFileName)\EmbeddedChannels")
            Path to channel 3 (Ex "C:\Users\(WindowsAccount)\Documents\(ExampleGameName)\(ExampleAudioFileName)\EmbeddedChannels")
            Path to channel 4 (Ex "C:\Users\(WindowsAccount)\Documents\(ExampleGameName)\(ExampleAudioFileName)\EmbeddedChannels")
            Path to channel 5 (Ex "C:\Users\(WindowsAccount)\Documents\(ExampleGameName)\(ExampleAudioFileName)\EmbeddedChannels")
            Path to channel 6 (Ex "C:\Users\(WindowsAccount)\Documents\(ExampleGameName)\(ExampleAudioFileName)\EmbeddedChannels")
            Path to channel 7 (Ex "C:\Users\(WindowsAccount)\Documents\(ExampleGameName)\(ExampleAudioFileName)\EmbeddedChannels")
            Ect...
        */
        int TotalTimeInMS;
        std::vector<EmbededChannel*> Channels;
};


class AudioPlay {
    public:
        AudioPlay();
};