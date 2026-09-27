#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtTagType.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtTagType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::GorillaTag::GtTagType::GtTagType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GtTagType::GtTagType()   {
}
constexpr ::Liv::Lck::GorillaTag::GtTagType  Liv::Lck::GorillaTag::GtTagType::Player{static_cast<int32_t>(0x0)};
constexpr ::Liv::Lck::GorillaTag::GtTagType  Liv::Lck::GorillaTag::GtTagType::HMD{static_cast<int32_t>(0x1)};
constexpr ::Liv::Lck::GorillaTag::GtTagType  Liv::Lck::GorillaTag::GtTagType::LeftHand{static_cast<int32_t>(0x2)};
constexpr ::Liv::Lck::GorillaTag::GtTagType  Liv::Lck::GorillaTag::GtTagType::RightHand{static_cast<int32_t>(0x3)};
