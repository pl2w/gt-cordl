#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/DistanceCheckerCosmetic_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DistanceCheckerCosmetic_State)
// Forward declare root types
namespace GlobalNamespace {
struct DistanceCheckerCosmetic_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DistanceCheckerCosmetic_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DistanceCheckerCosmetic_State, "GorillaTag.Cosmetics", "DistanceCheckerCosmetic/State");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.DistanceCheckerCosmetic/State
struct CORDL_TYPE DistanceCheckerCosmetic_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DistanceCheckerCosmetic_State_Unwrapped
enum struct __DistanceCheckerCosmetic_State_Unwrapped : int32_t {
__E_AboveThreshold = static_cast<int32_t>(0x0),
__E_BelowThreshold = static_cast<int32_t>(0x1),
__E_None = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DistanceCheckerCosmetic_State_Unwrapped () const noexcept {
return static_cast<__DistanceCheckerCosmetic_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DistanceCheckerCosmetic_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DistanceCheckerCosmetic_State(int32_t  value__) noexcept;

/// @brief Field AboveThreshold value: I32(0)
static ::GlobalNamespace::DistanceCheckerCosmetic_State const AboveThreshold;

/// @brief Field BelowThreshold value: I32(1)
static ::GlobalNamespace::DistanceCheckerCosmetic_State const BelowThreshold;

/// @brief Field None value: I32(2)
static ::GlobalNamespace::DistanceCheckerCosmetic_State const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4911};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DistanceCheckerCosmetic_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DistanceCheckerCosmetic_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
