#include "header.h"

/* Function to define geometry, initialize ants, and run/write simulation */
int main(int argc, char** argv)
{

	int x,y; // position
	int L=4; // lattice size
	int max_steps = 100000;
	int current_step = 0;

	try{
		if(L%2 != 0){
			throw std::runtime_error("EVEN LATTICES ONLY!");
		}
	}
	catch(std::runtime_error &e){
		std::cerr << "RUNTIME ERROR: " << e.what() << std::endl;
		return 1;
	}
	
	// Domain is x in [-L/2, L/2], y in [0,L]
	x = 0;
	y = 0; // start at bottom center

    std::random_device rd; // create random device to seed generator
	std::mt19937 gen(rd()); // create generator with random seed
	std::uniform_real_distribution<long double> uni(0.,1); // init uniform dist on (0,1]

	std::ofstream data_file("data.txt");
	data_file << "Step\t" << "x\t" << "y" << std::endl;

	data_file << current_step << "\t" << x << "\t" << y << std::endl;

	while(current_step < max_steps){
		// Choose x or y direction randomly
		if(uni(gen)<0.5){
			// x 
			if(uni(gen)<0.5){
				// step left
				if(x != -L/2){
					x = x - 1;
				}else{
					x = x + 1; // reflection
				}
			}else{
				// step right
				if(x != L/2){
					x = x + 1;
				}else{
					x = x - 1; // reflection
				}
			}
		}else{
			// y
			if(uni(gen)<0.5){
				// step down
				if(y != 0){
					y = y - 1;
				}else{
					y = y + 1; // reflection
				}
			}else{
				// step up
				if(y != L){
					y = y + 1;
				}else{
					y = y - 1; // reflection
				}
			}
		}
		// Update
		current_step++;
		data_file << current_step << "\t" << x << "\t" << y << std::endl;
		// Check if we are out
		if(x == 0 and y == 0){
			std::cout << "SUCCESSFUL RETURN IN -- " << current_step << " STEPS" << std::endl;
			break;
		}
		if(current_step == max_steps){
			std::cout << "FAILED TO RETURN" << std::endl;
		}
	}
	data_file.close();
}