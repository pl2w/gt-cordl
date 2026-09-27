#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Interactions/SectorInteraction_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SectorInteraction_State)
// Forward declare root types
namespace GlobalNamespace {
struct SectorInteraction_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SectorInteraction_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SectorInteraction_State, "UnityEngine.XR.Interaction.Toolkit.Inputs.Interactions", "SectorInteraction/State");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Interactions.SectorInteraction/State
struct CORDL_TYPE SectorInteraction_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SectorInteraction_State_Unwrapped
enum struct __SectorInteraction_State_Unwrapped : int32_t {
__E_Centered = static_cast<int32_t>(0x0),
__E_StartedValidDirection = static_cast<int32_t>(0x1),
__E_StartedInvalidDirection = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SectorInteraction_State_Unwrapped () const noexcept {
return static_cast<__SectorInteraction_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SectorInteraction_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SectorInteraction_State(int32_t  value__) noexcept;

/// @brief Field Centered value: I32(0)
static ::GlobalNamespace::SectorInteraction_State const Centered;

/// @brief Field StartedInvalidDirection value: I32(2)
static ::GlobalNamespace::SectorInteraction_State const StartedInvalidDirection;

/// @brief Field StartedValidDirection value: I32(1)
static ::GlobalNamespace::SectorInteraction_State const StartedValidDirection;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11666};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SectorInteraction_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SectorInteraction_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
