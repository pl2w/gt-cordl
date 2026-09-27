#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/TrackingStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/zzzz__InputTrackingState_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TrackingStatus)
namespace UnityEngine::XR {
struct InputTrackingState;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
struct TrackingStatus;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus, "UnityEngine.XR.Interaction.Toolkit.Inputs", "TrackingStatus");
// Dependencies UnityEngine.XR.InputTrackingState
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.TrackingStatus
struct CORDL_TYPE TrackingStatus {
public:
// Declarations
 __declspec(property(get=get_isConnected, put=set_isConnected)) bool  isConnected;

 __declspec(property(get=get_isTracked, put=set_isTracked)) bool  isTracked;

 __declspec(property(get=get_trackingState, put=set_trackingState)) ::UnityEngine::XR::InputTrackingState  trackingState;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_isConnected, addr 0xb4b4d68, size 0x8, virtual false, abstract: false, final false
inline bool get_isConnected() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_isTracked, addr 0xb4b4d78, size 0x8, virtual false, abstract: false, final false
inline bool get_isTracked() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_trackingState, addr 0xb4b4d88, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::InputTrackingState get_trackingState() ;

/// [CompilerGenerated]
/// @brief Method set_isConnected, addr 0xb4b4d70, size 0x8, virtual false, abstract: false, final false
inline void set_isConnected(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_isTracked, addr 0xb4b4d80, size 0x8, virtual false, abstract: false, final false
inline void set_isTracked(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_trackingState, addr 0xb4b4d90, size 0x8, virtual false, abstract: false, final false
inline void set_trackingState(::UnityEngine::XR::InputTrackingState  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TrackingStatus() ;

// Ctor Parameters [CppParam { name: "_isConnected_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_isTracked_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_trackingState_k__BackingField", ty: "::UnityEngine::XR::InputTrackingState", modifiers: "", def_value: None, comment: None }]
constexpr TrackingStatus(bool  _isConnected_k__BackingField, bool  _isTracked_k__BackingField, ::UnityEngine::XR::InputTrackingState  _trackingState_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11598};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <isConnected>k__BackingField, offset: 0x0, size: 0x1, def value: None
 bool  _isConnected_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <isTracked>k__BackingField, offset: 0x1, size: 0x1, def value: None
 bool  _isTracked_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <trackingState>k__BackingField, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::XR::InputTrackingState  _trackingState_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus, _isConnected_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus, _isTracked_k__BackingField) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus, _trackingState_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs
