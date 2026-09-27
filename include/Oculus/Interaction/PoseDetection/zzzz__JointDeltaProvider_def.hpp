#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/JointDeltaProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JointDeltaProvider)
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction::PoseDetection {
class IJointDeltaProvider;
}
namespace Oculus::Interaction::PoseDetection {
class JointDeltaConfig;
}
namespace Oculus::Interaction::PoseDetection {
class JointDeltaProvider_PoseData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class JointDeltaProvider;
}
namespace Oculus::Interaction::PoseDetection {
class JointDeltaProvider_PoseData;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::JointDeltaProvider*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::JointDeltaProvider*, "Oculus.Interaction.PoseDetection", "JointDeltaProvider");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData*, "Oculus.Interaction.PoseDetection", "JointDeltaProvider/PoseData");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.JointDeltaProvider
class CORDL_TYPE JointDeltaProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PoseData = ::Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData;

/// @brief Field CurDataIndex, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_CurDataIndex, put=__cordl_internal_set_CurDataIndex)) int32_t  CurDataIndex;

/// @brief Field Hand, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Hand, put=__cordl_internal_set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_PrevDataIndex)) int32_t  PrevDataIndex;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _lastUpdateDataVersion, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastUpdateDataVersion, put=__cordl_internal_set__lastUpdateDataVersion)) int32_t  _lastUpdateDataVersion;

/// @brief Field _poseDataCache, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__poseDataCache, put=__cordl_internal_set__poseDataCache)) ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Input::HandJointId,::ArrayW<::Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData*>>*  _poseDataCache;

/// @brief Field _requestors, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__requestors, put=__cordl_internal_set__requestors)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Oculus::Interaction::Input::HandJointId>*>*  _requestors;

/// @brief Field _started, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _trackedJoints, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__trackedJoints, put=__cordl_internal_set__trackedJoints)) ::System::Collections::Generic::HashSet_1<::Oculus::Interaction::Input::HandJointId>*  _trackedJoints;

/// @brief Convert operator to "::Oculus::Interaction::PoseDetection::IJointDeltaProvider"
constexpr operator  ::Oculus::Interaction::PoseDetection::IJointDeltaProvider*() noexcept;

/// @brief Method Awake, addr 0xa49f9b8, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetPositionDelta, addr 0xa49e9f4, size 0x148, virtual true, abstract: false, final true
inline bool GetPositionDelta(::Oculus::Interaction::Input::HandJointId  joint, ::by_ref<::UnityEngine::Vector3>  delta) ;

/// @brief Method GetPrevJointPose, addr 0xa49f268, size 0xb8, virtual false, abstract: false, final false
inline bool GetPrevJointPose(::Oculus::Interaction::Input::HandJointId  joint, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetRotationDelta, addr 0xa49f070, size 0x1f8, virtual true, abstract: false, final true
inline bool GetRotationDelta(::Oculus::Interaction::Input::HandJointId  joint, ::by_ref<::UnityEngine::Quaternion>  delta) ;

static inline ::Oculus::Interaction::PoseDetection::JointDeltaProvider* New_ctor() ;

/// @brief Method OnDisable, addr 0xa49fb4c, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa49fa4c, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RegisterConfig, addr 0xa49f320, size 0x5bc, virtual true, abstract: false, final true
inline void RegisterConfig(::Oculus::Interaction::PoseDetection::JointDeltaConfig*  config) ;

/// @brief Method Start, addr 0xa49fa20, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UnRegisterConfig, addr 0xa49f95c, size 0x5c, virtual true, abstract: false, final true
inline void UnRegisterConfig(::Oculus::Interaction::PoseDetection::JointDeltaConfig*  config) ;

/// @brief Method UpdateData, addr 0xa49eb3c, size 0x534, virtual false, abstract: false, final false
inline void UpdateData() ;

constexpr int32_t const& __cordl_internal_get_CurDataIndex() const;

constexpr int32_t& __cordl_internal_get_CurDataIndex() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get_Hand() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get_Hand() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr int32_t const& __cordl_internal_get__lastUpdateDataVersion() const;

constexpr int32_t& __cordl_internal_get__lastUpdateDataVersion() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Input::HandJointId,::ArrayW<::Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData*>>* const& __cordl_internal_get__poseDataCache() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Input::HandJointId,::ArrayW<::Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData*>>*& __cordl_internal_get__poseDataCache() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Oculus::Interaction::Input::HandJointId>*>* const& __cordl_internal_get__requestors() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Oculus::Interaction::Input::HandJointId>*>*& __cordl_internal_get__requestors() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::System::Collections::Generic::HashSet_1<::Oculus::Interaction::Input::HandJointId>* const& __cordl_internal_get__trackedJoints() const;

constexpr ::System::Collections::Generic::HashSet_1<::Oculus::Interaction::Input::HandJointId>*& __cordl_internal_get__trackedJoints() ;

constexpr void __cordl_internal_set_CurDataIndex(int32_t  value) ;

constexpr void __cordl_internal_set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__lastUpdateDataVersion(int32_t  value) ;

constexpr void __cordl_internal_set__poseDataCache(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Input::HandJointId,::ArrayW<::Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData*>>*  value) ;

constexpr void __cordl_internal_set__requestors(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Oculus::Interaction::Input::HandJointId>*>*  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__trackedJoints(::System::Collections::Generic::HashSet_1<::Oculus::Interaction::Input::HandJointId>*  value) ;

/// @brief Method .ctor, addr 0xa49fc4c, size 0x130, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PrevDataIndex, addr 0xa49e9e4, size 0x10, virtual false, abstract: false, final false
inline int32_t get_PrevDataIndex() ;

/// @brief Convert to "::Oculus::Interaction::PoseDetection::IJointDeltaProvider"
constexpr ::Oculus::Interaction::PoseDetection::IJointDeltaProvider* i___Oculus__Interaction__PoseDetection__IJointDeltaProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JointDeltaProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JointDeltaProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JointDeltaProvider(JointDeltaProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JointDeltaProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JointDeltaProvider(JointDeltaProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16123};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// @brief Field Hand, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ___Hand;

/// @brief Field _poseDataCache, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Input::HandJointId,::ArrayW<::Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData*>>*  ____poseDataCache;

/// @brief Field _trackedJoints, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::Oculus::Interaction::Input::HandJointId>*  ____trackedJoints;

/// @brief Field _requestors, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Oculus::Interaction::Input::HandJointId>*>*  ____requestors;

/// @brief Field CurDataIndex, offset: 0x48, size: 0x4, def value: None
 int32_t  ___CurDataIndex;

/// @brief Field _lastUpdateDataVersion, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____lastUpdateDataVersion;

/// @brief Field _started, offset: 0x50, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDeltaProvider, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDeltaProvider, ___Hand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDeltaProvider, ____poseDataCache) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDeltaProvider, ____trackedJoints) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDeltaProvider, ____requestors) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDeltaProvider, ___CurDataIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDeltaProvider, ____lastUpdateDataVersion) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDeltaProvider, ____started) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::JointDeltaProvider) == 0x58, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// Dependencies System.Object, UnityEngine.Pose
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.JointDeltaProvider/PoseData
class CORDL_TYPE JointDeltaProvider_PoseData : public ::System::Object {
public:
// Declarations
/// @brief Field IsValid, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsValid, put=__cordl_internal_set_IsValid)) bool  IsValid;

/// @brief Field Pose, offset 0x14, size 0x1c 
 __declspec(property(get=__cordl_internal_get_Pose, put=__cordl_internal_set_Pose)) ::UnityEngine::Pose  Pose;

static inline ::Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData* New_ctor() ;

constexpr bool const& __cordl_internal_get_IsValid() const;

constexpr bool& __cordl_internal_get_IsValid() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get_Pose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get_Pose() ;

constexpr void __cordl_internal_set_IsValid(bool  value) ;

constexpr void __cordl_internal_set_Pose(::UnityEngine::Pose  value) ;

/// @brief Method .ctor, addr 0xa49f8dc, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JointDeltaProvider_PoseData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JointDeltaProvider_PoseData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JointDeltaProvider_PoseData(JointDeltaProvider_PoseData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JointDeltaProvider_PoseData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JointDeltaProvider_PoseData(JointDeltaProvider_PoseData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16122};

/// @brief Field IsValid, offset: 0x10, size: 0x1, def value: None
 bool  ___IsValid;

/// @brief Field Pose, offset: 0x14, size: 0x1c, def value: None
 ::UnityEngine::Pose  ___Pose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData, ___IsValid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData, ___Pose) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
