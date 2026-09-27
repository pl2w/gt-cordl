#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputDeviceMatcher_MatcherJson.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_MatcherJson_Capability_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_MatcherJson_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_MatcherJson_Capability_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputDeviceMatcher_MatcherJson.FromMatcher
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputDeviceMatcher_MatcherJson (*)(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(&::GlobalNamespace::InputDeviceMatcher_MatcherJson::FromMatcher)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0xaf34100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputDeviceMatcher_MatcherJson>(),
                        {"FromMatcher", {}, {::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputDeviceMatcher_MatcherJson.ToMatcher
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (::GlobalNamespace::InputDeviceMatcher_MatcherJson::*)()>(&::GlobalNamespace::InputDeviceMatcher_MatcherJson::ToMatcher)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0xaf34434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputDeviceMatcher_MatcherJson>(),
                        {"ToMatcher", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::InputDeviceMatcher_MatcherJson GlobalNamespace::InputDeviceMatcher_MatcherJson::FromMatcher(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  matcher)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputDeviceMatcher_MatcherJson>(),
                        {"FromMatcher", {}, {::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputDeviceMatcher_MatcherJson>(nullptr, ___internal_method, matcher);
}
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher GlobalNamespace::InputDeviceMatcher_MatcherJson::ToMatcher()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputDeviceMatcher_MatcherJson>(),
                        {"ToMatcher", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "interface", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "interfaces", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "deviceClass", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "deviceClasses", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "manufacturer", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "manufacturerContains", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "manufacturers", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "product", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "products", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "versions", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "capabilities", ty: "::ArrayW<::GlobalNamespace::MatcherJson_InputDeviceMatcher_Capability>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputDeviceMatcher_MatcherJson::InputDeviceMatcher_MatcherJson(::StringW  interface, ::ArrayW<::StringW>  interfaces, ::StringW  deviceClass, ::ArrayW<::StringW>  deviceClasses, ::StringW  manufacturer, ::StringW  manufacturerContains, ::ArrayW<::StringW>  manufacturers, ::StringW  product, ::ArrayW<::StringW>  products, ::StringW  version, ::ArrayW<::StringW>  versions, ::ArrayW<::GlobalNamespace::MatcherJson_InputDeviceMatcher_Capability>  capabilities) noexcept  {
this->interface = interface;
this->interfaces = interfaces;
this->deviceClass = deviceClass;
this->deviceClasses = deviceClasses;
this->manufacturer = manufacturer;
this->manufacturerContains = manufacturerContains;
this->manufacturers = manufacturers;
this->product = product;
this->products = products;
this->version = version;
this->versions = versions;
this->capabilities = capabilities;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputDeviceMatcher_MatcherJson::InputDeviceMatcher_MatcherJson()   {
}
