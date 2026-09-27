#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Breadcrumbs/UnityEngineLogLevel.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__UnityEngineLogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel::UnityEngineLogLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel::UnityEngineLogLevel()   {
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel::None{static_cast<int32_t>(0x0)};
constexpr ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel::Debug{static_cast<int32_t>(0x1)};
constexpr ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel::Warning{static_cast<int32_t>(0x2)};
constexpr ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel::Info{static_cast<int32_t>(0x4)};
constexpr ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel::Fatal{static_cast<int32_t>(0x8)};
constexpr ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel::Error{static_cast<int32_t>(0x10)};
