/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKCOMPUTEPIPELINECREATEINFO_H__
#define __VK_VKCOMPUTEPIPELINECREATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkComputePipelineCreateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> stage;
      static NAN_GETTER(Getstage);
    static NAN_SETTER(Setstage);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> layout;
      static NAN_GETTER(Getlayout);
    static NAN_SETTER(Setlayout);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> basePipelineHandle;
      static NAN_GETTER(GetbasePipelineHandle);
    static NAN_SETTER(SetbasePipelineHandle);
    
    static NAN_GETTER(GetbasePipelineIndex);
    static NAN_SETTER(SetbasePipelineIndex);
    

    // real instance
    VkComputePipelineCreateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkComputePipelineCreateInfo();
    ~_VkComputePipelineCreateInfo();

};

#endif