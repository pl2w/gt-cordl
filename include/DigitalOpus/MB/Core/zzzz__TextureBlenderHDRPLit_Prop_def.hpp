#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/TextureBlenderHDRPLit_Prop.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureBlenderHDRPLit_Prop)
// Forward declare root types
namespace GlobalNamespace {
struct TextureBlenderHDRPLit_Prop;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TextureBlenderHDRPLit_Prop);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextureBlenderHDRPLit_Prop, "DigitalOpus.MB.Core", "TextureBlenderHDRPLit/Prop");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.TextureBlenderHDRPLit/Prop
struct CORDL_TYPE TextureBlenderHDRPLit_Prop {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TextureBlenderHDRPLit_Prop_Unwrapped
enum struct __TextureBlenderHDRPLit_Prop_Unwrapped : int32_t {
__E_doColor = static_cast<int32_t>(0x0),
__E_doMask = static_cast<int32_t>(0x1),
__E_doSpecular = static_cast<int32_t>(0x2),
__E_doEmission = static_cast<int32_t>(0x3),
__E_doNone = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextureBlenderHDRPLit_Prop_Unwrapped () const noexcept {
return static_cast<__TextureBlenderHDRPLit_Prop_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TextureBlenderHDRPLit_Prop() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TextureBlenderHDRPLit_Prop(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22848};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field doColor value: I32(0)
static ::GlobalNamespace::TextureBlenderHDRPLit_Prop const doColor;

/// @brief Field doEmission value: I32(3)
static ::GlobalNamespace::TextureBlenderHDRPLit_Prop const doEmission;

/// @brief Field doMask value: I32(1)
static ::GlobalNamespace::TextureBlenderHDRPLit_Prop const doMask;

/// @brief Field doNone value: I32(4)
static ::GlobalNamespace::TextureBlenderHDRPLit_Prop const doNone;

/// @brief Field doSpecular value: I32(2)
static ::GlobalNamespace::TextureBlenderHDRPLit_Prop const doSpecular;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextureBlenderHDRPLit_Prop, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextureBlenderHDRPLit_Prop) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
