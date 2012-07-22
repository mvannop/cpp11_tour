struct HasPosition
{
  double path_cost(int dest) const { /*...*/ }
  int position;
};
struct HasShape { /* ... */ };

template <typename... Mixins>
class Object : public Mixins...
{
};

int main()
{
  Object<HasPosition> waypoint;
  Object<HasPosition, HasShape> building;
}
