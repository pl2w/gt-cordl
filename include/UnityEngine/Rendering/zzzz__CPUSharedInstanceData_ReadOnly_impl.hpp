#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CPUSharedInstanceData_ReadOnly.hpp"
#include "Unity/Collections/zzzz__NativeArray`1_ReadOnly_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AABB_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceFlags_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenMeshLodInfo_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SharedInstanceHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SmallIntegerArray_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_ReadOnly_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_ReadOnly_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__SharedInstanceHandle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CPUSharedInstanceData_ReadOnly._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CPUSharedInstanceData_ReadOnly::*)(::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>)>(&::GlobalNamespace::CPUSharedInstanceData_ReadOnly::_ctor)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0xb201c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CPUSharedInstanceData_ReadOnly>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CPUSharedInstanceData_ReadOnly.SharedInstanceToIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CPUSharedInstanceData_ReadOnly::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(&::GlobalNamespace::CPUSharedInstanceData_ReadOnly::SharedInstanceToIndex)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb202050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CPUSharedInstanceData_ReadOnly>(),
                        {"SharedInstanceToIndex", {}, {::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CPUSharedInstanceData_ReadOnly.InstanceToIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CPUSharedInstanceData_ReadOnly::*)(::by_ref<::GlobalNamespace::CPUInstanceData_ReadOnly>, ::UnityEngine::Rendering::InstanceHandle)>(&::GlobalNamespace::CPUSharedInstanceData_ReadOnly::InstanceToIndex)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb2020e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CPUSharedInstanceData_ReadOnly>(),
                        {"InstanceToIndex", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::CPUInstanceData_ReadOnly>>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CPUSharedInstanceData_ReadOnly::_ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  instanceData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CPUSharedInstanceData_ReadOnly>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instanceData);
}
inline int32_t GlobalNamespace::CPUSharedInstanceData_ReadOnly::SharedInstanceToIndex(::UnityEngine::Rendering::SharedInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CPUSharedInstanceData_ReadOnly>(),
                        {"SharedInstanceToIndex", {}, {::i2c::type_of<::UnityEngine::Rendering::SharedInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, instance);
}
inline int32_t GlobalNamespace::CPUSharedInstanceData_ReadOnly::InstanceToIndex(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::CPUInstanceData_ReadOnly>  instanceData, ::UnityEngine::Rendering::InstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CPUSharedInstanceData_ReadOnly>(),
                        {"InstanceToIndex", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::CPUInstanceData_ReadOnly>>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, instanceData, instance);
}
// Ctor Parameters [CppParam { name: "instanceIndices", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instances", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SharedInstanceHandle>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rendererGroupIDs", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "materialIDArrays", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshIDs", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localAABBs", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::AABB>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "flags", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::CPUSharedInstanceFlags>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lodGroupAndMasks", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<uint32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshLodInfos", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUDrivenMeshLodInfo>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gameObjectLayers", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "refCounts", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CPUSharedInstanceData_ReadOnly::CPUSharedInstanceData_ReadOnly(::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  instanceIndices, ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SharedInstanceHandle>  instances, ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  rendererGroupIDs, ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>  materialIDArrays, ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  meshIDs, ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::AABB>  localAABBs, ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::CPUSharedInstanceFlags>  flags, ::GlobalNamespace::NativeArray_1_ReadOnly<uint32_t>  lodGroupAndMasks, ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUDrivenMeshLodInfo>  meshLodInfos, ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  gameObjectLayers, ::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>  refCounts) noexcept  {
this->instanceIndices = instanceIndices;
this->instances = instances;
this->rendererGroupIDs = rendererGroupIDs;
this->materialIDArrays = materialIDArrays;
this->meshIDs = meshIDs;
this->localAABBs = localAABBs;
this->flags = flags;
this->lodGroupAndMasks = lodGroupAndMasks;
this->meshLodInfos = meshLodInfos;
this->gameObjectLayers = gameObjectLayers;
this->refCounts = refCounts;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CPUSharedInstanceData_ReadOnly::CPUSharedInstanceData_ReadOnly()   {
}
