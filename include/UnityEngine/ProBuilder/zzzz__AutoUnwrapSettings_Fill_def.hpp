#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/AutoUnwrapSettings_Fill.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AutoUnwrapSettings_Fill)
// Forward declare root types
namespace GlobalNamespace {
struct AutoUnwrapSettings_Fill;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AutoUnwrapSettings_Fill);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AutoUnwrapSettings_Fill, "UnityEngine.ProBuilder", "AutoUnwrapSettings/Fill");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.AutoUnwrapSettings/Fill
struct CORDL_TYPE AutoUnwrapSettings_Fill {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AutoUnwrapSettings_Fill_Unwrapped
enum struct __AutoUnwrapSettings_Fill_Unwrapped : int32_t {
__E_Fit = static_cast<int32_t>(0x0),
__E_Tile = static_cast<int32_t>(0x1),
__E_Stretch = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AutoUnwrapSettings_Fill_Unwrapped () const noexcept {
return static_cast<__AutoUnwrapSettings_Fill_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AutoUnwrapSettings_Fill() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AutoUnwrapSettings_Fill(int32_t  value__) noexcept;

/// @brief Field Fit value: I32(0)
static ::GlobalNamespace::AutoUnwrapSettings_Fill const Fit;

/// @brief Field Stretch value: I32(2)
static ::GlobalNamespace::AutoUnwrapSettings_Fill const Stretch;

/// @brief Field Tile value: I32(1)
static ::GlobalNamespace::AutoUnwrapSettings_Fill const Tile;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24185};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AutoUnwrapSettings_Fill, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AutoUnwrapSettings_Fill) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
