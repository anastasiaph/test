#ifndef FLOCK_H__
#define FLOCK_H__

#include <ngl/Camera.h>
#include <vector>
#include <memory>
#include <ngl/Obj.h>
#include "boid.h"


class Boid;

class Flock
{
    protected:


        // create an empty vector of type Boid
        std::vector<std::unique_ptr<Boid>> _boidsinflock;

                            //        //draw the list of boids
                            //      draw
                            //      {
                            //          //for each boid from the flock, draw it
                            //          for(b : _boidsinflock)
                            //          {
                            //              //draw it
                            //              b.draw()
                            //          }
                            //      }


        
    public:

        Flock(unsigned int my_numBoid);
        Flock();

        ~Flock();

        ngl::Vec3 alignment(); //boids are the parameters

        ngl::Vec3 cohesion();

        ngl::Vec3 separation();

        void clearFlock(unsigned int my_numBoid);

        //it's going to draw every boid in the flock one by one
        void draw();

        //it's going to update every boid in the flock one by one
        void update();

        void print();
};

#endif
