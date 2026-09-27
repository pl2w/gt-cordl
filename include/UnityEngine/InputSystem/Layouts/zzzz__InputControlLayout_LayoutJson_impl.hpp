#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputControlLayout_LayoutJson.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_LayoutJson_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_LayoutJson.ToLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (::GlobalNamespace::InputControlLayout_LayoutJson::*)()>(&::GlobalNamespace::InputControlLayout_LayoutJson::ToLayout)> {
  constexpr static std::size_t size = 0x938;
  constexpr static std::size_t addrs = 0xb000890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_LayoutJson>(),
                        {"ToLayout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_LayoutJson.FromLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlLayout_LayoutJson (*)(::UnityEngine::InputSystem::Layouts::InputControlLayout*)>(&::GlobalNamespace::InputControlLayout_LayoutJson::FromLayout)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0xb000444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_LayoutJson>(),
                        {"FromLayout", {}, {::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* GlobalNamespace::InputControlLayout_LayoutJson::ToLayout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_LayoutJson>(),
                        {"ToLayout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(*this, ___internal_method);
}
inline ::GlobalNamespace::InputControlLayout_LayoutJson GlobalNamespace::InputControlLayout_LayoutJson::FromLayout(::UnityEngine::InputSystem::Layouts::InputControlLayout*  layout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_LayoutJson>(),
                        {"FromLayout", {}, {::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlLayout_LayoutJson>(nullptr, ___internal_method, layout);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "extend", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "extendMultiple", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "format", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "beforeRender", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "runInBackground", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "commonUsages", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "description", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "variant", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isGenericTypeOfDevice", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hideInUI", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "controls", ty: "::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputControlLayout_LayoutJson::InputControlLayout_LayoutJson(::StringW  name, ::StringW  extend, ::ArrayW<::StringW>  extendMultiple, ::StringW  format, ::StringW  beforeRender, ::StringW  runInBackground, ::ArrayW<::StringW>  commonUsages, ::StringW  displayName, ::StringW  description, ::StringW  type, ::StringW  variant, bool  isGenericTypeOfDevice, bool  hideInUI, ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>  controls) noexcept  {
this->name = name;
this->extend = extend;
this->extendMultiple = extendMultiple;
this->format = format;
this->beforeRender = beforeRender;
this->runInBackground = runInBackground;
this->commonUsages = commonUsages;
this->displayName = displayName;
this->description = description;
this->type = type;
this->variant = variant;
this->isGenericTypeOfDevice = isGenericTypeOfDevice;
this->hideInUI = hideInUI;
this->controls = controls;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputControlLayout_LayoutJson::InputControlLayout_LayoutJson()   {
}
