#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/TextureBlenderURPLit_Prop.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureBlenderURPLit_Prop)
// Forward declare root types
namespace GlobalNamespace {
struct TextureBlenderURPLit_Prop;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TextureBlenderURPLit_Prop);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextureBlenderURPLit_Prop, "DigitalOpus.MB.Core", "TextureBlenderURPLit/Prop");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.TextureBlenderURPLit/Prop
struct CORDL_TYPE TextureBlenderURPLit_Prop {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TextureBlenderURPLit_Prop_Unwrapped
enum struct __TextureBlenderURPLit_Prop_Unwrapped : int32_t {
__E_doColor = static_cast<int32_t>(0x0),
__E_doSpecular = static_cast<int32_t>(0x1),
__E_doMetallic = static_cast<int32_t>(0x2),
__E_doEmission = static_cast<int32_t>(0x3),
__E_doBump = static_cast<int32_t>(0x4),
__E_doNone = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextureBlenderURPLit_Prop_Unwrapped () const noexcept {
return static_cast<__TextureBlenderURPLit_Prop_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TextureBlenderURPLit_Prop() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TextureBlenderURPLit_Prop(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22861};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field doBump value: I32(4)
static ::GlobalNamespace::TextureBlenderURPLit_Prop const doBump;

/// @brief Field doColor value: I32(0)
static ::GlobalNamespace::TextureBlenderURPLit_Prop const doColor;

/// @brief Field doEmission value: I32(3)
static ::GlobalNamespace::TextureBlenderURPLit_Prop const doEmission;

/// @brief Field doMetallic value: I32(2)
static ::GlobalNamespace::TextureBlenderURPLit_Prop const doMetallic;

/// @brief Field doNone value: I32(5)
static ::GlobalNamespace::TextureBlenderURPLit_Prop const doNone;

/// @brief Field doSpecular value: I32(1)
static ::GlobalNamespace::TextureBlenderURPLit_Prop const doSpecular;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextureBlenderURPLit_Prop, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextureBlenderURPLit_Prop) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
