/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.4
 */
#ifndef __VK_VKBUFFERCREATEINFO_H__
#define __VK_VKBUFFERCREATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkBufferCreateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pNext;
    static NAN_GETTER(GetpNext);
    static NAN_SETTER(SetpNext);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
    static NAN_GETTER(Getsize);
    static NAN_SETTER(Setsize);
    
    static NAN_GETTER(Getusage);
    static NAN_SETTER(Setusage);
    
    static NAN_GETTER(GetsharingMode);
    static NAN_SETTER(SetsharingMode);
    
    static NAN_GETTER(GetqueueFamilyIndexCount);
    static NAN_SETTER(SetqueueFamilyIndexCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pQueueFamilyIndices;
    static NAN_GETTER(GetpQueueFamilyIndices);
    static NAN_SETTER(SetpQueueFamilyIndices);
    

    // real instance
    VkBufferCreateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkBufferCreateInfo();
    ~_VkBufferCreateInfo();

};

#endif