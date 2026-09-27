#pragma once
// IWYU pragma private; include "GorillaTagScripts/Flower_FlowerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Flower_FlowerState)
// Forward declare root types
namespace GlobalNamespace {
struct Flower_FlowerState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Flower_FlowerState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Flower_FlowerState, "GorillaTagScripts", "Flower/FlowerState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.Flower/FlowerState
struct CORDL_TYPE Flower_FlowerState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Flower_FlowerState_Unwrapped
enum struct __Flower_FlowerState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0xffffffff),
__E_Healthy = static_cast<int32_t>(0x0),
__E_Middle = static_cast<int32_t>(0x1),
__E_Wilted = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Flower_FlowerState_Unwrapped () const noexcept {
return static_cast<__Flower_FlowerState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Flower_FlowerState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Flower_FlowerState(int32_t  value__) noexcept;

/// @brief Field Healthy value: I32(0)
static ::GlobalNamespace::Flower_FlowerState const Healthy;

/// @brief Field Middle value: I32(1)
static ::GlobalNamespace::Flower_FlowerState const Middle;

/// @brief Field None value: I32(-1)
static ::GlobalNamespace::Flower_FlowerState const None;

/// @brief Field Wilted value: I32(2)
static ::GlobalNamespace::Flower_FlowerState const Wilted;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3972};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Flower_FlowerState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Flower_FlowerState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
