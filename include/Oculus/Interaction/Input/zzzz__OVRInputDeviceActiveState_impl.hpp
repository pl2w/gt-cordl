#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/OVRInputDeviceActiveState.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__OVRInputDeviceActiveState_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Controller_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRInputDeviceActiveState.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::OVRInputDeviceActiveState::*)()>(&::Oculus::Interaction::Input::OVRInputDeviceActiveState::get_Active)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa41fcac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRInputDeviceActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRInputDeviceActiveState.InjectAllOVRInputDeviceActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OVRInputDeviceActiveState::*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_Controller>*)>(&::Oculus::Interaction::Input::OVRInputDeviceActiveState::InjectAllOVRInputDeviceActiveState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41fe4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRInputDeviceActiveState*>(),
                        {"InjectAllOVRInputDeviceActiveState", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_Controller>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRInputDeviceActiveState.InjectControllerTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OVRInputDeviceActiveState::*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_Controller>*)>(&::Oculus::Interaction::Input::OVRInputDeviceActiveState::InjectControllerTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41fe54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRInputDeviceActiveState*>(),
                        {"InjectControllerTypes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_Controller>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRInputDeviceActiveState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OVRInputDeviceActiveState::*)()>(&::Oculus::Interaction::Input::OVRInputDeviceActiveState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41fe5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRInputDeviceActiveState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_Controller>*& Oculus::Interaction::Input::OVRInputDeviceActiveState::__cordl_internal_get__controllerTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerTypes;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_Controller>* const& Oculus::Interaction::Input::OVRInputDeviceActiveState::__cordl_internal_get__controllerTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerTypes;
}
constexpr void Oculus::Interaction::Input::OVRInputDeviceActiveState::__cordl_internal_set__controllerTypes(::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_Controller>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controllerTypes = value;
}
inline bool Oculus::Interaction::Input::OVRInputDeviceActiveState::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRInputDeviceActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::OVRInputDeviceActiveState::InjectAllOVRInputDeviceActiveState(::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_Controller>*  controllerTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRInputDeviceActiveState*>(),
                        {"InjectAllOVRInputDeviceActiveState", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_Controller>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerTypes);
}
inline void Oculus::Interaction::Input::OVRInputDeviceActiveState::InjectControllerTypes(::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_Controller>*  controllerTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRInputDeviceActiveState*>(),
                        {"InjectControllerTypes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_Controller>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerTypes);
}
inline void Oculus::Interaction::Input::OVRInputDeviceActiveState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRInputDeviceActiveState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::OVRInputDeviceActiveState* Oculus::Interaction::Input::OVRInputDeviceActiveState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::OVRInputDeviceActiveState*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::Input::OVRInputDeviceActiveState::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::Input::OVRInputDeviceActiveState::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::OVRInputDeviceActiveState::OVRInputDeviceActiveState()   {
}
