#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HID_HIDElementDescriptor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDElementFlags_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDReportType_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_UsagePage_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HID_HIDElementDescriptor)
namespace GlobalNamespace {
struct HID_UsagePage;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout_Builder;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
struct PrimitiveValue;
}
// Forward declare root types
namespace GlobalNamespace {
struct HID_HIDElementDescriptor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HID_HIDElementDescriptor);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HID_HIDElementDescriptor, "UnityEngine.InputSystem.HID", "HID/HIDElementDescriptor");
// Dependencies System.Nullable`1<T>, UnityEngine.InputSystem.HID.HID::HIDElementFlags, UnityEngine.InputSystem.HID.HID::HIDReportType, UnityEngine.InputSystem.HID.HID::UsagePage
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HID/HIDElementDescriptor
struct CORDL_TYPE HID_HIDElementDescriptor {
public:
// Declarations
 __declspec(property(get=get_hasNullState)) bool  hasNullState;

 __declspec(property(get=get_hasPreferredState)) bool  hasPreferredState;

 __declspec(property(get=get_isArray)) bool  isArray;

 __declspec(property(get=get_isConstant)) bool  isConstant;

 __declspec(property(get=get_isNonLinear)) bool  isNonLinear;

 __declspec(property(get=get_isRelative)) bool  isRelative;

 __declspec(property(get=get_isSigned)) bool  isSigned;

 __declspec(property(get=get_isWrapping)) bool  isWrapping;

 __declspec(property(get=get_maxFloatValue)) float_t  maxFloatValue;

 __declspec(property(get=get_minFloatValue)) float_t  minFloatValue;

/// @brief Method AddChildControls, addr 0xafe249c, size 0x690, virtual false, abstract: false, final false
inline void AddChildControls(::by_ref<::GlobalNamespace::HID_HIDElementDescriptor>  element, ::StringW  controlName, ::by_ref<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>  builder) ;

/// @brief Method DetermineAxisNormalizationParameters, addr 0xafe2d84, size 0x20c, virtual false, abstract: false, final false
inline ::StringW DetermineAxisNormalizationParameters() ;

/// @brief Method DetermineDefaultState, addr 0xafe1c10, size 0xcc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue DetermineDefaultState() ;

/// @brief Method DetermineDisplayName, addr 0xafe2070, size 0xf0, virtual false, abstract: false, final false
inline ::StringW DetermineDisplayName() ;

/// @brief Method DetermineFormat, addr 0xafe2160, size 0x154, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::FourCC DetermineFormat() ;

/// @brief Method DetermineLayout, addr 0xafe1d70, size 0x108, virtual false, abstract: false, final false
inline ::StringW DetermineLayout() ;

/// @brief Method DetermineName, addr 0xafe1e78, size 0x1f8, virtual false, abstract: false, final false
inline ::StringW DetermineName() ;

/// @brief Method DetermineParameters, addr 0xafe1abc, size 0x148, virtual false, abstract: false, final false
inline ::StringW DetermineParameters() ;

/// @brief Method DetermineProcessors, addr 0xafe1cdc, size 0x70, virtual false, abstract: false, final false
inline ::StringW DetermineProcessors() ;

/// @brief Method DetermineUsages, addr 0xafe22b4, size 0x1e8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString> DetermineUsages() ;

/// @brief Method Is, addr 0xafe1d4c, size 0x24, virtual false, abstract: false, final false
inline bool Is(::GlobalNamespace::HID_UsagePage  usagePage, int32_t  usage) ;

/// @brief Method IsUsableElement, addr 0xafdfd74, size 0x38, virtual false, abstract: false, final false
inline bool IsUsableElement() ;

/// @brief Method get_hasNullState, addr 0xafe2bf0, size 0xc, virtual false, abstract: false, final false
inline bool get_hasNullState() ;

/// @brief Method get_hasPreferredState, addr 0xafe2bfc, size 0x10, virtual false, abstract: false, final false
inline bool get_hasPreferredState() ;

/// @brief Method get_isArray, addr 0xafe2c0c, size 0x10, virtual false, abstract: false, final false
inline bool get_isArray() ;

/// @brief Method get_isConstant, addr 0xafe2c34, size 0xc, virtual false, abstract: false, final false
inline bool get_isConstant() ;

/// @brief Method get_isNonLinear, addr 0xafe2c1c, size 0xc, virtual false, abstract: false, final false
inline bool get_isNonLinear() ;

/// @brief Method get_isRelative, addr 0xafe2c28, size 0xc, virtual false, abstract: false, final false
inline bool get_isRelative() ;

/// @brief Method get_isSigned, addr 0xafe1c04, size 0xc, virtual false, abstract: false, final false
inline bool get_isSigned() ;

/// @brief Method get_isWrapping, addr 0xafe2c40, size 0xc, virtual false, abstract: false, final false
inline bool get_isWrapping() ;

/// @brief Method get_maxFloatValue, addr 0xafe2ce4, size 0xa0, virtual false, abstract: false, final false
inline float_t get_maxFloatValue() ;

/// @brief Method get_minFloatValue, addr 0xafe2c4c, size 0x98, virtual false, abstract: false, final false
inline float_t get_minFloatValue() ;

// Ctor Parameters []
// @brief default ctor
constexpr HID_HIDElementDescriptor() ;

// Ctor Parameters [CppParam { name: "usage", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "usagePage", ty: "::GlobalNamespace::HID_UsagePage", modifiers: "", def_value: None, comment: None }, CppParam { name: "unit", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "unitExponent", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "logicalMin", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "logicalMax", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "physicalMin", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "physicalMax", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "reportType", ty: "::GlobalNamespace::HID_HIDReportType", modifiers: "", def_value: None, comment: None }, CppParam { name: "collectionIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "reportId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "reportSizeInBits", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "reportOffsetInBits", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "flags", ty: "::GlobalNamespace::HID_HIDElementFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "usageMin", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "usageMax", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr HID_HIDElementDescriptor(int32_t  usage, ::GlobalNamespace::HID_UsagePage  usagePage, int32_t  unit, int32_t  unitExponent, int32_t  logicalMin, int32_t  logicalMax, int32_t  physicalMin, int32_t  physicalMax, ::GlobalNamespace::HID_HIDReportType  reportType, int32_t  collectionIndex, int32_t  reportId, int32_t  reportSizeInBits, int32_t  reportOffsetInBits, ::GlobalNamespace::HID_HIDElementFlags  flags, ::System::Nullable_1<int32_t>  usageMin, ::System::Nullable_1<int32_t>  usageMax) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13618};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field usage, offset: 0x0, size: 0x4, def value: None
 int32_t  usage;

/// @brief Field usagePage, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::HID_UsagePage  usagePage;

/// @brief Field unit, offset: 0x8, size: 0x4, def value: None
 int32_t  unit;

/// @brief Field unitExponent, offset: 0xc, size: 0x4, def value: None
 int32_t  unitExponent;

/// @brief Field logicalMin, offset: 0x10, size: 0x4, def value: None
 int32_t  logicalMin;

/// @brief Field logicalMax, offset: 0x14, size: 0x4, def value: None
 int32_t  logicalMax;

/// @brief Field physicalMin, offset: 0x18, size: 0x4, def value: None
 int32_t  physicalMin;

/// @brief Field physicalMax, offset: 0x1c, size: 0x4, def value: None
 int32_t  physicalMax;

/// @brief Field reportType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::HID_HIDReportType  reportType;

/// @brief Field collectionIndex, offset: 0x24, size: 0x4, def value: None
 int32_t  collectionIndex;

/// @brief Field reportId, offset: 0x28, size: 0x4, def value: None
 int32_t  reportId;

/// @brief Field reportSizeInBits, offset: 0x2c, size: 0x4, def value: None
 int32_t  reportSizeInBits;

/// @brief Field reportOffsetInBits, offset: 0x30, size: 0x4, def value: None
 int32_t  reportOffsetInBits;

/// @brief Field flags, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::HID_HIDElementFlags  flags;

/// @brief Field usageMin, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  usageMin;

/// @brief Size padding 0x48 - 0x58 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// @brief Field usageMax, offset: 0x48, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  usageMax;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HID_HIDElementDescriptor, usage) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDElementDescriptor, usagePage) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDElementDescriptor, unit) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDElementDescriptor, unitExponent) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDElementDescriptor, logicalMin) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDElementDescriptor, logicalMax) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDElementDescriptor, physicalMin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDElementDescriptor, physicalMax) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDElementDescriptor, reportType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDElementDescriptor, collectionIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDElementDescriptor, reportId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDElementDescriptor, reportSizeInBits) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDElementDescriptor, reportOffsetInBits) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDElementDescriptor, flags) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDElementDescriptor, usageMin) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDElementDescriptor, usageMax) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HID_HIDElementDescriptor) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
