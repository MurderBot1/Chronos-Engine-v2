# Imported packages
import tkinter as tk

# Engine packages
import LauncherSettings
import Setup

# Create the main application window
root = tk.Tk() # Create the window
Setup.Setup(root) # Setup the windows settings

# Show the Root Page
Setup.ShowFrame(Setup.RootPage(root)) 


# Create the frames (pages)
frame1 = tk.Frame(root, bg=LauncherSettings.FindTheme())
frame2 = tk.Frame(root, bg=LauncherSettings.FindTheme())
for frame in (frame1, frame2):
    frame.place(relwidth=1, relheight=1)  # Place all frames in the same location

# Content for Frame 1
label1 = tk.Label(frame1, text="This is Page 1", font=("Arial", 16))
label1.pack(pady=50)

button1 = tk.Button(frame1, text="Go to Page 2", command=lambda: Setup.ShowFrame(frame2))
button1.pack()

# Content for Frame 2
label2 = tk.Label(frame2, text="This is Page 2", font=("Arial", 16))
label2.pack(pady=50)

button2 = tk.Button(frame2, text="Go to Page 1", command=lambda: Setup.ShowFrame(frame1))
button2.pack()

# Run the application
root.mainloop()