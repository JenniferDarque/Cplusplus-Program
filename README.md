# Cplusplus-Program
**#Summarize the project and what problem it was solving.**
This is a program designed for Chada Grocery to help them with an inventory issue. It tracks the sales of various items and gives a list of the item individually, or as a whole by numeric or a histogram. The method of lookup is choosen from a menu display, with an exit option to end the program. It also writes the data to a .dat file that the user does not have to ever interact directly with.
#What did you do particularly well?
I was particularly pleased with my solution to an issue of infiniate looping if a non-numeric value was selected. It took a fair amount of research to determine the best means of preventing alpha entry, but in the end it turned out to be a rather simple solution of a cin.fail but did so much to enhance the usability of the program.
#Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
The thing I would go an enhance further to improve the program would be to make the input not an exact read. To allow for all cap (such as if the user leaves on the CAP LOCK) or to allow all lowercase. This would make the program more user friendly and enhance the user experiance. 
#Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
I found the concept of auto variables strangely most challenging. I had to research that and found great help in overstack and Geeks for Geeks and finally Scaler Topics, in describing the concept an how to utilize it to the best ability. Scaler was very detailed in how it works and how it is best practice for certain scenarios in preventing having to declare variables repeatedly and thus having extraneous code.
#What skills from this project will be particularly transferable to other projects or course work?
The use of loops and decisions is particularly transferrable to other projects. This is a process repeated in multiple programming languages and a skill that is used everywhere, with so many programs utilizing menus to choose from.
#How did you make this program maintainable, readable, and adaptable?
The use of a header file, cpp file and main means that the program is transferable. The main file is kept short with functions declared outside in smaller units meaning easier to maintain and to modify for others usage. the data file can be added to to increase the scope of the input if they choose to expand the store inventory maintence.
