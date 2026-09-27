#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/PoseDetection/BodyPoseData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BodyPoseData)
namespace GlobalNamespace {
struct BodyPoseData_JointData;
}
namespace Oculus::Interaction::Body::Input {
struct BodyJointId;
}
namespace Oculus::Interaction::Body::Input {
class IBody;
}
namespace Oculus::Interaction::Body::Input {
class ISkeletonMapping;
}
namespace Oculus::Interaction::Body::PoseDetection {
class BodyPoseData_Mapping;
}
namespace Oculus::Interaction::Body::PoseDetection {
class BodyPoseData___c;
}
namespace Oculus::Interaction::Body::PoseDetection {
class IBodyPose;
}
namespace Oculus::Interaction::Collections {
template<typename T>
class EnumerableHashSet_1;
}
namespace Oculus::Interaction::Collections {
template<typename T>
class IEnumerableHashSet_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Body::PoseDetection {
class BodyPoseData;
}
namespace Oculus::Interaction::Body::PoseDetection {
class BodyPoseData_Mapping;
}
namespace Oculus::Interaction::Body::PoseDetection {
class BodyPoseData___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Body::PoseDetection::BodyPoseData*);
MARK_REF_T(::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping*);
MARK_REF_T(::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::PoseDetection::BodyPoseData*, "Oculus.Interaction.Body.PoseDetection", "BodyPoseData");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping*, "Oculus.Interaction.Body.PoseDetection", "BodyPoseData/Mapping");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c*, "Oculus.Interaction.Body.PoseDetection", "BodyPoseData/<>c");
// [CreateAssetMenu(menuName = "Meta/Interaction/SDK/Pose Detection/Body Pose")]
// Dependencies UnityEngine.ScriptableObject
namespace Oculus::Interaction::Body::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.Body.PoseDetection.BodyPoseData
class CORDL_TYPE BodyPoseData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using JointData = ::GlobalNamespace::BodyPoseData_JointData;

using Mapping = ::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping;

using __c = ::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c;

 __declspec(property(get=get_SkeletonMapping)) ::Oculus::Interaction::Body::Input::ISkeletonMapping*  SkeletonMapping;

/// @brief Field WhenBodyPoseUpdated, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenBodyPoseUpdated, put=__cordl_internal_set_WhenBodyPoseUpdated)) ::System::Action*  WhenBodyPoseUpdated;

/// @brief Field _jointData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointData, put=__cordl_internal_set__jointData)) ::System::Collections::Generic::List_1<::GlobalNamespace::BodyPoseData_JointData>*  _jointData;

/// @brief Field _localPoses, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__localPoses, put=__cordl_internal_set__localPoses)) ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*  _localPoses;

/// @brief Field _mapping, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__mapping, put=__cordl_internal_set__mapping)) ::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping*  _mapping;

/// @brief Field _posesFromRoot, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__posesFromRoot, put=__cordl_internal_set__posesFromRoot)) ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*  _posesFromRoot;

/// @brief Field _serializedVersion, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__serializedVersion, put=__cordl_internal_set__serializedVersion)) int32_t  _serializedVersion;

/// @brief Convert operator to "::Oculus::Interaction::Body::PoseDetection::IBodyPose"
constexpr operator  ::Oculus::Interaction::Body::PoseDetection::IBodyPose*() noexcept;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method GetJointPoseFromRoot, addr 0xa4f5620, size 0x68, virtual true, abstract: false, final true
inline bool GetJointPoseFromRoot(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetJointPoseLocal, addr 0xa4f5688, size 0x68, virtual true, abstract: false, final true
inline bool GetJointPoseLocal(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

static inline ::Oculus::Interaction::Body::PoseDetection::BodyPoseData* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0xa4f5f30, size 0x4, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xa4f5f2c, size 0x4, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method Rebuild, addr 0xa4f5c78, size 0x2b4, virtual false, abstract: false, final false
inline void Rebuild() ;

/// @brief Method SetBodyPose, addr 0xa4f56f8, size 0x580, virtual false, abstract: false, final false
inline void SetBodyPose(::Oculus::Interaction::Body::Input::IBody*  body) ;

constexpr ::System::Action* const& __cordl_internal_get_WhenBodyPoseUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_WhenBodyPoseUpdated() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BodyPoseData_JointData>* const& __cordl_internal_get__jointData() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BodyPoseData_JointData>*& __cordl_internal_get__jointData() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>* const& __cordl_internal_get__localPoses() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*& __cordl_internal_get__localPoses() ;

constexpr ::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping* const& __cordl_internal_get__mapping() const;

constexpr ::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping*& __cordl_internal_get__mapping() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>* const& __cordl_internal_get__posesFromRoot() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*& __cordl_internal_get__posesFromRoot() ;

constexpr int32_t const& __cordl_internal_get__serializedVersion() const;

constexpr int32_t& __cordl_internal_get__serializedVersion() ;

constexpr void __cordl_internal_set_WhenBodyPoseUpdated(::System::Action*  value) ;

constexpr void __cordl_internal_set__jointData(::System::Collections::Generic::List_1<::GlobalNamespace::BodyPoseData_JointData>*  value) ;

constexpr void __cordl_internal_set__localPoses(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*  value) ;

constexpr void __cordl_internal_set__mapping(::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping*  value) ;

constexpr void __cordl_internal_set__posesFromRoot(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*  value) ;

constexpr void __cordl_internal_set__serializedVersion(int32_t  value) ;

/// @brief Method .ctor, addr 0xa4f5f34, size 0x1f0, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenBodyPoseUpdated, addr 0xa4f54e8, size 0x9c, virtual true, abstract: false, final true
inline void add_WhenBodyPoseUpdated(::System::Action*  value) ;

/// @brief Method get_SkeletonMapping, addr 0xa4f56f0, size 0x8, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Body::Input::ISkeletonMapping* get_SkeletonMapping() ;

/// @brief Convert to "::Oculus::Interaction::Body::PoseDetection::IBodyPose"
constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose* i___Oculus__Interaction__Body__PoseDetection__IBodyPose() noexcept;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenBodyPoseUpdated, addr 0xa4f5584, size 0x9c, virtual true, abstract: false, final true
inline void remove_WhenBodyPoseUpdated(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BodyPoseData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BodyPoseData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BodyPoseData(BodyPoseData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BodyPoseData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BodyPoseData(BodyPoseData const& ) = delete;

/// @brief Field DATA_VERSION offset 0xffffffff size 0x4
static constexpr int32_t  DATA_VERSION{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16393};

/// [CompilerGenerated]
/// @brief Field WhenBodyPoseUpdated, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___WhenBodyPoseUpdated;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field _serializedVersion, offset: 0x20, size: 0x4, def value: None
 int32_t  ____serializedVersion;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field _jointData, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BodyPoseData_JointData>*  ____jointData;

/// @brief Field _posesFromRoot, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*  ____posesFromRoot;

/// @brief Field _localPoses, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*  ____localPoses;

/// @brief Field _mapping, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping*  ____mapping;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseData, ___WhenBodyPoseUpdated) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseData, ____serializedVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseData, ____jointData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseData, ____posesFromRoot) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseData, ____localPoses) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseData, ____mapping) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Body::PoseDetection::BodyPoseData) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction::Body::PoseDetection
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Body::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c
class CORDL_TYPE BodyPoseData___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c*  __9;

/// @brief Field <>9__19_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_0, put=setStaticF___9__19_0)) ::System::Action*  __9__19_0;

static inline ::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c* New_ctor() ;

/// @brief Method <.ctor>b__19_0, addr 0xa4f62e0, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__19_0() ;

/// @brief Method .ctor, addr 0xa4f62d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__19_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c*  value) ;

static inline void setStaticF___9__19_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BodyPoseData___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BodyPoseData___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BodyPoseData___c(BodyPoseData___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BodyPoseData___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BodyPoseData___c(BodyPoseData___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16392};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Body::PoseDetection
// Dependencies System.Object
namespace Oculus::Interaction::Body::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping
class CORDL_TYPE BodyPoseData_Mapping : public ::System::Object {
public:
// Declarations
/// @brief Field JointToParent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_JointToParent, put=__cordl_internal_set_JointToParent)) ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::Oculus::Interaction::Body::Input::BodyJointId>*  JointToParent;

/// @brief Field Joints, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Joints, put=__cordl_internal_set_Joints)) ::Oculus::Interaction::Collections::EnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>*  Joints;

 __declspec(property(get=Oculus_Interaction_Body_Input_ISkeletonMapping_get_Joints)) ::Oculus::Interaction::Collections::IEnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>*  Oculus_Interaction_Body_Input_ISkeletonMapping_Joints;

/// @brief Convert operator to "::Oculus::Interaction::Body::Input::ISkeletonMapping"
constexpr operator  ::Oculus::Interaction::Body::Input::ISkeletonMapping*() noexcept;

static inline ::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping* New_ctor() ;

/// @brief Method Oculus.Interaction.Body.Input.ISkeletonMapping.TryGetParentJointId, addr 0xa4f6208, size 0x68, virtual true, abstract: false, final true
inline bool Oculus_Interaction_Body_Input_ISkeletonMapping_TryGetParentJointId(::Oculus::Interaction::Body::Input::BodyJointId  jointId, ::by_ref<::Oculus::Interaction::Body::Input::BodyJointId>  parent) ;

/// @brief Method Oculus.Interaction.Body.Input.ISkeletonMapping.get_Joints, addr 0xa4f6200, size 0x8, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Collections::IEnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>* Oculus_Interaction_Body_Input_ISkeletonMapping_get_Joints() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::Oculus::Interaction::Body::Input::BodyJointId>* const& __cordl_internal_get_JointToParent() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::Oculus::Interaction::Body::Input::BodyJointId>*& __cordl_internal_get_JointToParent() ;

constexpr ::Oculus::Interaction::Collections::EnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>* const& __cordl_internal_get_Joints() const;

constexpr ::Oculus::Interaction::Collections::EnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>*& __cordl_internal_get_Joints() ;

constexpr void __cordl_internal_set_JointToParent(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::Oculus::Interaction::Body::Input::BodyJointId>*  value) ;

constexpr void __cordl_internal_set_Joints(::Oculus::Interaction::Collections::EnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>*  value) ;

/// @brief Method .ctor, addr 0xa4f6124, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::Body::Input::ISkeletonMapping"
constexpr ::Oculus::Interaction::Body::Input::ISkeletonMapping* i___Oculus__Interaction__Body__Input__ISkeletonMapping() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BodyPoseData_Mapping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BodyPoseData_Mapping", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BodyPoseData_Mapping(BodyPoseData_Mapping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BodyPoseData_Mapping", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BodyPoseData_Mapping(BodyPoseData_Mapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16391};

/// @brief Field Joints, offset: 0x10, size: 0x8, def value: None
 ::Oculus::Interaction::Collections::EnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>*  ___Joints;

/// @brief Field JointToParent, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::Oculus::Interaction::Body::Input::BodyJointId>*  ___JointToParent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping, ___Joints) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping, ___JointToParent) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::Body::PoseDetection
