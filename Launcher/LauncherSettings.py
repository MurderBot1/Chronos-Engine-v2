import fileinput

def ReadLineOfFile(file_path, line_number):
    try:
        with open(file_path, 'r') as file:
            for current_line_number, line in enumerate(file, start=1):
                if current_line_number == line_number:
                    return line.strip()
        return f"Line {line_number} does not exist in the file."
    except FileNotFoundError:
        return "The file was not found."
    except Exception as e:
        return f"An error occurred: {e}"

def WriteToALine(file_path, line_number, new_content):
    for current_line_number, line in enumerate(fileinput.input(file_path, inplace=True), start=1):
        if current_line_number == line_number:
            print(new_content)
        else:
            print(line, end='')

def FindTheme():
    ColorTheme = ReadLineOfFile("Launcher/Settings/Theme.txt", 1)
    if ColorTheme == "Light":
        return "white"
    elif ColorTheme == "Dark":
        return "black"
    else:
        return "white"
    
def SetTheme(Theme):
    if(Theme == "Light"):
        WriteToALine("Launcher/Settings/Theme.txt", 1, "Light")
    elif(Theme == "Dark"):
        WriteToALine("Launcher/Settings/Theme.txt", 1, "Dark")
    else:
        WriteToALine("Launcher/Settings/Theme.txt", 1, "Light")

def FullScreen():
    if ReadLineOfFile("Launcher/Settings/Theme.txt", 2) == "FullScreen":
        return "FullScreen"
    elif ReadLineOfFile("Launcher/Settings/Theme.txt", 2) == "Windowed":
        return "Windowed"
    else:
        return "Windowed"

def SetFullScreen(FullScreen):
    if(FullScreen == "FullScreen"):
        WriteToALine("Launcher/Settings/Theme.txt", 2, "FullScreen")
    elif(FullScreen == "Windowed"):
        WriteToALine("Launcher/Settings/Theme.txt", 2, "Windowed")

def FindSize():
    Len = ReadLineOfFile("Launcher/Settings/Theme.txt", 3)
    Wid = ReadLineOfFile("Launcher/Settings/Theme.txt", 4)
    return Len + "x" + Wid

def SetSize(Len, Wid):
    WriteToALine("Launcher/Settings/Theme.txt", 3, int(Len))
    WriteToALine("Launcher/Settings/Theme.txt", 4, int(Wid))

def FindAllFonts():
    Fonts = list()
    with open("Launcher/Settings/ListOfFonts.txt", "r") as FontFile:
        for Font in FontFile:
            Fonts.append(Font.strip())
    return Fonts

def FindFont():
    return ReadLineOfFile("Launcher/Settings/Theme.txt", 5)

def SetFont(font):
    Fonts = FindAllFonts()
    FontIsValid = False
    for Font in Fonts:
        if Font == font:
            FontIsValid = True
    if FontIsValid == True:
        WriteToALine("Launcher/Settings/Theme.txt", 5, font)
    else:
        pass

print(FindAllFonts())