#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/Visuals/HandPuppet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandPuppet)
namespace Oculus::Interaction::HandGrab::Visuals {
class HandJointMap;
}
namespace Oculus::Interaction::HandGrab::Visuals {
class JointCollection;
}
namespace Oculus::Interaction::HandGrab {
class HandPose;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace Oculus::Interaction::HandGrab::Visuals {
class HandPuppet;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::Visuals::HandPuppet*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::Visuals::HandPuppet*, "Oculus.Interaction.HandGrab.Visuals", "HandPuppet");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::HandGrab::Visuals {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.Visuals.HandPuppet
class CORDL_TYPE HandPuppet : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_JointMaps)) ::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>*  JointMaps;

 __declspec(property(get=get_JointsCache)) ::Oculus::Interaction::HandGrab::Visuals::JointCollection*  JointsCache;

 __declspec(property(get=get_Scale, put=set_Scale)) float_t  Scale;

/// @brief Field _jointMaps, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointMaps, put=__cordl_internal_set__jointMaps)) ::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>*  _jointMaps;

/// @brief Field _jointsCache, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointsCache, put=__cordl_internal_set__jointsCache)) ::Oculus::Interaction::HandGrab::Visuals::JointCollection*  _jointsCache;

/// @brief Method CopyCachedJoints, addr 0xa4e5fe4, size 0xec, virtual false, abstract: false, final false
inline void CopyCachedJoints(::by_ref<::Oculus::Interaction::HandGrab::HandPose*>  result) ;

static inline ::Oculus::Interaction::HandGrab::Visuals::HandPuppet* New_ctor() ;

/// @brief Method SetJointRotations, addr 0xa4e579c, size 0x1a4, virtual false, abstract: false, final false
inline void SetJointRotations(/* [IsReadOnly] */ ::by_ref<::ArrayW<::UnityEngine::Quaternion>>  jointRotations) ;

/// @brief Method SetRootPose, addr 0xa4e5a80, size 0x24, virtual false, abstract: false, final false
inline void SetRootPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  rootPose) ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>* const& __cordl_internal_get__jointMaps() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>*& __cordl_internal_get__jointMaps() ;

constexpr ::Oculus::Interaction::HandGrab::Visuals::JointCollection* const& __cordl_internal_get__jointsCache() const;

constexpr ::Oculus::Interaction::HandGrab::Visuals::JointCollection*& __cordl_internal_get__jointsCache() ;

constexpr void __cordl_internal_set__jointMaps(::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>*  value) ;

constexpr void __cordl_internal_set__jointsCache(::Oculus::Interaction::HandGrab::Visuals::JointCollection*  value) ;

/// @brief Method .ctor, addr 0xa4e60d0, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_JointMaps, addr 0xa4e5ebc, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>* get_JointMaps() ;

/// @brief Method get_JointsCache, addr 0xa4e5f64, size 0x80, virtual false, abstract: false, final false
inline ::Oculus::Interaction::HandGrab::Visuals::JointCollection* get_JointsCache() ;

/// @brief Method get_Scale, addr 0xa4e5ec4, size 0x20, virtual false, abstract: false, final false
inline float_t get_Scale() ;

/// @brief Method set_Scale, addr 0xa4e5ee4, size 0x80, virtual false, abstract: false, final false
inline void set_Scale(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandPuppet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandPuppet", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandPuppet(HandPuppet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandPuppet", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandPuppet(HandPuppet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16347};

/// [SerializeField]
/// @brief Field _jointMaps, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>*  ____jointMaps;

/// @brief Field _jointsCache, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::Visuals::JointCollection*  ____jointsCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::Visuals::HandPuppet, ____jointMaps) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Visuals::HandPuppet, ____jointsCache) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::Visuals::HandPuppet) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab::Visuals
