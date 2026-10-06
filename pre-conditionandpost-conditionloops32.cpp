/****************************************
* Автор:   Хнкоян Михаил                *
* Задание: Циклы с пред- и постусловием *
* Вариант: 32                           *
****************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {
  const double m = 0.5;
  const double T0 = 100.0;
  const double Ta = 20.0;
  const double k = 0.12;
  const double c = 900.0;

  int times[] = {0, 1, 2, 3, 4, 9, 14, 19, 24};
  int numtimes = 9;

  stringstream ss;
  ss << fixed << setprecision(6);
  ss << "t, мин\tT, ⁰C\t\tQ, Дж\n";
  for (int i = 0; i < numtimes; ++i) {
    int t = times[i];
    double T = Ta + (T0 - Ta) * exp(-k * t);
    double Q = m * c * (T0 - T);
    ss << t << "\t" << T << "\t" << Q << "\n";
  }

  cout << ss.str();

  return 0;
}
