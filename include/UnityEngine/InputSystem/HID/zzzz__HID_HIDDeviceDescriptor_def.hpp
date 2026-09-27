#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HID_HIDDeviceDescriptor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDCollectionDescriptor_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDElementDescriptor_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_UsagePage_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HID_HIDDeviceDescriptor)
namespace GlobalNamespace {
struct HID_HIDCollectionDescriptor;
}
namespace GlobalNamespace {
struct HID_HIDElementDescriptor;
}
// Forward declare root types
namespace GlobalNamespace {
struct HID_HIDDeviceDescriptor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HID_HIDDeviceDescriptor);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HID_HIDDeviceDescriptor, "UnityEngine.InputSystem.HID", "HID/HIDDeviceDescriptor");
// Dependencies UnityEngine.InputSystem.HID.HID::HIDCollectionDescriptor, UnityEngine.InputSystem.HID.HID::HIDElementDescriptor, UnityEngine.InputSystem.HID.HID::UsagePage
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HID/HIDDeviceDescriptor
struct CORDL_TYPE HID_HIDDeviceDescriptor {
public:
// Declarations
/// @brief Method FromJson, addr 0xafdfdb4, size 0xe80, virtual false, abstract: false, final false
static inline ::GlobalNamespace::HID_HIDDeviceDescriptor FromJson(::StringW  json) ;

/// @brief Method ToJson, addr 0xafe0c34, size 0x70, virtual false, abstract: false, final false
inline ::StringW ToJson() ;

// Ctor Parameters []
// @brief default ctor
constexpr HID_HIDDeviceDescriptor() ;

// Ctor Parameters [CppParam { name: "vendorId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "productId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "usage", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "usagePage", ty: "::GlobalNamespace::HID_UsagePage", modifiers: "", def_value: None, comment: None }, CppParam { name: "inputReportSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "outputReportSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "featureReportSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "elements", ty: "::ArrayW<::GlobalNamespace::HID_HIDElementDescriptor>", modifiers: "", def_value: None, comment: None }, CppParam { name: "collections", ty: "::ArrayW<::GlobalNamespace::HID_HIDCollectionDescriptor>", modifiers: "", def_value: None, comment: None }]
constexpr HID_HIDDeviceDescriptor(int32_t  vendorId, int32_t  productId, int32_t  usage, ::GlobalNamespace::HID_UsagePage  usagePage, int32_t  inputReportSize, int32_t  outputReportSize, int32_t  featureReportSize, ::ArrayW<::GlobalNamespace::HID_HIDElementDescriptor>  elements, ::ArrayW<::GlobalNamespace::HID_HIDCollectionDescriptor>  collections) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13620};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field vendorId, offset: 0x0, size: 0x4, def value: None
 int32_t  vendorId;

/// @brief Field productId, offset: 0x4, size: 0x4, def value: None
 int32_t  productId;

/// @brief Field usage, offset: 0x8, size: 0x4, def value: None
 int32_t  usage;

/// @brief Field usagePage, offset: 0xc, size: 0x4, def value: None
 ::GlobalNamespace::HID_UsagePage  usagePage;

/// @brief Field inputReportSize, offset: 0x10, size: 0x4, def value: None
 int32_t  inputReportSize;

/// @brief Field outputReportSize, offset: 0x14, size: 0x4, def value: None
 int32_t  outputReportSize;

/// @brief Field featureReportSize, offset: 0x18, size: 0x4, def value: None
 int32_t  featureReportSize;

/// @brief Field elements, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::HID_HIDElementDescriptor>  elements;

/// @brief Field collections, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::HID_HIDCollectionDescriptor>  collections;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HID_HIDDeviceDescriptor, vendorId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDDeviceDescriptor, productId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDDeviceDescriptor, usage) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDDeviceDescriptor, usagePage) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDDeviceDescriptor, inputReportSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDDeviceDescriptor, outputReportSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDDeviceDescriptor, featureReportSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDDeviceDescriptor, elements) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDDeviceDescriptor, collections) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HID_HIDDeviceDescriptor) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
