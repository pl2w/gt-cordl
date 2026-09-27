#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/PointerEvent_Button.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerEvent_Button)
// Forward declare root types
namespace GlobalNamespace {
struct PointerEvent_Button;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PointerEvent_Button);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PointerEvent_Button, "UnityEngine.InputForUI", "PointerEvent/Button");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputForUI.PointerEvent/Button
struct CORDL_TYPE PointerEvent_Button {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __PointerEvent_Button_Unwrapped
enum struct __PointerEvent_Button_Unwrapped : uint32_t {
__E_None = static_cast<uint32_t>(0x0u),
__E_Primary = static_cast<uint32_t>(0x1u),
__E_FingerInTouch = static_cast<uint32_t>(0x1u),
__E_PenTipInTouch = static_cast<uint32_t>(0x1u),
__E_PenEraserInTouch = static_cast<uint32_t>(0x2u),
__E_PenBarrelButton = static_cast<uint32_t>(0x4u),
__E_MouseLeft = static_cast<uint32_t>(0x1u),
__E_MouseRight = static_cast<uint32_t>(0x2u),
__E_MouseMiddle = static_cast<uint32_t>(0x4u),
__E_MouseForward = static_cast<uint32_t>(0x8u),
__E_MouseBack = static_cast<uint32_t>(0x10u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PointerEvent_Button_Unwrapped () const noexcept {
return static_cast<__PointerEvent_Button_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PointerEvent_Button() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr PointerEvent_Button(uint32_t  value__) noexcept;

/// @brief Field FingerInTouch value: U32(1)
static ::GlobalNamespace::PointerEvent_Button const FingerInTouch;

/// @brief Field MouseBack value: U32(16)
static ::GlobalNamespace::PointerEvent_Button const MouseBack;

/// @brief Field MouseForward value: U32(8)
static ::GlobalNamespace::PointerEvent_Button const MouseForward;

/// @brief Field MouseLeft value: U32(1)
static ::GlobalNamespace::PointerEvent_Button const MouseLeft;

/// @brief Field MouseMiddle value: U32(4)
static ::GlobalNamespace::PointerEvent_Button const MouseMiddle;

/// @brief Field MouseRight value: U32(2)
static ::GlobalNamespace::PointerEvent_Button const MouseRight;

/// @brief Field None value: U32(0)
static ::GlobalNamespace::PointerEvent_Button const None;

/// @brief Field PenBarrelButton value: U32(4)
static ::GlobalNamespace::PointerEvent_Button const PenBarrelButton;

/// @brief Field PenEraserInTouch value: U32(2)
static ::GlobalNamespace::PointerEvent_Button const PenEraserInTouch;

/// @brief Field PenTipInTouch value: U32(1)
static ::GlobalNamespace::PointerEvent_Button const PenTipInTouch;

/// @brief Field Primary value: U32(1)
static ::GlobalNamespace::PointerEvent_Button const Primary;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31875};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PointerEvent_Button, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PointerEvent_Button) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
