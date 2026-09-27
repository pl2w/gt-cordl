#pragma once
// IWYU pragma private; include "Oculus/Interaction/OVR/OVRControllerInHandActiveState.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Hand_impl.hpp"
#include "GlobalNamespace/zzzz__OVRInput_InputDeviceShowState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/OVR/zzzz__OVRControllerInHandActiveState_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Hand_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_InputDeviceShowState_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::OVR::OVRControllerInHandActiveState.get_HandType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_Hand (::Oculus::Interaction::OVR::OVRControllerInHandActiveState::*)()>(&::Oculus::Interaction::OVR::OVRControllerInHandActiveState::get_HandType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41b024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::OVRControllerInHandActiveState*>(),
                        {"get_HandType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OVR::OVRControllerInHandActiveState.set_HandType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OVR::OVRControllerInHandActiveState::*)(::GlobalNamespace::OVRInput_Hand)>(&::Oculus::Interaction::OVR::OVRControllerInHandActiveState::set_HandType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41b02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::OVRControllerInHandActiveState*>(),
                        {"set_HandType", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Hand>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OVR::OVRControllerInHandActiveState.get_ShowState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_InputDeviceShowState (::Oculus::Interaction::OVR::OVRControllerInHandActiveState::*)()>(&::Oculus::Interaction::OVR::OVRControllerInHandActiveState::get_ShowState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41b034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::OVRControllerInHandActiveState*>(),
                        {"get_ShowState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OVR::OVRControllerInHandActiveState.set_ShowState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OVR::OVRControllerInHandActiveState::*)(::GlobalNamespace::OVRInput_InputDeviceShowState)>(&::Oculus::Interaction::OVR::OVRControllerInHandActiveState::set_ShowState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41b03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::OVRControllerInHandActiveState*>(),
                        {"set_ShowState", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_InputDeviceShowState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OVR::OVRControllerInHandActiveState.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::OVR::OVRControllerInHandActiveState::*)()>(&::Oculus::Interaction::OVR::OVRControllerInHandActiveState::get_Active)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa41b044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::OVRControllerInHandActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OVR::OVRControllerInHandActiveState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OVR::OVRControllerInHandActiveState::*)()>(&::Oculus::Interaction::OVR::OVRControllerInHandActiveState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa41b108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::OVRControllerInHandActiveState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRInput_Hand& Oculus::Interaction::OVR::OVRControllerInHandActiveState::__cordl_internal_get__handType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handType;
}
constexpr ::GlobalNamespace::OVRInput_Hand const& Oculus::Interaction::OVR::OVRControllerInHandActiveState::__cordl_internal_get__handType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handType;
}
constexpr void Oculus::Interaction::OVR::OVRControllerInHandActiveState::__cordl_internal_set__handType(::GlobalNamespace::OVRInput_Hand  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handType = value;
}
constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState& Oculus::Interaction::OVR::OVRControllerInHandActiveState::__cordl_internal_get__showState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showState;
}
constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState const& Oculus::Interaction::OVR::OVRControllerInHandActiveState::__cordl_internal_get__showState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showState;
}
constexpr void Oculus::Interaction::OVR::OVRControllerInHandActiveState::__cordl_internal_set__showState(::GlobalNamespace::OVRInput_InputDeviceShowState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____showState = value;
}
inline ::GlobalNamespace::OVRInput_Hand Oculus::Interaction::OVR::OVRControllerInHandActiveState::get_HandType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::OVRControllerInHandActiveState*>(),
                        {"get_HandType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_Hand>(this, ___internal_method);
}
inline void Oculus::Interaction::OVR::OVRControllerInHandActiveState::set_HandType(::GlobalNamespace::OVRInput_Hand  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::OVRControllerInHandActiveState*>(),
                        {"set_HandType", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Hand>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRInput_InputDeviceShowState Oculus::Interaction::OVR::OVRControllerInHandActiveState::get_ShowState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::OVRControllerInHandActiveState*>(),
                        {"get_ShowState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_InputDeviceShowState>(this, ___internal_method);
}
inline void Oculus::Interaction::OVR::OVRControllerInHandActiveState::set_ShowState(::GlobalNamespace::OVRInput_InputDeviceShowState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::OVRControllerInHandActiveState*>(),
                        {"set_ShowState", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_InputDeviceShowState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::OVR::OVRControllerInHandActiveState::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::OVRControllerInHandActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::OVR::OVRControllerInHandActiveState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::OVRControllerInHandActiveState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::OVR::OVRControllerInHandActiveState* Oculus::Interaction::OVR::OVRControllerInHandActiveState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::OVR::OVRControllerInHandActiveState*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::OVR::OVRControllerInHandActiveState::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::OVR::OVRControllerInHandActiveState::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::OVR::OVRControllerInHandActiveState::OVRControllerInHandActiveState()   {
}
