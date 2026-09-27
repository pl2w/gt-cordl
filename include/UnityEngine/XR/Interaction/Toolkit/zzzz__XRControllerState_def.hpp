#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/XRControllerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionState_def.hpp"
#include "UnityEngine/XR/zzzz__InputTrackingState_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRControllerState)
namespace UnityEngine::SpatialTracking {
struct PoseDataFlags;
}
namespace UnityEngine::XR {
struct InputTrackingState;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRControllerState;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*, "UnityEngine.XR.Interaction.Toolkit", "XRControllerState");
// Dependencies System.Object, UnityEngine.Quaternion, UnityEngine.Vector2, UnityEngine.Vector3, UnityEngine.XR.InputTrackingState, UnityEngine.XR.Interaction.Toolkit.InteractionState
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.XRControllerState
class CORDL_TYPE XRControllerState : public ::System::Object {
public:
// Declarations
/// @brief Field activateInteractionState, offset 0x44, size 0x8 
 __declspec(property(get=__cordl_internal_get_activateInteractionState, put=__cordl_internal_set_activateInteractionState)) ::UnityEngine::XR::Interaction::Toolkit::InteractionState  activateInteractionState;

/// @brief Field inputTrackingState, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_inputTrackingState, put=__cordl_internal_set_inputTrackingState)) ::UnityEngine::XR::InputTrackingState  inputTrackingState;

/// @brief Field isTracked, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isTracked, put=__cordl_internal_set_isTracked)) bool  isTracked;

/// @brief [Obsolete("poseDataFlags has been deprecated. Use inputTrackingState instead.", true)]
 __declspec(property(get=get_poseDataFlags, put=set_poseDataFlags)) ::UnityEngine::SpatialTracking::PoseDataFlags  poseDataFlags;

/// @brief Field position, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) ::UnityEngine::Vector3  position;

/// @brief Field rotation, offset 0x2c, size 0x10 
 __declspec(property(get=__cordl_internal_get_rotation, put=__cordl_internal_set_rotation)) ::UnityEngine::Quaternion  rotation;

/// @brief Field selectInteractionState, offset 0x3c, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectInteractionState, put=__cordl_internal_set_selectInteractionState)) ::UnityEngine::XR::Interaction::Toolkit::InteractionState  selectInteractionState;

/// @brief Field time, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_time, put=__cordl_internal_set_time)) double_t  time;

/// @brief Field uiPressInteractionState, offset 0x4c, size 0x8 
 __declspec(property(get=__cordl_internal_get_uiPressInteractionState, put=__cordl_internal_set_uiPressInteractionState)) ::UnityEngine::XR::Interaction::Toolkit::InteractionState  uiPressInteractionState;

/// @brief Field uiScrollValue, offset 0x54, size 0x8 
 __declspec(property(get=__cordl_internal_get_uiScrollValue, put=__cordl_internal_set_uiScrollValue)) ::UnityEngine::Vector2  uiScrollValue;

static inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerState* New_ctor() ;

/// @brief [Obsolete("This constructor has been deprecated. Use the constructor with the isTracked parameter.", true)]
static inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerState* New_ctor(double_t  time, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::XR::InputTrackingState  inputTrackingState) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerState* New_ctor(double_t  time, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::XR::InputTrackingState  inputTrackingState, bool  isTracked) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerState* New_ctor(double_t  time, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::XR::InputTrackingState  inputTrackingState, bool  isTracked, bool  selectActive, bool  activateActive, bool  pressActive) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerState* New_ctor(double_t  time, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::XR::InputTrackingState  inputTrackingState, bool  isTracked, bool  selectActive, bool  activateActive, bool  pressActive, float_t  selectValue, float_t  activateValue, float_t  pressValue) ;

/// @brief [Obsolete("This constructor has been deprecated. Use the constructor with the isTracked parameter.", true)]
static inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerState* New_ctor(double_t  time, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::XR::InputTrackingState  inputTrackingState, bool  selectActive, bool  activateActive, bool  pressActive) ;

/// @brief [Obsolete("This constructor has been deprecated. Use the constructor with the isTracked parameter.", true)]
static inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerState* New_ctor(double_t  time, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::XR::InputTrackingState  inputTrackingState, bool  selectActive, bool  activateActive, bool  pressActive, float_t  selectValue, float_t  activateValue, float_t  pressValue) ;

/// @brief [Obsolete("This constructor has been deprecated. Use the constructors with the inputTrackingState parameter.", true)]
static inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerState* New_ctor(double_t  time, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  selectActive, bool  activateActive, bool  pressActive) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerState* New_ctor(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  value) ;

/// @brief Method ResetFrameDependentStates, addr 0xb3ff664, size 0x10, virtual false, abstract: false, final false
inline void ResetFrameDependentStates() ;

/// [Obsolete("ResetInputs has been renamed. Use ResetFrameDependentStates instead. (UnityUpgradable) -> ResetFrameDependentStates()", true)]
/// @brief Method ResetInputs, addr 0xb403a48, size 0x4, virtual false, abstract: false, final false
inline void ResetInputs() ;

/// @brief Method ToString, addr 0xb4034f0, size 0x344, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState const& __cordl_internal_get_activateInteractionState() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState& __cordl_internal_get_activateInteractionState() ;

constexpr ::UnityEngine::XR::InputTrackingState const& __cordl_internal_get_inputTrackingState() const;

constexpr ::UnityEngine::XR::InputTrackingState& __cordl_internal_get_inputTrackingState() ;

constexpr bool const& __cordl_internal_get_isTracked() const;

constexpr bool& __cordl_internal_get_isTracked() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_position() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_position() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rotation() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState const& __cordl_internal_get_selectInteractionState() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState& __cordl_internal_get_selectInteractionState() ;

constexpr double_t const& __cordl_internal_get_time() const;

constexpr double_t& __cordl_internal_get_time() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState const& __cordl_internal_get_uiPressInteractionState() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState& __cordl_internal_get_uiPressInteractionState() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_uiScrollValue() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_uiScrollValue() ;

constexpr void __cordl_internal_set_activateInteractionState(::UnityEngine::XR::Interaction::Toolkit::InteractionState  value) ;

constexpr void __cordl_internal_set_inputTrackingState(::UnityEngine::XR::InputTrackingState  value) ;

constexpr void __cordl_internal_set_isTracked(bool  value) ;

constexpr void __cordl_internal_set_position(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_selectInteractionState(::UnityEngine::XR::Interaction::Toolkit::InteractionState  value) ;

constexpr void __cordl_internal_set_time(double_t  value) ;

constexpr void __cordl_internal_set_uiPressInteractionState(::UnityEngine::XR::Interaction::Toolkit::InteractionState  value) ;

constexpr void __cordl_internal_set_uiScrollValue(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0xb400a4c, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

/// [Obsolete("This constructor has been deprecated. Use the constructor with the isTracked parameter.", true)]
/// @brief Method .ctor, addr 0xb403940, size 0x84, virtual false, abstract: false, final false
inline void _ctor(double_t  time, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::XR::InputTrackingState  inputTrackingState) ;

/// @brief Method .ctor, addr 0xb4031e8, size 0x84, virtual false, abstract: false, final false
inline void _ctor(double_t  time, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::XR::InputTrackingState  inputTrackingState, bool  isTracked) ;

/// @brief Method .ctor, addr 0xb40326c, size 0x140, virtual false, abstract: false, final false
inline void _ctor(double_t  time, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::XR::InputTrackingState  inputTrackingState, bool  isTracked, bool  selectActive, bool  activateActive, bool  pressActive) ;

/// @brief Method .ctor, addr 0xb4033ac, size 0x144, virtual false, abstract: false, final false
inline void _ctor(double_t  time, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::XR::InputTrackingState  inputTrackingState, bool  isTracked, bool  selectActive, bool  activateActive, bool  pressActive, float_t  selectValue, float_t  activateValue, float_t  pressValue) ;

/// [Obsolete("This constructor has been deprecated. Use the constructor with the isTracked parameter.", true)]
/// @brief Method .ctor, addr 0xb4038bc, size 0x84, virtual false, abstract: false, final false
inline void _ctor(double_t  time, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::XR::InputTrackingState  inputTrackingState, bool  selectActive, bool  activateActive, bool  pressActive) ;

/// [Obsolete("This constructor has been deprecated. Use the constructor with the isTracked parameter.", true)]
/// @brief Method .ctor, addr 0xb4039c4, size 0x84, virtual false, abstract: false, final false
inline void _ctor(double_t  time, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::XR::InputTrackingState  inputTrackingState, bool  selectActive, bool  activateActive, bool  pressActive, float_t  selectValue, float_t  activateValue, float_t  pressValue) ;

/// [Obsolete("This constructor has been deprecated. Use the constructors with the inputTrackingState parameter.", true)]
/// @brief Method .ctor, addr 0xb403840, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(double_t  time, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  selectActive, bool  activateActive, bool  pressActive) ;

/// @brief Method .ctor, addr 0xb4026a4, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  value) ;

/// @brief Method get_poseDataFlags, addr 0xb403834, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::SpatialTracking::PoseDataFlags get_poseDataFlags() ;

/// @brief Method set_poseDataFlags, addr 0xb40383c, size 0x4, virtual false, abstract: false, final false
inline void set_poseDataFlags(::UnityEngine::SpatialTracking::PoseDataFlags  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRControllerState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRControllerState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRControllerState(XRControllerState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRControllerState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRControllerState(XRControllerState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11075};

/// @brief Field time, offset: 0x10, size: 0x8, def value: None
 double_t  ___time;

/// @brief Field inputTrackingState, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::XR::InputTrackingState  ___inputTrackingState;

/// @brief Field isTracked, offset: 0x1c, size: 0x1, def value: None
 bool  ___isTracked;

/// @brief Field position, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___position;

/// @brief Field rotation, offset: 0x2c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rotation;

/// @brief Field selectInteractionState, offset: 0x3c, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::InteractionState  ___selectInteractionState;

/// @brief Field activateInteractionState, offset: 0x44, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::InteractionState  ___activateInteractionState;

/// @brief Field uiPressInteractionState, offset: 0x4c, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::InteractionState  ___uiPressInteractionState;

/// @brief Field uiScrollValue, offset: 0x54, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___uiScrollValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerState, ___time) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerState, ___inputTrackingState) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerState, ___isTracked) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerState, ___position) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerState, ___rotation) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerState, ___selectInteractionState) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerState, ___activateInteractionState) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerState, ___uiPressInteractionState) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerState, ___uiScrollValue) == 0x54, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRControllerState) == 0x60, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
