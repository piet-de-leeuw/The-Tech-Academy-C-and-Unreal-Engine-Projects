// Commandline arguments can be set in project properties debugging tab.

#include <iostream>
#include <string>
using namespace std;
#include <boost/program_options.hpp>
namespace po = boost::program_options;


// commandline argguments = --help --filename a.txt
//int main(int argc, char* argv[])
//{
//    po::options_description description("program options");
//    description.add_options()
//        ("help", "print info")
//        ("filename", po::value<string>()->default_value("defauld.txt"), "file to process");
//
//    po::variables_map vm;
//    auto parsed = po::parse_command_line(argc, argv, description);
//    po::store(parsed, vm);
//    po::notify(vm);
//
//    if (vm.count("help"))
//    {
//        cout << description << endl;
//        return 1;
//    }
//
//    string filename = vm["filename"].as<string>();
//
//    cout << "processing file: " << filename << endl;
//}

// Commandline arguments can be set in project properties debugging tab.
// commandline argguments = -f a.txt b.txt c.txt -v 30 or --files a.txt b.txt c.txt --value 30
// multiple arguments for the same comand.
// multiple inputs for files possible.
//int main(int argc, char* argv[])
//{
//    int value;
//    po::options_description description("my file processor");
//
//    description.add_options()
//        ("value,v", po::value<int>(&value)->default_value(42), "input value")
//        ("files,f", po::value<vector<string>>()->multitoken(), "input files");
//
//    po::variables_map vm;
//    po::store(po::parse_command_line(argc, argv, description), vm);
//    po::notify(vm);
//
//    cout << value << endl;
//
//    if (vm.count("files"))
//    {
//        int i = 0;
//        vector<string> files = vm["files"].as<vector<string>>();
//        for (string s : files)
//        {
//            cout << (++i) << ": " << s << endl;
//        }
//    }
//
//
//}

// commandline argguments = a.txt b.txt c.txt -v 30
// files as defauld argument. (write the files direct after the program name whitaout flag and write other flags after that.)
int main(int argc, char* argv[])
{
    int value;
    po::options_description description("my file processor");

    description.add_options()
        ("value,v", po::value<int>(&value)->default_value(42), "input value")
        ("files,f", po::value<vector<string>>()->multitoken(), "input files");

    po::positional_options_description positionalDescription;
    positionalDescription.add("files", -1);

    po::variables_map vm;
    po::command_line_parser parser(argc, argv);
    auto parsed_options = parser.options(description).positional(positionalDescription).run();
    po::store(parsed_options, vm);
    po::notify(vm);

    cout << value << endl;

    if (vm.count("files"))
    {
        int i = 0;
        vector<string> files = vm["files"].as<vector<string>>();
        for (string s : files)
        {
            cout << (++i) << ": " << s << endl;
        }
    }
}