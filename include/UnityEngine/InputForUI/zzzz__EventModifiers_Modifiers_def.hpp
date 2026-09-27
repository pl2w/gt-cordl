#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/EventModifiers_Modifiers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventModifiers_Modifiers)
// Forward declare root types
namespace GlobalNamespace {
struct EventModifiers_Modifiers;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EventModifiers_Modifiers);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EventModifiers_Modifiers, "UnityEngine.InputForUI", "EventModifiers/Modifiers");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputForUI.EventModifiers/Modifiers
struct CORDL_TYPE EventModifiers_Modifiers {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __EventModifiers_Modifiers_Unwrapped
enum struct __EventModifiers_Modifiers_Unwrapped : uint32_t {
__E_LeftShift = static_cast<uint32_t>(0x1u),
__E_RightShift = static_cast<uint32_t>(0x2u),
__E_Shift = static_cast<uint32_t>(0x3u),
__E_LeftCtrl = static_cast<uint32_t>(0x4u),
__E_RightCtrl = static_cast<uint32_t>(0x8u),
__E_Ctrl = static_cast<uint32_t>(0xcu),
__E_LeftAlt = static_cast<uint32_t>(0x10u),
__E_RightAlt = static_cast<uint32_t>(0x20u),
__E_Alt = static_cast<uint32_t>(0x30u),
__E_LeftMeta = static_cast<uint32_t>(0x40u),
__E_RightMeta = static_cast<uint32_t>(0x80u),
__E_Meta = static_cast<uint32_t>(0xc0u),
__E_CapsLock = static_cast<uint32_t>(0x100u),
__E_Numlock = static_cast<uint32_t>(0x200u),
__E_FunctionKey = static_cast<uint32_t>(0x400u),
__E_Numeric = static_cast<uint32_t>(0x800u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EventModifiers_Modifiers_Unwrapped () const noexcept {
return static_cast<__EventModifiers_Modifiers_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EventModifiers_Modifiers() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr EventModifiers_Modifiers(uint32_t  value__) noexcept;

/// @brief Field Alt value: U32(48)
static ::GlobalNamespace::EventModifiers_Modifiers const Alt;

/// @brief Field CapsLock value: U32(256)
static ::GlobalNamespace::EventModifiers_Modifiers const CapsLock;

/// @brief Field Ctrl value: U32(12)
static ::GlobalNamespace::EventModifiers_Modifiers const Ctrl;

/// @brief Field FunctionKey value: U32(1024)
static ::GlobalNamespace::EventModifiers_Modifiers const FunctionKey;

/// @brief Field LeftAlt value: U32(16)
static ::GlobalNamespace::EventModifiers_Modifiers const LeftAlt;

/// @brief Field LeftCtrl value: U32(4)
static ::GlobalNamespace::EventModifiers_Modifiers const LeftCtrl;

/// @brief Field LeftMeta value: U32(64)
static ::GlobalNamespace::EventModifiers_Modifiers const LeftMeta;

/// @brief Field LeftShift value: U32(1)
static ::GlobalNamespace::EventModifiers_Modifiers const LeftShift;

/// @brief Field Meta value: U32(192)
static ::GlobalNamespace::EventModifiers_Modifiers const Meta;

/// @brief Field Numeric value: U32(2048)
static ::GlobalNamespace::EventModifiers_Modifiers const Numeric;

/// @brief Field Numlock value: U32(512)
static ::GlobalNamespace::EventModifiers_Modifiers const Numlock;

/// @brief Field RightAlt value: U32(32)
static ::GlobalNamespace::EventModifiers_Modifiers const RightAlt;

/// @brief Field RightCtrl value: U32(8)
static ::GlobalNamespace::EventModifiers_Modifiers const RightCtrl;

/// @brief Field RightMeta value: U32(128)
static ::GlobalNamespace::EventModifiers_Modifiers const RightMeta;

/// @brief Field RightShift value: U32(2)
static ::GlobalNamespace::EventModifiers_Modifiers const RightShift;

/// @brief Field Shift value: U32(3)
static ::GlobalNamespace::EventModifiers_Modifiers const Shift;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31861};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EventModifiers_Modifiers, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EventModifiers_Modifiers) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
