#include "Window.h"
#include "Environment.h"
#include "DARTHelper.h"
#include "Character.h"
#include "BVH.h"
#include "Muscle.h"
#include "iostream" 
#include "fstream"  



int main(int argc,char** argv)
{
	// // create file 
	// std::ofstream save_file("outMotion.txt");   

	// // create file for muscle activation
	// std::ofstream save_file("outMuscle.txt");       

	MASS::Environment* env = new MASS::Environment();  

	if(argc==1)
	{
		std::cout<<"Provide Metadata.txt"<<std::endl;  
		return 0;  
	}   

	env->Initialize(std::string(argv[1]),true);   

	////////////////////////////////////////////////////
	// std::cout << "The human dofs are :" << std::endl;   
	// for(int i=0; i < env->GetCharacter()->GetSkeleton()->getNumDofs(); i++)
	// {
	// 	std::cout << "DOF :" << i << ":" << env->GetCharacter()->GetSkeleton()->getDof(i)->getName() << std::endl; 
	// }

	// if(argc==3)
	// 	env->SetUseMuscle(true);
	// else
	// 	env->SetUseMuscle(false);
	// env->SetControlHz(30);
	// env->SetSimulationHz(600);

	// MASS::Character* character = new MASS::Character();
	// character->LoadSkeleton(std::string(MASS_ROOT_DIR)+std::string("/data/human.xml"),true);
	// if(env->GetUseMuscle())
	// 	character->LoadMuscles(std::string(MASS_ROOT_DIR)+std::string("/data/muscle.xml"));
	// character->LoadBVH(std::string(MASS_ROOT_DIR)+std::string("/data/motion/walk.bvh"),true);
	
	// double kp = 300.0;
	// character->SetPDParameters(kp,sqrt(2*kp));
	// env->SetCharacter(character);
	// env->SetGround(MASS::BuildFromFile(std::string(MASS_ROOT_DIR)+std::string("/data/ground.xml")));

	// env->Initialize();

	glutInit(&argc, argv);   

	MASS::Window* window;    
	if(argc == 2)
	{
		window = new MASS::Window(env);
	}
	else
	{
		if(env->GetUseMuscle())
		{
			if(argc!=4){
				std::cout<<"Please provide two networks"<<std::endl;
				return 0;
			}
			window = new MASS::Window(env,argv[2],argv[3]);
		}
		else
		{
			if(argc!=3)
			{
				std::cout<<"Please provide the network"<<std::endl;
				return 0;
			}
			window = new MASS::Window(env,argv[2]);
		}
	}   

	// if(argc==1)  
	// 	window = new MASS::Window(env); 
	// else if (argc==2)
	// 	window = new MASS::Window(env,argv[1]);  
	// else if (argc==3)
	// 	window = new MASS::Window(env,argv[1],argv[2]);   
	
	window->initWindow(1920,1080,"gui");
	glutMainLoop();  
}   