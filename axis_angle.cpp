#include "axis_angle.h"
void axis_angle::from_angle_and_axis(float angle,const vec3& axis)
{
    //TODO:compute the axis-angle parameter (w) from the input rotation angle (in degrees) and axis
    // w =
    w = (angle * M_PI*180) * axis.normalized(); 
}
void axis_angle::to_angle_and_axis(float& angle,vec3& axis) const
{
    //TODO: compute the angle (in degrees) and the axis of the rotation, from the axis-angle parameter w
    // angle = 
    // axis = 
    
    axis = w.magnitude() * (180/M_PI);
    angle = w.normalized();
}

