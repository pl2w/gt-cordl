#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionState_UnmanagedMemory.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_UnmanagedMemory_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_ActionMapIndices_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_BindingState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_InteractionState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_TriggerState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputActionState_UnmanagedMemory.get_isAllocated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputActionState_UnmanagedMemory::*)()>(&::GlobalNamespace::InputActionState_UnmanagedMemory::get_isAllocated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf30520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionState_UnmanagedMemory>(),
                        {"get_isAllocated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputActionState_UnmanagedMemory.get_sizeInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::InputActionState_UnmanagedMemory::*)()>(&::GlobalNamespace::InputActionState_UnmanagedMemory::get_sizeInBytes)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xaf30530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionState_UnmanagedMemory>(),
                        {"get_sizeInBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputActionState_UnmanagedMemory.AllocFromBlob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(::by_ref<uint8_t*>, int32_t)>(&::GlobalNamespace::InputActionState_UnmanagedMemory::AllocFromBlob)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaf30580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionState_UnmanagedMemory>(),
                        {"AllocFromBlob", {}, {::i2c::type_of<::by_ref<uint8_t*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputActionState_UnmanagedMemory.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputActionState_UnmanagedMemory::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::InputActionState_UnmanagedMemory::Allocate)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xaf305a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionState_UnmanagedMemory>(),
                        {"Allocate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputActionState_UnmanagedMemory.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputActionState_UnmanagedMemory::*)()>(&::GlobalNamespace::InputActionState_UnmanagedMemory::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaf28f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionState_UnmanagedMemory>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputActionState_UnmanagedMemory.CopyDataFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputActionState_UnmanagedMemory::*)(::GlobalNamespace::InputActionState_UnmanagedMemory)>(&::GlobalNamespace::InputActionState_UnmanagedMemory::CopyDataFrom)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xaf3076c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionState_UnmanagedMemory>(),
                        {"CopyDataFrom", {}, {::i2c::type_of<::GlobalNamespace::InputActionState_UnmanagedMemory>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputActionState_UnmanagedMemory.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionState_UnmanagedMemory (::GlobalNamespace::InputActionState_UnmanagedMemory::*)()>(&::GlobalNamespace::InputActionState_UnmanagedMemory::Clone)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xaf290f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionState_UnmanagedMemory>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::InputActionState_UnmanagedMemory::get_isAllocated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionState_UnmanagedMemory>(),
                        {"get_isAllocated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::InputActionState_UnmanagedMemory::get_sizeInBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionState_UnmanagedMemory>(),
                        {"get_sizeInBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline uint8_t* GlobalNamespace::InputActionState_UnmanagedMemory::AllocFromBlob(::by_ref<uint8_t*>  top, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionState_UnmanagedMemory>(),
                        {"AllocFromBlob", {}, {::i2c::type_of<::by_ref<uint8_t*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, top, size);
}
inline void GlobalNamespace::InputActionState_UnmanagedMemory::Allocate(int32_t  mapCount, int32_t  actionCount, int32_t  bindingCount, int32_t  controlCount, int32_t  interactionCount, int32_t  compositeCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionState_UnmanagedMemory>(),
                        {"Allocate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mapCount, actionCount, bindingCount, controlCount, interactionCount, compositeCount);
}
inline void GlobalNamespace::InputActionState_UnmanagedMemory::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionState_UnmanagedMemory>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::InputActionState_UnmanagedMemory::CopyDataFrom(::GlobalNamespace::InputActionState_UnmanagedMemory  memory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionState_UnmanagedMemory>(),
                        {"CopyDataFrom", {}, {::i2c::type_of<::GlobalNamespace::InputActionState_UnmanagedMemory>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, memory);
}
inline ::GlobalNamespace::InputActionState_UnmanagedMemory GlobalNamespace::InputActionState_UnmanagedMemory::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionState_UnmanagedMemory>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionState_UnmanagedMemory>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::InputActionState_UnmanagedMemory::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::InputActionState_UnmanagedMemory::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "basePtr", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mapCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "actionCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "interactionCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bindingCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "controlCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "compositeCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "actionStates", ty: "::GlobalNamespace::InputActionState_TriggerState*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bindingStates", ty: "::GlobalNamespace::InputActionState_BindingState*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "interactionStates", ty: "::GlobalNamespace::InputActionState_InteractionState*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "controlMagnitudes", ty: "float_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "compositeMagnitudes", ty: "float_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "enabledControls", ty: "int32_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "actionBindingIndicesAndCounts", ty: "uint16_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "actionBindingIndices", ty: "uint16_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "controlIndexToBindingIndex", ty: "int32_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "controlGroupingAndComplexity", ty: "uint16_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "controlGroupingInitialized", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mapIndices", ty: "::GlobalNamespace::InputActionState_ActionMapIndices*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputActionState_UnmanagedMemory::InputActionState_UnmanagedMemory(void*  basePtr, int32_t  mapCount, int32_t  actionCount, int32_t  interactionCount, int32_t  bindingCount, int32_t  controlCount, int32_t  compositeCount, ::GlobalNamespace::InputActionState_TriggerState*  actionStates, ::GlobalNamespace::InputActionState_BindingState*  bindingStates, ::GlobalNamespace::InputActionState_InteractionState*  interactionStates, float_t*  controlMagnitudes, float_t*  compositeMagnitudes, int32_t*  enabledControls, uint16_t*  actionBindingIndicesAndCounts, uint16_t*  actionBindingIndices, int32_t*  controlIndexToBindingIndex, uint16_t*  controlGroupingAndComplexity, bool  controlGroupingInitialized, ::GlobalNamespace::InputActionState_ActionMapIndices*  mapIndices) noexcept  {
this->basePtr = basePtr;
this->mapCount = mapCount;
this->actionCount = actionCount;
this->interactionCount = interactionCount;
this->bindingCount = bindingCount;
this->controlCount = controlCount;
this->compositeCount = compositeCount;
this->actionStates = actionStates;
this->bindingStates = bindingStates;
this->interactionStates = interactionStates;
this->controlMagnitudes = controlMagnitudes;
this->compositeMagnitudes = compositeMagnitudes;
this->enabledControls = enabledControls;
this->actionBindingIndicesAndCounts = actionBindingIndicesAndCounts;
this->actionBindingIndices = actionBindingIndices;
this->controlIndexToBindingIndex = controlIndexToBindingIndex;
this->controlGroupingAndComplexity = controlGroupingAndComplexity;
this->controlGroupingInitialized = controlGroupingInitialized;
this->mapIndices = mapIndices;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputActionState_UnmanagedMemory::InputActionState_UnmanagedMemory()   {
}
