# 2D Random Walk
![alt text](https://github.com/jakehanson/2D_RANDOM_WALK/blob/master/4x4_sim.gif)

These codes perform a 2d random walk on a bounded LxL lattice. There are codes designed to check that the random walk is working, as well as codes to perform 2d random walks many times in various domains and compare the results to theoretical predictions.

* **Compile:** the code must be compiled to make an executable
  * g++ -std=c++11 -O3 main.cpp functions.cpp -o run_sim.exe

* **Run:**: the code can be run from the command line without any arguments
  * ./run_sim.exe

* **Output:** The primary output is 'data.txt' which contains the x,y,t information about the particle. The secondary file is 'params.txt' which contains information about the simulation parameters (i.e. lattice size and max steps).

#### Parameters

* **L** = Lattice Size (must be even)
* **max_steps** = maximum steps in simulation

## Animation
There is a jupyter notebook called Animate Random Walk.ipynb that can be used to visualize the random walk. All that needs to be the file paths as well as the lattice size, L. The second cell uses imagemagick to convert the frames into a gif, so if you don't have imagemagick you can convert the frames a different way.

## jake.hanson@asu.edu
