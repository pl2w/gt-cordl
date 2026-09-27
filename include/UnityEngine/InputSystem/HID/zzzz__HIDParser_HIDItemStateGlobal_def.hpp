#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HIDParser_HIDItemStateGlobal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HIDParser_HIDItemStateGlobal)
namespace GlobalNamespace {
struct HIDParser_HIDItemStateLocal;
}
namespace GlobalNamespace {
struct HID_UsagePage;
}
// Forward declare root types
namespace GlobalNamespace {
struct HIDParser_HIDItemStateGlobal;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HIDParser_HIDItemStateGlobal);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HIDParser_HIDItemStateGlobal, "UnityEngine.InputSystem.HID", "HIDParser/HIDItemStateGlobal");
// Dependencies System.Nullable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HIDParser/HIDItemStateGlobal
struct CORDL_TYPE HIDParser_HIDItemStateGlobal {
public:
// Declarations
/// @brief Method GetPhysicalMax, addr 0xafe4930, size 0xb4, virtual false, abstract: false, final false
inline int32_t GetPhysicalMax() ;

/// @brief Method GetPhysicalMin, addr 0xafe486c, size 0xc4, virtual false, abstract: false, final false
inline int32_t GetPhysicalMin() ;

/// @brief Method GetUsagePage, addr 0xafe44d8, size 0x8c, virtual false, abstract: false, final false
inline ::GlobalNamespace::HID_UsagePage GetUsagePage(int32_t  index, ::by_ref<::GlobalNamespace::HIDParser_HIDItemStateLocal>  localItemState) ;

// Ctor Parameters []
// @brief default ctor
constexpr HIDParser_HIDItemStateGlobal() ;

// Ctor Parameters [CppParam { name: "usagePage", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "logicalMinimum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "logicalMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "physicalMinimum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "physicalMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "unitExponent", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "unit", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "reportSize", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "reportCount", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "reportId", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr HIDParser_HIDItemStateGlobal(::System::Nullable_1<int32_t>  usagePage, ::System::Nullable_1<int32_t>  logicalMinimum, ::System::Nullable_1<int32_t>  logicalMaximum, ::System::Nullable_1<int32_t>  physicalMinimum, ::System::Nullable_1<int32_t>  physicalMaximum, ::System::Nullable_1<int32_t>  unitExponent, ::System::Nullable_1<int32_t>  unit, ::System::Nullable_1<int32_t>  reportSize, ::System::Nullable_1<int32_t>  reportCount, ::System::Nullable_1<int32_t>  reportId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13631};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field usagePage, offset: 0x0, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  usagePage;

/// @brief Field logicalMinimum, offset: 0x10, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  logicalMinimum;

/// @brief Field logicalMaximum, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  logicalMaximum;

/// @brief Field physicalMinimum, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  physicalMinimum;

/// @brief Field physicalMaximum, offset: 0x40, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  physicalMaximum;

/// @brief Size padding 0x50 - 0xa0 = 0x50, packed as 0x50
 uint8_t  _cordl_size_padding[0x50];

/// @brief Field unitExponent, offset: 0x50, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  unitExponent;

/// @brief Field unit, offset: 0x60, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  unit;

/// @brief Field reportSize, offset: 0x70, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  reportSize;

/// @brief Field reportCount, offset: 0x80, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  reportCount;

/// @brief Field reportId, offset: 0x90, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  reportId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HIDParser_HIDItemStateGlobal, usagePage) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HIDParser_HIDItemStateGlobal, logicalMinimum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HIDParser_HIDItemStateGlobal, logicalMaximum) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HIDParser_HIDItemStateGlobal, physicalMinimum) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HIDParser_HIDItemStateGlobal, physicalMaximum) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HIDParser_HIDItemStateGlobal, unitExponent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HIDParser_HIDItemStateGlobal, unit) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HIDParser_HIDItemStateGlobal, reportSize) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HIDParser_HIDItemStateGlobal, reportCount) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HIDParser_HIDItemStateGlobal, reportId) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HIDParser_HIDItemStateGlobal) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
