#pragma once
// IWYU pragma private; include "Oculus/Interaction/OVR/Input/OVRButtonActiveState.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Button_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/OVR/Input/zzzz__OVRButtonActiveState_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::OVR::Input::OVRButtonActiveState.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::OVR::Input::OVRButtonActiveState::*)()>(&::Oculus::Interaction::OVR::Input::OVRButtonActiveState::get_Active)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa41b320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::Input::OVRButtonActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OVR::Input::OVRButtonActiveState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OVR::Input::OVRButtonActiveState::*)()>(&::Oculus::Interaction::OVR::Input::OVRButtonActiveState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41b380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::Input::OVRButtonActiveState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRInput_Button& Oculus::Interaction::OVR::Input::OVRButtonActiveState::__cordl_internal_get__button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
constexpr ::GlobalNamespace::OVRInput_Button const& Oculus::Interaction::OVR::Input::OVRButtonActiveState::__cordl_internal_get__button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
constexpr void Oculus::Interaction::OVR::Input::OVRButtonActiveState::__cordl_internal_set__button(::GlobalNamespace::OVRInput_Button  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____button = value;
}
inline bool Oculus::Interaction::OVR::Input::OVRButtonActiveState::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::Input::OVRButtonActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::OVR::Input::OVRButtonActiveState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::Input::OVRButtonActiveState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::OVR::Input::OVRButtonActiveState* Oculus::Interaction::OVR::Input::OVRButtonActiveState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::OVR::Input::OVRButtonActiveState*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::OVR::Input::OVRButtonActiveState::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::OVR::Input::OVRButtonActiveState::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::OVR::Input::OVRButtonActiveState::OVRButtonActiveState()   {
}
