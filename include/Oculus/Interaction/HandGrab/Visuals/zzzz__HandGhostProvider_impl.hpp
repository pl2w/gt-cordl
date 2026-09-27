#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/Visuals/HandGhostProvider.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Oculus/Interaction/HandGrab/Visuals/zzzz__HandGhostProvider_def.hpp"
#include "Oculus/Interaction/HandGrab/Visuals/zzzz__HandGhost_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider.GetHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhost> (::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider::*)(::Oculus::Interaction::Input::Handedness)>(&::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider::GetHand)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4e5acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider*>(),
                        {"GetHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider::*)()>(&::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e5ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhost>& Oculus::Interaction::HandGrab::Visuals::HandGhostProvider::__cordl_internal_get__leftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHand;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhost> const& Oculus::Interaction::HandGrab::Visuals::HandGhostProvider::__cordl_internal_get__leftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHand;
}
constexpr void Oculus::Interaction::HandGrab::Visuals::HandGhostProvider::__cordl_internal_set__leftHand(::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhost>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftHand = value;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhost>& Oculus::Interaction::HandGrab::Visuals::HandGhostProvider::__cordl_internal_get__rightHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHand;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhost> const& Oculus::Interaction::HandGrab::Visuals::HandGhostProvider::__cordl_internal_get__rightHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHand;
}
constexpr void Oculus::Interaction::HandGrab::Visuals::HandGhostProvider::__cordl_internal_set__rightHand(::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhost>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightHand = value;
}
inline ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhost> Oculus::Interaction::HandGrab::Visuals::HandGhostProvider::GetHand(::Oculus::Interaction::Input::Handedness  handedness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider*>(),
                        {"GetHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhost>>(this, ___internal_method, handedness);
}
inline void Oculus::Interaction::HandGrab::Visuals::HandGhostProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider* Oculus::Interaction::HandGrab::Visuals::HandGhostProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider::HandGhostProvider()   {
}
