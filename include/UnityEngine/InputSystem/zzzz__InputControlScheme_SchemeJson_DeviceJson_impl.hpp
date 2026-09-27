#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlScheme_SchemeJson_DeviceJson.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_SchemeJson_DeviceJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_DeviceRequirement_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson.ToDeviceEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlScheme_DeviceRequirement (::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson::*)()>(&::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson::ToDeviceEntry)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaf4bbc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson>(),
                        {"ToDeviceEntry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson.From
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson (*)(::GlobalNamespace::InputControlScheme_DeviceRequirement)>(&::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson::From)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaf4bd6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson>(),
                        {"From", {}, {::i2c::type_of<::GlobalNamespace::InputControlScheme_DeviceRequirement>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::InputControlScheme_DeviceRequirement GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson::ToDeviceEntry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson>(),
                        {"ToDeviceEntry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlScheme_DeviceRequirement>(*this, ___internal_method);
}
inline ::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson::From(::GlobalNamespace::InputControlScheme_DeviceRequirement  requirement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson>(),
                        {"From", {}, {::i2c::type_of<::GlobalNamespace::InputControlScheme_DeviceRequirement>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson>(nullptr, ___internal_method, requirement);
}
// Ctor Parameters [CppParam { name: "devicePath", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isOptional", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isOR", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson::SchemeJson_InputControlScheme_DeviceJson(::StringW  devicePath, bool  isOptional, bool  isOR) noexcept  {
this->devicePath = devicePath;
this->isOptional = isOptional;
this->isOR = isOR;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson::SchemeJson_InputControlScheme_DeviceJson()   {
}
