template <typename T>
const T& min(const T& a, const T& b)
{
  return a < b ? a : b;
}

template <typename T, typename... Args>
const T& min(const T& a, const T& b, const Args&... args)
{
  return min(a, min(b, args...));
}
