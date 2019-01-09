/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKMAPPEDMEMORYRANGE_H__
#define __VK_VKMAPPEDMEMORYRANGE_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkMappedMemoryRange: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> memory;
      static NAN_GETTER(Getmemory);
    static NAN_SETTER(Setmemory);
    
    static NAN_GETTER(Getoffset);
    static NAN_SETTER(Setoffset);
    
    static NAN_GETTER(Getsize);
    static NAN_SETTER(Setsize);
    

    // real instance
    VkMappedMemoryRange instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkMappedMemoryRange();
    ~_VkMappedMemoryRange();

};

#endif