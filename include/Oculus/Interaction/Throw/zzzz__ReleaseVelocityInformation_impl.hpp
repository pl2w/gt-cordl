#pragma once
// IWYU pragma private; include "Oculus/Interaction/Throw/ReleaseVelocityInformation.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Throw/zzzz__ReleaseVelocityInformation_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Throw::ReleaseVelocityInformation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::ReleaseVelocityInformation::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, bool)>(&::Oculus::Interaction::Throw::ReleaseVelocityInformation::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa494038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::ReleaseVelocityInformation>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Throw::ReleaseVelocityInformation::_ctor(::UnityEngine::Vector3  linearVelocity, ::UnityEngine::Vector3  angularVelocity, ::UnityEngine::Vector3  origin, bool  isSelectedVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::ReleaseVelocityInformation>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, linearVelocity, angularVelocity, origin, isSelectedVelocity);
}
// Ctor Parameters [CppParam { name: "LinearVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AngularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Origin", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsSelectedVelocity", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::Throw::ReleaseVelocityInformation::ReleaseVelocityInformation(::UnityEngine::Vector3  LinearVelocity, ::UnityEngine::Vector3  AngularVelocity, ::UnityEngine::Vector3  Origin, bool  IsSelectedVelocity) noexcept  {
this->LinearVelocity = LinearVelocity;
this->AngularVelocity = AngularVelocity;
this->Origin = Origin;
this->IsSelectedVelocity = IsSelectedVelocity;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Throw::ReleaseVelocityInformation::ReleaseVelocityInformation()   {
}
