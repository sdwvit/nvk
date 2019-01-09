/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKPIPELINEVIEWPORTSTATECREATEINFO_H__
#define __VK_VKPIPELINEVIEWPORTSTATECREATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPipelineViewportStateCreateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
    static NAN_GETTER(GetviewportCount);
    static NAN_SETTER(SetviewportCount);
    
    std::vector<VkViewport>* vpViewports;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pViewports;
    static NAN_GETTER(GetpViewports);
    static NAN_SETTER(SetpViewports);
    
    static NAN_GETTER(GetscissorCount);
    static NAN_SETTER(SetscissorCount);
    
    std::vector<VkRect2D>* vpScissors;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pScissors;
    static NAN_GETTER(GetpScissors);
    static NAN_SETTER(SetpScissors);
    

    // real instance
    VkPipelineViewportStateCreateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPipelineViewportStateCreateInfo();
    ~_VkPipelineViewportStateCreateInfo();

};

#endif