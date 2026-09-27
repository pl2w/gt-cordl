#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CPUInstanceData_ReadOnly.hpp"
#include "Unity/Collections/zzzz__NativeArray`1_ReadOnly_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AABB_impl.hpp"
#include "UnityEngine/Rendering/zzzz__EditorInstanceDataArrays_ReadOnly_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererMeshLodData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelBitArray_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SharedInstanceHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_ReadOnly_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CPUInstanceData_ReadOnly.get_handlesLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CPUInstanceData_ReadOnly::*)()>(&::GlobalNamespace::CPUInstanceData_ReadOnly::get_handlesLength)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb1ffa74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CPUInstanceData_ReadOnly>(),
                        {"get_handlesLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CPUInstanceData_ReadOnly.get_instancesLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CPUInstanceData_ReadOnly::*)()>(&::GlobalNamespace::CPUInstanceData_ReadOnly::get_instancesLength)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb1ffab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CPUInstanceData_ReadOnly>(),
                        {"get_instancesLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CPUInstanceData_ReadOnly._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CPUInstanceData_ReadOnly::*)(::by_ref<::UnityEngine::Rendering::CPUInstanceData>)>(&::GlobalNamespace::CPUInstanceData_ReadOnly::_ctor)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0xb1ff728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CPUInstanceData_ReadOnly>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CPUInstanceData_ReadOnly.InstanceToIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CPUInstanceData_ReadOnly::*)(::UnityEngine::Rendering::InstanceHandle)>(&::GlobalNamespace::CPUInstanceData_ReadOnly::InstanceToIndex)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb1ffaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CPUInstanceData_ReadOnly>(),
                        {"InstanceToIndex", {}, {::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::CPUInstanceData_ReadOnly::get_handlesLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CPUInstanceData_ReadOnly>(),
                        {"get_handlesLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::CPUInstanceData_ReadOnly::get_instancesLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CPUInstanceData_ReadOnly>(),
                        {"get_instancesLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::CPUInstanceData_ReadOnly::_ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CPUInstanceData_ReadOnly>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instanceData);
}
inline int32_t GlobalNamespace::CPUInstanceData_ReadOnly::InstanceToIndex(::UnityEngine::Rendering::InstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CPUInstanceData_ReadOnly>(),
                        {"InstanceToIndex", {}, {::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, instance);
}
// Ctor Parameters [CppParam { name: "instanceIndices", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instances", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sharedInstances", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SharedInstanceHandle>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localToWorldIsFlippedBits", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "worldAABBs", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::AABB>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tetrahedronCacheIndices", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "movedInCurrentFrameBits", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "movedInPreviousFrameBits", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "visibleInPreviousFrameBits", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "editorData", ty: "::GlobalNamespace::EditorInstanceDataArrays_ReadOnly", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshLodData", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUDrivenRendererMeshLodData>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CPUInstanceData_ReadOnly::CPUInstanceData_ReadOnly(::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  instanceIndices, ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::InstanceHandle>  instances, ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SharedInstanceHandle>  sharedInstances, ::UnityEngine::Rendering::ParallelBitArray  localToWorldIsFlippedBits, ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::AABB>  worldAABBs, ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  tetrahedronCacheIndices, ::UnityEngine::Rendering::ParallelBitArray  movedInCurrentFrameBits, ::UnityEngine::Rendering::ParallelBitArray  movedInPreviousFrameBits, ::UnityEngine::Rendering::ParallelBitArray  visibleInPreviousFrameBits, ::GlobalNamespace::EditorInstanceDataArrays_ReadOnly  editorData, ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUDrivenRendererMeshLodData>  meshLodData) noexcept  {
this->instanceIndices = instanceIndices;
this->instances = instances;
this->sharedInstances = sharedInstances;
this->localToWorldIsFlippedBits = localToWorldIsFlippedBits;
this->worldAABBs = worldAABBs;
this->tetrahedronCacheIndices = tetrahedronCacheIndices;
this->movedInCurrentFrameBits = movedInCurrentFrameBits;
this->movedInPreviousFrameBits = movedInPreviousFrameBits;
this->visibleInPreviousFrameBits = visibleInPreviousFrameBits;
this->editorData = editorData;
this->meshLodData = meshLodData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CPUInstanceData_ReadOnly::CPUInstanceData_ReadOnly()   {
}
