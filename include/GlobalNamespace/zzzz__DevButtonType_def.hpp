#pragma once
// IWYU pragma private; include "GlobalNamespace/DevButtonType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DevButtonType)
// Forward declare root types
namespace GlobalNamespace {
struct DevButtonType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DevButtonType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevButtonType, "", "DevButtonType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: DevButtonType
struct CORDL_TYPE DevButtonType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DevButtonType_Unwrapped
enum struct __DevButtonType_Unwrapped : int32_t {
__E_LogLevel = static_cast<int32_t>(0x0),
__E_Grow = static_cast<int32_t>(0x1),
__E_Shrink = static_cast<int32_t>(0x2),
__E_ScrollUp = static_cast<int32_t>(0x3),
__E_Mute = static_cast<int32_t>(0x4),
__E_LineExpand = static_cast<int32_t>(0x5),
__E_LineForward = static_cast<int32_t>(0x6),
__E_ScrollDown = static_cast<int32_t>(0x7),
__E_Bottom = static_cast<int32_t>(0x8),
__E_Toggle = static_cast<int32_t>(0x9),
__E_Clear = static_cast<int32_t>(0xa),
__E_ConsoleMode = static_cast<int32_t>(0xb),
__E_InspectorMode = static_cast<int32_t>(0xc),
__E_ComponentInspectorMode = static_cast<int32_t>(0xd),
__E_InspectorShowAllFields = static_cast<int32_t>(0xe),
__E_InspectorShowPrivateItems = static_cast<int32_t>(0xf),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DevButtonType_Unwrapped () const noexcept {
return static_cast<__DevButtonType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DevButtonType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DevButtonType(int32_t  value__) noexcept;

/// @brief Field Bottom value: I32(8)
static ::GlobalNamespace::DevButtonType const Bottom;

/// @brief Field Clear value: I32(10)
static ::GlobalNamespace::DevButtonType const Clear;

/// @brief Field ComponentInspectorMode value: I32(13)
static ::GlobalNamespace::DevButtonType const ComponentInspectorMode;

/// @brief Field ConsoleMode value: I32(11)
static ::GlobalNamespace::DevButtonType const ConsoleMode;

/// @brief Field Grow value: I32(1)
static ::GlobalNamespace::DevButtonType const Grow;

/// @brief Field InspectorMode value: I32(12)
static ::GlobalNamespace::DevButtonType const InspectorMode;

/// @brief Field InspectorShowAllFields value: I32(14)
static ::GlobalNamespace::DevButtonType const InspectorShowAllFields;

/// @brief Field InspectorShowPrivateItems value: I32(15)
static ::GlobalNamespace::DevButtonType const InspectorShowPrivateItems;

/// @brief Field LineExpand value: I32(5)
static ::GlobalNamespace::DevButtonType const LineExpand;

/// @brief Field LineForward value: I32(6)
static ::GlobalNamespace::DevButtonType const LineForward;

/// @brief Field LogLevel value: I32(0)
static ::GlobalNamespace::DevButtonType const LogLevel;

/// @brief Field Mute value: I32(4)
static ::GlobalNamespace::DevButtonType const Mute;

/// @brief Field ScrollDown value: I32(7)
static ::GlobalNamespace::DevButtonType const ScrollDown;

/// @brief Field ScrollUp value: I32(3)
static ::GlobalNamespace::DevButtonType const ScrollUp;

/// @brief Field Shrink value: I32(2)
static ::GlobalNamespace::DevButtonType const Shrink;

/// @brief Field Toggle value: I32(9)
static ::GlobalNamespace::DevButtonType const Toggle;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2598};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DevButtonType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DevButtonType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
