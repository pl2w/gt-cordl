#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSplineDollyLookAtTargets_LerpItem.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineDollyLookAtTargets_LerpItem_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineDollyLookAtTargets_Item_def.hpp"
#include "UnityEngine/Splines/zzzz__IInterpolator_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CinemachineSplineDollyLookAtTargets_LerpItem.Interpolate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item (::GlobalNamespace::CinemachineSplineDollyLookAtTargets_LerpItem::*)(::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item, ::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item, float_t)>(&::GlobalNamespace::CinemachineSplineDollyLookAtTargets_LerpItem::Interpolate)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xaea7394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_LerpItem>(),
                        {"Interpolate", {}, {::i2c::type_of<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>(), ::i2c::type_of<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item GlobalNamespace::CinemachineSplineDollyLookAtTargets_LerpItem::Interpolate(::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item  a, ::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_LerpItem>(),
                        {"Interpolate", {}, {::i2c::type_of<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>(), ::i2c::type_of<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>(*this, ___internal_method, a, b, t);
}
/// @brief Convert operator to "::UnityEngine::Splines::IInterpolator_1<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>"
constexpr  GlobalNamespace::CinemachineSplineDollyLookAtTargets_LerpItem::operator ::UnityEngine::Splines::IInterpolator_1<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>*()  {
return static_cast<::UnityEngine::Splines::IInterpolator_1<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Splines::IInterpolator_1<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>"
constexpr ::UnityEngine::Splines::IInterpolator_1<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>* GlobalNamespace::CinemachineSplineDollyLookAtTargets_LerpItem::i___UnityEngine__Splines__IInterpolator_1___GlobalNamespace__CinemachineSplineDollyLookAtTargets_Item_()  {
return static_cast<::UnityEngine::Splines::IInterpolator_1<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineSplineDollyLookAtTargets_LerpItem::CinemachineSplineDollyLookAtTargets_LerpItem()   {
}
