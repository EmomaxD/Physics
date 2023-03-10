#pragma once

#include <cstdint>
#include <memory>

#include "Vector.hpp"


/*

    // IS GONNA BE MODIFED
    // 25 FEB 2023 , 00.10

*/



class Box{
private:
    
    float _mass;
    
    Vector _pos, _force, _forcePos, _velocity, _a, _momentum;
    
    float _width, _height, _depth;

    
public:
    // (~) -> CTRL+SHIFT+U+7E 

    Box();
    Box( Vector pos, Vector velocity, Vector F, float mass, float w, float h, float d );
    ~Box();
    
    uint64_t ID;

    void update( const float& dt );
    
    bool isColliding( const std::unique_ptr<Box>& b );

    void handleCollision( const std::unique_ptr<Box>& b );

    void print();

    void addForce( const Vector& F );

    void removeForce( const Vector& F );


    // GETTER SETTER

    Vector getPos();    

};