#include <iostream>
using std::cout;
#include <string>
using std::string;
#include <boost/filesystem.hpp>
using namespace boost::filesystem;

void checkPath(const char* p)
{
	path myPath(p);

	if (exists(myPath))
	{
		if (is_regular_file(myPath))
		{
			cout << "Path " << myPath.filename().replace_extension() << 
				" is regular file of size " << file_size(myPath) << '\n';
		}
		else if (is_directory(myPath))
		{
			cout << "Path " << myPath.filename() << " is a directory \n";
		}
	}
	else
	{
		cout << "Path " << myPath << " does not exist. \n";
	}
}

void checkFile(path& p)
{
	auto s = status(p);
	auto t = s.type();
	cout << "Type is: " << t << '\n';

	auto ps = s.permissions();
	if ((ps & owner_write) != owner_write)
	{
		cout << "No permission to write \n";
	}
}

void dir_nav(path& dir)
{
	directory_iterator end;

	for (directory_iterator i(dir); i != end; i++)
	{
		path p = i->path();
		
		if (is_regular_file(p)) { cout << p.filename() << '\n'; }
		else if (is_directory(p))
		{
			cout << "Directory: " << p.filename() << '\n' << "============================\n";
			dir_nav(p);
		}
	}
}

int main(int argc, char* argv[])
{
	path parent = path(argv[0]).parent_path().parent_path().parent_path();
	dir_nav(parent);

	//path myPath(argv[0]);
	//checkFile(myPath);

	//CheckPath("foo");
	//CheckPath(argv[0]);

	//path dir = path(argv[0]).parent_path();
	//CheckPath(dir.string().c_str());


	////Decomposition
	//for (auto& child : dir)
	//{
	//	cout << child << '\n';
	//}

	//try
	//{
	//	path p("invalidPath");
	//	cout << file_size(p) << '\n';
	//}
	//catch (const filesystem_error& e)
	//{
	//	cout << e.what() << '\n';
	//}
}
