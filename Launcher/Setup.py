import tkinter as tk
import LauncherSettings

def Setup(root = type(tk.Tk)):
    # Set the title of the window
    root.title("Chronos Enginge Launcher")

    # Set the original size: Width x Height then find if it is FullScreen or Windowed
    root.geometry(LauncherSettings.FindSize())
    if LauncherSettings.FullScreen() == "FullScreen":
        root.attributes("-fullscreen", True)
    elif LauncherSettings.FullScreen() == "Windowed":
        root.attributes("-fullscreen", False)
    else:
        root.attributes("-fullscreen", False)

def ShowFrame(frame):
    frame.tkraise()  # Bring the frame to the front

def RootPage(root = type(tk.Tk)):
    # Setup the frame
    Frame = tk.Frame(root, bg=LauncherSettings.FindTheme())
    Frame.place(relwidth=1, relheight=1)
    
    # Setup labels

    
    # Setup buttons


    return Frame

def GamesPage(root = type(tk.Tk)):
    # Setup the frame
    Frame = tk.Frame(root, bg=LauncherSettings.FindTheme())
    Frame.place(relwidth=1, relheight=1)
    
    # Setup labels

    
    # Setup buttons

    
    return Frame

def EnginePage(root = type(tk.Tk)):
    # Setup the frame
    Frame = tk.Frame(root, bg=LauncherSettings.FindTheme())
    Frame.place(relwidth=1, relheight=1)
    
    # Setup labels

    
    # Setup buttons

    
    return Frame