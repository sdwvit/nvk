/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKPHYSICALDEVICEIMAGEDRMFORMATMODIFIERINFOEXT_H__
#define __VK_VKPHYSICALDEVICEIMAGEDRMFORMATMODIFIERINFOEXT_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPhysicalDeviceImageDrmFormatModifierInfoEXT: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetdrmFormatModifier);
    static NAN_SETTER(SetdrmFormatModifier);
    
    static NAN_GETTER(GetsharingMode);
    static NAN_SETTER(SetsharingMode);
    
    static NAN_GETTER(GetqueueFamilyIndexCount);
    static NAN_SETTER(SetqueueFamilyIndexCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pQueueFamilyIndices;
    static NAN_GETTER(GetpQueueFamilyIndices);
    static NAN_SETTER(SetpQueueFamilyIndices);
    

    // real instance
    VkPhysicalDeviceImageDrmFormatModifierInfoEXT instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPhysicalDeviceImageDrmFormatModifierInfoEXT();
    ~_VkPhysicalDeviceImageDrmFormatModifierInfoEXT();

};

#endif