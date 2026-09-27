#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Breadcrumbs/BacktraceBreadcrumbType.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__BacktraceBreadcrumbType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType::BacktraceBreadcrumbType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType::BacktraceBreadcrumbType()   {
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType::None{static_cast<int32_t>(0x0)};
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType::Manual{static_cast<int32_t>(0x1)};
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType::Log{static_cast<int32_t>(0x2)};
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType::Navigation{static_cast<int32_t>(0x4)};
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType::Http{static_cast<int32_t>(0x8)};
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType::System{static_cast<int32_t>(0x10)};
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType::User{static_cast<int32_t>(0x20)};
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType::Configuration{static_cast<int32_t>(0x40)};
