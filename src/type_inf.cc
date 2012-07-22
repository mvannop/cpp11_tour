template <template <class...> class Cont,
          typename Fun, typename... Args>
auto map(const Cont<Args...>& c, Fun f)
  -> Cont<decltype(f(*c.begin()))>
{
  typedef decltype(f(*c.begin())) map_type;
  Cont<map_type> out;
  for (const auto& e : c)
    out.emplace_back(f(e));
  return std::move(out);
}

int main()
{
  std::vector<int> v = { 42, 51 };
  auto s = map(v, [](int n) { return std::to_string(n); });
}
