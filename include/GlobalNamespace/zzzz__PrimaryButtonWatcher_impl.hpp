#pragma once
// IWYU pragma private; include "GlobalNamespace/PrimaryButtonWatcher.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PrimaryButtonWatcher_def.hpp"
#include "GlobalNamespace/zzzz__PrimaryButtonEvent_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PrimaryButtonWatcher.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PrimaryButtonWatcher::*)()>(&::GlobalNamespace::PrimaryButtonWatcher::Awake)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x579ec94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrimaryButtonWatcher*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrimaryButtonWatcher.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PrimaryButtonWatcher::*)()>(&::GlobalNamespace::PrimaryButtonWatcher::OnEnable)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x579ed50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrimaryButtonWatcher*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrimaryButtonWatcher.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PrimaryButtonWatcher::*)()>(&::GlobalNamespace::PrimaryButtonWatcher::OnDisable)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x579f048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrimaryButtonWatcher*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrimaryButtonWatcher.InputDevices_deviceConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PrimaryButtonWatcher::*)(::UnityEngine::XR::InputDevice)>(&::GlobalNamespace::PrimaryButtonWatcher::InputDevices_deviceConnected)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x579ef58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrimaryButtonWatcher*>(),
                        {"InputDevices_deviceConnected", {}, {::i2c::type_of<::UnityEngine::XR::InputDevice>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrimaryButtonWatcher.InputDevices_deviceDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PrimaryButtonWatcher::*)(::UnityEngine::XR::InputDevice)>(&::GlobalNamespace::PrimaryButtonWatcher::InputDevices_deviceDisconnected)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x579f12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrimaryButtonWatcher*>(),
                        {"InputDevices_deviceDisconnected", {}, {::i2c::type_of<::UnityEngine::XR::InputDevice>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrimaryButtonWatcher.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PrimaryButtonWatcher::*)()>(&::GlobalNamespace::PrimaryButtonWatcher::Update)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x579f1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrimaryButtonWatcher*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrimaryButtonWatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PrimaryButtonWatcher::*)()>(&::GlobalNamespace::PrimaryButtonWatcher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579f3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrimaryButtonWatcher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PrimaryButtonEvent*& GlobalNamespace::PrimaryButtonWatcher::__cordl_internal_get_primaryButtonPress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryButtonPress;
}
constexpr ::GlobalNamespace::PrimaryButtonEvent* const& GlobalNamespace::PrimaryButtonWatcher::__cordl_internal_get_primaryButtonPress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryButtonPress;
}
constexpr void GlobalNamespace::PrimaryButtonWatcher::__cordl_internal_set_primaryButtonPress(::GlobalNamespace::PrimaryButtonEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___primaryButtonPress = value;
}
constexpr bool& GlobalNamespace::PrimaryButtonWatcher::__cordl_internal_get_lastButtonState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastButtonState;
}
constexpr bool const& GlobalNamespace::PrimaryButtonWatcher::__cordl_internal_get_lastButtonState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastButtonState;
}
constexpr void GlobalNamespace::PrimaryButtonWatcher::__cordl_internal_set_lastButtonState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastButtonState = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*& GlobalNamespace::PrimaryButtonWatcher::__cordl_internal_get_devicesWithPrimaryButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___devicesWithPrimaryButton;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>* const& GlobalNamespace::PrimaryButtonWatcher::__cordl_internal_get_devicesWithPrimaryButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___devicesWithPrimaryButton;
}
constexpr void GlobalNamespace::PrimaryButtonWatcher::__cordl_internal_set_devicesWithPrimaryButton(::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___devicesWithPrimaryButton = value;
}
inline void GlobalNamespace::PrimaryButtonWatcher::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrimaryButtonWatcher*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PrimaryButtonWatcher::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrimaryButtonWatcher*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PrimaryButtonWatcher::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrimaryButtonWatcher*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PrimaryButtonWatcher::InputDevices_deviceConnected(::UnityEngine::XR::InputDevice  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrimaryButtonWatcher*>(),
                        {"InputDevices_deviceConnected", {}, {::i2c::type_of<::UnityEngine::XR::InputDevice>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, device);
}
inline void GlobalNamespace::PrimaryButtonWatcher::InputDevices_deviceDisconnected(::UnityEngine::XR::InputDevice  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrimaryButtonWatcher*>(),
                        {"InputDevices_deviceDisconnected", {}, {::i2c::type_of<::UnityEngine::XR::InputDevice>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, device);
}
inline void GlobalNamespace::PrimaryButtonWatcher::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrimaryButtonWatcher*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PrimaryButtonWatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrimaryButtonWatcher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PrimaryButtonWatcher* GlobalNamespace::PrimaryButtonWatcher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PrimaryButtonWatcher*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PrimaryButtonWatcher::PrimaryButtonWatcher()   {
}
