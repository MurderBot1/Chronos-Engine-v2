// © 2025 Trent Cridland Murderbot1@outlook.com All Rights Reserved

// C++ imported files
#include <vector>
#include <stdint>

// Program imported files
#include <wx/wx.h>

// Function definitions
class GuiLabel {
    public:
};

class GuiButton {
    public:
        // Position and scale of button
        float LocationRatioX;
        float LocationRatioY;
        float SizeRatioX;
        float SizeRatioY;
        
        // Button style
        char ButtonRColor, ButtonGColor, ButtonBColor;
        char BoarderRColor, BoarderGColor, BoarderBColor;
        char ClickedButtonRColor, ClickedButtonGColor, ClickedButtonBColor;
        char ClickedBoarderRColor, ClickedBoarderGColor, ClickedBoarderBColor;
        
        // Label if one has been added
        GuiLabel* Label;
        GuiLabel* ClickedLabel;
};

class GuiFrame {
    public:
        // Store the other classes objects
        std::vector<GuiButton*> Buttons;
        std::vector<GuiLabel*> Labels;
};

class GuiCompile {
    
};