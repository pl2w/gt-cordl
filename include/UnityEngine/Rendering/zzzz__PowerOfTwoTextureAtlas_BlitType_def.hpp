#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PowerOfTwoTextureAtlas_BlitType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PowerOfTwoTextureAtlas_BlitType)
// Forward declare root types
namespace GlobalNamespace {
struct PowerOfTwoTextureAtlas_BlitType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PowerOfTwoTextureAtlas_BlitType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PowerOfTwoTextureAtlas_BlitType, "UnityEngine.Rendering", "PowerOfTwoTextureAtlas/BlitType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.PowerOfTwoTextureAtlas/BlitType
struct CORDL_TYPE PowerOfTwoTextureAtlas_BlitType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PowerOfTwoTextureAtlas_BlitType_Unwrapped
enum struct __PowerOfTwoTextureAtlas_BlitType_Unwrapped : int32_t {
__E_Padding = static_cast<int32_t>(0x0),
__E_PaddingMultiply = static_cast<int32_t>(0x1),
__E_OctahedralPadding = static_cast<int32_t>(0x2),
__E_OctahedralPaddingMultiply = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PowerOfTwoTextureAtlas_BlitType_Unwrapped () const noexcept {
return static_cast<__PowerOfTwoTextureAtlas_BlitType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PowerOfTwoTextureAtlas_BlitType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PowerOfTwoTextureAtlas_BlitType(int32_t  value__) noexcept;

/// @brief Field OctahedralPadding value: I32(2)
static ::GlobalNamespace::PowerOfTwoTextureAtlas_BlitType const OctahedralPadding;

/// @brief Field OctahedralPaddingMultiply value: I32(3)
static ::GlobalNamespace::PowerOfTwoTextureAtlas_BlitType const OctahedralPaddingMultiply;

/// @brief Field Padding value: I32(0)
static ::GlobalNamespace::PowerOfTwoTextureAtlas_BlitType const Padding;

/// @brief Field PaddingMultiply value: I32(1)
static ::GlobalNamespace::PowerOfTwoTextureAtlas_BlitType const PaddingMultiply;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16960};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PowerOfTwoTextureAtlas_BlitType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PowerOfTwoTextureAtlas_BlitType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
