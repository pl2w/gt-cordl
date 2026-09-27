#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRGLTFAccessor_GLTFAccessor.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFComponentType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAccessor_GLTFAccessor_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
// Ctor Parameters [CppParam { name: "Type", ty: "::GlobalNamespace::OVRGLTFType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ComponentType", ty: "::GlobalNamespace::OVRGLTFComponentType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ComponentTypeStride", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BufferViewIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ByteOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Min", ty: "::OVRSimpleJSON::JSONNode*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Max", ty: "::OVRSimpleJSON::JSONNode*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor::OVRGLTFAccessor_GLTFAccessor(::GlobalNamespace::OVRGLTFType  Type, ::GlobalNamespace::OVRGLTFComponentType  ComponentType, int32_t  ComponentTypeStride, int32_t  BufferViewIndex, int32_t  ByteOffset, int32_t  Count, ::OVRSimpleJSON::JSONNode*  Min, ::OVRSimpleJSON::JSONNode*  Max) noexcept  {
this->Type = Type;
this->ComponentType = ComponentType;
this->ComponentTypeStride = ComponentTypeStride;
this->BufferViewIndex = BufferViewIndex;
this->ByteOffset = ByteOffset;
this->Count = Count;
this->Min = Min;
this->Max = Max;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor::OVRGLTFAccessor_GLTFAccessor()   {
}
