#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputDeviceMatcher_MatcherJson_Capability.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputDeviceMatcher_MatcherJson_Capability)
// Forward declare root types
namespace GlobalNamespace {
struct MatcherJson_InputDeviceMatcher_Capability;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MatcherJson_InputDeviceMatcher_Capability);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MatcherJson_InputDeviceMatcher_Capability, "UnityEngine.InputSystem.Layouts", "InputDeviceMatcher/MatcherJson/Capability");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputDeviceMatcher/MatcherJson/Capability
struct CORDL_TYPE MatcherJson_InputDeviceMatcher_Capability {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MatcherJson_InputDeviceMatcher_Capability() ;

// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr MatcherJson_InputDeviceMatcher_Capability(::StringW  path, ::StringW  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13845};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field path, offset: 0x0, size: 0x8, def value: None
 ::StringW  path;

/// @brief Field value, offset: 0x8, size: 0x8, def value: None
 ::StringW  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MatcherJson_InputDeviceMatcher_Capability, path) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MatcherJson_InputDeviceMatcher_Capability, value) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MatcherJson_InputDeviceMatcher_Capability) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
