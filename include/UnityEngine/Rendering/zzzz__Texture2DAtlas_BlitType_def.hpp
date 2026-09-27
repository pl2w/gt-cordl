#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Texture2DAtlas_BlitType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Texture2DAtlas_BlitType)
// Forward declare root types
namespace GlobalNamespace {
struct Texture2DAtlas_BlitType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Texture2DAtlas_BlitType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Texture2DAtlas_BlitType, "UnityEngine.Rendering", "Texture2DAtlas/BlitType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Texture2DAtlas/BlitType
struct CORDL_TYPE Texture2DAtlas_BlitType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Texture2DAtlas_BlitType_Unwrapped
enum struct __Texture2DAtlas_BlitType_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_CubeTo2DOctahedral = static_cast<int32_t>(0x1),
__E_SingleChannel = static_cast<int32_t>(0x2),
__E_CubeTo2DOctahedralSingleChannel = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Texture2DAtlas_BlitType_Unwrapped () const noexcept {
return static_cast<__Texture2DAtlas_BlitType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Texture2DAtlas_BlitType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Texture2DAtlas_BlitType(int32_t  value__) noexcept;

/// @brief Field CubeTo2DOctahedral value: I32(1)
static ::GlobalNamespace::Texture2DAtlas_BlitType const CubeTo2DOctahedral;

/// @brief Field CubeTo2DOctahedralSingleChannel value: I32(3)
static ::GlobalNamespace::Texture2DAtlas_BlitType const CubeTo2DOctahedralSingleChannel;

/// @brief Field Default value: I32(0)
static ::GlobalNamespace::Texture2DAtlas_BlitType const Default;

/// @brief Field SingleChannel value: I32(2)
static ::GlobalNamespace::Texture2DAtlas_BlitType const SingleChannel;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16977};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Texture2DAtlas_BlitType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Texture2DAtlas_BlitType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
