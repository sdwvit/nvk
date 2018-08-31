#ifndef __VK_VKPIPELINELAYOUT_H__
#define __VK_VKPIPELINELAYOUT_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPipelineLayout: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);

    // real instance
    VkPipelineLayout *instance;

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkPipelineLayout();
    ~_VkPipelineLayout();

};

#endif