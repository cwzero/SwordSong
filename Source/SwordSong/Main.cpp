#include "SwordSong/SwordSong.hpp"
#include "Phantasia/Window.hpp"

#include <iostream>
#include <memory>

int main(int argc, char **argv) {
	std::unique_ptr<Phantasia::Window> window = std::make_unique<Phantasia::Window>();
	window->Initialize();
	window->Open();
	window->MakeCurrent();
	
	while (!window->ShouldClose()) {
		window->Clear();
		window->ProcessInput();

		double delta = window->GetDelta();
		static double accumulator = 0;
		accumulator += delta;

		while (accumulator >= 20) {
			//Update();
			accumulator -= 20;
		}


		//Render(accumulator / 20);

		window->SwapBuffers();
	}
    return 0;
}