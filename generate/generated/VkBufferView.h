#ifndef __VK_VKBUFFERVIEW_H__
#define __VK_VKBUFFERVIEW_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkBufferView: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);

    // real instance
    VkBufferView *instance;

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkBufferView();
    ~_VkBufferView();

};

#endif