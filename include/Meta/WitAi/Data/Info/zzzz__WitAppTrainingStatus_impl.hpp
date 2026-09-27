#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Info/WitAppTrainingStatus.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitAppTrainingStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::WitAi::Data::Info::WitAppTrainingStatus::WitAppTrainingStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::Info::WitAppTrainingStatus::WitAppTrainingStatus()   {
}
constexpr ::Meta::WitAi::Data::Info::WitAppTrainingStatus  Meta::WitAi::Data::Info::WitAppTrainingStatus::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Meta::WitAi::Data::Info::WitAppTrainingStatus  Meta::WitAi::Data::Info::WitAppTrainingStatus::Done{static_cast<int32_t>(0x1)};
constexpr ::Meta::WitAi::Data::Info::WitAppTrainingStatus  Meta::WitAi::Data::Info::WitAppTrainingStatus::Scheduled{static_cast<int32_t>(0x2)};
constexpr ::Meta::WitAi::Data::Info::WitAppTrainingStatus  Meta::WitAi::Data::Info::WitAppTrainingStatus::Ongoing{static_cast<int32_t>(0x3)};
