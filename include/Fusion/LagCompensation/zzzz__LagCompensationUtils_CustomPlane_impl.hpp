#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/LagCompensationUtils_CustomPlane.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Fusion/LagCompensation/zzzz__LagCompensationUtils_CustomPlane_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LagCompensationUtils_CustomPlane._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LagCompensationUtils_CustomPlane::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::LagCompensationUtils_CustomPlane::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6017060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LagCompensationUtils_CustomPlane>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LagCompensationUtils_CustomPlane::_ctor(::UnityEngine::Vector3  normal, ::UnityEngine::Vector3  pointOnPlane)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LagCompensationUtils_CustomPlane>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, normal, pointOnPlane);
}
// Ctor Parameters [CppParam { name: "Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PointOnPlane", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LagCompensationUtils_CustomPlane::LagCompensationUtils_CustomPlane(::UnityEngine::Vector3  Normal, ::UnityEngine::Vector3  PointOnPlane) noexcept  {
this->Normal = Normal;
this->PointOnPlane = PointOnPlane;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LagCompensationUtils_CustomPlane::LagCompensationUtils_CustomPlane()   {
}
