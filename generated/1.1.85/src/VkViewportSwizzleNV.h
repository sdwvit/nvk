/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKVIEWPORTSWIZZLENV_H__
#define __VK_VKVIEWPORTSWIZZLENV_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkViewportSwizzleNV: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(Getx);
    static NAN_SETTER(Setx);
    
    static NAN_GETTER(Gety);
    static NAN_SETTER(Sety);
    
    static NAN_GETTER(Getz);
    static NAN_SETTER(Setz);
    
    static NAN_GETTER(Getw);
    static NAN_SETTER(Setw);
    

    // real instance
    VkViewportSwizzleNV instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkViewportSwizzleNV();
    ~_VkViewportSwizzleNV();

};

#endif