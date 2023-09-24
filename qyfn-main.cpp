#include "interpreter.hpp"

int main(int argc, char* argv[]){
	if(argc==1){
		help();
	}else{
		try{
			for(int i=1; i<argc; i++)
				isOpt(argv[1]);
			
			tryOpenFile(argv[1]);
			
		}catch(const string e){
			cout << e << endl;
			return -1;
		}
	}
	
	return 0;
}
