#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabTarget_GrabAnchor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandGrabTarget_GrabAnchor)
// Forward declare root types
namespace GlobalNamespace {
struct HandGrabTarget_GrabAnchor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HandGrabTarget_GrabAnchor);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandGrabTarget_GrabAnchor, "Oculus.Interaction.HandGrab", "HandGrabTarget/GrabAnchor");
// [Obsolete]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.HandGrab.HandGrabTarget/GrabAnchor
struct CORDL_TYPE HandGrabTarget_GrabAnchor {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HandGrabTarget_GrabAnchor_Unwrapped
enum struct __HandGrabTarget_GrabAnchor_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Wrist = static_cast<int32_t>(0x1),
__E_Pinch = static_cast<int32_t>(0x2),
__E_Palm = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HandGrabTarget_GrabAnchor_Unwrapped () const noexcept {
return static_cast<__HandGrabTarget_GrabAnchor_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HandGrabTarget_GrabAnchor() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HandGrabTarget_GrabAnchor(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::HandGrabTarget_GrabAnchor const None;

/// @brief Field Palm value: I32(3)
static ::GlobalNamespace::HandGrabTarget_GrabAnchor const Palm;

/// @brief Field Pinch value: I32(2)
static ::GlobalNamespace::HandGrabTarget_GrabAnchor const Pinch;

/// @brief Field Wrist value: I32(1)
static ::GlobalNamespace::HandGrabTarget_GrabAnchor const Wrist;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16327};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandGrabTarget_GrabAnchor, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandGrabTarget_GrabAnchor) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
