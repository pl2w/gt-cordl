#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/EntryOverrideType.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__EntryOverrideType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Localization::Metadata::EntryOverrideType::EntryOverrideType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Metadata::EntryOverrideType::EntryOverrideType()   {
}
constexpr ::UnityEngine::Localization::Metadata::EntryOverrideType  UnityEngine::Localization::Metadata::EntryOverrideType::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Localization::Metadata::EntryOverrideType  UnityEngine::Localization::Metadata::EntryOverrideType::Table{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Localization::Metadata::EntryOverrideType  UnityEngine::Localization::Metadata::EntryOverrideType::Entry{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Localization::Metadata::EntryOverrideType  UnityEngine::Localization::Metadata::EntryOverrideType::TableAndEntry{static_cast<int32_t>(0x3)};
