/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKSPARSEBUFFERMEMORYBINDINFO_H__
#define __VK_VKSPARSEBUFFERMEMORYBINDINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkSparseBufferMemoryBindInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> buffer;
      static NAN_GETTER(Getbuffer);
    static NAN_SETTER(Setbuffer);
    
    static NAN_GETTER(GetbindCount);
    static NAN_SETTER(SetbindCount);
    
    std::vector<VkSparseMemoryBind>* vpBinds;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pBinds;
    static NAN_GETTER(GetpBinds);
    static NAN_SETTER(SetpBinds);
    

    // real instance
    VkSparseBufferMemoryBindInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkSparseBufferMemoryBindInfo();
    ~_VkSparseBufferMemoryBindInfo();

};

#endif