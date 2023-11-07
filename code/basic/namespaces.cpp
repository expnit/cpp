#include <iostream>
#include <string>

using std::cout;   // using cout from std (standard namespace)
using std::endl;   // using endl from std (standard namespace)
using std::string; // using string from std(standard namespace)

// manually created  namespaces

namespace india
{
    string capital = "New Delhi";

} // namespace india

namespace china
{
    string capital = "Beijing";
}

namespace usa
{
    string capital = "Washington DC";
}

namespace Asia
{
    namespace India
    {

        namespace Gujarat
        {
            string capital = "Gandhinagar";
        }
    }
}

int main()
{

    cout << "using manually created namespaces" << endl;

    cout << "Capital of india is : " << india::capital << endl;

    cout << "capital of china is : " << china::capital << endl;

    cout << "Capital of Gujarat is  : " << Asia::India::Gujarat::capital << endl;

    /*

    usa namespace has one variable that is capital, using namespace usa

    makes usa namespace as globally declared code so its conten is accessible from anywhere

    after the line written "using namespace usa"; so now capital variable is

    accessible withouth explicitly using usa::capital

    */

    using namespace usa;

    cout << "Capital of USA is : " << capital << endl;

    return 0;
}