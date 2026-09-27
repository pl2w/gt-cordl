#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HID_HIDCollectionDescriptor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDCollectionType_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_UsagePage_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HID_HIDCollectionDescriptor)
// Forward declare root types
namespace GlobalNamespace {
struct HID_HIDCollectionDescriptor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HID_HIDCollectionDescriptor);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HID_HIDCollectionDescriptor, "UnityEngine.InputSystem.HID", "HID/HIDCollectionDescriptor");
// Dependencies UnityEngine.InputSystem.HID.HID::HIDCollectionType, UnityEngine.InputSystem.HID.HID::UsagePage
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HID/HIDCollectionDescriptor
struct CORDL_TYPE HID_HIDCollectionDescriptor {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HID_HIDCollectionDescriptor() ;

// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::HID_HIDCollectionType", modifiers: "", def_value: None, comment: None }, CppParam { name: "usage", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "usagePage", ty: "::GlobalNamespace::HID_UsagePage", modifiers: "", def_value: None, comment: None }, CppParam { name: "parent", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "childCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "firstChild", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HID_HIDCollectionDescriptor(::GlobalNamespace::HID_HIDCollectionType  type, int32_t  usage, ::GlobalNamespace::HID_UsagePage  usagePage, int32_t  parent, int32_t  childCount, int32_t  firstChild) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13619};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::HID_HIDCollectionType  type;

/// @brief Field usage, offset: 0x4, size: 0x4, def value: None
 int32_t  usage;

/// @brief Field usagePage, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::HID_UsagePage  usagePage;

/// @brief Field parent, offset: 0xc, size: 0x4, def value: None
 int32_t  parent;

/// @brief Field childCount, offset: 0x10, size: 0x4, def value: None
 int32_t  childCount;

/// @brief Field firstChild, offset: 0x14, size: 0x4, def value: None
 int32_t  firstChild;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HID_HIDCollectionDescriptor, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDCollectionDescriptor, usage) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDCollectionDescriptor, usagePage) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDCollectionDescriptor, parent) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDCollectionDescriptor, childCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HID_HIDCollectionDescriptor, firstChild) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HID_HIDCollectionDescriptor) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
