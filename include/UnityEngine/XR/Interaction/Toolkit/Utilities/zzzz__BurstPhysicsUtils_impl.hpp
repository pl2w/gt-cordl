#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/BurstPhysicsUtils.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__BurstPhysicsUtils_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__BurstPhysicsUtils_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils.GetSphereOverlapParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils::GetSphereOverlapParameters)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb423d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils*>(),
                        {"GetSphereOverlapParameters", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils.GetConecastParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils::GetConecastParameters)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb423d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils*>(),
                        {"GetConecastParameters", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils.GetMultiSegmentConecastParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, float_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils::GetMultiSegmentConecastParameters)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb423d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils*>(),
                        {"GetMultiSegmentConecastParameters", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils.GetConecastOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils::GetConecastOffset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb423d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils*>(),
                        {"GetConecastOffset", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils.GetSphereOverlapParameters$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils::GetSphereOverlapParameters$BurstManaged)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb4242f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils*>(),
                        {"GetSphereOverlapParameters$BurstManaged", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils.GetConecastParameters$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils::GetConecastParameters$BurstManaged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb42440c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils*>(),
                        {"GetConecastParameters$BurstManaged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils.GetMultiSegmentConecastParameters$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, float_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils::GetMultiSegmentConecastParameters$BurstManaged)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb42446c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils*>(),
                        {"GetMultiSegmentConecastParameters$BurstManaged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils.GetConecastOffset$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils::GetConecastOffset$BurstManaged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb424504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils*>(),
                        {"GetConecastOffset$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils::GetSphereOverlapParameters(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  overlapStart, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  overlapEnd, ::by_ref<::UnityEngine::Vector3>  normalizedOverlapVector, ::by_ref<float_t>  overlapSqrMagnitude, ::by_ref<float_t>  overlapDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils*>(),
                        {"GetSphereOverlapParameters", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, overlapStart, overlapEnd, normalizedOverlapVector, overlapSqrMagnitude, overlapDistance);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils::GetConecastParameters(float_t  angleRadius, float_t  offset, float_t  maxOffset, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Vector3>  originOffset, ::by_ref<float_t>  radius, ::by_ref<float_t>  castMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils*>(),
                        {"GetConecastParameters", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, angleRadius, offset, maxOffset, direction, originOffset, radius, castMax);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils::GetMultiSegmentConecastParameters(float_t  angleRadius, float_t  segmentOffset, float_t  offsetFromOrigin, float_t  maxOffset, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Vector3>  originOffset, ::by_ref<float_t>  radius, ::by_ref<float_t>  castMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils*>(),
                        {"GetMultiSegmentConecastParameters", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, angleRadius, segmentOffset, offsetFromOrigin, maxOffset, direction, originOffset, radius, castMax);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils::GetConecastOffset(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  conePoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  direction, ::by_ref<float_t>  coneOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils*>(),
                        {"GetConecastOffset", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, origin, conePoint, direction, coneOffset);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils::GetSphereOverlapParameters$BurstManaged(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  overlapStart, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  overlapEnd, ::by_ref<::UnityEngine::Vector3>  normalizedOverlapVector, ::by_ref<float_t>  overlapSqrMagnitude, ::by_ref<float_t>  overlapDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils*>(),
                        {"GetSphereOverlapParameters$BurstManaged", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, overlapStart, overlapEnd, normalizedOverlapVector, overlapSqrMagnitude, overlapDistance);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils::GetConecastParameters$BurstManaged(float_t  angleRadius, float_t  offset, float_t  maxOffset, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Vector3>  originOffset, ::by_ref<float_t>  radius, ::by_ref<float_t>  castMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils*>(),
                        {"GetConecastParameters$BurstManaged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, angleRadius, offset, maxOffset, direction, originOffset, radius, castMax);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils::GetMultiSegmentConecastParameters$BurstManaged(float_t  angleRadius, float_t  segmentOffset, float_t  offsetFromOrigin, float_t  maxOffset, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Vector3>  originOffset, ::by_ref<float_t>  radius, ::by_ref<float_t>  castMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils*>(),
                        {"GetMultiSegmentConecastParameters$BurstManaged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, angleRadius, segmentOffset, offsetFromOrigin, maxOffset, direction, originOffset, radius, castMax);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils::GetConecastOffset$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  conePoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  direction, ::by_ref<float_t>  coneOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils*>(),
                        {"GetConecastOffset$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, origin, conePoint, direction, coneOffset);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils::BurstPhysicsUtils()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb425078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb425168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xb424194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  conePoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  direction, ::by_ref<float_t>  coneOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, origin, conePoint, direction, coneOffset);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall::BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb424eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb424f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<float_t>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb424f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb42506c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  conePoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  direction, ::by_ref<float_t>  coneOffset)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, origin, conePoint, direction, coneOffset);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  conePoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  direction, ::by_ref<float_t>  coneOffset, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, origin, conePoint, direction, coneOffset, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_5);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb424db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb424ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, float_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xb424018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall::Invoke(float_t  angleRadius, float_t  segmentOffset, float_t  offsetFromOrigin, float_t  maxOffset, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Vector3>  originOffset, ::by_ref<float_t>  radius, ::by_ref<float_t>  castMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, angleRadius, segmentOffset, offsetFromOrigin, maxOffset, direction, originOffset, radius, castMax);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb424ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate::*)(float_t, float_t, float_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb424c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate::*)(float_t, float_t, float_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>, ::by_ref<float_t>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb424c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb424da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate::Invoke(float_t  angleRadius, float_t  segmentOffset, float_t  offsetFromOrigin, float_t  maxOffset, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Vector3>  originOffset, ::by_ref<float_t>  radius, ::by_ref<float_t>  castMax)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, angleRadius, segmentOffset, offsetFromOrigin, maxOffset, direction, originOffset, radius, castMax);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate::BeginInvoke(float_t  angleRadius, float_t  segmentOffset, float_t  offsetFromOrigin, float_t  maxOffset, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Vector3>  originOffset, ::by_ref<float_t>  radius, ::by_ref<float_t>  castMax, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_9)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, angleRadius, segmentOffset, offsetFromOrigin, maxOffset, direction, originOffset, radius, castMax, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_9);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb424a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb424b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb423ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall::Invoke(float_t  angleRadius, float_t  offset, float_t  maxOffset, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Vector3>  originOffset, ::by_ref<float_t>  radius, ::by_ref<float_t>  castMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, angleRadius, offset, maxOffset, direction, originOffset, radius, castMax);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall::BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb4248ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate::*)(float_t, float_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb42494c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate::*)(float_t, float_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>, ::by_ref<float_t>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb424960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb424a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate::Invoke(float_t  angleRadius, float_t  offset, float_t  maxOffset, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Vector3>  originOffset, ::by_ref<float_t>  radius, ::by_ref<float_t>  castMax)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, angleRadius, offset, maxOffset, direction, originOffset, radius, castMax);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate::BeginInvoke(float_t  angleRadius, float_t  offset, float_t  maxOffset, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Vector3>  originOffset, ::by_ref<float_t>  radius, ::by_ref<float_t>  castMax, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_8)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, angleRadius, offset, maxOffset, direction, originOffset, radius, castMax, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_8);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb4247a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb424894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xb423d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  overlapStart, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  overlapEnd, ::by_ref<::UnityEngine::Vector3>  normalizedOverlapVector, ::by_ref<float_t>  overlapSqrMagnitude, ::by_ref<float_t>  overlapDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, overlapStart, overlapEnd, normalizedOverlapVector, overlapSqrMagnitude, overlapDistance);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb4245c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb424678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>, ::by_ref<float_t>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb42468c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb424798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  overlapStart, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  overlapEnd, ::by_ref<::UnityEngine::Vector3>  normalizedOverlapVector, ::by_ref<float_t>  overlapSqrMagnitude, ::by_ref<float_t>  overlapDistance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, overlapStart, overlapEnd, normalizedOverlapVector, overlapSqrMagnitude, overlapDistance);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  overlapStart, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  overlapEnd, ::by_ref<::UnityEngine::Vector3>  normalizedOverlapVector, ::by_ref<float_t>  overlapSqrMagnitude, ::by_ref<float_t>  overlapDistance, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, overlapStart, overlapEnd, normalizedOverlapVector, overlapSqrMagnitude, overlapDistance, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_6);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate()   {
}
