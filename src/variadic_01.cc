template <typename T>
void print(const T& t)
{
  std::cout << t;
}
template <typename T, typename... Ts>
void print(const T& t, const Ts&... tail)
{
  print(t);
  print(tail...);
}

print("There are ", 3, " arguments!", std::endl);
