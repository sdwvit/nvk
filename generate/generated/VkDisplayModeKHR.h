#ifndef __VK_VKDISPLAYMODEKHR_H__
#define __VK_VKDISPLAYMODEKHR_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDisplayModeKHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);

    // real instance
    VkDisplayModeKHR *instance;

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkDisplayModeKHR();
    ~_VkDisplayModeKHR();

};

#endif