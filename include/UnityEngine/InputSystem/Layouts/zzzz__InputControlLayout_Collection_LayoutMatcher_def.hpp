#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputControlLayout_Collection_LayoutMatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputControlLayout_Collection_LayoutMatcher)
// Forward declare root types
namespace GlobalNamespace {
struct Collection_InputControlLayout_LayoutMatcher;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Collection_InputControlLayout_LayoutMatcher);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Collection_InputControlLayout_LayoutMatcher, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Collection/LayoutMatcher");
// Dependencies UnityEngine.InputSystem.Layouts.InputDeviceMatcher, UnityEngine.InputSystem.Utilities.InternedString
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher
struct CORDL_TYPE Collection_InputControlLayout_LayoutMatcher {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Collection_InputControlLayout_LayoutMatcher() ;

// Ctor Parameters [CppParam { name: "layoutName", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None, comment: None }, CppParam { name: "deviceMatcher", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceMatcher", modifiers: "", def_value: None, comment: None }]
constexpr Collection_InputControlLayout_LayoutMatcher(::UnityEngine::InputSystem::Utilities::InternedString  layoutName, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  deviceMatcher) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13831};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field layoutName, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::InternedString  layoutName;

/// @brief Field deviceMatcher, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  deviceMatcher;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Collection_InputControlLayout_LayoutMatcher, layoutName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Collection_InputControlLayout_LayoutMatcher, deviceMatcher) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Collection_InputControlLayout_LayoutMatcher) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
