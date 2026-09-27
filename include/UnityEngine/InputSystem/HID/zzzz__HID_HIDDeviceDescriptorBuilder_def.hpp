#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HID_HIDDeviceDescriptorBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDReportType_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_UsagePage_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HID_HIDDeviceDescriptorBuilder)
namespace GlobalNamespace {
struct HID_GenericDesktop;
}
namespace GlobalNamespace {
struct HID_HIDCollectionDescriptor;
}
namespace GlobalNamespace {
struct HID_HIDDeviceDescriptor;
}
namespace GlobalNamespace {
struct HID_HIDElementDescriptor;
}
namespace GlobalNamespace {
struct HID_HIDReportType;
}
namespace GlobalNamespace {
struct HID_UsagePage;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct HID_HIDDeviceDescriptorBuilder;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HID_HIDDeviceDescriptorBuilder);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HID_HIDDeviceDescriptorBuilder, "UnityEngine.InputSystem.HID", "HID/HIDDeviceDescriptorBuilder");
// Dependencies UnityEngine.InputSystem.HID.HID::HIDReportType, UnityEngine.InputSystem.HID.HID::UsagePage
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HID/HIDDeviceDescriptorBuilder
struct CORDL_TYPE HID_HIDDeviceDescriptorBuilder {
public:
// Declarations
/// @brief Method AddElement, addr 0xafe334c, size 0x48, virtual false, abstract: false, final false
inline ::GlobalNamespace::HID_HIDDeviceDescriptorBuilder AddElement(::GlobalNamespace::HID_GenericDesktop  usage, int32_t  sizeInBits) ;

/// @brief Method AddElement, addr 0xafe2fec, size 0x360, virtual false, abstract: false, final false
inline ::GlobalNamespace::HID_HIDDeviceDescriptorBuilder AddElement(::GlobalNamespace::HID_UsagePage  usagePage, int32_t  usage, int32_t  sizeInBits) ;

/// @brief Method Finish, addr 0xafe366c, size 0xdc, virtual false, abstract: false, final false
inline ::GlobalNamespace::HID_HIDDeviceDescriptor Finish() ;

/// @brief Method StartReport, addr 0xafe2fc4, size 0x28, virtual false, abstract: false, final false
inline ::GlobalNamespace::HID_HIDDeviceDescriptorBuilder StartReport(::GlobalNamespace::HID_HIDReportType  reportType, int32_t  reportId) ;

/// @brief Method WithLogicalMinMax, addr 0xafe3508, size 0x164, virtual false, abstract: false, final false
inline ::GlobalNamespace::HID_HIDDeviceDescriptorBuilder WithLogicalMinMax(int32_t  min, int32_t  max) ;

/// @brief Method WithPhysicalMinMax, addr 0xafe3394, size 0x174, virtual false, abstract: false, final false
inline ::GlobalNamespace::HID_HIDDeviceDescriptorBuilder WithPhysicalMinMax(int32_t  min, int32_t  max) ;

/// @brief Method .ctor, addr 0xafe2fa8, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::HID_GenericDesktop  usage) ;

/// @brief Method .ctor, addr 0xafe2f90, size 0x18, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::HID_UsagePage  usagePage, int32_t  usage) ;

// Ctor Parameters []
// @brief default ctor
constexpr HID_HIDDeviceDescriptorBuilder() ;

// Ctor Parameters [CppParam { name: "usagePage", ty: "::GlobalNamespace::HID_UsagePage", modifiers: "", def_value: None, comment: None }, CppParam { name: "usage", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurrentReportId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurrentReportType", ty: "::GlobalNamespace::HID_HIDReportType", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurrentReportOffsetInBits", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Elements", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::HID_HIDElementDescriptor>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Collections", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::HID_HIDCollectionDescriptor>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InputReportSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_OutputReportSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_FeatureReportSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HID_HIDDeviceDescriptorBuilder(::GlobalNamespace::HID_UsagePage  usagePage, int32_t  usage, int32_t  m_CurrentReportId, ::GlobalNamespace::HID_HIDReportType  m_CurrentReportType, int32_t  m_CurrentReportOffsetInBits, ::System::Collections::Generic::List_1<::GlobalNamespace::HID_HIDElementDescriptor>*  m_Elements, ::System::Collections::Generic::List_1<::GlobalNamespace::HID_HIDCollectionDescriptor>*  m_Collections, int32_t  m_InputReportSize, int32_t  m_OutputReportSize, int32_t  m_FeatureReportSize) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13621};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field usagePage, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::HID_UsagePage  usagePage;

/// @brief Field usage, offset: 0x4, size: 0x4, def value: None
 int32_t  usage;

/// @brief Field m_CurrentReportId, offset: 0x8, size: 0x4, def value: None
 int32_t  m_CurrentReportId;

/// @brief Field m_CurrentReportType, offset: 0xc, size: 0x4, def value: None
 ::GlobalNamespace::HID_HIDReportType  m_CurrentReportType;

/// @brief Field m_CurrentReportOffsetInBits, offset: 0x10, size: 0x4, def value: None
 int32_t  m_CurrentReportOffsetInBits;

/// @brief Field m_Elements, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::HID_HIDElementDescriptor>*  m_Elements;

/// @brief Field m_Collections, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::HID_HIDCollectionDescriptor>*  m_Collections;

/// @brief Field m_InputReportSize, offset: 0x28, size: 0x4, def value: None
 int32_t  m_InputReportSize;

/// @brief Field m_OutputReportSize, offset: 0x2c, size: 0x4, def value: None
 int32_t  m_OutputReportSize;

/// @brief Field m_FeatureReportSize, offset: 0x30, size: 0x4, def value: None
 int32_t  m_FeatureReportSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HID_HIDDeviceDescriptorBuilder, usagePage) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDDeviceDescriptorBuilder, usage) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDDeviceDescriptorBuilder, m_CurrentReportId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDDeviceDescriptorBuilder, m_CurrentReportType) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDDeviceDescriptorBuilder, m_CurrentReportOffsetInBits) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDDeviceDescriptorBuilder, m_Elements) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDDeviceDescriptorBuilder, m_Collections) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDDeviceDescriptorBuilder, m_InputReportSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDDeviceDescriptorBuilder, m_OutputReportSize) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDDeviceDescriptorBuilder, m_FeatureReportSize) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HID_HIDDeviceDescriptorBuilder) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
