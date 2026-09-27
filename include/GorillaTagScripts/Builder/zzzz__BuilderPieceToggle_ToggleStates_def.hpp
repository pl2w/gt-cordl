#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderPieceToggle_ToggleStates.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPieceToggle_ToggleStates)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderPieceToggle_ToggleStates;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderPieceToggle_ToggleStates);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPieceToggle_ToggleStates, "GorillaTagScripts.Builder", "BuilderPieceToggle/ToggleStates");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.Builder.BuilderPieceToggle/ToggleStates
struct CORDL_TYPE BuilderPieceToggle_ToggleStates {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuilderPieceToggle_ToggleStates_Unwrapped
enum struct __BuilderPieceToggle_ToggleStates_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_On = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuilderPieceToggle_ToggleStates_Unwrapped () const noexcept {
return static_cast<__BuilderPieceToggle_ToggleStates_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceToggle_ToggleStates() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderPieceToggle_ToggleStates(int32_t  value__) noexcept;

/// @brief Field Off value: I32(0)
static ::GlobalNamespace::BuilderPieceToggle_ToggleStates const Off;

/// @brief Field On value: I32(1)
static ::GlobalNamespace::BuilderPieceToggle_ToggleStates const On;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4163};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPieceToggle_ToggleStates, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPieceToggle_ToggleStates) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
