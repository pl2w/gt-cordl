#pragma once
// IWYU pragma private; include "Liv/Lck/Core/LevelFilter.hpp"
#include "Liv/Lck/Core/zzzz__LevelFilter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::Core::LevelFilter::LevelFilter(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::LevelFilter::LevelFilter()   {
}
constexpr ::Liv::Lck::Core::LevelFilter  Liv::Lck::Core::LevelFilter::Off{static_cast<int32_t>(0x0)};
constexpr ::Liv::Lck::Core::LevelFilter  Liv::Lck::Core::LevelFilter::Error{static_cast<int32_t>(0x1)};
constexpr ::Liv::Lck::Core::LevelFilter  Liv::Lck::Core::LevelFilter::Warn{static_cast<int32_t>(0x2)};
constexpr ::Liv::Lck::Core::LevelFilter  Liv::Lck::Core::LevelFilter::Info{static_cast<int32_t>(0x3)};
constexpr ::Liv::Lck::Core::LevelFilter  Liv::Lck::Core::LevelFilter::Debug{static_cast<int32_t>(0x4)};
constexpr ::Liv::Lck::Core::LevelFilter  Liv::Lck::Core::LevelFilter::Trace{static_cast<int32_t>(0x5)};
