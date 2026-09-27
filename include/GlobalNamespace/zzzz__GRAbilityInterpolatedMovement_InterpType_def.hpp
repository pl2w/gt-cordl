#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityInterpolatedMovement_InterpType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRAbilityInterpolatedMovement_InterpType)
// Forward declare root types
namespace GlobalNamespace {
struct GRAbilityInterpolatedMovement_InterpType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRAbilityInterpolatedMovement_InterpType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAbilityInterpolatedMovement_InterpType, "", "GRAbilityInterpolatedMovement/InterpType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRAbilityInterpolatedMovement/InterpType
struct CORDL_TYPE GRAbilityInterpolatedMovement_InterpType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRAbilityInterpolatedMovement_InterpType_Unwrapped
enum struct __GRAbilityInterpolatedMovement_InterpType_Unwrapped : int32_t {
__E_Linear = static_cast<int32_t>(0x0),
__E_EaseOut = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRAbilityInterpolatedMovement_InterpType_Unwrapped () const noexcept {
return static_cast<__GRAbilityInterpolatedMovement_InterpType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRAbilityInterpolatedMovement_InterpType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRAbilityInterpolatedMovement_InterpType(int32_t  value__) noexcept;

/// @brief Field EaseOut value: I32(1)
static ::GlobalNamespace::GRAbilityInterpolatedMovement_InterpType const EaseOut;

/// @brief Field Linear value: I32(0)
static ::GlobalNamespace::GRAbilityInterpolatedMovement_InterpType const Linear;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1848};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAbilityInterpolatedMovement_InterpType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAbilityInterpolatedMovement_InterpType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
