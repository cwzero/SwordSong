#pragma once

#include <string>

namespace Phantasia::Render {
	class Shader {
	public:
		Shader(float wr, float hr);
		~Shader();
		
		void load(const char* vertexPath, const char* fragmentPath);
		void use();

	    void setBool(const std::string &name, bool value) const;  
    	void setInt(const std::string &name, int value) const;   
    	void setFloat(const std::string &name, float value) const;
		void setVec4(const std::string &name, float x, float y, float z, float a) const;
		void setVec3(const std::string &name, float x, float y, float z) const;
		void setVec2(const std::string &name, float x, float y) const;

		void setPosition(float x, float y) const;
	private:
		float wr, hr;
		unsigned int ID;
		const char* vertexPath;
		const char* fragmentPath;
	};
}