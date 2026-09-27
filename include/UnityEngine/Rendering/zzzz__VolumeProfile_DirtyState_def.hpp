#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeProfile_DirtyState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VolumeProfile_DirtyState)
// Forward declare root types
namespace GlobalNamespace {
struct VolumeProfile_DirtyState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VolumeProfile_DirtyState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VolumeProfile_DirtyState, "UnityEngine.Rendering", "VolumeProfile/DirtyState");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.VolumeProfile/DirtyState
struct CORDL_TYPE VolumeProfile_DirtyState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VolumeProfile_DirtyState_Unwrapped
enum struct __VolumeProfile_DirtyState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_DirtyByComponentChange = static_cast<int32_t>(0x1),
__E_DirtyByProfileReset = static_cast<int32_t>(0x2),
__E_Other = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VolumeProfile_DirtyState_Unwrapped () const noexcept {
return static_cast<__VolumeProfile_DirtyState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VolumeProfile_DirtyState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VolumeProfile_DirtyState(int32_t  value__) noexcept;

/// @brief Field DirtyByComponentChange value: I32(1)
static ::GlobalNamespace::VolumeProfile_DirtyState const DirtyByComponentChange;

/// @brief Field DirtyByProfileReset value: I32(2)
static ::GlobalNamespace::VolumeProfile_DirtyState const DirtyByProfileReset;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::VolumeProfile_DirtyState const None;

/// @brief Field Other value: I32(4)
static ::GlobalNamespace::VolumeProfile_DirtyState const Other;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17103};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VolumeProfile_DirtyState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VolumeProfile_DirtyState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
