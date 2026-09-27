#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Hand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__DataModifier_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Hand)
namespace GlobalNamespace {
template<typename TData>
struct DataSource_1_UpdateModeFlags;
}
namespace Oculus::Interaction::Input {
template<typename TData>
class DataModifier_1;
}
namespace Oculus::Interaction::Input {
class HandDataAsset;
}
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::Input {
class HandJointCache;
}
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::Input {
class HandSkeleton;
}
namespace Oculus::Interaction::Input {
class Hand___c;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace Oculus::Interaction::Input {
class IDataSource;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction::Input {
class ITrackingToWorldTransformer;
}
namespace Oculus::Interaction::Input {
struct PoseOrigin;
}
namespace Oculus::Interaction::Input {
class ReadOnlyHandJointPoses;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class Hand;
}
namespace Oculus::Interaction::Input {
class Hand___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::Hand*);
MARK_REF_T(::Oculus::Interaction::Input::Hand___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::Hand*, "Oculus.Interaction.Input", "Hand");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::Hand___c*, "Oculus.Interaction.Input", "Hand/<>c");
// Dependencies Oculus.Interaction.Input.DataModifier`1<TData>, UnityEngine.Vector3
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.Hand
class CORDL_TYPE Hand : public ::Oculus::Interaction::Input::DataModifier_1<::Oculus::Interaction::Input::HandDataAsset*> {
public:
// Declarations
using __c = ::Oculus::Interaction::Input::Hand___c;

 __declspec(property(get=get_HandSkeleton)) ::Oculus::Interaction::Input::HandSkeleton*  HandSkeleton;

 __declspec(property(get=get_Handedness)) ::Oculus::Interaction::Input::Handedness  Handedness;

 __declspec(property(get=get_IsConnected)) bool  IsConnected;

 __declspec(property(get=get_IsDominantHand)) bool  IsDominantHand;

 __declspec(property(get=get_IsHighConfidence)) bool  IsHighConfidence;

 __declspec(property(get=get_IsPointerPoseValid)) bool  IsPointerPoseValid;

 __declspec(property(get=get_IsTrackedDataValid)) bool  IsTrackedDataValid;

/// @brief Field PALM_LOCAL_OFFSET, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_PALM_LOCAL_OFFSET, put=setStaticF_PALM_LOCAL_OFFSET)) ::UnityEngine::Vector3  PALM_LOCAL_OFFSET;

 __declspec(property(get=get_Scale)) float_t  Scale;

 __declspec(property(get=get_TrackingToWorldTransformer)) ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  TrackingToWorldTransformer;

/// @brief Field WhenHandUpdated, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenHandUpdated, put=__cordl_internal_set_WhenHandUpdated)) ::System::Action*  WhenHandUpdated;

/// @brief Field _jointPosesCache, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointPosesCache, put=__cordl_internal_set__jointPosesCache)) ::Oculus::Interaction::Input::HandJointCache*  _jointPosesCache;

/// @brief Convert operator to "::Oculus::Interaction::Input::IHand"
constexpr operator  ::Oculus::Interaction::Input::IHand*() noexcept;

/// @brief Method Apply, addr 0xa50d910, size 0x4, virtual true, abstract: false, final false
inline void Apply(::Oculus::Interaction::Input::HandDataAsset*  data) ;

/// @brief Method CheckJointPosesCacheUpdate, addr 0xa50da50, size 0x168, virtual false, abstract: false, final false
inline void CheckJointPosesCacheUpdate() ;

/// @brief Method GetFingerIsHighConfidence, addr 0xa50e518, size 0x80, virtual true, abstract: false, final true
inline bool GetFingerIsHighConfidence(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerIsPinching, addr 0xa50dbb8, size 0x98, virtual true, abstract: false, final true
inline bool GetFingerIsPinching(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerPinchStrength, addr 0xa50e598, size 0x80, virtual true, abstract: false, final true
inline float_t GetFingerPinchStrength(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetIndexFingerIsPinching, addr 0xa50dc50, size 0x8, virtual true, abstract: false, final true
inline bool GetIndexFingerIsPinching() ;

/// @brief Method GetJointPose, addr 0xa50debc, size 0xf4, virtual true, abstract: false, final true
inline bool GetJointPose(::Oculus::Interaction::Input::HandJointId  handJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetJointPoseFromWrist, addr 0xa50e224, size 0xc8, virtual true, abstract: false, final true
inline bool GetJointPoseFromWrist(::Oculus::Interaction::Input::HandJointId  handJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetJointPoseLocal, addr 0xa50e080, size 0xc8, virtual true, abstract: false, final true
inline bool GetJointPoseLocal(::Oculus::Interaction::Input::HandJointId  handJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetJointPosesFromWrist, addr 0xa50e2ec, size 0xdc, virtual true, abstract: false, final true
inline bool GetJointPosesFromWrist(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>  jointPosesFromWrist) ;

/// @brief Method GetJointPosesLocal, addr 0xa50e148, size 0xdc, virtual true, abstract: false, final true
inline bool GetJointPosesLocal(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>  localJointPoses) ;

/// @brief Method GetPalmPoseLocal, addr 0xa50e3c8, size 0x150, virtual true, abstract: false, final true
inline bool GetPalmPoseLocal(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetPointerPose, addr 0xa50dcc4, size 0x70, virtual true, abstract: false, final true
inline bool GetPointerPose(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetRootPose, addr 0xa50e010, size 0x70, virtual true, abstract: false, final true
inline bool GetRootPose(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method InitializeJointPosesCache, addr 0xa50d9a0, size 0xb0, virtual false, abstract: false, final false
inline void InitializeJointPosesCache() ;

/// @brief Method InjectAllHand, addr 0xa507fa4, size 0x78, virtual false, abstract: false, final false
inline void InjectAllHand(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>  updateMode, ::Oculus::Interaction::Input::IDataSource*  updateAfter, ::Oculus::Interaction::Input::DataModifier_1<::Oculus::Interaction::Input::HandDataAsset*>*  modifyDataFromSource, bool  applyModifier) ;

/// @brief Method IsPoseOriginAllowed, addr 0xa50dcb8, size 0xc, virtual false, abstract: false, final false
inline bool IsPoseOriginAllowed(::Oculus::Interaction::Input::PoseOrigin  poseOrigin) ;

/// @brief Method IsPoseOriginDisallowed, addr 0xa50e618, size 0xc, virtual false, abstract: false, final false
inline bool IsPoseOriginDisallowed(::Oculus::Interaction::Input::PoseOrigin  poseOrigin) ;

/// @brief Method MarkInputDataRequiresUpdate, addr 0xa50d914, size 0x8c, virtual true, abstract: false, final false
inline void MarkInputDataRequiresUpdate() ;

static inline ::Oculus::Interaction::Input::Hand* New_ctor() ;

/// @brief Method ValidatePose, addr 0xa50dd34, size 0x188, virtual false, abstract: false, final false
inline bool ValidatePose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  sourcePose, ::Oculus::Interaction::Input::PoseOrigin  sourcePoseOrigin, ::by_ref<::UnityEngine::Pose>  pose) ;

constexpr ::System::Action* const& __cordl_internal_get_WhenHandUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_WhenHandUpdated() ;

constexpr ::Oculus::Interaction::Input::HandJointCache* const& __cordl_internal_get__jointPosesCache() const;

constexpr ::Oculus::Interaction::Input::HandJointCache*& __cordl_internal_get__jointPosesCache() ;

constexpr void __cordl_internal_set_WhenHandUpdated(::System::Action*  value) ;

constexpr void __cordl_internal_set__jointPosesCache(::Oculus::Interaction::Input::HandJointCache*  value) ;

/// @brief Method .ctor, addr 0xa508080, size 0x130, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenHandUpdated, addr 0xa50d594, size 0x9c, virtual true, abstract: false, final true
inline void add_WhenHandUpdated(::System::Action*  value) ;

static inline ::UnityEngine::Vector3 getStaticF_PALM_LOCAL_OFFSET() ;

/// @brief Method get_HandSkeleton, addr 0xa50d534, size 0x60, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::HandSkeleton* get_HandSkeleton() ;

/// @brief Method get_Handedness, addr 0xa50d4d4, size 0x60, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Input::Handedness get_Handedness() ;

/// @brief Method get_IsConnected, addr 0xa50d6cc, size 0x70, virtual true, abstract: false, final true
inline bool get_IsConnected() ;

/// @brief Method get_IsDominantHand, addr 0xa50d7b4, size 0x58, virtual true, abstract: false, final true
inline bool get_IsDominantHand() ;

/// @brief Method get_IsHighConfidence, addr 0xa50d75c, size 0x58, virtual true, abstract: false, final true
inline bool get_IsHighConfidence() ;

/// @brief Method get_IsPointerPoseValid, addr 0xa50dc58, size 0x60, virtual true, abstract: false, final true
inline bool get_IsPointerPoseValid() ;

/// @brief Method get_IsTrackedDataValid, addr 0xa50dfb0, size 0x60, virtual true, abstract: false, final true
inline bool get_IsTrackedDataValid() ;

/// @brief Method get_Scale, addr 0xa50d80c, size 0x104, virtual true, abstract: false, final true
inline float_t get_Scale() ;

/// @brief Method get_TrackingToWorldTransformer, addr 0xa50a35c, size 0x60, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::ITrackingToWorldTransformer* get_TrackingToWorldTransformer() ;

/// @brief Convert to "::Oculus::Interaction::Input::IHand"
constexpr ::Oculus::Interaction::Input::IHand* i___Oculus__Interaction__Input__IHand() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenHandUpdated, addr 0xa50d630, size 0x9c, virtual true, abstract: false, final true
inline void remove_WhenHandUpdated(::System::Action*  value) ;

static inline void setStaticF_PALM_LOCAL_OFFSET(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Hand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Hand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Hand(Hand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Hand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Hand(Hand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16487};

/// @brief Field _jointPosesCache, offset: 0x70, size: 0x8, def value: None
 ::Oculus::Interaction::Input::HandJointCache*  ____jointPosesCache;

/// [CompilerGenerated]
/// @brief Field WhenHandUpdated, offset: 0x78, size: 0x8, def value: None
 ::System::Action*  ___WhenHandUpdated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::Hand, ____jointPosesCache) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::Hand, ___WhenHandUpdated) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::Hand) == 0x80, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.Hand/<>c
class CORDL_TYPE Hand___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Input::Hand___c*  __9;

/// @brief Field <>9__43_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__43_0, put=setStaticF___9__43_0)) ::System::Action*  __9__43_0;

static inline ::Oculus::Interaction::Input::Hand___c* New_ctor() ;

/// @brief Method <.ctor>b__43_0, addr 0xa50e6e8, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__43_0() ;

/// @brief Method .ctor, addr 0xa50e6e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Input::Hand___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__43_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Input::Hand___c*  value) ;

static inline void setStaticF___9__43_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Hand___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Hand___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Hand___c(Hand___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Hand___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Hand___c(Hand___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16486};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Input::Hand___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
