#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/InputManagerProvider_Configuration.hpp"
#include "UnityEngine/InputForUI/zzzz__InputManagerProvider_Configuration_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputManagerProvider_Configuration.GetDefaultConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputManagerProvider_Configuration (*)()>(&::GlobalNamespace::InputManagerProvider_Configuration::GetDefaultConfiguration)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xb662584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManagerProvider_Configuration>(),
                        {"GetDefaultConfiguration", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::InputManagerProvider_Configuration GlobalNamespace::InputManagerProvider_Configuration::GetDefaultConfiguration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManagerProvider_Configuration>(),
                        {"GetDefaultConfiguration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputManagerProvider_Configuration>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "HorizontalAxis", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "VerticalAxis", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SubmitButton", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CancelButton", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NavigateNextButton", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NavigatePreviousButton", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "InputActionsPerSecond", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RepeatDelay", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputManagerProvider_Configuration::InputManagerProvider_Configuration(::StringW  HorizontalAxis, ::StringW  VerticalAxis, ::StringW  SubmitButton, ::StringW  CancelButton, ::StringW  NavigateNextButton, ::StringW  NavigatePreviousButton, float_t  InputActionsPerSecond, float_t  RepeatDelay) noexcept  {
this->HorizontalAxis = HorizontalAxis;
this->VerticalAxis = VerticalAxis;
this->SubmitButton = SubmitButton;
this->CancelButton = CancelButton;
this->NavigateNextButton = NavigateNextButton;
this->NavigatePreviousButton = NavigatePreviousButton;
this->InputActionsPerSecond = InputActionsPerSecond;
this->RepeatDelay = RepeatDelay;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputManagerProvider_Configuration::InputManagerProvider_Configuration()   {
}
