#ifndef __VK_VKEXTENT2D_H__
#define __VK_VKEXTENT2D_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkExtent2D: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(Getwidth);
    static NAN_SETTER(Setwidth);
    
    static NAN_GETTER(Getheight);
    static NAN_SETTER(Setheight);
    

    // real instance
    VkExtent2D *instance;

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkExtent2D();
    ~_VkExtent2D();

};

#endif