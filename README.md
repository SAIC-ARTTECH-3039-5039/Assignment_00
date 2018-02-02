## Set up your Assignment

1.  If you haven't already, clone the class repository. See the instructions [here](https://github.com/SAIC-ATS/ARTTECH-3039#setup-options).
2.  Accept the Assignment 00 invitation email. A repository called `https://github.com/SAIC-ARTTECH-3039-5039/Assignment_00-YOUR_USERNAME` will be created.
3.  Clone the assignment repository into your `ARTTECH-3039` repository so that your directory structure looks like this:

```
openFrameworks/
├── ARTTECH-3039
│   ├── README.md
│   ├── Assignment_00-YOUR_USERNAME
│   │   ├── README.md
│   │   └── TextRain
│   │       └── src
...

```
4.  It will look something like this:
    -   `cd openFrameworks/ARTTECH-3039`
    -   `git clone https://github.com/SAIC-ARTTECH-3039-5039/Assignment_00-YOUR_USERNAME`

5.  This workflow will apply to all future assignments. Just replace `Assignment_00` with `Assignment_XX`, where `XX` is the assignment number.

## To submit an assignment

1.  Make changes to code in the `TextRain` code. This may include both writing code and answering questions.
2.  Stage your changes
    -   `git add THE_FILE_YOU_WANT_TO_ADD` (e.g. `git add ofApp.cpp`).
3.  Repeat step 2 until all of your files have been staged.
4.  Commit your changes with a descriptive message
    -   `git commit -m "YOUR DESCRIPTIVE MESSAGE HERE"` (e.g. `git commit -m "I answered all of the questions"`).
5.  Push your changes to your private assignment repository.
    -   `git push origin master`
6.  Your changes will then be available to the TA and I for review.
