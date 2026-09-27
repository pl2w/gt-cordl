#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Input/OVRSkeletonMapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_BoneId_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodySkeletonMapping_1_def.hpp"
CORDL_MODULE_EXPORT(OVRSkeletonMapping)
namespace GlobalNamespace {
template<typename TSourceJointId>
struct BodySkeletonMapping_1_JointInfo;
}
namespace GlobalNamespace {
struct OVRPlugin_BodyJointSet;
}
namespace GlobalNamespace {
struct OVRPlugin_BoneId;
}
namespace Oculus::Interaction::Body::Input {
struct BodyJointId;
}
namespace Oculus::Interaction::Body::Input {
class ISkeletonMapping;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
// Forward declare root types
namespace Oculus::Interaction::Body::Input {
class OVRSkeletonMapping;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Body::Input::OVRSkeletonMapping*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::Input::OVRSkeletonMapping*, "Oculus.Interaction.Body.Input", "OVRSkeletonMapping");
// [Feature((Meta.XR.Util.Feature)6)]
// Dependencies OVRPlugin::BoneId, Oculus.Interaction.Body.Input.BodySkeletonMapping`1<TSourceJointId>
namespace Oculus::Interaction::Body::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Body.Input.OVRSkeletonMapping
class CORDL_TYPE OVRSkeletonMapping : public ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1<::GlobalNamespace::OVRPlugin_BoneId> {
public:
// Declarations
/// @brief Field _lowerBodyJoints, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__lowerBodyJoints, put=setStaticF__lowerBodyJoints)) ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<::GlobalNamespace::OVRPlugin_BoneId>>*  _lowerBodyJoints;

/// @brief Field _upperBodyJoints, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__upperBodyJoints, put=setStaticF__upperBodyJoints)) ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<::GlobalNamespace::OVRPlugin_BoneId>>*  _upperBodyJoints;

/// @brief Convert operator to "::Oculus::Interaction::Body::Input::ISkeletonMapping"
constexpr operator  ::Oculus::Interaction::Body::Input::ISkeletonMapping*() noexcept;

/// @brief Method GetJointMapping, addr 0xa42309c, size 0x2e8, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<::GlobalNamespace::OVRPlugin_BoneId>>* GetJointMapping(::GlobalNamespace::OVRPlugin_BodyJointSet  jointSet) ;

/// @brief Method GetRoot, addr 0xa423094, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_BoneId GetRoot() ;

/// @brief [Obsolete("Use the parameterized constructor instead", true)]
static inline ::Oculus::Interaction::Body::Input::OVRSkeletonMapping* New_ctor() ;

static inline ::Oculus::Interaction::Body::Input::OVRSkeletonMapping* New_ctor(::GlobalNamespace::OVRPlugin_BodyJointSet  skeletonType) ;

/// [Obsolete("Use the parameterized constructor instead", true)]
/// @brief Method .ctor, addr 0xa423018, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa4221b0, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OVRPlugin_BodyJointSet  skeletonType) ;

static inline ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<::GlobalNamespace::OVRPlugin_BoneId>>* getStaticF__lowerBodyJoints() ;

static inline ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<::GlobalNamespace::OVRPlugin_BoneId>>* getStaticF__upperBodyJoints() ;

/// @brief Convert to "::Oculus::Interaction::Body::Input::ISkeletonMapping"
constexpr ::Oculus::Interaction::Body::Input::ISkeletonMapping* i___Oculus__Interaction__Body__Input__ISkeletonMapping() noexcept;

static inline void setStaticF__lowerBodyJoints(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<::GlobalNamespace::OVRPlugin_BoneId>>*  value) ;

static inline void setStaticF__upperBodyJoints(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<::GlobalNamespace::OVRPlugin_BoneId>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRSkeletonMapping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRSkeletonMapping", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSkeletonMapping(OVRSkeletonMapping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSkeletonMapping", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSkeletonMapping(OVRSkeletonMapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31160};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Body::Input::OVRSkeletonMapping) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction::Body::Input
