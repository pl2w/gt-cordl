#pragma once
// IWYU pragma private; include "Modio/Customizations/AgreementType.hpp"
#include "Modio/Customizations/zzzz__AgreementType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Customizations::AgreementType::AgreementType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Customizations::AgreementType::AgreementType()   {
}
constexpr ::Modio::Customizations::AgreementType  Modio::Customizations::AgreementType::TermsOfUse{static_cast<int32_t>(0x1)};
constexpr ::Modio::Customizations::AgreementType  Modio::Customizations::AgreementType::PrivacyPolicy{static_cast<int32_t>(0x2)};
constexpr ::Modio::Customizations::AgreementType  Modio::Customizations::AgreementType::GameTerms{static_cast<int32_t>(0x3)};
constexpr ::Modio::Customizations::AgreementType  Modio::Customizations::AgreementType::APIAccessTerms{static_cast<int32_t>(0x4)};
constexpr ::Modio::Customizations::AgreementType  Modio::Customizations::AgreementType::MonetizationTerms{static_cast<int32_t>(0x5)};
constexpr ::Modio::Customizations::AgreementType  Modio::Customizations::AgreementType::AcceptableUsePolicy{static_cast<int32_t>(0x6)};
constexpr ::Modio::Customizations::AgreementType  Modio::Customizations::AgreementType::CookiesPolicy{static_cast<int32_t>(0x7)};
constexpr ::Modio::Customizations::AgreementType  Modio::Customizations::AgreementType::RefundPolicy{static_cast<int32_t>(0x8)};
