#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/PoseDetection/PoseFromBody.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PoseFromBody)
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
class IBodyPose;
}
namespace Oculus::Interaction::Body::PoseDetection {
class PoseFromBody___c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Body::PoseDetection {
class PoseFromBody;
}
namespace Oculus::Interaction::Body::PoseDetection {
class PoseFromBody___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Body::PoseDetection::PoseFromBody*);
MARK_REF_T(::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::PoseDetection::PoseFromBody*, "Oculus.Interaction.Body.PoseDetection", "PoseFromBody");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c*, "Oculus.Interaction.Body.PoseDetection", "PoseFromBody/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Body::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.Body.PoseDetection.PoseFromBody
class CORDL_TYPE PoseFromBody : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c;

 __declspec(property(get=get_AutoUpdate, put=set_AutoUpdate)) bool  AutoUpdate;

/// @brief Field Body, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Body, put=__cordl_internal_set_Body)) ::Oculus::Interaction::Body::Input::IBody*  Body;

 __declspec(property(get=get_SkeletonMapping)) ::Oculus::Interaction::Body::Input::ISkeletonMapping*  SkeletonMapping;

/// @brief Field WhenBodyPoseUpdated, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenBodyPoseUpdated, put=__cordl_internal_set_WhenBodyPoseUpdated)) ::System::Action*  WhenBodyPoseUpdated;

/// @brief Field _autoUpdate, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__autoUpdate, put=__cordl_internal_set__autoUpdate)) bool  _autoUpdate;

/// @brief Field _body, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__body, put=__cordl_internal_set__body)) ::UnityW<::UnityEngine::Object>  _body;

/// @brief Field _jointPosesFromRoot, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointPosesFromRoot, put=__cordl_internal_set__jointPosesFromRoot)) ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*  _jointPosesFromRoot;

/// @brief Field _jointPosesLocal, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointPosesLocal, put=__cordl_internal_set__jointPosesLocal)) ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*  _jointPosesLocal;

/// @brief Field _started, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Convert operator to "::Oculus::Interaction::Body::PoseDetection::IBodyPose"
constexpr operator  ::Oculus::Interaction::Body::PoseDetection::IBodyPose*() noexcept;

/// @brief Method Awake, addr 0xa4f6c68, size 0xe0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Body_WhenBodyUpdated, addr 0xa4f6f74, size 0x10, virtual false, abstract: false, final false
inline void Body_WhenBodyUpdated() ;

/// @brief Method GetJointPoseFromRoot, addr 0xa4f6c00, size 0x68, virtual true, abstract: false, final true
inline bool GetJointPoseFromRoot(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetJointPoseLocal, addr 0xa4f6b98, size 0x68, virtual true, abstract: false, final true
inline bool GetJointPoseLocal(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method InjectAllPoseFromBody, addr 0xa4f73d0, size 0x4, virtual false, abstract: false, final false
inline void InjectAllPoseFromBody(::Oculus::Interaction::Body::Input::IBody*  body) ;

/// @brief Method InjectBody, addr 0xa4f73d4, size 0xd0, virtual false, abstract: false, final false
inline void InjectBody(::Oculus::Interaction::Body::Input::IBody*  body) ;

static inline ::Oculus::Interaction::Body::PoseDetection::PoseFromBody* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4f6e74, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4f6d74, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa4f6d48, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdatePose, addr 0xa4f6f84, size 0x44c, virtual false, abstract: false, final false
inline void UpdatePose() ;

constexpr ::Oculus::Interaction::Body::Input::IBody* const& __cordl_internal_get_Body() const;

constexpr ::Oculus::Interaction::Body::Input::IBody*& __cordl_internal_get_Body() ;

constexpr ::System::Action* const& __cordl_internal_get_WhenBodyPoseUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_WhenBodyPoseUpdated() ;

constexpr bool const& __cordl_internal_get__autoUpdate() const;

constexpr bool& __cordl_internal_get__autoUpdate() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__body() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__body() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>* const& __cordl_internal_get__jointPosesFromRoot() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*& __cordl_internal_get__jointPosesFromRoot() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>* const& __cordl_internal_get__jointPosesLocal() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*& __cordl_internal_get__jointPosesLocal() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_Body(::Oculus::Interaction::Body::Input::IBody*  value) ;

constexpr void __cordl_internal_set_WhenBodyPoseUpdated(::System::Action*  value) ;

constexpr void __cordl_internal_set__autoUpdate(bool  value) ;

constexpr void __cordl_internal_set__body(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__jointPosesFromRoot(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*  value) ;

constexpr void __cordl_internal_set__jointPosesLocal(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa4f74a4, size 0x100, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenBodyPoseUpdated, addr 0xa4f69b0, size 0x9c, virtual true, abstract: false, final true
inline void add_WhenBodyPoseUpdated(::System::Action*  value) ;

/// @brief Method get_AutoUpdate, addr 0xa4f6ae8, size 0x8, virtual false, abstract: false, final false
inline bool get_AutoUpdate() ;

/// @brief Method get_SkeletonMapping, addr 0xa4f6af8, size 0xa0, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Body::Input::ISkeletonMapping* get_SkeletonMapping() ;

/// @brief Convert to "::Oculus::Interaction::Body::PoseDetection::IBodyPose"
constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose* i___Oculus__Interaction__Body__PoseDetection__IBodyPose() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenBodyPoseUpdated, addr 0xa4f6a4c, size 0x9c, virtual true, abstract: false, final true
inline void remove_WhenBodyPoseUpdated(::System::Action*  value) ;

/// @brief Method set_AutoUpdate, addr 0xa4f6af0, size 0x8, virtual false, abstract: false, final false
inline void set_AutoUpdate(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PoseFromBody() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PoseFromBody", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PoseFromBody(PoseFromBody && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoseFromBody", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoseFromBody(PoseFromBody const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16397};

/// [CompilerGenerated]
/// @brief Field WhenBodyPoseUpdated, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___WhenBodyPoseUpdated;

/// [Tooltip("The IBodyPose will be derived from this IBody.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Body.Input.IBody), new[] {  })]
/// @brief Field _body, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____body;

/// @brief Field Body, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::Body::Input::IBody*  ___Body;

/// [Tooltip("If true, this component will track the provided IBody as its data is updated. If false, you must call UpdatePose to update joint data.")]
/// [SerializeField]
/// @brief Field _autoUpdate, offset: 0x38, size: 0x1, def value: None
 bool  ____autoUpdate;

/// @brief Field _started, offset: 0x39, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _jointPosesLocal, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*  ____jointPosesLocal;

/// @brief Field _jointPosesFromRoot, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*  ____jointPosesFromRoot;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::PoseFromBody, ___WhenBodyPoseUpdated) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::PoseFromBody, ____body) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::PoseFromBody, ___Body) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::PoseFromBody, ____autoUpdate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::PoseFromBody, ____started) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::PoseFromBody, ____jointPosesLocal) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::PoseFromBody, ____jointPosesFromRoot) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Body::PoseDetection::PoseFromBody) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction::Body::PoseDetection
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Body::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c
class CORDL_TYPE PoseFromBody___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c*  __9;

/// @brief Field <>9__24_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_0, put=setStaticF___9__24_0)) ::System::Action*  __9__24_0;

static inline ::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c* New_ctor() ;

/// @brief Method <.ctor>b__24_0, addr 0xa4f7614, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__24_0() ;

/// @brief Method .ctor, addr 0xa4f760c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__24_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c*  value) ;

static inline void setStaticF___9__24_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PoseFromBody___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PoseFromBody___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PoseFromBody___c(PoseFromBody___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoseFromBody___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoseFromBody___c(PoseFromBody___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16396};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Body::PoseDetection
