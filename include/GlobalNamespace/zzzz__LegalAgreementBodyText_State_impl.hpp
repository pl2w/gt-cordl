#pragma once
// IWYU pragma private; include "GlobalNamespace/LegalAgreementBodyText_State.hpp"
#include "GlobalNamespace/zzzz__LegalAgreementBodyText_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LegalAgreementBodyText_State::LegalAgreementBodyText_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LegalAgreementBodyText_State::LegalAgreementBodyText_State()   {
}
constexpr ::GlobalNamespace::LegalAgreementBodyText_State  GlobalNamespace::LegalAgreementBodyText_State::Ready{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LegalAgreementBodyText_State  GlobalNamespace::LegalAgreementBodyText_State::Loading{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LegalAgreementBodyText_State  GlobalNamespace::LegalAgreementBodyText_State::Error{static_cast<int32_t>(0x2)};
