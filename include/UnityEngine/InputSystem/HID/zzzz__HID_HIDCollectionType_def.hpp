#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HID_HIDCollectionType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HID_HIDCollectionType)
// Forward declare root types
namespace GlobalNamespace {
struct HID_HIDCollectionType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HID_HIDCollectionType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HID_HIDCollectionType, "UnityEngine.InputSystem.HID", "HID/HIDCollectionType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HID/HIDCollectionType
struct CORDL_TYPE HID_HIDCollectionType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HID_HIDCollectionType_Unwrapped
enum struct __HID_HIDCollectionType_Unwrapped : int32_t {
__E_Physical = static_cast<int32_t>(0x0),
__E_Application = static_cast<int32_t>(0x1),
__E_Logical = static_cast<int32_t>(0x2),
__E_Report = static_cast<int32_t>(0x3),
__E_NamedArray = static_cast<int32_t>(0x4),
__E_UsageSwitch = static_cast<int32_t>(0x5),
__E_UsageModifier = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HID_HIDCollectionType_Unwrapped () const noexcept {
return static_cast<__HID_HIDCollectionType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HID_HIDCollectionType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HID_HIDCollectionType(int32_t  value__) noexcept;

/// @brief Field Application value: I32(1)
static ::GlobalNamespace::HID_HIDCollectionType const Application;

/// @brief Field Logical value: I32(2)
static ::GlobalNamespace::HID_HIDCollectionType const Logical;

/// @brief Field NamedArray value: I32(4)
static ::GlobalNamespace::HID_HIDCollectionType const NamedArray;

/// @brief Field Physical value: I32(0)
static ::GlobalNamespace::HID_HIDCollectionType const Physical;

/// @brief Field Report value: I32(3)
static ::GlobalNamespace::HID_HIDCollectionType const Report;

/// @brief Field UsageModifier value: I32(6)
static ::GlobalNamespace::HID_HIDCollectionType const UsageModifier;

/// @brief Field UsageSwitch value: I32(5)
static ::GlobalNamespace::HID_HIDCollectionType const UsageSwitch;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13616};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HID_HIDCollectionType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HID_HIDCollectionType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
