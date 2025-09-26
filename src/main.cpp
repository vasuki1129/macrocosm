
//so like this is what dis shit actually is
//the lua bit is just a frontend.
//
//this bit reads and analyzes a
//(currently) c++ codebase
//and analyzes it to generate
//the file that the frontend
//uses to render the visuals
//
//its gonna make sense i swear
//
//anybody that wanna write parsers
//for other languages is free to
//do so
//

#include <string>

std::string getExtension(std::string str)
{
    return str.substr(str.find_last_of(".")+1);
}

int main(int argc, char *argv[])
{

}
