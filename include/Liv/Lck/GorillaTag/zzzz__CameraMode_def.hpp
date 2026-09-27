#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/CameraMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraMode)
// Forward declare root types
namespace Liv::Lck::GorillaTag {
struct CameraMode;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::GorillaTag::CameraMode);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::CameraMode, "Liv.Lck.GorillaTag", "CameraMode");
// Dependencies 
namespace Liv::Lck::GorillaTag {
// Is value type: true
// CS Name: Liv.Lck.GorillaTag.CameraMode
struct CORDL_TYPE CameraMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CameraMode_Unwrapped
enum struct __CameraMode_Unwrapped : int32_t {
__E_Selfie = static_cast<int32_t>(0x0),
__E_FirstPerson = static_cast<int32_t>(0x1),
__E_ThirdPerson = static_cast<int32_t>(0x2),
__E_Headset = static_cast<int32_t>(0x3),
__E_Drone = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CameraMode_Unwrapped () const noexcept {
return static_cast<__CameraMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CameraMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CameraMode(int32_t  value__) noexcept;

/// @brief Field Drone value: I32(4)
static ::Liv::Lck::GorillaTag::CameraMode const Drone;

/// @brief Field FirstPerson value: I32(1)
static ::Liv::Lck::GorillaTag::CameraMode const FirstPerson;

/// @brief Field Headset value: I32(3)
static ::Liv::Lck::GorillaTag::CameraMode const Headset;

/// @brief Field Selfie value: I32(0)
static ::Liv::Lck::GorillaTag::CameraMode const Selfie;

/// @brief Field ThirdPerson value: I32(2)
static ::Liv::Lck::GorillaTag::CameraMode const ThirdPerson;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29651};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::CameraMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::CameraMode) == 0x4, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
