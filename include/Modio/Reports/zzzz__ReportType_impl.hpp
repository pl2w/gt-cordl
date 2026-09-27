#pragma once
// IWYU pragma private; include "Modio/Reports/ReportType.hpp"
#include "Modio/Reports/zzzz__ReportType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Reports::ReportType::ReportType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Reports::ReportType::ReportType()   {
}
constexpr ::Modio::Reports::ReportType  Modio::Reports::ReportType::Generic{static_cast<int32_t>(0x0)};
constexpr ::Modio::Reports::ReportType  Modio::Reports::ReportType::DMCA{static_cast<int32_t>(0x1)};
constexpr ::Modio::Reports::ReportType  Modio::Reports::ReportType::NotWorking{static_cast<int32_t>(0x2)};
constexpr ::Modio::Reports::ReportType  Modio::Reports::ReportType::RudeContent{static_cast<int32_t>(0x3)};
constexpr ::Modio::Reports::ReportType  Modio::Reports::ReportType::IllegalContent{static_cast<int32_t>(0x4)};
constexpr ::Modio::Reports::ReportType  Modio::Reports::ReportType::StolenContent{static_cast<int32_t>(0x5)};
constexpr ::Modio::Reports::ReportType  Modio::Reports::ReportType::FalseInformation{static_cast<int32_t>(0x6)};
constexpr ::Modio::Reports::ReportType  Modio::Reports::ReportType::Other{static_cast<int32_t>(0x7)};
