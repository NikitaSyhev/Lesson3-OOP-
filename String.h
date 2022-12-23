#pragma once
class String
{
public:
	String();
	String(const std::string& obj);

	const std::string& getObj() const;
	void setObj(const std::string& obj);

private:
	std::string _obj;
	int _size;
};

String String::operator == (const String& other);
