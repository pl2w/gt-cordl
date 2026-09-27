#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/TextureBlenderHDRPLit_MaterialType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureBlenderHDRPLit_MaterialType)
// Forward declare root types
namespace GlobalNamespace {
struct TextureBlenderHDRPLit_MaterialType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TextureBlenderHDRPLit_MaterialType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextureBlenderHDRPLit_MaterialType, "DigitalOpus.MB.Core", "TextureBlenderHDRPLit/MaterialType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.TextureBlenderHDRPLit/MaterialType
struct CORDL_TYPE TextureBlenderHDRPLit_MaterialType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TextureBlenderHDRPLit_MaterialType_Unwrapped
enum struct __TextureBlenderHDRPLit_MaterialType_Unwrapped : int32_t {
__E_unknown = static_cast<int32_t>(0x0),
__E_subsurfaceScattering = static_cast<int32_t>(0x1),
__E_standard = static_cast<int32_t>(0x2),
__E_anisotropy = static_cast<int32_t>(0x3),
__E_iridescence = static_cast<int32_t>(0x4),
__E_specularColor = static_cast<int32_t>(0x5),
__E_translucent = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextureBlenderHDRPLit_MaterialType_Unwrapped () const noexcept {
return static_cast<__TextureBlenderHDRPLit_MaterialType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TextureBlenderHDRPLit_MaterialType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TextureBlenderHDRPLit_MaterialType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22849};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field anisotropy value: I32(3)
static ::GlobalNamespace::TextureBlenderHDRPLit_MaterialType const anisotropy;

/// @brief Field iridescence value: I32(4)
static ::GlobalNamespace::TextureBlenderHDRPLit_MaterialType const iridescence;

/// @brief Field specularColor value: I32(5)
static ::GlobalNamespace::TextureBlenderHDRPLit_MaterialType const specularColor;

/// @brief Field standard value: I32(2)
static ::GlobalNamespace::TextureBlenderHDRPLit_MaterialType const standard;

/// @brief Field subsurfaceScattering value: I32(1)
static ::GlobalNamespace::TextureBlenderHDRPLit_MaterialType const subsurfaceScattering;

/// @brief Field translucent value: I32(6)
static ::GlobalNamespace::TextureBlenderHDRPLit_MaterialType const translucent;

/// @brief Field unknown value: I32(0)
static ::GlobalNamespace::TextureBlenderHDRPLit_MaterialType const unknown;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextureBlenderHDRPLit_MaterialType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextureBlenderHDRPLit_MaterialType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
