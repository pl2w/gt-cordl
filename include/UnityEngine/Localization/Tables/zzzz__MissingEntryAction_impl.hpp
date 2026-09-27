#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/MissingEntryAction.hpp"
#include "UnityEngine/Localization/Tables/zzzz__MissingEntryAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Localization::Tables::MissingEntryAction::MissingEntryAction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Tables::MissingEntryAction::MissingEntryAction()   {
}
constexpr ::UnityEngine::Localization::Tables::MissingEntryAction  UnityEngine::Localization::Tables::MissingEntryAction::Nothing{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Localization::Tables::MissingEntryAction  UnityEngine::Localization::Tables::MissingEntryAction::AddEntriesToSharedData{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Localization::Tables::MissingEntryAction  UnityEngine::Localization::Tables::MissingEntryAction::RemoveEntriesFromTable{static_cast<int32_t>(0x2)};
