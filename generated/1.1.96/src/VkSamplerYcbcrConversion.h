/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKSAMPLERYCBCRCONVERSION_H__
#define __VK_VKSAMPLERYCBCRCONVERSION_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkSamplerYcbcrConversion: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);

    // real instance
    VkSamplerYcbcrConversion instance;

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkSamplerYcbcrConversion();
    ~_VkSamplerYcbcrConversion();

};

#endif