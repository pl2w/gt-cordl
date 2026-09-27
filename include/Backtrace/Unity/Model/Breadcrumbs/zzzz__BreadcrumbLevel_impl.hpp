#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Breadcrumbs/BreadcrumbLevel.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__BreadcrumbLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel::BreadcrumbLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel::BreadcrumbLevel()   {
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel::Manual{static_cast<int32_t>(0x1)};
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel::Log{static_cast<int32_t>(0x2)};
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel::Navigation{static_cast<int32_t>(0x4)};
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel::Http{static_cast<int32_t>(0x8)};
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel::System{static_cast<int32_t>(0x10)};
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel::User{static_cast<int32_t>(0x20)};
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel::Configuration{static_cast<int32_t>(0x40)};
