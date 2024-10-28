#include <iostream>
using std::cout;
#include <string>
using std::string;
#include <boost/signals2.hpp>
using namespace boost::signals2;


class Player
{
private:
    int amountOfGoals;
public:
    string name;
    Player(string name) : name(name)
    {
        amountOfGoals = 0;
    }
    // Create signal
    signal<void(string, int)> Scores;
    void Score()
    {
        amountOfGoals++;
        // Fires the signal
        Scores(name, amountOfGoals);
    }

};

//int main()
//{
//    Player p("Jack");
//
//    // Connect to signal Scores and difine what function takes place if the signal fires.
//    auto c = p.Scores.connect([](string name, int amountOfGoals) {
//        cout << name << " scored " << amountOfGoals << " times!" << '\n';
//        });
//
//    p.Score();
//    p.Score();
//
//    // The shared_connection_block lives only until it go's out of scope;
//    {
//        // Stops connection c temporary from reseving signals.
//        shared_connection_block b(c);
//        p.Score();
//        p.Score();
//    }
//
//    p.Score();
//    p.Score();
//    p.Score();
//}

void Third()
{
    cout << "third" << '\n';
}

int main()
{
    signal<void()> s;

    s.connect(Third);

    {
        // First argument determents order in wich the connection receve the signal.
        auto c = s.connect(1, []() { cout << "first" << '\n'; });
        // Ends the connection c es soon as it go's out of scope.
        scoped_connection sc (c);
        s.connect(0, []() { cout << "second" << '\n'; });


        // Fires signal s. 
        s();
    }

    cout << "===========" << '\n';

    // Disconnects only the connection that calls Third. 
    s.disconnect(Third);

    // Fires signal s. 
    s();

}