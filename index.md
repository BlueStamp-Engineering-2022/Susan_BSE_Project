# Real Time Planet Tracking System
This project aims to make a system that effectively tracks celestial bodies (such as planet) with a fair amount of accuracy. It uses  algorithms along with a processing unit for the calculations and a servo mechanism to show the location of the planet physically!

| **Engineer** | **School** | **Area of Interest** | **Grade** |
|:--:|:--:|:--:|:--:|
| Susan Chen | Cupertino Highschool | idk tbh | Incoming Junior

![Headstone Image](https://lh3.googleusercontent.com/pw/AM-JKLVvRNoiAt3xiW5aIrgEE5R9s-fNANOJQKTvbL36eEcQpbBJw5qJqG5sMP1f0ghJ8sFTwslkKLIicKHJgpfjkpUnAtv0xUaZPhbdftFTPQm5wDOEJGQ0TEK5mm0dfvyZcqWeH-EVN-DIxdkHhSXIoX8G=w1406-h1404-no?authuser=0)

![Circuit Diagram](https://drive.google.com/file/d/1r0U-8fzhE0x0PJbHp0aHxNRT4yodSdp0/view?usp=sharing)
  
# Final Milestone
My final milestone is the increased reliability and accuracy of my robot. I ameliorated the sagging and fixed the reliability of the finger. As discussed in my second milestone, the arm sags because of weight. I put in a block of wood at the base to hold up the upper arm; this has reverberating positive effects throughout the arm. I also realized that the forearm was getting disconnected from the elbow servo’s horn because of the weight stress on the joint. Now, I make sure to constantly tighten the screws at that joint. 

[![Final Milestone](https://res.cloudinary.com/marcomontalbano/image/upload/v1612573869/video_to_markdown/images/youtube--F7M7imOVGug-c05b58ac6eb4c4700831b2b3070cd403.jpg )](https://www.youtube.com/watch?v=F7M7imOVGug&feature=emb_logo "Final Milestone"){:target="_blank" rel="noopener"}

# Second Milestone
My second milestone is essentially a refinement of my first milestone. I was able to get both the servos to work with the help of a lot of troubleshooting both in the hardware and software aspect. The other main hardware change is that the potentiometer now works accurately so the servos turn the correct angle to face where the selected planet is. There were also a couple of major changes I made to the arduino code which allowed the 360 servo to not continuously rotate in one direction and tangle up the wires, but rather turn back and forth. I also replaced my 180 servo which was broken and attached the two servos together using a 3D printed L clip. 

[![Second Milestone](https://i3.ytimg.com/vi/GbQiZ9fxnH8/maxresdefault.jpg)](https://youtu.be/GbQiZ9fxnH8 "Second Milestone"){:target="_blank" rel="noopener"}
# First Milestone
  

My first milestone was setting up most of my basic hardware and getting a good majority of my software to work. As of now: the GPS displays current latitude, longitude, date, and time (however it only works accurately if its placed outside); the MPU 9265 determines the yaw, pitch and roll angle; the potentiometer uses a dial that allows the user to choose which planet the laser should point towards; the servos use the calibrated data and turn to face the laser (which is attached to the 180 servo) towards where the selected planet is. However there are still a number of things that I need to fix including: getting the 360 servo to stop rotating continuously in a circle; align my pan-tilt setup at its initial position (both at 0°) with the 0° Azimuth of your my location; switch to using the outlet as my power source; and adjust the laser to a more accurate position.

[![First Milestone](https://i3.ytimg.com/vi/7HUSQXu9PHg/maxresdefault.jpg)](https://youtu.be/7HUSQXu9PHg){:target="_blank" rel="noopener"}

# Starter Project
  
My starter project was the Simon Says game which was a relatively easy build since it was mainly soldering. The product is a fun memory game that lights up in unique patterns for the user to try and remember.

[![Starter Project](https://i3.ytimg.com/vi/fi504ivBobE/maxresdefault.jpg)](https://youtu.be/fi504ivBobE){:target="_blank" rel="noopener"}
