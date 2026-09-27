#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/BurstGazeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__BurstGazeUtility_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstGazeUtility.IsOutsideGaze
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstGazeUtility::IsOutsideGaze)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb41d774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstGazeUtility*>(),
                        {"IsOutsideGaze", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstGazeUtility.IsAlignedToGazeForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstGazeUtility::IsAlignedToGazeForward)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb41d84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstGazeUtility*>(),
                        {"IsAlignedToGazeForward", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstGazeUtility.IsOutsideDistanceRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstGazeUtility::IsOutsideDistanceRange)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb41d8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstGazeUtility*>(),
                        {"IsOutsideDistanceRange", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::BurstGazeUtility::IsOutsideGaze(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  gazePosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  gazeDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetPosition, float_t  angleThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstGazeUtility*>(),
                        {"IsOutsideGaze", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, gazePosition, gazeDirection, targetPosition, angleThreshold);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::BurstGazeUtility::IsAlignedToGazeForward(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  gazeDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetDirection, float_t  angleThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstGazeUtility*>(),
                        {"IsAlignedToGazeForward", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, gazeDirection, targetDirection, angleThreshold);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::BurstGazeUtility::IsOutsideDistanceRange(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  gazePosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetPosition, float_t  distanceThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstGazeUtility*>(),
                        {"IsOutsideDistanceRange", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, gazePosition, targetPosition, distanceThreshold);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstGazeUtility::BurstGazeUtility()   {
}
