#ifndef SIM_MAZEFILEUTILITIES_H_
#define SIM_MAZEFILEUTILITIES_H_

#include <string>

namespace sim {

// The function returns the directory of the maze file.
// It takes in the name of the executed binary file for location reference.
std::string getMazeFileDirPath();

std::string getProjectDirectory();

int mazeFileWidth(std::string mazeFilePath);

int mazeFileHeight(std::string mazeFilePath);

bool checkValidMazeFile(std::string mazeFilePath); // TODO: Mack Ward

bool checkValidMazeFileTom(std::string mazeFilePath, int height, int width); // TODO: Mack Ward

} // namespace sim

#endif // SIM_MAZEFILEUTILITIES_H_
