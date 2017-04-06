#ifndef BOID_H__
#define BOID_H__

#include <ngl/Camera.h>
#include <ngl/Vec3.h>
#include <ngl/Colour.h>
#include <ngl/Transformation.h>
#include <ngl/Random.h>
#include <vector>
#include <memory>
#include <ngl/Obj.h>
#include <ngl/NGLStream.h>
#include "flock.h"


class Boid
{

protected:
        GLfloat radius;
        ngl::Vec3 m_bpos;
        ngl::Vec3 m_bdirection;
        GLfloat brotation;
        GLfloat m_bvelocity;
        GLfloat max_boid_velocity;
        GLint m_blifespan;
        GLint m_bmaxLife;

        std::unique_ptr<ngl::Obj> m_mesh_boid;


    public:


        Boid(ngl::Vec3 _bpos, ngl::Vec3  _bdirection);



        const std::unique_ptr <ngl::Obj> &getBoid();

        ~Boid();



        //add particle of this type at the end of vector
        //void addBoid( ParticleType _type );

        ngl::Vec3 getPos()const {return m_bpos;}

        void setPos(const ngl::Vec3 &_vec);

        void update();
        void draw();
};

#endif
