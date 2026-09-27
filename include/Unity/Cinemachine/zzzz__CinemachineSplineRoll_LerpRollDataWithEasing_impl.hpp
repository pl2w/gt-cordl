#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSplineRoll_LerpRollDataWithEasing.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineRoll_LerpRollDataWithEasing_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineRoll_RollData_def.hpp"
#include "UnityEngine/Splines/zzzz__IInterpolator_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CinemachineSplineRoll_LerpRollDataWithEasing.Interpolate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineSplineRoll_RollData (::GlobalNamespace::CinemachineSplineRoll_LerpRollDataWithEasing::*)(::GlobalNamespace::CinemachineSplineRoll_RollData, ::GlobalNamespace::CinemachineSplineRoll_RollData, float_t)>(&::GlobalNamespace::CinemachineSplineRoll_LerpRollDataWithEasing::Interpolate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xae987d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineSplineRoll_LerpRollDataWithEasing>(),
                        {"Interpolate", {}, {::i2c::type_of<::GlobalNamespace::CinemachineSplineRoll_RollData>(), ::i2c::type_of<::GlobalNamespace::CinemachineSplineRoll_RollData>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::CinemachineSplineRoll_RollData GlobalNamespace::CinemachineSplineRoll_LerpRollDataWithEasing::Interpolate(::GlobalNamespace::CinemachineSplineRoll_RollData  a, ::GlobalNamespace::CinemachineSplineRoll_RollData  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineSplineRoll_LerpRollDataWithEasing>(),
                        {"Interpolate", {}, {::i2c::type_of<::GlobalNamespace::CinemachineSplineRoll_RollData>(), ::i2c::type_of<::GlobalNamespace::CinemachineSplineRoll_RollData>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineSplineRoll_RollData>(*this, ___internal_method, a, b, t);
}
/// @brief Convert operator to "::UnityEngine::Splines::IInterpolator_1<::GlobalNamespace::CinemachineSplineRoll_RollData>"
constexpr  GlobalNamespace::CinemachineSplineRoll_LerpRollDataWithEasing::operator ::UnityEngine::Splines::IInterpolator_1<::GlobalNamespace::CinemachineSplineRoll_RollData>*()  {
return static_cast<::UnityEngine::Splines::IInterpolator_1<::GlobalNamespace::CinemachineSplineRoll_RollData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Splines::IInterpolator_1<::GlobalNamespace::CinemachineSplineRoll_RollData>"
constexpr ::UnityEngine::Splines::IInterpolator_1<::GlobalNamespace::CinemachineSplineRoll_RollData>* GlobalNamespace::CinemachineSplineRoll_LerpRollDataWithEasing::i___UnityEngine__Splines__IInterpolator_1___GlobalNamespace__CinemachineSplineRoll_RollData_()  {
return static_cast<::UnityEngine::Splines::IInterpolator_1<::GlobalNamespace::CinemachineSplineRoll_RollData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineSplineRoll_LerpRollDataWithEasing::CinemachineSplineRoll_LerpRollDataWithEasing()   {
}
