#!/usr/bin/env python3
from datetime import date
import os
import platform

# This is the template of how Prof wants the cpp file
"""
/*Name
Course
Date
Assignment Description*/
"""

# main function that handles most of the script


def main():

    # Moves to directory py script is stored
    os.chdir(os.getcwd())

    # Checks if Mac OS
    if (platform.system() == "Darwin"):
        # clears screen
        os.system('clear')

        # Asks for file name
        file_name = input("What is the file name: ")

        # User name
        my_name = "Marco Mayorga"

        # What course this is
        course = "COSC-1436"

        # Gets todays date
        today = date.today()
        today_formatted = today.strftime("%B %d, %Y")

        # Assignment description
        description = input("Copy and paste assignment description from d2l: ")

        while True:
            try:
                where_save_file = input(
                    "Do you have a folder you want to save it to?: (y or n): ")
                if where_save_file == "y" or where_save_file == "Y" or where_save_file == "yes" or where_save_file == "Yes":
                    os.system("clear")
                    path = input("Give me PathName to desired location: ")
                    os.chdir(path)
                    os.system("clear")
                    break
                elif where_save_file == "n" or where_save_file == "N" or where_save_file == "no" or where_save_file == "No":
                    os.system("clear")
                    print("Saving to current location")
                    break
            except:
                print("Try y or n")

        # Creates cpp file
        with open(file_name + ".cpp", "a") as cppfile:
            # writes my info to the file
            cppfile.write(
                f"/*{my_name}\n\n{course}\n\n{today_formatted}\n\n{description}*/\n\n")
            # makes a basic cpp function under my info
            cppfile.write("#include <iostream>\n\nusing namespace std;")
            cppfile.write(
                "\n\nint main()\n{\n\t//1.Variables\n\t//2.Ask User for 'type in here'\n\t//3.Store user answer")
            cppfile.write(
                "\n\t//4.Calculations and logic\n\t//5.Display\n\treturn 0; \n}")
        print("File Creation succesful.")

    # Checks if Windows
    elif (platform.system() == "Windows"):

        # clears console
        os.system("cls")

        # file name
        file_name = input("What is the file name: ")

        # My name
        my_name = "Marco Mayorga"

        # What course this is
        course = "COSC-1436"

        # Gets todays date
        today = date.today()
        today_formatted = today.strftime("%B %d, %Y")

        # assignment description
        description = input("Copy and paste assignment description from d2l: ")

        # Where to Save File
        while True:
            try:
                where_save_file = input(
                    "Do you have a folder you want to save it to?: (y or n): ")
                if where_save_file == "y" or where_save_file == "Y" or where_save_file == "yes" or where_save_file == "Yes":
                    os.system("clear")
                    path = input("Give me PathName to desired location: ")
                    os.chdir(path)
                    os.system("clear")
                    break
                elif where_save_file == "n" or where_save_file == "N" or where_save_file == "no" or where_save_file == "No":
                    os.system("clear")
                    print("Saving to current location")
                    break
            except:
                print("Try y or n")

        # Creates cpp file
        with open(file_name + ".cpp", "a") as cppfile:
            # writes my info to the file
            cppfile.write(
                f"/*{my_name}\n\n{course}\n\n{today_formatted}\n\n{description}*/\n\n")
            # makes a basic cpp function under my info
            cppfile.write("#include <iostream>\n\nusing namespace std;")
            cppfile.write(
                "\n\nint main()\n{\n\t//1.Variables\n\t//2.Ask User for 'type in here'\n\t//3.Store user answer")
            cppfile.write(
                "\n\t//4.Calculations and logic\n\t//5.Display\n\treturn 0; \n}")
        print("File Creation succesful.")


# calls the main function and runs it.
main()
