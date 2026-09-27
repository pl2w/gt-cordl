#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HIDSupport_HIDPageUsage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/HID/zzzz__HID_UsagePage_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HIDSupport_HIDPageUsage)
namespace GlobalNamespace {
struct HID_GenericDesktop;
}
namespace GlobalNamespace {
struct HID_UsagePage;
}
// Forward declare root types
namespace GlobalNamespace {
struct HIDSupport_HIDPageUsage;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HIDSupport_HIDPageUsage);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HIDSupport_HIDPageUsage, "UnityEngine.InputSystem.HID", "HIDSupport/HIDPageUsage");
// Dependencies UnityEngine.InputSystem.HID.HID::UsagePage
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HIDSupport/HIDPageUsage
struct CORDL_TYPE HIDSupport_HIDPageUsage {
public:
// Declarations
/// @brief Method .ctor, addr 0xafe4c7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::HID_UsagePage  page, int32_t  usage) ;

/// @brief Method .ctor, addr 0xafe4de4, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::HID_GenericDesktop  usage) ;

// Ctor Parameters []
// @brief default ctor
constexpr HIDSupport_HIDPageUsage() ;

// Ctor Parameters [CppParam { name: "page", ty: "::GlobalNamespace::HID_UsagePage", modifiers: "", def_value: None, comment: None }, CppParam { name: "usage", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HIDSupport_HIDPageUsage(::GlobalNamespace::HID_UsagePage  page, int32_t  usage) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13633};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field page, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::HID_UsagePage  page;

/// @brief Field usage, offset: 0x4, size: 0x4, def value: None
 int32_t  usage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HIDSupport_HIDPageUsage, page) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HIDSupport_HIDPageUsage, usage) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HIDSupport_HIDPageUsage) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
