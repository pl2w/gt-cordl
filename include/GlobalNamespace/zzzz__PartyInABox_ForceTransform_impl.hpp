#pragma once
// IWYU pragma private; include "GlobalNamespace/PartyInABox_ForceTransform.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PartyInABox_ForceTransform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PartyInABox_ForceTransform.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PartyInABox_ForceTransform::*)()>(&::GlobalNamespace::PartyInABox_ForceTransform::Apply)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x565868c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyInABox_ForceTransform>(),
                        {"Apply", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PartyInABox_ForceTransform::Apply()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyInABox_ForceTransform>(),
                        {"Apply", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "transform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PartyInABox_ForceTransform::PartyInABox_ForceTransform(::UnityW<::UnityEngine::Transform>  transform, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation) noexcept  {
this->transform = transform;
this->localPosition = localPosition;
this->localRotation = localRotation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PartyInABox_ForceTransform::PartyInABox_ForceTransform()   {
}
