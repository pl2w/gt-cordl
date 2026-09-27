#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ReceiverSphereCuller.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3x3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ReceiverSphereCuller_SplitInfo_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ReceiverSphereCuller_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "UnityEngine/Rendering/zzzz__AABB_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReceiverSphereCuller_SplitInfo_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ReceiverSphereCuller.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ReceiverSphereCuller::*)(::Unity::Jobs::JobHandle)>(&::UnityEngine::Rendering::ReceiverSphereCuller::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb1e9680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::ReceiverSphereCuller>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ReceiverSphereCuller.UseReceiverPlanes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ReceiverSphereCuller::*)()>(&::UnityEngine::Rendering::ReceiverSphereCuller::UseReceiverPlanes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb1e93e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::ReceiverSphereCuller>(),
                        {"UseReceiverPlanes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ReceiverSphereCuller.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ReceiverSphereCuller (*)(::by_ref<::UnityEngine::Rendering::BatchCullingContext>, ::Unity::Collections::Allocator)>(&::UnityEngine::Rendering::ReceiverSphereCuller::Create)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0xb1e96e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::ReceiverSphereCuller>(),
                        {"Create", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchCullingContext>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ReceiverSphereCuller.DistanceUntilCylinderFullyCrossesPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Plane)>(&::UnityEngine::Rendering::ReceiverSphereCuller::DistanceUntilCylinderFullyCrossesPlane)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xb1e9978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::ReceiverSphereCuller>(),
                        {"DistanceUntilCylinderFullyCrossesPlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Plane>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ReceiverSphereCuller.ComputeSplitVisibilityMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, ::Unity::Collections::NativeArray_1<::GlobalNamespace::ReceiverSphereCuller_SplitInfo>, ::Unity::Mathematics::float3x3, ::by_ref<::UnityEngine::Rendering::AABB>)>(&::UnityEngine::Rendering::ReceiverSphereCuller::ComputeSplitVisibilityMask)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xb1e9ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::ReceiverSphereCuller>(),
                        {"ComputeSplitVisibilityMask", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::GlobalNamespace::ReceiverSphereCuller_SplitInfo>>(), ::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AABB>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ReceiverSphereCuller::Dispose(::Unity::Jobs::JobHandle  job)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::ReceiverSphereCuller>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, job);
}
inline bool UnityEngine::Rendering::ReceiverSphereCuller::UseReceiverPlanes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::ReceiverSphereCuller>(),
                        {"UseReceiverPlanes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::ReceiverSphereCuller UnityEngine::Rendering::ReceiverSphereCuller::Create(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::BatchCullingContext>  cc, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::ReceiverSphereCuller>(),
                        {"Create", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchCullingContext>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ReceiverSphereCuller>(nullptr, ___internal_method, cc, allocator);
}
inline float_t UnityEngine::Rendering::ReceiverSphereCuller::DistanceUntilCylinderFullyCrossesPlane(::Unity::Mathematics::float3  cylinderCenter, ::Unity::Mathematics::float3  cylinderDirection, float_t  cylinderRadius, ::UnityEngine::Plane  plane)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::ReceiverSphereCuller>(),
                        {"DistanceUntilCylinderFullyCrossesPlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Plane>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, cylinderCenter, cylinderDirection, cylinderRadius, plane);
}
inline uint32_t UnityEngine::Rendering::ReceiverSphereCuller::ComputeSplitVisibilityMask(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  lightFacingFrustumPlanes, ::Unity::Collections::NativeArray_1<::GlobalNamespace::ReceiverSphereCuller_SplitInfo>  splitInfos, ::Unity::Mathematics::float3x3  worldToLightSpaceRotation, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::AABB>  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::ReceiverSphereCuller>(),
                        {"ComputeSplitVisibilityMask", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::GlobalNamespace::ReceiverSphereCuller_SplitInfo>>(), ::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AABB>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, lightFacingFrustumPlanes, splitInfos, worldToLightSpaceRotation, bounds);
}
// Ctor Parameters [CppParam { name: "splitInfos", ty: "::Unity::Collections::NativeList_1<::GlobalNamespace::ReceiverSphereCuller_SplitInfo>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "worldToLightSpaceRotation", ty: "::Unity::Mathematics::float3x3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::ReceiverSphereCuller::ReceiverSphereCuller(::Unity::Collections::NativeList_1<::GlobalNamespace::ReceiverSphereCuller_SplitInfo>  splitInfos, ::Unity::Mathematics::float3x3  worldToLightSpaceRotation) noexcept  {
this->splitInfos = splitInfos;
this->worldToLightSpaceRotation = worldToLightSpaceRotation;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ReceiverSphereCuller::ReceiverSphereCuller()   {
}
