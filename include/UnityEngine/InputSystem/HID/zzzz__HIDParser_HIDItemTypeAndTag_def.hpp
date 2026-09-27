#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HIDParser_HIDItemTypeAndTag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HIDParser_HIDItemTypeAndTag)
// Forward declare root types
namespace GlobalNamespace {
struct HIDParser_HIDItemTypeAndTag;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HIDParser_HIDItemTypeAndTag);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HIDParser_HIDItemTypeAndTag, "UnityEngine.InputSystem.HID", "HIDParser/HIDItemTypeAndTag");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HIDParser/HIDItemTypeAndTag
struct CORDL_TYPE HIDParser_HIDItemTypeAndTag {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HIDParser_HIDItemTypeAndTag_Unwrapped
enum struct __HIDParser_HIDItemTypeAndTag_Unwrapped : int32_t {
__E_Input = static_cast<int32_t>(0x80),
__E_Output = static_cast<int32_t>(0x90),
__E_Feature = static_cast<int32_t>(0xb0),
__E_Collection = static_cast<int32_t>(0xa0),
__E_EndCollection = static_cast<int32_t>(0xc0),
__E_UsagePage = static_cast<int32_t>(0x4),
__E_LogicalMinimum = static_cast<int32_t>(0x14),
__E_LogicalMaximum = static_cast<int32_t>(0x24),
__E_PhysicalMinimum = static_cast<int32_t>(0x34),
__E_PhysicalMaximum = static_cast<int32_t>(0x44),
__E_UnitExponent = static_cast<int32_t>(0x54),
__E_Unit = static_cast<int32_t>(0x64),
__E_ReportSize = static_cast<int32_t>(0x74),
__E_ReportID = static_cast<int32_t>(0x84),
__E_ReportCount = static_cast<int32_t>(0x94),
__E_Push = static_cast<int32_t>(0xa4),
__E_Pop = static_cast<int32_t>(0xb4),
__E_Usage = static_cast<int32_t>(0x8),
__E_UsageMinimum = static_cast<int32_t>(0x18),
__E_UsageMaximum = static_cast<int32_t>(0x28),
__E_DesignatorIndex = static_cast<int32_t>(0x38),
__E_DesignatorMinimum = static_cast<int32_t>(0x48),
__E_DesignatorMaximum = static_cast<int32_t>(0x58),
__E_StringIndex = static_cast<int32_t>(0x78),
__E_StringMinimum = static_cast<int32_t>(0x88),
__E_StringMaximum = static_cast<int32_t>(0x98),
__E_Delimiter = static_cast<int32_t>(0xa8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HIDParser_HIDItemTypeAndTag_Unwrapped () const noexcept {
return static_cast<__HIDParser_HIDItemTypeAndTag_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HIDParser_HIDItemTypeAndTag() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HIDParser_HIDItemTypeAndTag(int32_t  value__) noexcept;

/// @brief Field Collection value: I32(160)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const Collection;

/// @brief Field Delimiter value: I32(168)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const Delimiter;

/// @brief Field DesignatorIndex value: I32(56)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const DesignatorIndex;

/// @brief Field DesignatorMaximum value: I32(88)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const DesignatorMaximum;

/// @brief Field DesignatorMinimum value: I32(72)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const DesignatorMinimum;

/// @brief Field EndCollection value: I32(192)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const EndCollection;

/// @brief Field Feature value: I32(176)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const Feature;

/// @brief Field Input value: I32(128)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const Input;

/// @brief Field LogicalMaximum value: I32(36)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const LogicalMaximum;

/// @brief Field LogicalMinimum value: I32(20)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const LogicalMinimum;

/// @brief Field Output value: I32(144)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const Output;

/// @brief Field PhysicalMaximum value: I32(68)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const PhysicalMaximum;

/// @brief Field PhysicalMinimum value: I32(52)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const PhysicalMinimum;

/// @brief Field Pop value: I32(180)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const Pop;

/// @brief Field Push value: I32(164)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const Push;

/// @brief Field ReportCount value: I32(148)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const ReportCount;

/// @brief Field ReportID value: I32(132)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const ReportID;

/// @brief Field ReportSize value: I32(116)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const ReportSize;

/// @brief Field StringIndex value: I32(120)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const StringIndex;

/// @brief Field StringMaximum value: I32(152)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const StringMaximum;

/// @brief Field StringMinimum value: I32(136)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const StringMinimum;

/// @brief Field Unit value: I32(100)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const Unit;

/// @brief Field UnitExponent value: I32(84)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const UnitExponent;

/// @brief Field Usage value: I32(8)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const Usage;

/// @brief Field UsageMaximum value: I32(40)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const UsageMaximum;

/// @brief Field UsageMinimum value: I32(24)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const UsageMinimum;

/// @brief Field UsagePage value: I32(4)
static ::GlobalNamespace::HIDParser_HIDItemTypeAndTag const UsagePage;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13629};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HIDParser_HIDItemTypeAndTag, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HIDParser_HIDItemTypeAndTag) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
