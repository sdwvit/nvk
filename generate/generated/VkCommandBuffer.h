#ifndef __VK_VKCOMMANDBUFFER_H__
#define __VK_VKCOMMANDBUFFER_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkCommandBuffer: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);

    // real instance
    VkCommandBuffer *instance;

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkCommandBuffer();
    ~_VkCommandBuffer();

};

#endif