#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/PinchGrabAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PinchGrabAPI)
namespace Oculus::Interaction::GrabAPI {
class PinchGrabAPI_FingerPinchData;
}
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction::Input {
class IHmd;
}
namespace Oculus::Interaction::Input {
class ShadowHand;
}
namespace Oculus::Interaction {
class IFingerAPI;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::GrabAPI {
class PinchGrabAPI;
}
namespace Oculus::Interaction::GrabAPI {
class PinchGrabAPI_FingerPinchData;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::GrabAPI::PinchGrabAPI*);
MARK_REF_T(::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::GrabAPI::PinchGrabAPI*, "Oculus.Interaction.GrabAPI", "PinchGrabAPI");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*, "Oculus.Interaction.GrabAPI", "PinchGrabAPI/FingerPinchData");
// Dependencies Oculus.Interaction.GrabAPI.PinchGrabAPI::FingerPinchData, Oculus.Interaction.Input.HandJointId, System.Object, UnityEngine.Pose
namespace Oculus::Interaction::GrabAPI {
// Is value type: false
// CS Name: Oculus.Interaction.GrabAPI.PinchGrabAPI
class CORDL_TYPE PinchGrabAPI : public ::System::Object {
public:
// Declarations
using FingerPinchData = ::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData;

 __declspec(property(get=get_DistanceStart)) float_t  DistanceStart;

 __declspec(property(get=get_DistanceStopMax)) float_t  DistanceStopMax;

 __declspec(property(get=get_DistanceStopOffset)) float_t  DistanceStopOffset;

/// @brief Field INDEX_JOINTS, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_INDEX_JOINTS, put=__cordl_internal_set_INDEX_JOINTS)) ::ArrayW<::Oculus::Interaction::Input::HandJointId>  INDEX_JOINTS;

/// @brief Field THUMB_JOINTS_MAINTAIN, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_THUMB_JOINTS_MAINTAIN, put=__cordl_internal_set_THUMB_JOINTS_MAINTAIN)) ::ArrayW<::Oculus::Interaction::Input::HandJointId>  THUMB_JOINTS_MAINTAIN;

/// @brief Field THUMB_JOINTS_SELECT, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_THUMB_JOINTS_SELECT, put=__cordl_internal_set_THUMB_JOINTS_SELECT)) ::ArrayW<::Oculus::Interaction::Input::HandJointId>  THUMB_JOINTS_SELECT;

/// @brief Field _fingersPinchData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__fingersPinchData, put=__cordl_internal_set__fingersPinchData)) ::ArrayW<::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*>  _fingersPinchData;

/// @brief Field _handScale, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__handScale, put=__cordl_internal_set__handScale)) float_t  _handScale;

/// @brief Field _hmd, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__hmd, put=__cordl_internal_set__hmd)) ::Oculus::Interaction::Input::IHmd*  _hmd;

/// @brief Field _isPinchVisibilityGood, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__isPinchVisibilityGood, put=__cordl_internal_set__isPinchVisibilityGood)) bool  _isPinchVisibilityGood;

/// @brief Field _rootPose, offset 0x4c, size 0x1c 
 __declspec(property(get=__cordl_internal_get__rootPose, put=__cordl_internal_set__rootPose)) ::UnityEngine::Pose  _rootPose;

/// @brief Field _shadowHand, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__shadowHand, put=__cordl_internal_set__shadowHand)) ::Oculus::Interaction::Input::ShadowHand*  _shadowHand;

/// @brief Convert operator to "::Oculus::Interaction::IFingerAPI"
constexpr operator  ::Oculus::Interaction::IFingerAPI*() noexcept;

/// @brief Method ClearState, addr 0xa4f9ed8, size 0x4c, virtual false, abstract: false, final false
inline void ClearState() ;

/// @brief Method DistancePointToSegment, addr 0xa4fb4f0, size 0x130, virtual false, abstract: false, final false
inline float_t DistancePointToSegment(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  a0, ::UnityEngine::Vector3  a1) ;

/// @brief Method DistanceSegmentToSegment, addr 0xa4fae1c, size 0x6d4, virtual false, abstract: false, final false
inline float_t DistanceSegmentToSegment(::UnityEngine::Vector3  a0, ::UnityEngine::Vector3  a1, ::UnityEngine::Vector3  b0, ::UnityEngine::Vector3  b1) ;

/// @brief Method GetClosestDistanceToJoints, addr 0xa4fa664, size 0x334, virtual false, abstract: false, final false
inline float_t GetClosestDistanceToJoints(::UnityEngine::Vector3  edgeStart, ::UnityEngine::Vector3  edgeEnd, ::ArrayW<::Oculus::Interaction::Input::HandJointId>  targetJoints, float_t  maximumDotAllowed) ;

/// @brief Method GetClosestDistanceToJoints, addr 0xa4faa50, size 0x134, virtual false, abstract: false, final false
inline float_t GetClosestDistanceToJoints(::UnityEngine::Vector3  position, ::ArrayW<::Oculus::Interaction::Input::HandJointId>  targetJoints) ;

/// @brief Method GetFingerGrabScore, addr 0xa4f9b54, size 0x38, virtual true, abstract: false, final true
inline float_t GetFingerGrabScore(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerIsGrabbing, addr 0xa4f9a28, size 0x38, virtual true, abstract: false, final true
inline bool GetFingerIsGrabbing(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerIsGrabbingChanged, addr 0xa4f9b00, size 0x54, virtual true, abstract: false, final true
inline bool GetFingerIsGrabbingChanged(::Oculus::Interaction::Input::HandFinger  finger, bool  targetPinchState) ;

/// @brief Method GetWristOffsetLocal, addr 0xa4f9a60, size 0xa0, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 GetWristOffsetLocal() ;

/// @brief Method IsPointNearThumb, addr 0xa4fab84, size 0x22c, virtual false, abstract: false, final false
inline bool IsPointNearThumb(::UnityEngine::Vector3  position, ::ArrayW<::Oculus::Interaction::Input::HandJointId>  thumbJoints) ;

/// @brief Method IsThumbNearIndex, addr 0xa4fa434, size 0x230, virtual false, abstract: false, final false
inline bool IsThumbNearIndex(::Oculus::Interaction::Input::Handedness  handedness) ;

static inline ::Oculus::Interaction::GrabAPI::PinchGrabAPI* New_ctor(::Oculus::Interaction::Input::IHmd*  hmd) ;

/// @brief Method PinchHasGoodVisibility, addr 0xa4f9f24, size 0x2a0, virtual false, abstract: false, final false
inline bool PinchHasGoodVisibility(::Oculus::Interaction::Input::Handedness  handedness) ;

/// @brief Method Update, addr 0xa4f9b8c, size 0x20c, virtual true, abstract: false, final true
inline void Update(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method Update, addr 0xa4f9d98, size 0x140, virtual false, abstract: false, final false
inline void Update(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*  handPoses, ::Oculus::Interaction::Input::Handedness  handedness, ::UnityEngine::Pose  rootPose, float_t  handScale) ;

/// @brief Method UpdateFinger, addr 0xa4fa2a0, size 0x14c, virtual false, abstract: false, final false
inline void UpdateFinger(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method UpdatePinchData, addr 0xa4fa998, size 0xb8, virtual false, abstract: false, final false
inline void UpdatePinchData(float_t  distance, int32_t  fingerIndex, float_t  distanceStart, float_t  distanceStopOffset, float_t  distanceStopMax) ;

/// @brief Method UpdateThumb, addr 0xa4fa1c4, size 0xdc, virtual false, abstract: false, final false
inline void UpdateThumb(::Oculus::Interaction::Input::Handedness  handedness) ;

constexpr ::ArrayW<::Oculus::Interaction::Input::HandJointId> const& __cordl_internal_get_INDEX_JOINTS() const;

constexpr ::ArrayW<::Oculus::Interaction::Input::HandJointId>& __cordl_internal_get_INDEX_JOINTS() ;

constexpr ::ArrayW<::Oculus::Interaction::Input::HandJointId> const& __cordl_internal_get_THUMB_JOINTS_MAINTAIN() const;

constexpr ::ArrayW<::Oculus::Interaction::Input::HandJointId>& __cordl_internal_get_THUMB_JOINTS_MAINTAIN() ;

constexpr ::ArrayW<::Oculus::Interaction::Input::HandJointId> const& __cordl_internal_get_THUMB_JOINTS_SELECT() const;

constexpr ::ArrayW<::Oculus::Interaction::Input::HandJointId>& __cordl_internal_get_THUMB_JOINTS_SELECT() ;

constexpr ::ArrayW<::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*> const& __cordl_internal_get__fingersPinchData() const;

constexpr ::ArrayW<::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*>& __cordl_internal_get__fingersPinchData() ;

constexpr float_t const& __cordl_internal_get__handScale() const;

constexpr float_t& __cordl_internal_get__handScale() ;

constexpr ::Oculus::Interaction::Input::IHmd* const& __cordl_internal_get__hmd() const;

constexpr ::Oculus::Interaction::Input::IHmd*& __cordl_internal_get__hmd() ;

constexpr bool const& __cordl_internal_get__isPinchVisibilityGood() const;

constexpr bool& __cordl_internal_get__isPinchVisibilityGood() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__rootPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__rootPose() ;

constexpr ::Oculus::Interaction::Input::ShadowHand* const& __cordl_internal_get__shadowHand() const;

constexpr ::Oculus::Interaction::Input::ShadowHand*& __cordl_internal_get__shadowHand() ;

constexpr void __cordl_internal_set_INDEX_JOINTS(::ArrayW<::Oculus::Interaction::Input::HandJointId>  value) ;

constexpr void __cordl_internal_set_THUMB_JOINTS_MAINTAIN(::ArrayW<::Oculus::Interaction::Input::HandJointId>  value) ;

constexpr void __cordl_internal_set_THUMB_JOINTS_SELECT(::ArrayW<::Oculus::Interaction::Input::HandJointId>  value) ;

constexpr void __cordl_internal_set__fingersPinchData(::ArrayW<::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*>  value) ;

constexpr void __cordl_internal_set__handScale(float_t  value) ;

constexpr void __cordl_internal_set__hmd(::Oculus::Interaction::Input::IHmd*  value) ;

constexpr void __cordl_internal_set__isPinchVisibilityGood(bool  value) ;

constexpr void __cordl_internal_set__rootPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__shadowHand(::Oculus::Interaction::Input::ShadowHand*  value) ;

/// @brief Method .ctor, addr 0xa4f9680, size 0x32c, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::Input::IHmd*  hmd) ;

/// @brief Method get_DistanceStart, addr 0xa4f963c, size 0x1c, virtual false, abstract: false, final false
inline float_t get_DistanceStart() ;

/// @brief Method get_DistanceStopMax, addr 0xa4f9658, size 0xc, virtual false, abstract: false, final false
inline float_t get_DistanceStopMax() ;

/// @brief Method get_DistanceStopOffset, addr 0xa4f9664, size 0x1c, virtual false, abstract: false, final false
inline float_t get_DistanceStopOffset() ;

/// @brief Convert to "::Oculus::Interaction::IFingerAPI"
constexpr ::Oculus::Interaction::IFingerAPI* i___Oculus__Interaction__IFingerAPI() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PinchGrabAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PinchGrabAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PinchGrabAPI(PinchGrabAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PinchGrabAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PinchGrabAPI(PinchGrabAPI const& ) = delete;

/// @brief Field PINCH_DISTANCE_START offset 0xffffffff size 0x4
static constexpr float_t  PINCH_DISTANCE_START{static_cast<float_t>(0.02f)};

/// @brief Field PINCH_DISTANCE_STOP_MAX offset 0xffffffff size 0x4
static constexpr float_t  PINCH_DISTANCE_STOP_MAX{static_cast<float_t>(0.1f)};

/// @brief Field PINCH_DISTANCE_STOP_OFFSET offset 0xffffffff size 0x4
static constexpr float_t  PINCH_DISTANCE_STOP_OFFSET{static_cast<float_t>(0.04f)};

/// @brief Field PINCH_HQ_DISTANCE_START offset 0xffffffff size 0x4
static constexpr float_t  PINCH_HQ_DISTANCE_START{static_cast<float_t>(0.016f)};

/// @brief Field PINCH_HQ_DISTANCE_STOP_MAX offset 0xffffffff size 0x4
static constexpr float_t  PINCH_HQ_DISTANCE_STOP_MAX{static_cast<float_t>(0.1f)};

/// @brief Field PINCH_HQ_DISTANCE_STOP_OFFSET offset 0xffffffff size 0x4
static constexpr float_t  PINCH_HQ_DISTANCE_STOP_OFFSET{static_cast<float_t>(0.016f)};

/// @brief Field PINCH_HQ_VIEW_ANGLE_THRESHOLD offset 0xffffffff size 0x4
static constexpr float_t  PINCH_HQ_VIEW_ANGLE_THRESHOLD{static_cast<float_t>(40.0f)};

/// @brief Field THUMB_DISTANCE_START offset 0xffffffff size 0x4
static constexpr float_t  THUMB_DISTANCE_START{static_cast<float_t>(0.03f)};

/// @brief Field THUMB_DISTANCE_STOP_MAX offset 0xffffffff size 0x4
static constexpr float_t  THUMB_DISTANCE_STOP_MAX{static_cast<float_t>(0.05f)};

/// @brief Field THUMB_DISTANCE_STOP_OFFSET offset 0xffffffff size 0x4
static constexpr float_t  THUMB_DISTANCE_STOP_OFFSET{static_cast<float_t>(0.04f)};

/// @brief Field THUMB_MAX_DOT offset 0xffffffff size 0x4
static constexpr float_t  THUMB_MAX_DOT{static_cast<float_t>(0.5f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16416};

/// @brief Field _isPinchVisibilityGood, offset: 0x10, size: 0x1, def value: None
 bool  ____isPinchVisibilityGood;

/// @brief Field THUMB_JOINTS_SELECT, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::Input::HandJointId>  ___THUMB_JOINTS_SELECT;

/// @brief Field THUMB_JOINTS_MAINTAIN, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::Input::HandJointId>  ___THUMB_JOINTS_MAINTAIN;

/// @brief Field INDEX_JOINTS, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::Input::HandJointId>  ___INDEX_JOINTS;

/// @brief Field _fingersPinchData, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*>  ____fingersPinchData;

/// @brief Field _hmd, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHmd*  ____hmd;

/// @brief Field _shadowHand, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::Input::ShadowHand*  ____shadowHand;

/// @brief Field _handScale, offset: 0x48, size: 0x4, def value: None
 float_t  ____handScale;

/// @brief Field _rootPose, offset: 0x4c, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____rootPose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::GrabAPI::PinchGrabAPI, ____isPinchVisibilityGood) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::PinchGrabAPI, ___THUMB_JOINTS_SELECT) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::PinchGrabAPI, ___THUMB_JOINTS_MAINTAIN) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::PinchGrabAPI, ___INDEX_JOINTS) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::PinchGrabAPI, ____fingersPinchData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::PinchGrabAPI, ____hmd) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::PinchGrabAPI, ____shadowHand) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::PinchGrabAPI, ____handScale) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::PinchGrabAPI, ____rootPose) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::GrabAPI::PinchGrabAPI) == 0x68, "Size mismatch!");

} // namespace end def Oculus::Interaction::GrabAPI
// Dependencies Oculus.Interaction.Input.HandJointId, System.Object, UnityEngine.Vector3
namespace Oculus::Interaction::GrabAPI {
// Is value type: false
// CS Name: Oculus.Interaction.GrabAPI.PinchGrabAPI/FingerPinchData
class CORDL_TYPE PinchGrabAPI_FingerPinchData : public ::System::Object {
public:
// Declarations
/// @brief Field IsPinching, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsPinching, put=__cordl_internal_set_IsPinching)) bool  IsPinching;

 __declspec(property(get=get_IsPinchingChanged, put=set_IsPinchingChanged)) bool  IsPinchingChanged;

/// @brief Field PinchStrength, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_PinchStrength, put=__cordl_internal_set_PinchStrength)) float_t  PinchStrength;

 __declspec(property(get=get_TipPosition, put=set_TipPosition)) ::UnityEngine::Vector3  TipPosition;

/// @brief Field <IsPinchingChanged>k__BackingField, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsPinchingChanged_k__BackingField, put=__cordl_internal_set__IsPinchingChanged_k__BackingField)) bool  _IsPinchingChanged_k__BackingField;

/// @brief Field <TipPosition>k__BackingField, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get__TipPosition_k__BackingField, put=__cordl_internal_set__TipPosition_k__BackingField)) ::UnityEngine::Vector3  _TipPosition_k__BackingField;

/// @brief Field _minPinchDistance, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__minPinchDistance, put=__cordl_internal_set__minPinchDistance)) float_t  _minPinchDistance;

/// @brief Field _tipId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__tipId, put=__cordl_internal_set__tipId)) ::Oculus::Interaction::Input::HandJointId  _tipId;

/// @brief Method ClearState, addr 0xa4fae14, size 0x8, virtual false, abstract: false, final false
inline void ClearState() ;

static inline ::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData* New_ctor(::Oculus::Interaction::Input::HandFinger  fingerId) ;

/// @brief Method UpdateIsPinching, addr 0xa4fadb0, size 0x64, virtual false, abstract: false, final false
inline void UpdateIsPinching(float_t  distance, float_t  start, float_t  stopOffset, float_t  stopMax) ;

/// @brief Method UpdateTipPosition, addr 0xa4fa3ec, size 0x48, virtual false, abstract: false, final false
inline void UpdateTipPosition(::Oculus::Interaction::Input::ShadowHand*  hand) ;

constexpr bool const& __cordl_internal_get_IsPinching() const;

constexpr bool& __cordl_internal_get_IsPinching() ;

constexpr float_t const& __cordl_internal_get_PinchStrength() const;

constexpr float_t& __cordl_internal_get_PinchStrength() ;

constexpr bool const& __cordl_internal_get__IsPinchingChanged_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsPinchingChanged_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__TipPosition_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__TipPosition_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__minPinchDistance() const;

constexpr float_t& __cordl_internal_get__minPinchDistance() ;

constexpr ::Oculus::Interaction::Input::HandJointId const& __cordl_internal_get__tipId() const;

constexpr ::Oculus::Interaction::Input::HandJointId& __cordl_internal_get__tipId() ;

constexpr void __cordl_internal_set_IsPinching(bool  value) ;

constexpr void __cordl_internal_set_PinchStrength(float_t  value) ;

constexpr void __cordl_internal_set__IsPinchingChanged_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__TipPosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__minPinchDistance(float_t  value) ;

constexpr void __cordl_internal_set__tipId(::Oculus::Interaction::Input::HandJointId  value) ;

/// @brief Method .ctor, addr 0xa4f99ac, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::Input::HandFinger  fingerId) ;

/// [CompilerGenerated]
/// @brief Method get_IsPinchingChanged, addr 0xa4fb638, size 0x8, virtual false, abstract: false, final false
inline bool get_IsPinchingChanged() ;

/// [CompilerGenerated]
/// @brief Method get_TipPosition, addr 0xa4fb620, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_TipPosition() ;

/// [CompilerGenerated]
/// @brief Method set_IsPinchingChanged, addr 0xa4fb640, size 0x8, virtual false, abstract: false, final false
inline void set_IsPinchingChanged(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_TipPosition, addr 0xa4fb62c, size 0xc, virtual false, abstract: false, final false
inline void set_TipPosition(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PinchGrabAPI_FingerPinchData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PinchGrabAPI_FingerPinchData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PinchGrabAPI_FingerPinchData(PinchGrabAPI_FingerPinchData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PinchGrabAPI_FingerPinchData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PinchGrabAPI_FingerPinchData(PinchGrabAPI_FingerPinchData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16415};

/// @brief Field _tipId, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandJointId  ____tipId;

/// @brief Field _minPinchDistance, offset: 0x14, size: 0x4, def value: None
 float_t  ____minPinchDistance;

/// [CompilerGenerated]
/// @brief Field <TipPosition>k__BackingField, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____TipPosition_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsPinchingChanged>k__BackingField, offset: 0x24, size: 0x1, def value: None
 bool  ____IsPinchingChanged_k__BackingField;

/// @brief Field PinchStrength, offset: 0x28, size: 0x4, def value: None
 float_t  ___PinchStrength;

/// @brief Field IsPinching, offset: 0x2c, size: 0x1, def value: None
 bool  ___IsPinching;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData, ____tipId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData, ____minPinchDistance) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData, ____TipPosition_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData, ____IsPinchingChanged_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData, ___PinchStrength) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData, ___IsPinching) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::GrabAPI
