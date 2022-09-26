#include <iostream>
#include <string>

class StateBody
{
  private:
    std::string tag;
    float oldPosition;
    float newPosition;
    float velocity;
    float acceleration;
    std::vector<Vector2D> forces;
    Vector2D netForce;

  public:
    void setOldPos(float oldPos)
    {
      this->oldPosition = oldPos;
    }

    float getOldPos()
    {
      return this->oldPosition;
    }

    void setNewPos(float newPos)
    {
      return this->newPosition;
    }

    float getNewPos()
    {
        return this->newPosition;
    }

    void setVelocity(float velocity)
    {
      this->velocity = velocity;
    }

    float getVelocity()
    {
      return this->velocity;
    }
    void setAcceleration(float acceleration)
    {
      this->acceleration = acceleration
    }

    float getAcceleration()
    {
      return this->acceleration;
    }

    void addForce2DByComponent(int i, int j)
    {
      this->forces->append(Vector2D(i, j));
    }
};
