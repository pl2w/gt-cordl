#pragma once
// IWYU pragma private; include "Oculus/Interaction/OVRControllerMatchesProfileActiveState.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Controller_impl.hpp"
#include "GlobalNamespace/zzzz__OVRInput_InteractionProfile_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__OVRControllerMatchesProfileActiveState_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Controller_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::OVRControllerMatchesProfileActiveState.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::OVRControllerMatchesProfileActiveState::*)()>(&::Oculus::Interaction::OVRControllerMatchesProfileActiveState::get_Active)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa41a0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVRControllerMatchesProfileActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OVRControllerMatchesProfileActiveState.InjectAllOVRControllerSupportsPressure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OVRControllerMatchesProfileActiveState::*)(::GlobalNamespace::OVRInput_Controller)>(&::Oculus::Interaction::OVRControllerMatchesProfileActiveState::InjectAllOVRControllerSupportsPressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41a138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVRControllerMatchesProfileActiveState*>(),
                        {"InjectAllOVRControllerSupportsPressure", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OVRControllerMatchesProfileActiveState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OVRControllerMatchesProfileActiveState::*)()>(&::Oculus::Interaction::OVRControllerMatchesProfileActiveState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41a140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVRControllerMatchesProfileActiveState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRInput_Controller& Oculus::Interaction::OVRControllerMatchesProfileActiveState::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::GlobalNamespace::OVRInput_Controller const& Oculus::Interaction::OVRControllerMatchesProfileActiveState::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void Oculus::Interaction::OVRControllerMatchesProfileActiveState::__cordl_internal_set__controller(::GlobalNamespace::OVRInput_Controller  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controller = value;
}
constexpr ::GlobalNamespace::OVRInput_InteractionProfile& Oculus::Interaction::OVRControllerMatchesProfileActiveState::__cordl_internal_get__profile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____profile;
}
constexpr ::GlobalNamespace::OVRInput_InteractionProfile const& Oculus::Interaction::OVRControllerMatchesProfileActiveState::__cordl_internal_get__profile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____profile;
}
constexpr void Oculus::Interaction::OVRControllerMatchesProfileActiveState::__cordl_internal_set__profile(::GlobalNamespace::OVRInput_InteractionProfile  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____profile = value;
}
inline bool Oculus::Interaction::OVRControllerMatchesProfileActiveState::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVRControllerMatchesProfileActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::OVRControllerMatchesProfileActiveState::InjectAllOVRControllerSupportsPressure(::GlobalNamespace::OVRInput_Controller  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVRControllerMatchesProfileActiveState*>(),
                        {"InjectAllOVRControllerSupportsPressure", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void Oculus::Interaction::OVRControllerMatchesProfileActiveState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVRControllerMatchesProfileActiveState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::OVRControllerMatchesProfileActiveState* Oculus::Interaction::OVRControllerMatchesProfileActiveState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::OVRControllerMatchesProfileActiveState*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::OVRControllerMatchesProfileActiveState::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::OVRControllerMatchesProfileActiveState::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::OVRControllerMatchesProfileActiveState::OVRControllerMatchesProfileActiveState()   {
}
