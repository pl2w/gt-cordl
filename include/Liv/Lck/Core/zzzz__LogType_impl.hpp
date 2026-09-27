#pragma once
// IWYU pragma private; include "Liv/Lck/Core/LogType.hpp"
#include "Liv/Lck/Core/zzzz__LogType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::Core::LogType::LogType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::LogType::LogType()   {
}
constexpr ::Liv::Lck::Core::LogType  Liv::Lck::Core::LogType::Error{static_cast<int32_t>(0x0)};
constexpr ::Liv::Lck::Core::LogType  Liv::Lck::Core::LogType::Warning{static_cast<int32_t>(0x1)};
constexpr ::Liv::Lck::Core::LogType  Liv::Lck::Core::LogType::Info{static_cast<int32_t>(0x2)};
constexpr ::Liv::Lck::Core::LogType  Liv::Lck::Core::LogType::Trace{static_cast<int32_t>(0x3)};
