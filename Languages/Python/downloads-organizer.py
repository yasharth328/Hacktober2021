#Downloads Organizer
#Author : Rami Janini
#Date : 10/21/2019

#Ucomment "import wni32gui", "improt win32con" if using windows.
#import win32gui
#import win32con

import shutil
import glob
import os
import time

from watchdog.observers import Observer
from watchdog.events import FileSystemEventHandler

#Uncomment those two lines to hide console on windows only.
#HIDE_ME = win32gui.GetForegroundWindow()
#win32gui.ShowWindow(HIDE_ME , win32con.SW_HIDE)

#Change the folders destentions:
downloads_folder = "ORIGINAL DOWNLOADS FOLDER"
new_downloads_folder = "NEW DOWNLOADS FOLDER WITH MANAGED FILES"

list_dir = os.listdir(downloads_folder)

def CleanDownloads():

    #Zip Files
    os.chdir(downloads_folder)
    for file in glob.glob("*.zip"):
        shutil.move(downloads_folder + "/" + file, new_downloads_folder + "/ZIP Files/" + file)


    #Images
    os.chdir(downloads_folder)
    for file in glob.glob("*.jpg"):

        shutil.move(downloads_folder + "/" + file, new_downloads_folder + "/Images/" + file)

    for file in glob.glob("*.jpeg"):

        shutil.move(downloads_folder + "/" + file, new_downloads_folder + "/Images/" + file)

    for file in glob.glob("*.png"):

        shutil.move(downloads_folder + "/" + file, new_downloads_folder + "/Images/" + file)


    #Audio Files
    for file in glob.glob("*.mp3"):

        shutil.move(downloads_folder + "/" + file, new_downloads_folder + "/Audio Files/" + file)
    for file in glob.glob("*.wav"):

        shutil.move(downloads_folder + "/" + file, new_downloads_folder + "/Audio Files/" + file)

    #Programs
    for file in glob.glob("*.exe"):

        shutil.move(downloads_folder + "/" + file, new_downloads_folder + "/Programs/" + file)

    #Videos
    for file in glob.glob("*.mp4"):

        shutil.move(downloads_folder + "/" + file, new_downloads_folder + "/Videos/" + file)

    #PDF
    for file in glob.glob("*.pdf"):

        shutil.move(downloads_folder + "/" + file, new_downloads_folder + "/PDF Files/" + file)

CleanDownloads()

class ExampleHandler(FileSystemEventHandler):
    def on_created(self, event): # when file is created
        # do something, eg. call your function to process the image
        print ("New file is added: %s\n" % event.src_path )

        CleanDownloads()
        time.sleep(2)
        print("Files have been converted!\n")



observer = Observer()
event_handler = ExampleHandler() # create event handler
# set observer to use created handler in directory
observer.schedule(event_handler, path=downloads_folder)
observer.start()

# sleep until keyboard interrupt, then stop + rejoin the observer
try:
    while True:
        time.sleep(1)
except KeyboardInterrupt:
    observer.stop()

observer.join()
