#pragma once
// IWYU pragma private; include "GlobalNamespace/GameStateFx_StateReaction_EOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameStateFx_StateReaction_EOptions)
// Forward declare root types
namespace GlobalNamespace {
struct StateReaction_GameStateFx_EOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StateReaction_GameStateFx_EOptions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StateReaction_GameStateFx_EOptions, "", "GameStateFx/StateReaction/EOptions");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameStateFx/StateReaction/EOptions
struct CORDL_TYPE StateReaction_GameStateFx_EOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StateReaction_GameStateFx_EOptions_Unwrapped
enum struct __StateReaction_GameStateFx_EOptions_Unwrapped : int32_t {
__E_Delay = static_cast<int32_t>(0x1),
__E_Sound = static_cast<int32_t>(0x2),
__E_GameObjects = static_cast<int32_t>(0x4),
__E_Behaviours = static_cast<int32_t>(0x8),
__E_Renderers = static_cast<int32_t>(0x10),
__E_Materials = static_cast<int32_t>(0x20),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StateReaction_GameStateFx_EOptions_Unwrapped () const noexcept {
return static_cast<__StateReaction_GameStateFx_EOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StateReaction_GameStateFx_EOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr StateReaction_GameStateFx_EOptions(int32_t  value__) noexcept;

/// @brief Field Behaviours value: I32(8)
static ::GlobalNamespace::StateReaction_GameStateFx_EOptions const Behaviours;

/// @brief Field Delay value: I32(1)
static ::GlobalNamespace::StateReaction_GameStateFx_EOptions const Delay;

/// @brief Field GameObjects value: I32(4)
static ::GlobalNamespace::StateReaction_GameStateFx_EOptions const GameObjects;

/// @brief Field Materials value: I32(32)
static ::GlobalNamespace::StateReaction_GameStateFx_EOptions const Materials;

/// @brief Field Renderers value: I32(16)
static ::GlobalNamespace::StateReaction_GameStateFx_EOptions const Renderers;

/// @brief Field Sound value: I32(2)
static ::GlobalNamespace::StateReaction_GameStateFx_EOptions const Sound;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{660};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StateReaction_GameStateFx_EOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StateReaction_GameStateFx_EOptions) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
