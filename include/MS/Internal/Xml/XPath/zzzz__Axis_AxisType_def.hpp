#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/Axis_AxisType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Axis_AxisType)
// Forward declare root types
namespace GlobalNamespace {
struct Axis_AxisType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Axis_AxisType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Axis_AxisType, "MS.Internal.Xml.XPath", "Axis/AxisType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MS.Internal.Xml.XPath.Axis/AxisType
struct CORDL_TYPE Axis_AxisType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Axis_AxisType_Unwrapped
enum struct __Axis_AxisType_Unwrapped : int32_t {
__E_Ancestor = static_cast<int32_t>(0x0),
__E_AncestorOrSelf = static_cast<int32_t>(0x1),
__E_Attribute = static_cast<int32_t>(0x2),
__E_Child = static_cast<int32_t>(0x3),
__E_Descendant = static_cast<int32_t>(0x4),
__E_DescendantOrSelf = static_cast<int32_t>(0x5),
__E_Following = static_cast<int32_t>(0x6),
__E_FollowingSibling = static_cast<int32_t>(0x7),
__E_Namespace = static_cast<int32_t>(0x8),
__E_Parent = static_cast<int32_t>(0x9),
__E_Preceding = static_cast<int32_t>(0xa),
__E_PrecedingSibling = static_cast<int32_t>(0xb),
__E_Self = static_cast<int32_t>(0xc),
__E_None = static_cast<int32_t>(0xd),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Axis_AxisType_Unwrapped () const noexcept {
return static_cast<__Axis_AxisType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Axis_AxisType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Axis_AxisType(int32_t  value__) noexcept;

/// @brief Field Ancestor value: I32(0)
static ::GlobalNamespace::Axis_AxisType const Ancestor;

/// @brief Field AncestorOrSelf value: I32(1)
static ::GlobalNamespace::Axis_AxisType const AncestorOrSelf;

/// @brief Field Attribute value: I32(2)
static ::GlobalNamespace::Axis_AxisType const Attribute;

/// @brief Field Child value: I32(3)
static ::GlobalNamespace::Axis_AxisType const Child;

/// @brief Field Descendant value: I32(4)
static ::GlobalNamespace::Axis_AxisType const Descendant;

/// @brief Field DescendantOrSelf value: I32(5)
static ::GlobalNamespace::Axis_AxisType const DescendantOrSelf;

/// @brief Field Following value: I32(6)
static ::GlobalNamespace::Axis_AxisType const Following;

/// @brief Field FollowingSibling value: I32(7)
static ::GlobalNamespace::Axis_AxisType const FollowingSibling;

/// @brief Field Namespace value: I32(8)
static ::GlobalNamespace::Axis_AxisType const Namespace;

/// @brief Field None value: I32(13)
static ::GlobalNamespace::Axis_AxisType const None;

/// @brief Field Parent value: I32(9)
static ::GlobalNamespace::Axis_AxisType const Parent;

/// @brief Field Preceding value: I32(10)
static ::GlobalNamespace::Axis_AxisType const Preceding;

/// @brief Field PrecedingSibling value: I32(11)
static ::GlobalNamespace::Axis_AxisType const PrecedingSibling;

/// @brief Field Self value: I32(12)
static ::GlobalNamespace::Axis_AxisType const Self;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14594};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Axis_AxisType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Axis_AxisType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
