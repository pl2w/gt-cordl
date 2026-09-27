#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderPieceToggle_ToggleType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPieceToggle_ToggleType)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderPieceToggle_ToggleType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderPieceToggle_ToggleType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPieceToggle_ToggleType, "GorillaTagScripts.Builder", "BuilderPieceToggle/ToggleType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.Builder.BuilderPieceToggle/ToggleType
struct CORDL_TYPE BuilderPieceToggle_ToggleType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuilderPieceToggle_ToggleType_Unwrapped
enum struct __BuilderPieceToggle_ToggleType_Unwrapped : int32_t {
__E_OnTap = static_cast<int32_t>(0x0),
__E_OnTriggerEnter = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuilderPieceToggle_ToggleType_Unwrapped () const noexcept {
return static_cast<__BuilderPieceToggle_ToggleType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceToggle_ToggleType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderPieceToggle_ToggleType(int32_t  value__) noexcept;

/// @brief Field OnTap value: I32(0)
static ::GlobalNamespace::BuilderPieceToggle_ToggleType const OnTap;

/// @brief Field OnTriggerEnter value: I32(1)
static ::GlobalNamespace::BuilderPieceToggle_ToggleType const OnTriggerEnter;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4162};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPieceToggle_ToggleType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPieceToggle_ToggleType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
