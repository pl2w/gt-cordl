#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Composites/AxisComposite_WhichSideWins.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AxisComposite_WhichSideWins)
// Forward declare root types
namespace GlobalNamespace {
struct AxisComposite_WhichSideWins;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AxisComposite_WhichSideWins);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AxisComposite_WhichSideWins, "UnityEngine.InputSystem.Composites", "AxisComposite/WhichSideWins");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Composites.AxisComposite/WhichSideWins
struct CORDL_TYPE AxisComposite_WhichSideWins {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AxisComposite_WhichSideWins_Unwrapped
enum struct __AxisComposite_WhichSideWins_Unwrapped : int32_t {
__E_Neither = static_cast<int32_t>(0x0),
__E_Positive = static_cast<int32_t>(0x1),
__E_Negative = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AxisComposite_WhichSideWins_Unwrapped () const noexcept {
return static_cast<__AxisComposite_WhichSideWins_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AxisComposite_WhichSideWins() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AxisComposite_WhichSideWins(int32_t  value__) noexcept;

/// @brief Field Negative value: I32(2)
static ::GlobalNamespace::AxisComposite_WhichSideWins const Negative;

/// @brief Field Neither value: I32(0)
static ::GlobalNamespace::AxisComposite_WhichSideWins const Neither;

/// @brief Field Positive value: I32(1)
static ::GlobalNamespace::AxisComposite_WhichSideWins const Positive;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13938};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AxisComposite_WhichSideWins, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AxisComposite_WhichSideWins) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
