#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/ActivationTrack_PostPlaybackState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ActivationTrack_PostPlaybackState)
// Forward declare root types
namespace GlobalNamespace {
struct ActivationTrack_PostPlaybackState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ActivationTrack_PostPlaybackState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ActivationTrack_PostPlaybackState, "UnityEngine.Timeline", "ActivationTrack/PostPlaybackState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Timeline.ActivationTrack/PostPlaybackState
struct CORDL_TYPE ActivationTrack_PostPlaybackState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ActivationTrack_PostPlaybackState_Unwrapped
enum struct __ActivationTrack_PostPlaybackState_Unwrapped : int32_t {
__E_Active = static_cast<int32_t>(0x0),
__E_Inactive = static_cast<int32_t>(0x1),
__E_Revert = static_cast<int32_t>(0x2),
__E_LeaveAsIs = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ActivationTrack_PostPlaybackState_Unwrapped () const noexcept {
return static_cast<__ActivationTrack_PostPlaybackState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ActivationTrack_PostPlaybackState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ActivationTrack_PostPlaybackState(int32_t  value__) noexcept;

/// @brief Field Active value: I32(0)
static ::GlobalNamespace::ActivationTrack_PostPlaybackState const Active;

/// @brief Field Inactive value: I32(1)
static ::GlobalNamespace::ActivationTrack_PostPlaybackState const Inactive;

/// @brief Field LeaveAsIs value: I32(3)
static ::GlobalNamespace::ActivationTrack_PostPlaybackState const LeaveAsIs;

/// @brief Field Revert value: I32(2)
static ::GlobalNamespace::ActivationTrack_PostPlaybackState const Revert;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28677};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ActivationTrack_PostPlaybackState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ActivationTrack_PostPlaybackState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
