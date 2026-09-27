#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/Event_Type.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Event_Type)
// Forward declare root types
namespace GlobalNamespace {
struct Event_Type;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Event_Type);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Event_Type, "UnityEngine.InputForUI", "Event/Type");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputForUI.Event/Type
struct CORDL_TYPE Event_Type {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Event_Type_Unwrapped
enum struct __Event_Type_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0x0),
__E_KeyEvent = static_cast<int32_t>(0x1),
__E_PointerEvent = static_cast<int32_t>(0x2),
__E_TextInputEvent = static_cast<int32_t>(0x3),
__E_IMECompositionEvent = static_cast<int32_t>(0x4),
__E_CommandEvent = static_cast<int32_t>(0x5),
__E_NavigationEvent = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Event_Type_Unwrapped () const noexcept {
return static_cast<__Event_Type_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Event_Type() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Event_Type(int32_t  value__) noexcept;

/// @brief Field CommandEvent value: I32(5)
static ::GlobalNamespace::Event_Type const CommandEvent;

/// @brief Field IMECompositionEvent value: I32(4)
static ::GlobalNamespace::Event_Type const IMECompositionEvent;

/// @brief Field Invalid value: I32(0)
static ::GlobalNamespace::Event_Type const Invalid;

/// @brief Field KeyEvent value: I32(1)
static ::GlobalNamespace::Event_Type const KeyEvent;

/// @brief Field NavigationEvent value: I32(6)
static ::GlobalNamespace::Event_Type const NavigationEvent;

/// @brief Field PointerEvent value: I32(2)
static ::GlobalNamespace::Event_Type const PointerEvent;

/// @brief Field TextInputEvent value: I32(3)
static ::GlobalNamespace::Event_Type const TextInputEvent;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31855};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Event_Type, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Event_Type) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
