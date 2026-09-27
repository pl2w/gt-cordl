#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/LazyFollow_RotationFollowMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LazyFollow_RotationFollowMode)
// Forward declare root types
namespace GlobalNamespace {
struct LazyFollow_RotationFollowMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LazyFollow_RotationFollowMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LazyFollow_RotationFollowMode, "UnityEngine.XR.Interaction.Toolkit.UI", "LazyFollow/RotationFollowMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.LazyFollow/RotationFollowMode
struct CORDL_TYPE LazyFollow_RotationFollowMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LazyFollow_RotationFollowMode_Unwrapped
enum struct __LazyFollow_RotationFollowMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_LookAt = static_cast<int32_t>(0x1),
__E_LookAtWithWorldUp = static_cast<int32_t>(0x2),
__E_Follow = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LazyFollow_RotationFollowMode_Unwrapped () const noexcept {
return static_cast<__LazyFollow_RotationFollowMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LazyFollow_RotationFollowMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LazyFollow_RotationFollowMode(int32_t  value__) noexcept;

/// @brief Field Follow value: I32(3)
static ::GlobalNamespace::LazyFollow_RotationFollowMode const Follow;

/// @brief Field LookAt value: I32(1)
static ::GlobalNamespace::LazyFollow_RotationFollowMode const LookAt;

/// @brief Field LookAtWithWorldUp value: I32(2)
static ::GlobalNamespace::LazyFollow_RotationFollowMode const LookAtWithWorldUp;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::LazyFollow_RotationFollowMode const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11280};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LazyFollow_RotationFollowMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LazyFollow_RotationFollowMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
