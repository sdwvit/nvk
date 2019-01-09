/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKSPECIALIZATIONINFO_H__
#define __VK_VKSPECIALIZATIONINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkSpecializationInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetmapEntryCount);
    static NAN_SETTER(SetmapEntryCount);
    
    std::vector<VkSpecializationMapEntry>* vpMapEntries;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pMapEntries;
    static NAN_GETTER(GetpMapEntries);
    static NAN_SETTER(SetpMapEntries);
    
    static NAN_GETTER(GetdataSize);
    static NAN_SETTER(SetdataSize);
    
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pData;
    static NAN_GETTER(GetpData);
    static NAN_SETTER(SetpData);
    

    // real instance
    VkSpecializationInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkSpecializationInfo();
    ~_VkSpecializationInfo();

};

#endif