#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Samples/BodyPoseSwitcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Body/Samples/zzzz__BodyPoseSwitcher_PoseSource_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BodyPoseSwitcher)
namespace GlobalNamespace {
struct BodyPoseSwitcher_PoseSource;
}
namespace Oculus::Interaction::Body::Input {
struct BodyJointId;
}
namespace Oculus::Interaction::Body::Input {
class ISkeletonMapping;
}
namespace Oculus::Interaction::Body::PoseDetection {
class IBodyPose;
}
namespace Oculus::Interaction::Body::Samples {
class BodyPoseSwitcher___c;
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
namespace Oculus::Interaction::Body::Samples {
class BodyPoseSwitcher;
}
namespace Oculus::Interaction::Body::Samples {
class BodyPoseSwitcher___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*);
MARK_REF_T(::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::Samples::BodyPoseSwitcher*, "Oculus.Interaction.Body.Samples", "BodyPoseSwitcher");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c*, "Oculus.Interaction.Body.Samples", "BodyPoseSwitcher/<>c");
// Dependencies Oculus.Interaction.Body.Samples.BodyPoseSwitcher::PoseSource, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Body::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Body.Samples.BodyPoseSwitcher
class CORDL_TYPE BodyPoseSwitcher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PoseSource = ::GlobalNamespace::BodyPoseSwitcher_PoseSource;

using __c = ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c;

/// @brief Field PoseA, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PoseA, put=__cordl_internal_set_PoseA)) ::Oculus::Interaction::Body::PoseDetection::IBodyPose*  PoseA;

/// @brief Field PoseB, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_PoseB, put=__cordl_internal_set_PoseB)) ::Oculus::Interaction::Body::PoseDetection::IBodyPose*  PoseB;

 __declspec(property(get=get_SkeletonMapping)) ::Oculus::Interaction::Body::Input::ISkeletonMapping*  SkeletonMapping;

 __declspec(property(get=get_Source, put=set_Source)) ::GlobalNamespace::BodyPoseSwitcher_PoseSource  Source;

/// @brief Field WhenBodyPoseUpdated, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenBodyPoseUpdated, put=__cordl_internal_set_WhenBodyPoseUpdated)) ::System::Action*  WhenBodyPoseUpdated;

/// @brief Field _poseA, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__poseA, put=__cordl_internal_set__poseA)) ::UnityW<::UnityEngine::Object>  _poseA;

/// @brief Field _poseB, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__poseB, put=__cordl_internal_set__poseB)) ::UnityW<::UnityEngine::Object>  _poseB;

/// @brief Field _source, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__source, put=__cordl_internal_set__source)) ::GlobalNamespace::BodyPoseSwitcher_PoseSource  _source;

/// @brief Field _started, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Convert operator to "::Oculus::Interaction::Body::PoseDetection::IBodyPose"
constexpr operator  ::Oculus::Interaction::Body::PoseDetection::IBodyPose*() noexcept;

/// @brief Method Awake, addr 0xa434478, size 0xa0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetJointPoseFromRoot, addr 0xa43428c, size 0xd0, virtual true, abstract: false, final true
inline bool GetJointPoseFromRoot(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetJointPoseLocal, addr 0xa43435c, size 0xd0, virtual true, abstract: false, final true
inline bool GetJointPoseLocal(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetPose, addr 0xa434270, size 0x1c, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Body::PoseDetection::IBodyPose* GetPose() ;

static inline ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4346ec, size 0x1b0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa434544, size 0x1a8, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPoseUpdated, addr 0xa43489c, size 0x30, virtual false, abstract: false, final false
inline void OnPoseUpdated(::GlobalNamespace::BodyPoseSwitcher_PoseSource  source) ;

/// @brief Method Start, addr 0xa434518, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UsePoseA, addr 0xa434468, size 0x8, virtual false, abstract: false, final false
inline void UsePoseA() ;

/// @brief Method UsePoseB, addr 0xa434470, size 0x8, virtual false, abstract: false, final false
inline void UsePoseB() ;

/// [CompilerGenerated]
/// @brief Method <OnDisable>b__22_0, addr 0xa434a20, size 0x2c, virtual false, abstract: false, final false
inline void _OnDisable_b__22_0() ;

/// [CompilerGenerated]
/// @brief Method <OnDisable>b__22_1, addr 0xa434a4c, size 0x30, virtual false, abstract: false, final false
inline void _OnDisable_b__22_1() ;

/// [CompilerGenerated]
/// @brief Method <OnEnable>b__21_0, addr 0xa4349c4, size 0x2c, virtual false, abstract: false, final false
inline void _OnEnable_b__21_0() ;

/// [CompilerGenerated]
/// @brief Method <OnEnable>b__21_1, addr 0xa4349f0, size 0x30, virtual false, abstract: false, final false
inline void _OnEnable_b__21_1() ;

constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose* const& __cordl_internal_get_PoseA() const;

constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose*& __cordl_internal_get_PoseA() ;

constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose* const& __cordl_internal_get_PoseB() const;

constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose*& __cordl_internal_get_PoseB() ;

constexpr ::System::Action* const& __cordl_internal_get_WhenBodyPoseUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_WhenBodyPoseUpdated() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__poseA() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__poseA() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__poseB() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__poseB() ;

constexpr ::GlobalNamespace::BodyPoseSwitcher_PoseSource const& __cordl_internal_get__source() const;

constexpr ::GlobalNamespace::BodyPoseSwitcher_PoseSource& __cordl_internal_get__source() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_PoseA(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  value) ;

constexpr void __cordl_internal_set_PoseB(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  value) ;

constexpr void __cordl_internal_set_WhenBodyPoseUpdated(::System::Action*  value) ;

constexpr void __cordl_internal_set__poseA(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__poseB(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__source(::GlobalNamespace::BodyPoseSwitcher_PoseSource  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa4348cc, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenBodyPoseUpdated, addr 0xa434080, size 0x9c, virtual true, abstract: false, final true
inline void add_WhenBodyPoseUpdated(::System::Action*  value) ;

/// @brief Method get_SkeletonMapping, addr 0xa4341b8, size 0xb8, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Body::Input::ISkeletonMapping* get_SkeletonMapping() ;

/// @brief Method get_Source, addr 0xa43442c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::BodyPoseSwitcher_PoseSource get_Source() ;

/// @brief Convert to "::Oculus::Interaction::Body::PoseDetection::IBodyPose"
constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose* i___Oculus__Interaction__Body__PoseDetection__IBodyPose() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenBodyPoseUpdated, addr 0xa43411c, size 0x9c, virtual true, abstract: false, final true
inline void remove_WhenBodyPoseUpdated(::System::Action*  value) ;

/// @brief Method set_Source, addr 0xa434434, size 0x34, virtual false, abstract: false, final false
inline void set_Source(::GlobalNamespace::BodyPoseSwitcher_PoseSource  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BodyPoseSwitcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BodyPoseSwitcher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BodyPoseSwitcher(BodyPoseSwitcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BodyPoseSwitcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BodyPoseSwitcher(BodyPoseSwitcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28288};

/// [CompilerGenerated]
/// @brief Field WhenBodyPoseUpdated, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___WhenBodyPoseUpdated;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Body.PoseDetection.IBodyPose), new[] {  })]
/// @brief Field _poseA, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____poseA;

/// @brief Field PoseA, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::Body::PoseDetection::IBodyPose*  ___PoseA;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Body.PoseDetection.IBodyPose), new[] {  })]
/// @brief Field _poseB, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____poseB;

/// @brief Field PoseB, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::Body::PoseDetection::IBodyPose*  ___PoseB;

/// [SerializeField]
/// @brief Field _source, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::BodyPoseSwitcher_PoseSource  ____source;

/// @brief Field _started, offset: 0x4c, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Body::Samples::BodyPoseSwitcher, ___WhenBodyPoseUpdated) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Samples::BodyPoseSwitcher, ____poseA) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Samples::BodyPoseSwitcher, ___PoseA) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Samples::BodyPoseSwitcher, ____poseB) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Samples::BodyPoseSwitcher, ___PoseB) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Samples::BodyPoseSwitcher, ____source) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Samples::BodyPoseSwitcher, ____started) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Body::Samples::BodyPoseSwitcher) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction::Body::Samples
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Body::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Body.Samples.BodyPoseSwitcher/<>c
class CORDL_TYPE BodyPoseSwitcher___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c*  __9;

/// @brief Field <>9__25_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_0, put=setStaticF___9__25_0)) ::System::Action*  __9__25_0;

static inline ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c* New_ctor() ;

/// @brief Method <.ctor>b__25_0, addr 0xa434aec, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__25_0() ;

/// @brief Method .ctor, addr 0xa434ae4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__25_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c*  value) ;

static inline void setStaticF___9__25_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BodyPoseSwitcher___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BodyPoseSwitcher___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BodyPoseSwitcher___c(BodyPoseSwitcher___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BodyPoseSwitcher___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BodyPoseSwitcher___c(BodyPoseSwitcher___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28287};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Body::Samples::BodyPoseSwitcher___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Body::Samples
