#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/PointerEvent_Type.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerEvent_Type)
// Forward declare root types
namespace GlobalNamespace {
struct PointerEvent_Type;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PointerEvent_Type);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PointerEvent_Type, "UnityEngine.InputForUI", "PointerEvent/Type");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputForUI.PointerEvent/Type
struct CORDL_TYPE PointerEvent_Type {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PointerEvent_Type_Unwrapped
enum struct __PointerEvent_Type_Unwrapped : int32_t {
__E_PointerMoved = static_cast<int32_t>(0x1),
__E_Scroll = static_cast<int32_t>(0x2),
__E_ButtonPressed = static_cast<int32_t>(0x3),
__E_ButtonReleased = static_cast<int32_t>(0x4),
__E_State = static_cast<int32_t>(0x5),
__E_TouchCanceled = static_cast<int32_t>(0x6),
__E_TrackedCanceled = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PointerEvent_Type_Unwrapped () const noexcept {
return static_cast<__PointerEvent_Type_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PointerEvent_Type() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PointerEvent_Type(int32_t  value__) noexcept;

/// @brief Field ButtonPressed value: I32(3)
static ::GlobalNamespace::PointerEvent_Type const ButtonPressed;

/// @brief Field ButtonReleased value: I32(4)
static ::GlobalNamespace::PointerEvent_Type const ButtonReleased;

/// @brief Field PointerMoved value: I32(1)
static ::GlobalNamespace::PointerEvent_Type const PointerMoved;

/// @brief Field Scroll value: I32(2)
static ::GlobalNamespace::PointerEvent_Type const Scroll;

/// @brief Field State value: I32(5)
static ::GlobalNamespace::PointerEvent_Type const State;

/// @brief Field TouchCanceled value: I32(6)
static ::GlobalNamespace::PointerEvent_Type const TouchCanceled;

/// @brief Field TrackedCanceled value: I32(6)
static ::GlobalNamespace::PointerEvent_Type const TrackedCanceled;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31874};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PointerEvent_Type, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PointerEvent_Type) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
