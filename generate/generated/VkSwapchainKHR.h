#ifndef __VK_VKSWAPCHAINKHR_H__
#define __VK_VKSWAPCHAINKHR_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkSwapchainKHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);

    // real instance
    VkSwapchainKHR *instance;

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkSwapchainKHR();
    ~_VkSwapchainKHR();

};

#endif