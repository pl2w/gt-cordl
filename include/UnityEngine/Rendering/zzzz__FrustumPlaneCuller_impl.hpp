#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FrustumPlaneCuller.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FrustumPlaneCuller_PlanePacket4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FrustumPlaneCuller_SplitInfo_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FrustumPlaneCuller_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__AABB_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__FrustumPlaneCuller_PlanePacket4_def.hpp"
#include "UnityEngine/Rendering/zzzz__FrustumPlaneCuller_SplitInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReceiverSphereCuller_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::FrustumPlaneCuller.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::FrustumPlaneCuller::*)(::Unity::Jobs::JobHandle)>(&::UnityEngine::Rendering::FrustumPlaneCuller::Dispose)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb1e8f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::FrustumPlaneCuller>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FrustumPlaneCuller.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::FrustumPlaneCuller (*)(::by_ref<::UnityEngine::Rendering::BatchCullingContext>, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, ::by_ref<::UnityEngine::Rendering::ReceiverSphereCuller>, ::Unity::Collections::Allocator)>(&::UnityEngine::Rendering::FrustumPlaneCuller::Create)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0xb1e8fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::FrustumPlaneCuller>(),
                        {"Create", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchCullingContext>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ReceiverSphereCuller>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FrustumPlaneCuller.ComputeSplitVisibilityMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Unity::Collections::NativeArray_1<::GlobalNamespace::FrustumPlaneCuller_PlanePacket4>, ::Unity::Collections::NativeArray_1<::GlobalNamespace::FrustumPlaneCuller_SplitInfo>, ::by_ref<::UnityEngine::Rendering::AABB>)>(&::UnityEngine::Rendering::FrustumPlaneCuller::ComputeSplitVisibilityMask)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xb1e9510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::FrustumPlaneCuller>(),
                        {"ComputeSplitVisibilityMask", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::GlobalNamespace::FrustumPlaneCuller_PlanePacket4>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::GlobalNamespace::FrustumPlaneCuller_SplitInfo>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AABB>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::FrustumPlaneCuller::Dispose(::Unity::Jobs::JobHandle  job)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::FrustumPlaneCuller>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, job);
}
inline ::UnityEngine::Rendering::FrustumPlaneCuller UnityEngine::Rendering::FrustumPlaneCuller::Create(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::BatchCullingContext>  cc, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  receiverPlanes, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::ReceiverSphereCuller>  receiverSphereCuller, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::FrustumPlaneCuller>(),
                        {"Create", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchCullingContext>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ReceiverSphereCuller>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::FrustumPlaneCuller>(nullptr, ___internal_method, cc, receiverPlanes, receiverSphereCuller, allocator);
}
inline uint32_t UnityEngine::Rendering::FrustumPlaneCuller::ComputeSplitVisibilityMask(::Unity::Collections::NativeArray_1<::GlobalNamespace::FrustumPlaneCuller_PlanePacket4>  planePackets, ::Unity::Collections::NativeArray_1<::GlobalNamespace::FrustumPlaneCuller_SplitInfo>  splitInfos, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::AABB>  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::FrustumPlaneCuller>(),
                        {"ComputeSplitVisibilityMask", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::GlobalNamespace::FrustumPlaneCuller_PlanePacket4>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::GlobalNamespace::FrustumPlaneCuller_SplitInfo>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AABB>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, planePackets, splitInfos, bounds);
}
// Ctor Parameters [CppParam { name: "planePackets", ty: "::Unity::Collections::NativeList_1<::GlobalNamespace::FrustumPlaneCuller_PlanePacket4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "splitInfos", ty: "::Unity::Collections::NativeList_1<::GlobalNamespace::FrustumPlaneCuller_SplitInfo>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::FrustumPlaneCuller::FrustumPlaneCuller(::Unity::Collections::NativeList_1<::GlobalNamespace::FrustumPlaneCuller_PlanePacket4>  planePackets, ::Unity::Collections::NativeList_1<::GlobalNamespace::FrustumPlaneCuller_SplitInfo>  splitInfos) noexcept  {
this->planePackets = planePackets;
this->splitInfos = splitInfos;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::FrustumPlaneCuller::FrustumPlaneCuller()   {
}
