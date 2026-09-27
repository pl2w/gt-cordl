#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlScheme_SchemeJson.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_SchemeJson_DeviceJson_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_SchemeJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_SchemeJson_DeviceJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputControlScheme_SchemeJson.ToScheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlScheme (::GlobalNamespace::InputControlScheme_SchemeJson::*)()>(&::GlobalNamespace::InputControlScheme_SchemeJson::ToScheme)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xaf4ba5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_SchemeJson>(),
                        {"ToScheme", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlScheme_SchemeJson.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlScheme_SchemeJson (*)(::UnityEngine::InputSystem::InputControlScheme)>(&::GlobalNamespace::InputControlScheme_SchemeJson::ToJson)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xaf4bc0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_SchemeJson>(),
                        {"ToJson", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlScheme_SchemeJson.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::InputControlScheme_SchemeJson> (*)(::ArrayW<::UnityEngine::InputSystem::InputControlScheme>)>(&::GlobalNamespace::InputControlScheme_SchemeJson::ToJson)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xaf4bda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_SchemeJson>(),
                        {"ToJson", {}, {::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::InputControlScheme>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlScheme_SchemeJson.ToSchemes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::InputSystem::InputControlScheme> (*)(::ArrayW<::GlobalNamespace::InputControlScheme_SchemeJson>)>(&::GlobalNamespace::InputControlScheme_SchemeJson::ToSchemes)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xaf4bea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_SchemeJson>(),
                        {"ToSchemes", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::InputControlScheme_SchemeJson>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::InputControlScheme GlobalNamespace::InputControlScheme_SchemeJson::ToScheme()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_SchemeJson>(),
                        {"ToScheme", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlScheme>(*this, ___internal_method);
}
inline ::GlobalNamespace::InputControlScheme_SchemeJson GlobalNamespace::InputControlScheme_SchemeJson::ToJson(::UnityEngine::InputSystem::InputControlScheme  scheme)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_SchemeJson>(),
                        {"ToJson", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlScheme_SchemeJson>(nullptr, ___internal_method, scheme);
}
inline ::ArrayW<::GlobalNamespace::InputControlScheme_SchemeJson> GlobalNamespace::InputControlScheme_SchemeJson::ToJson(::ArrayW<::UnityEngine::InputSystem::InputControlScheme>  schemes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_SchemeJson>(),
                        {"ToJson", {}, {::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::InputControlScheme>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::InputControlScheme_SchemeJson>>(nullptr, ___internal_method, schemes);
}
inline ::ArrayW<::UnityEngine::InputSystem::InputControlScheme> GlobalNamespace::InputControlScheme_SchemeJson::ToSchemes(::ArrayW<::GlobalNamespace::InputControlScheme_SchemeJson>  schemes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlScheme_SchemeJson>(),
                        {"ToSchemes", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::InputControlScheme_SchemeJson>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::InputControlScheme>>(nullptr, ___internal_method, schemes);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bindingGroup", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "devices", ty: "::ArrayW<::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputControlScheme_SchemeJson::InputControlScheme_SchemeJson(::StringW  name, ::StringW  bindingGroup, ::ArrayW<::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson>  devices) noexcept  {
this->name = name;
this->bindingGroup = bindingGroup;
this->devices = devices;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputControlScheme_SchemeJson::InputControlScheme_SchemeJson()   {
}
