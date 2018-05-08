#include <csignal>
#include <chrono>
#include <thread>

using namespace std;

void intHandler(int sig) {
    fprintf(stderr,"\n\n\e[1;93mCAW CAWCAW CAW-CAW\e[0m\n\n");
}
void stop(int sig) {
    fprintf(stderr,"\n\n\e[1;31mAlright, you big baby. Be that way.\e[0m\n\n");
    exit(0);
}

int main()
{

    signal(SIGINT,&intHandler);
    signal(SIGTSTP,&stop);
    while(true) {
        fprintf(stderr,"\e[1;32mPENUS \e[0m");
        this_thread::sleep_for(chrono::milliseconds(25));
    }

    return 0;
}
