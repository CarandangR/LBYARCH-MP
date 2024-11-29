# LBYARCH FLOATING POINT MACHINE PROJECT

## A fully functioning program implementing the SAXPY function through the use of C and Assembly.
## Authors
- [Matthew Ryan Carandang] (https://github.com/CarandangR)
- [Josh Christian Nunez] (https://github.com/Jawsshhh)

### The aim of this project is to implement and apply the SAXPY function using C for user input and assembly for computational purposes. Furthermore, this project uses the `time.h` library to compare the time difference between the application of SAXPY through the use of C alone and C with assembly used for computations.

## Important Links
- <a href = "https://docs.google.com/spreadsheets/d/1pxjaLjrpqlia0G-htxE7v_ePE7JZzUAg8gkum9WhNz0/edit?usp=sharing" target = "blank"> Google Sheets Link </a> (Access with DLSU Gmail Account)
- <a href = "https://youtu.be/vBe84-GRmoU" target = "blank"> Youtube Video Link </a>

## Sample Output
### Sample run using C for User interface and SAXPY Operation
![image](https://github.com/user-attachments/assets/bc7bba2e-4a5a-44c1-96a9-ca33b8a970c8)

### Sample run using C for user interface and Assembly for the SAXPY Operation
![image](https://github.com/user-attachments/assets/41870c2a-390d-4e3d-a9ef-feb9a6f952a9)

This is a sample output of the program. It takes the first 10 values that the program has computed. Through these outputs, both outputs act as a sanity check between each other.

## Comparative Analysis
![image](https://github.com/user-attachments/assets/2bde86de-ddb8-41f0-b79d-a38d19ccb62e)
- In all the given cases, Assembly (x86_64) performed significantly faster than its C counterpart, with Assembly performing 45-62% faster than C. This highlights Assembly's advantage when it comes to computational execution speeds due to it being directly assembled to the machine's CPU.


## Instructions on how to run the Program
1. Clone the repository to your Local Computer
2. Make sure that you have `gcc` compiler along with the assembly compiler. Do note that the project used NASM as an assembly compiler.
3. Run the `startprogram.bat` file found in the folder to run the program.
