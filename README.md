# 2D Random Walk
![alt text](https://github.com/jakehanson/2D_RANDOM_WALK/blob/master/4x4_sim.gif)

These codes perform a 2d random walk on a bounded LxL lattice. There are several codes designed to check that the random walk is working, as well as perform 2d random walks many times and compare results to theoretical prediction.

* **Compile:** the code must be compiled to make an executable
  * g++ -std=c++11 -O3 main.cpp functions.cpp -o run_sim.exe

* **Run:**: the code can be run from the command line without any arguments
  * ./run_sim.exe

#### Other Parameters

* **L** = Lattice Size (must be even)
* **max_steps** = maximum steps in simulation

## Output

The primary output of running the simulation is a file called output.txt that contains the position and velocity of each ant as a function of time. In addition, the files contains the time the ant exited the nest as well a running number of collisions it has undergone.

The secondary output is params.txt which basically rewrites the parameters used to run the simulation. This file is especially relevant if simulation parameters need to be read into a plotting device.

## Animation
There is a jupyter notebook called Animate Random Walk.ipynb that can be used to visualize the random walk. All that needs to be the file paths as well as the lattice size, L. The second cell uses imagemagick to convert the frames into a gif, so if you don't have imagemagick you can convert the frames a different way.

## jake.hanson@asu.edu
