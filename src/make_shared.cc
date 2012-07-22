template <typename T, typename... Args>
std::shared_ptr<T> make_shared(Args&&... args)
{
  std::shared_ptr<T> p(new T(std::forward<Args>(args)...));
  return p;
}
std::shared_ptr<std::string> make_shared<std::string>("...");
