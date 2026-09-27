#pragma once
// IWYU pragma private; include "UnityEngine/GUILayoutOption_Type.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GUILayoutOption_Type)
// Forward declare root types
namespace GlobalNamespace {
struct GUILayoutOption_Type;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GUILayoutOption_Type);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GUILayoutOption_Type, "UnityEngine", "GUILayoutOption/Type");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.GUILayoutOption/Type
struct CORDL_TYPE GUILayoutOption_Type {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GUILayoutOption_Type_Unwrapped
enum struct __GUILayoutOption_Type_Unwrapped : int32_t {
__E_fixedWidth = static_cast<int32_t>(0x0),
__E_fixedHeight = static_cast<int32_t>(0x1),
__E_minWidth = static_cast<int32_t>(0x2),
__E_maxWidth = static_cast<int32_t>(0x3),
__E_minHeight = static_cast<int32_t>(0x4),
__E_maxHeight = static_cast<int32_t>(0x5),
__E_stretchWidth = static_cast<int32_t>(0x6),
__E_stretchHeight = static_cast<int32_t>(0x7),
__E_alignStart = static_cast<int32_t>(0x8),
__E_alignMiddle = static_cast<int32_t>(0x9),
__E_alignEnd = static_cast<int32_t>(0xa),
__E_alignJustify = static_cast<int32_t>(0xb),
__E_equalSize = static_cast<int32_t>(0xc),
__E_spacing = static_cast<int32_t>(0xd),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GUILayoutOption_Type_Unwrapped () const noexcept {
return static_cast<__GUILayoutOption_Type_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GUILayoutOption_Type() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GUILayoutOption_Type(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28819};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field alignEnd value: I32(10)
static ::GlobalNamespace::GUILayoutOption_Type const alignEnd;

/// @brief Field alignJustify value: I32(11)
static ::GlobalNamespace::GUILayoutOption_Type const alignJustify;

/// @brief Field alignMiddle value: I32(9)
static ::GlobalNamespace::GUILayoutOption_Type const alignMiddle;

/// @brief Field alignStart value: I32(8)
static ::GlobalNamespace::GUILayoutOption_Type const alignStart;

/// @brief Field equalSize value: I32(12)
static ::GlobalNamespace::GUILayoutOption_Type const equalSize;

/// @brief Field fixedHeight value: I32(1)
static ::GlobalNamespace::GUILayoutOption_Type const fixedHeight;

/// @brief Field fixedWidth value: I32(0)
static ::GlobalNamespace::GUILayoutOption_Type const fixedWidth;

/// @brief Field maxHeight value: I32(5)
static ::GlobalNamespace::GUILayoutOption_Type const maxHeight;

/// @brief Field maxWidth value: I32(3)
static ::GlobalNamespace::GUILayoutOption_Type const maxWidth;

/// @brief Field minHeight value: I32(4)
static ::GlobalNamespace::GUILayoutOption_Type const minHeight;

/// @brief Field minWidth value: I32(2)
static ::GlobalNamespace::GUILayoutOption_Type const minWidth;

/// @brief Field spacing value: I32(13)
static ::GlobalNamespace::GUILayoutOption_Type const spacing;

/// @brief Field stretchHeight value: I32(7)
static ::GlobalNamespace::GUILayoutOption_Type const stretchHeight;

/// @brief Field stretchWidth value: I32(6)
static ::GlobalNamespace::GUILayoutOption_Type const stretchWidth;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GUILayoutOption_Type, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GUILayoutOption_Type) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
