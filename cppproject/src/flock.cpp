#include "flock.h"
#include <iostream>
#include <vector>


Flock::Flock(unsigned int my_numBoid)
{
    //    _boidsinflock.reserve(3);
    _boidsinflock.clear();

//    int i=0;
//    m_pos=_fpos;
//    m_direction=_fdir;







//    std::cout<<'hi\n';
}

Flock::Flock()
{

}

void Flock::print()
{
    std::cout<<"hi\n";
}

Flock::~Flock()
{
    _boidsinflock.clear();
}



ngl::Vec3 Flock::alignment()
{

}



ngl::Vec3 Flock::cohesion()
{

}



ngl::Vec3 Flock::separation()
{

}


//update the boid
void Flock::update()
{
    std::cout<<"Updating Flock\n";

//    for(auto &boid : _boidsinflock)
//    {
        _boidsinflock[0]->update();
//    }

}


//draw the boid
void Flock::draw()
{
    std::cout<<"Updating Flock\n";

   // for(auto &boid : _boidsinflock)
   // {
        _boidsinflock[0]->draw();
   // }
}


void Flock::clearFlock(unsigned int _numParticles)
{
    for(auto &m_mesh_boid : _boidsinflock)
    {

        _boidsinflock.push_back(std::move(std::unique_ptr<Boid>(new Boid(ngl::Vec3(1, 2, 3), ngl::Vec3(1, 2, 3)))));
    }

    for(int i=0; i<_numParticles; ++i)
    {
        _boidsinflock[i].reset( new Boid(ngl::Vec3(1, 2, 3),ngl::Vec3(1, 2, 3) ));
    }
}


