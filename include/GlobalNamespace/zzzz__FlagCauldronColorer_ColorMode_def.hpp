#pragma once
// IWYU pragma private; include "GlobalNamespace/FlagCauldronColorer_ColorMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FlagCauldronColorer_ColorMode)
// Forward declare root types
namespace GlobalNamespace {
struct FlagCauldronColorer_ColorMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FlagCauldronColorer_ColorMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FlagCauldronColorer_ColorMode, "", "FlagCauldronColorer/ColorMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: FlagCauldronColorer/ColorMode
struct CORDL_TYPE FlagCauldronColorer_ColorMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FlagCauldronColorer_ColorMode_Unwrapped
enum struct __FlagCauldronColorer_ColorMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Red = static_cast<int32_t>(0x1),
__E_Green = static_cast<int32_t>(0x2),
__E_Blue = static_cast<int32_t>(0x3),
__E_Black = static_cast<int32_t>(0x4),
__E_Clear = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FlagCauldronColorer_ColorMode_Unwrapped () const noexcept {
return static_cast<__FlagCauldronColorer_ColorMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FlagCauldronColorer_ColorMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FlagCauldronColorer_ColorMode(int32_t  value__) noexcept;

/// @brief Field Black value: I32(4)
static ::GlobalNamespace::FlagCauldronColorer_ColorMode const Black;

/// @brief Field Blue value: I32(3)
static ::GlobalNamespace::FlagCauldronColorer_ColorMode const Blue;

/// @brief Field Clear value: I32(5)
static ::GlobalNamespace::FlagCauldronColorer_ColorMode const Clear;

/// @brief Field Green value: I32(2)
static ::GlobalNamespace::FlagCauldronColorer_ColorMode const Green;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::FlagCauldronColorer_ColorMode const None;

/// @brief Field Red value: I32(1)
static ::GlobalNamespace::FlagCauldronColorer_ColorMode const Red;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{826};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlagCauldronColorer_ColorMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FlagCauldronColorer_ColorMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
