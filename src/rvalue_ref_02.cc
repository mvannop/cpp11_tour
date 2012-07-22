template <typename T> class Matrix
{
  public:
    Matrix(int n, int m) : data(new T[n * m]) { }
    ~Matrix() { delete data; }
    Matrix(Matrix&& tmp)
    {
      data = tmp.data;
      tmp.data = 0;
    }

    T* data;
};
  Matrix<double> m(3, 3);
  // m.data == 0x9973008
  Matrix<double> n = std::move(m);
  // m.data == 0
  // n.data == 0x9973008
