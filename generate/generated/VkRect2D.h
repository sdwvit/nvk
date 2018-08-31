#ifndef __VK_VKRECT2D_H__
#define __VK_VKRECT2D_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkRect2D: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
      _VkOffset2D *offset;
      static NAN_GETTER(Getoffset);
    static NAN_SETTER(Setoffset);
    
      _VkExtent2D *extent;
      static NAN_GETTER(Getextent);
    static NAN_SETTER(Setextent);
    

    // real instance
    VkRect2D *instance;

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkRect2D();
    ~_VkRect2D();

};

#endif