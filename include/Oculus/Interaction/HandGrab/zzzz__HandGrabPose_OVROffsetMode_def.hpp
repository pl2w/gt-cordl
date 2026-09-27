#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabPose_OVROffsetMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandGrabPose_OVROffsetMode)
// Forward declare root types
namespace GlobalNamespace {
struct HandGrabPose_OVROffsetMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HandGrabPose_OVROffsetMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandGrabPose_OVROffsetMode, "Oculus.Interaction.HandGrab", "HandGrabPose/OVROffsetMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.HandGrab.HandGrabPose/OVROffsetMode
struct CORDL_TYPE HandGrabPose_OVROffsetMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HandGrabPose_OVROffsetMode_Unwrapped
enum struct __HandGrabPose_OVROffsetMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Apply = static_cast<int32_t>(0x1),
__E_Ignore = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HandGrabPose_OVROffsetMode_Unwrapped () const noexcept {
return static_cast<__HandGrabPose_OVROffsetMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HandGrabPose_OVROffsetMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HandGrabPose_OVROffsetMode(int32_t  value__) noexcept;

/// @brief Field Apply value: I32(1)
static ::GlobalNamespace::HandGrabPose_OVROffsetMode const Apply;

/// @brief Field Ignore value: I32(2)
static ::GlobalNamespace::HandGrabPose_OVROffsetMode const Ignore;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::HandGrabPose_OVROffsetMode const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16324};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandGrabPose_OVROffsetMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandGrabPose_OVROffsetMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
