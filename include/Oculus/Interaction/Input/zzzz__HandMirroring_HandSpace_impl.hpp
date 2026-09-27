#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandMirroring_HandSpace.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__HandMirroring_HandSpace_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HandMirroring_HandSpace._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandMirroring_HandSpace::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::HandMirroring_HandSpace::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa50f954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandMirroring_HandSpace>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HandMirroring_HandSpace::_ctor(::UnityEngine::Vector3  distal, ::UnityEngine::Vector3  dorsal, ::UnityEngine::Vector3  thumbSide)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandMirroring_HandSpace>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, distal, dorsal, thumbSide);
}
// Ctor Parameters [CppParam { name: "distal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dorsal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "thumbSide", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HandMirroring_HandSpace::HandMirroring_HandSpace(::UnityEngine::Vector3  distal, ::UnityEngine::Vector3  dorsal, ::UnityEngine::Vector3  thumbSide, ::UnityEngine::Quaternion  rotation) noexcept  {
this->distal = distal;
this->dorsal = dorsal;
this->thumbSide = thumbSide;
this->rotation = rotation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandMirroring_HandSpace::HandMirroring_HandSpace()   {
}
