#include <iostream>
#include <string>
#include <vector>
#include "Vectors.cpp"

class StateBody
{
  private:
    std::string tag;
    float oldPosition;
    float newPosition;
    float velocity;
    float acceleration;
    float mass;
    std::vector<Vector2D> forces;
    Vector2D *netForce;

  public:
    void setOldPos(float oldPos)
    {
      this->oldPosition = oldPos;
    }

    float getOldPos()
    {
      return this->oldPosition;
    }

    void setNewPos(float newPosition)
    {
      this->newPosition = newPosition;
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
      this->acceleration = acceleration;
    }

    float getAcceleration()
    {
      return this->acceleration;
    }

    void addForce2DByComponent(float i, float j)
    {
      Vector2D tempForce = Vector2D(i, j);
      this->forces.push_back(tempForce);
      Vector2D::vector2DAdd(this->netForce, tempForce);
    }

    Vector2D *getNetForce()
    {
      return this->netForce;
    }

    float getMass()
    {
      return this->mass;
    }

    void setMass(float mass)
    {
      this->mass = mass;
    }

    StateBody(float mass, float oldPos)
    {
      this->mass = mass;
      this->oldPosition = oldPos;
      this->newPosition = oldPos;
      this->velocity = 0;
      this->acceleration = 0;
      this->netForce = new Vector2D(0,0);
    }
};
