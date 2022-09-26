#include <cmath>

class Vector2D
{
  private:
    float i, j;
  public:
    Vector2D(int i, int j) {this->i = i; this->j = j;}
    void static vector2DAdd(Vector2D *a, Vector2D b)
    {
      a->i += b.i;
      a->j += b.j;
    }

    float computeMagnitude()
    {
      return (sqrt(pow(this->i,2)+pow(this->j,2)));
    }
    float computeDirectionRadian()
    {
      if(this->j == 0 || this->i == 0)
        return 0;
      return atan(this->j/this->i);
    }
    float computeDirectionDegree()
    {
      if((this->j >= 0 && this->i <= 0) || (this->j <= 0 && this->i >= 0))
        return atan(this->j/this->i)*(180/M_PI);
      return atan(this->i/this->j)*(180/M_PI);
    }
    
    void setI(float i)
    {
      this->i = i;
    }

    float getI()
    {
      return this->i;
    }

    void setJ(float j)
    {
      this->j = j;
    }

    float getJ()
    {
      return this->j;
    }
};

class Vector3D
{
  private:
    float i, j, k;
  public:
    Vector3D(int i, int j, int k) {this->i = i; this->j = j; this->k = k;}
};
