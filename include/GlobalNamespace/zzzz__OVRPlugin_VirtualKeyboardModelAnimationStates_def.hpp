#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_VirtualKeyboardModelAnimationStates.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_VirtualKeyboardModelAnimationState_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_VirtualKeyboardModelAnimationStates)
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardModelAnimationState;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardModelAnimationStates;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStates);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStates, "", "OVRPlugin/VirtualKeyboardModelAnimationStates");
// Dependencies OVRPlugin::VirtualKeyboardModelAnimationState
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/VirtualKeyboardModelAnimationStates
struct CORDL_TYPE OVRPlugin_VirtualKeyboardModelAnimationStates {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_VirtualKeyboardModelAnimationStates() ;

// Ctor Parameters [CppParam { name: "States", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationState>", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_VirtualKeyboardModelAnimationStates(::ArrayW<::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationState>  States) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12192};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field States, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationState>  States;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStates, States) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStates) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
