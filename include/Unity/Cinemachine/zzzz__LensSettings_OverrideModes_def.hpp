#pragma once
// IWYU pragma private; include "Unity/Cinemachine/LensSettings_OverrideModes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LensSettings_OverrideModes)
// Forward declare root types
namespace GlobalNamespace {
struct LensSettings_OverrideModes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LensSettings_OverrideModes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LensSettings_OverrideModes, "Unity.Cinemachine", "LensSettings/OverrideModes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.LensSettings/OverrideModes
struct CORDL_TYPE LensSettings_OverrideModes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LensSettings_OverrideModes_Unwrapped
enum struct __LensSettings_OverrideModes_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Orthographic = static_cast<int32_t>(0x1),
__E_Perspective = static_cast<int32_t>(0x2),
__E_Physical = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LensSettings_OverrideModes_Unwrapped () const noexcept {
return static_cast<__LensSettings_OverrideModes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LensSettings_OverrideModes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LensSettings_OverrideModes(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::LensSettings_OverrideModes const None;

/// @brief Field Orthographic value: I32(1)
static ::GlobalNamespace::LensSettings_OverrideModes const Orthographic;

/// @brief Field Perspective value: I32(2)
static ::GlobalNamespace::LensSettings_OverrideModes const Perspective;

/// @brief Field Physical value: I32(3)
static ::GlobalNamespace::LensSettings_OverrideModes const Physical;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22342};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LensSettings_OverrideModes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LensSettings_OverrideModes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
