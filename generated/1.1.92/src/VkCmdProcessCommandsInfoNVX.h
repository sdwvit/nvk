/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKCMDPROCESSCOMMANDSINFONVX_H__
#define __VK_VKCMDPROCESSCOMMANDSINFONVX_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkCmdProcessCommandsInfoNVX: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> objectTable;
      static NAN_GETTER(GetobjectTable);
    static NAN_SETTER(SetobjectTable);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> indirectCommandsLayout;
      static NAN_GETTER(GetindirectCommandsLayout);
    static NAN_SETTER(SetindirectCommandsLayout);
    
    static NAN_GETTER(GetindirectCommandsTokenCount);
    static NAN_SETTER(SetindirectCommandsTokenCount);
    
    std::vector<VkIndirectCommandsTokenNVX>* vpIndirectCommandsTokens;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pIndirectCommandsTokens;
    static NAN_GETTER(GetpIndirectCommandsTokens);
    static NAN_SETTER(SetpIndirectCommandsTokens);
    
    static NAN_GETTER(GetmaxSequencesCount);
    static NAN_SETTER(SetmaxSequencesCount);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> targetCommandBuffer;
      static NAN_GETTER(GettargetCommandBuffer);
    static NAN_SETTER(SettargetCommandBuffer);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> sequencesCountBuffer;
      static NAN_GETTER(GetsequencesCountBuffer);
    static NAN_SETTER(SetsequencesCountBuffer);
    
    static NAN_GETTER(GetsequencesCountOffset);
    static NAN_SETTER(SetsequencesCountOffset);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> sequencesIndexBuffer;
      static NAN_GETTER(GetsequencesIndexBuffer);
    static NAN_SETTER(SetsequencesIndexBuffer);
    
    static NAN_GETTER(GetsequencesIndexOffset);
    static NAN_SETTER(SetsequencesIndexOffset);
    

    // real instance
    VkCmdProcessCommandsInfoNVX instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkCmdProcessCommandsInfoNVX();
    ~_VkCmdProcessCommandsInfoNVX();

};

#endif