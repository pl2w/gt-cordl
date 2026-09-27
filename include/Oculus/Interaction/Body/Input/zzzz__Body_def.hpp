#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Input/Body.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__DataModifier_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Body)
namespace Oculus::Interaction::Body::Input {
class BodyDataAsset;
}
namespace Oculus::Interaction::Body::Input {
struct BodyJointId;
}
namespace Oculus::Interaction::Body::Input {
class BodyJointsCache;
}
namespace Oculus::Interaction::Body::Input {
class Body___c;
}
namespace Oculus::Interaction::Body::Input {
class IBody;
}
namespace Oculus::Interaction::Body::Input {
class ISkeletonMapping;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::Body::Input {
class Body;
}
namespace Oculus::Interaction::Body::Input {
class Body___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Body::Input::Body*);
MARK_REF_T(::Oculus::Interaction::Body::Input::Body___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::Input::Body*, "Oculus.Interaction.Body.Input", "Body");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::Input::Body___c*, "Oculus.Interaction.Body.Input", "Body/<>c");
// Dependencies Oculus.Interaction.Input.DataModifier`1<TData>
namespace Oculus::Interaction::Body::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Body.Input.Body
class CORDL_TYPE Body : public ::Oculus::Interaction::Input::DataModifier_1<::Oculus::Interaction::Body::Input::BodyDataAsset*> {
public:
// Declarations
using __c = ::Oculus::Interaction::Body::Input::Body___c;

 __declspec(property(get=get_IsConnected)) bool  IsConnected;

 __declspec(property(get=get_IsHighConfidence)) bool  IsHighConfidence;

 __declspec(property(get=get_IsTrackedDataValid)) bool  IsTrackedDataValid;

 __declspec(property(get=get_Scale)) float_t  Scale;

 __declspec(property(get=get_SkeletonMapping)) ::Oculus::Interaction::Body::Input::ISkeletonMapping*  SkeletonMapping;

/// @brief Field WhenBodyUpdated, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenBodyUpdated, put=__cordl_internal_set_WhenBodyUpdated)) ::System::Action*  WhenBodyUpdated;

/// @brief Field _jointPosesCache, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointPosesCache, put=__cordl_internal_set__jointPosesCache)) ::Oculus::Interaction::Body::Input::BodyJointsCache*  _jointPosesCache;

/// @brief Field _trackingSpace, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__trackingSpace, put=__cordl_internal_set__trackingSpace)) ::UnityW<::UnityEngine::Transform>  _trackingSpace;

/// @brief Convert operator to "::Oculus::Interaction::Body::Input::IBody"
constexpr operator  ::Oculus::Interaction::Body::Input::IBody*() noexcept;

/// @brief Method Apply, addr 0xa4f826c, size 0x4, virtual true, abstract: false, final false
inline void Apply(::Oculus::Interaction::Body::Input::BodyDataAsset*  data) ;

/// @brief Method CheckJointPosesCacheUpdate, addr 0xa4f7ad4, size 0xac, virtual false, abstract: false, final false
inline void CheckJointPosesCacheUpdate() ;

/// @brief Method GetJointPose, addr 0xa4f7908, size 0x1cc, virtual true, abstract: false, final true
inline bool GetJointPose(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetJointPoseFromRoot, addr 0xa4f7db4, size 0x1cc, virtual true, abstract: false, final true
inline bool GetJointPoseFromRoot(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetJointPoseLocal, addr 0xa4f7bb4, size 0x1cc, virtual true, abstract: false, final true
inline bool GetJointPoseLocal(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetRootPose, addr 0xa4f7fb4, size 0xc0, virtual true, abstract: false, final true
inline bool GetRootPose(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method InitializeJointPosesCache, addr 0xa4f8074, size 0x94, virtual false, abstract: false, final false
inline void InitializeJointPosesCache() ;

/// @brief Method MarkInputDataRequiresUpdate, addr 0xa4f8270, size 0x8c, virtual true, abstract: false, final false
inline void MarkInputDataRequiresUpdate() ;

static inline ::Oculus::Interaction::Body::Input::Body* New_ctor() ;

constexpr ::System::Action* const& __cordl_internal_get_WhenBodyUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_WhenBodyUpdated() ;

constexpr ::Oculus::Interaction::Body::Input::BodyJointsCache* const& __cordl_internal_get__jointPosesCache() const;

constexpr ::Oculus::Interaction::Body::Input::BodyJointsCache*& __cordl_internal_get__jointPosesCache() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__trackingSpace() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__trackingSpace() ;

constexpr void __cordl_internal_set_WhenBodyUpdated(::System::Action*  value) ;

constexpr void __cordl_internal_set__jointPosesCache(::Oculus::Interaction::Body::Input::BodyJointsCache*  value) ;

constexpr void __cordl_internal_set__trackingSpace(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xa4f82fc, size 0x130, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenBodyUpdated, addr 0xa4f77d0, size 0x9c, virtual true, abstract: false, final true
inline void add_WhenBodyUpdated(::System::Action*  value) ;

/// @brief Method get_IsConnected, addr 0xa4f7618, size 0x58, virtual true, abstract: false, final true
inline bool get_IsConnected() ;

/// @brief Method get_IsHighConfidence, addr 0xa4f7670, size 0x58, virtual true, abstract: false, final true
inline bool get_IsHighConfidence() ;

/// @brief Method get_IsTrackedDataValid, addr 0xa4f7778, size 0x58, virtual true, abstract: false, final true
inline bool get_IsTrackedDataValid() ;

/// @brief Method get_Scale, addr 0xa4f76c8, size 0x58, virtual true, abstract: false, final true
inline float_t get_Scale() ;

/// @brief Method get_SkeletonMapping, addr 0xa4f7720, size 0x58, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Body::Input::ISkeletonMapping* get_SkeletonMapping() ;

/// @brief Convert to "::Oculus::Interaction::Body::Input::IBody"
constexpr ::Oculus::Interaction::Body::Input::IBody* i___Oculus__Interaction__Body__Input__IBody() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenBodyUpdated, addr 0xa4f786c, size 0x9c, virtual true, abstract: false, final true
inline void remove_WhenBodyUpdated(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Body() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Body", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Body(Body && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Body", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Body(Body const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16399};

/// [Tooltip("If assigned, joint pose translations into world space will be performed via this transform. If unassigned, world joint poses will be returned in tracking space.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _trackingSpace, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____trackingSpace;

/// [CompilerGenerated]
/// @brief Field WhenBodyUpdated, offset: 0x78, size: 0x8, def value: None
 ::System::Action*  ___WhenBodyUpdated;

/// @brief Field _jointPosesCache, offset: 0x80, size: 0x8, def value: None
 ::Oculus::Interaction::Body::Input::BodyJointsCache*  ____jointPosesCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Body::Input::Body, ____trackingSpace) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Input::Body, ___WhenBodyUpdated) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Input::Body, ____jointPosesCache) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Body::Input::Body) == 0x88, "Size mismatch!");

} // namespace end def Oculus::Interaction::Body::Input
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Body::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Body.Input.Body/<>c
class CORDL_TYPE Body___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Body::Input::Body___c*  __9;

/// @brief Field <>9__23_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_0, put=setStaticF___9__23_0)) ::System::Action*  __9__23_0;

static inline ::Oculus::Interaction::Body::Input::Body___c* New_ctor() ;

/// @brief Method <.ctor>b__23_0, addr 0xa4f849c, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__23_0() ;

/// @brief Method .ctor, addr 0xa4f8494, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Body::Input::Body___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__23_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Body::Input::Body___c*  value) ;

static inline void setStaticF___9__23_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Body___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Body___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Body___c(Body___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Body___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Body___c(Body___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16398};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Body::Input::Body___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Body::Input
