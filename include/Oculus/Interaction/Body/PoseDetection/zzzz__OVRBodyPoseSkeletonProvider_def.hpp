#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/PoseDetection/OVRBodyPoseSkeletonProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_BodyJointSet_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Quatf_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector3f_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRBodyPoseSkeletonProvider)
namespace GlobalNamespace {
class OVRSkeleton_IOVRSkeletonDataProvider;
}
namespace GlobalNamespace {
struct OVRSkeleton_SkeletonPoseData;
}
namespace GlobalNamespace {
struct OVRSkeleton_SkeletonType;
}
namespace Oculus::Interaction::Body::Input {
class OVRSkeletonMapping;
}
namespace Oculus::Interaction::Body::PoseDetection {
class IBodyPose;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::Body::PoseDetection {
class OVRBodyPoseSkeletonProvider;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider*, "Oculus.Interaction.Body.PoseDetection", "OVRBodyPoseSkeletonProvider");
// [Feature((Meta.XR.Util.Feature)6)]
// Dependencies OVRPlugin::BodyJointSet, OVRPlugin::Quatf, OVRPlugin::Vector3f, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Body::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.Body.PoseDetection.OVRBodyPoseSkeletonProvider
class CORDL_TYPE OVRBodyPoseSkeletonProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field BodyPose, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_BodyPose, put=__cordl_internal_set_BodyPose)) ::Oculus::Interaction::Body::PoseDetection::IBodyPose*  BodyPose;

/// @brief Field _bodyJointSet, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__bodyJointSet, put=__cordl_internal_set__bodyJointSet)) ::GlobalNamespace::OVRPlugin_BodyJointSet  _bodyJointSet;

/// @brief Field _bodyPose, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyPose, put=__cordl_internal_set__bodyPose)) ::UnityW<::UnityEngine::Object>  _bodyPose;

/// @brief Field _boneRotations, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__boneRotations, put=__cordl_internal_set__boneRotations)) ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>  _boneRotations;

/// @brief Field _boneTranslations, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__boneTranslations, put=__cordl_internal_set__boneTranslations)) ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>  _boneTranslations;

/// @brief Field _mapping, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__mapping, put=__cordl_internal_set__mapping)) ::Oculus::Interaction::Body::Input::OVRSkeletonMapping*  _mapping;

/// @brief Convert operator to "::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider"
constexpr operator  ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*() noexcept;

/// @brief Method Awake, addr 0xa4220e4, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetSkeletonType, addr 0xa422588, size 0x20, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRSkeleton_SkeletonType GetSkeletonType() ;

static inline ::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider* New_ctor() ;

/// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData, addr 0xa422238, size 0x350, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRSkeleton_SkeletonPoseData OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData() ;

/// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.get_enabled, addr 0xa422644, size 0x8, virtual true, abstract: false, final true
inline bool OVRSkeleton_IOVRSkeletonDataProvider_get_enabled() ;

/// @brief Method Start, addr 0xa42214c, size 0x64, virtual true, abstract: false, final false
inline void Start() ;

/// [CompilerGenerated]
/// @brief Method <OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData>g__EnsureLength|9_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> _OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData_g__EnsureLength_9_0(::ArrayW<T>  array, int32_t  length) ;

constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose* const& __cordl_internal_get_BodyPose() const;

constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose*& __cordl_internal_get_BodyPose() ;

constexpr ::GlobalNamespace::OVRPlugin_BodyJointSet const& __cordl_internal_get__bodyJointSet() const;

constexpr ::GlobalNamespace::OVRPlugin_BodyJointSet& __cordl_internal_get__bodyJointSet() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__bodyPose() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__bodyPose() ;

constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf> const& __cordl_internal_get__boneRotations() const;

constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>& __cordl_internal_get__boneRotations() ;

constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f> const& __cordl_internal_get__boneTranslations() const;

constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>& __cordl_internal_get__boneTranslations() ;

constexpr ::Oculus::Interaction::Body::Input::OVRSkeletonMapping* const& __cordl_internal_get__mapping() const;

constexpr ::Oculus::Interaction::Body::Input::OVRSkeletonMapping*& __cordl_internal_get__mapping() ;

constexpr void __cordl_internal_set_BodyPose(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  value) ;

constexpr void __cordl_internal_set__bodyJointSet(::GlobalNamespace::OVRPlugin_BodyJointSet  value) ;

constexpr void __cordl_internal_set__bodyPose(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__boneRotations(::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>  value) ;

constexpr void __cordl_internal_set__boneTranslations(::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>  value) ;

constexpr void __cordl_internal_set__mapping(::Oculus::Interaction::Body::Input::OVRSkeletonMapping*  value) ;

/// @brief Method .ctor, addr 0xa4225a8, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider"
constexpr ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* i___GlobalNamespace__OVRSkeleton_IOVRSkeletonDataProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRBodyPoseSkeletonProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRBodyPoseSkeletonProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRBodyPoseSkeletonProvider(OVRBodyPoseSkeletonProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRBodyPoseSkeletonProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRBodyPoseSkeletonProvider(OVRBodyPoseSkeletonProvider const& ) = delete;

/// @brief Field OVR_NUM_JOINTS offset 0xffffffff size 0x4
static constexpr int32_t  OVR_NUM_JOINTS{static_cast<int32_t>(0x54)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31158};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Body.PoseDetection.IBodyPose), new[] {  })]
/// @brief Field _bodyPose, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____bodyPose;

/// @brief Field BodyPose, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Body::PoseDetection::IBodyPose*  ___BodyPose;

/// [SerializeField]
/// @brief Field _bodyJointSet, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointSet  ____bodyJointSet;

/// @brief Field _boneRotations, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>  ____boneRotations;

/// @brief Field _boneTranslations, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>  ____boneTranslations;

/// @brief Field _mapping, offset: 0x48, size: 0x8, def value: None
 ::Oculus::Interaction::Body::Input::OVRSkeletonMapping*  ____mapping;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider, ____bodyPose) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider, ___BodyPose) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider, ____bodyJointSet) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider, ____boneRotations) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider, ____boneTranslations) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider, ____mapping) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Body::PoseDetection::OVRBodyPoseSkeletonProvider) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction::Body::PoseDetection
