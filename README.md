# ofxTextSuite

Openframeworks Text Manipulation Suite

This project has been forked from [this repo](https://github.com/Furkanzmc/ofxTextSuite) by Furkan Üzümcü. The project was originally developed by Luke Malcolm.


## Principles
The main class is TextBlock. Each textblock is composed of a vector of lines. Each line has a vector of words. 
Each TextBlock can be initiliazed using a specific font and its size. Using the setText method we can set the text contained inside the block.
To use different size, we implemented an HTML parsing originally developed by [Carlos de Oliveira Junior]
(https://github.com/Vamoss).
