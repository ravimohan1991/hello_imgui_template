#include "hello_imgui/hello_imgui.h"

int main(int , char *[])
{
	auto guiFunction = []()
	{
		ImGui::Text("Hello, ");                    // Display a simple label
		
		static bool show = true;
		ImGui::ShowDemoWindow(&show);
		
		HelloImGui::ImageFromAsset("world.jpg");   // Display a static image
		if (ImGui::Button("sayonara!"))                 // Display a button
		{
			// and immediately handle its action if it is clicked!
			HelloImGui::GetRunnerParams()->appShallExit = true;
		}
	};
	
	HelloImGui::Run(guiFunction, "Hello, globe", true);
	return 0;
}
