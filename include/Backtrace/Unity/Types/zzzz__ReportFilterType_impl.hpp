#pragma once
// IWYU pragma private; include "Backtrace/Unity/Types/ReportFilterType.hpp"
#include "Backtrace/Unity/Types/zzzz__ReportFilterType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Backtrace::Unity::Types::ReportFilterType::ReportFilterType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Types::ReportFilterType::ReportFilterType()   {
}
constexpr ::Backtrace::Unity::Types::ReportFilterType  Backtrace::Unity::Types::ReportFilterType::None{static_cast<int32_t>(0x0)};
constexpr ::Backtrace::Unity::Types::ReportFilterType  Backtrace::Unity::Types::ReportFilterType::Message{static_cast<int32_t>(0x1)};
constexpr ::Backtrace::Unity::Types::ReportFilterType  Backtrace::Unity::Types::ReportFilterType::Exception{static_cast<int32_t>(0x2)};
constexpr ::Backtrace::Unity::Types::ReportFilterType  Backtrace::Unity::Types::ReportFilterType::UnhandledException{static_cast<int32_t>(0x4)};
constexpr ::Backtrace::Unity::Types::ReportFilterType  Backtrace::Unity::Types::ReportFilterType::Hang{static_cast<int32_t>(0x8)};
constexpr ::Backtrace::Unity::Types::ReportFilterType  Backtrace::Unity::Types::ReportFilterType::Error{static_cast<int32_t>(0x10)};
