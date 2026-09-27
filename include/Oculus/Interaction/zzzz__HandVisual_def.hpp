#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HandVisual)
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction {
class HandVisual___c;
}
namespace Oculus::Interaction {
class IHandVisual;
}
namespace Oculus::Interaction {
class MaterialPropertyBlockEditor;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
struct Space;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction {
class HandVisual;
}
namespace Oculus::Interaction {
class HandVisual___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandVisual*);
MARK_REF_T(::Oculus::Interaction::HandVisual___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandVisual*, "Oculus.Interaction", "HandVisual");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandVisual___c*, "Oculus.Interaction", "HandVisual/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HandVisual
class CORDL_TYPE HandVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::HandVisual___c;

 __declspec(property(get=get_ForceOffVisibility, put=set_ForceOffVisibility)) bool  ForceOffVisibility;

 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_HandMaterialPropertyBlockEditor, put=set_HandMaterialPropertyBlockEditor)) ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  HandMaterialPropertyBlockEditor;

 __declspec(property(get=get_IsVisible)) bool  IsVisible;

 __declspec(property(get=get_Joints)) ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Transform>>*  Joints;

 __declspec(property(get=get_Root, put=set_Root)) ::UnityW<::UnityEngine::Transform>  Root;

 __declspec(property(get=get_SkinnedMeshRenderer, put=set_SkinnedMeshRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  SkinnedMeshRenderer;

/// @brief Field WhenHandVisualUpdated, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenHandVisualUpdated, put=__cordl_internal_set_WhenHandVisualUpdated)) ::System::Action*  WhenHandVisualUpdated;

/// @brief Field <Hand>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field _forceOffVisibility, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get__forceOffVisibility, put=__cordl_internal_set__forceOffVisibility)) bool  _forceOffVisibility;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _handMaterialPropertyBlockEditor, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__handMaterialPropertyBlockEditor, put=__cordl_internal_set__handMaterialPropertyBlockEditor)) ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  _handMaterialPropertyBlockEditor;

/// @brief Field _jointTransforms, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointTransforms, put=__cordl_internal_set__jointTransforms)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  _jointTransforms;

/// @brief Field _openXRHandMaterialPropertyBlockEditor, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__openXRHandMaterialPropertyBlockEditor, put=__cordl_internal_set__openXRHandMaterialPropertyBlockEditor)) ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  _openXRHandMaterialPropertyBlockEditor;

/// @brief Field _openXRJointTransforms, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__openXRJointTransforms, put=__cordl_internal_set__openXRJointTransforms)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  _openXRJointTransforms;

/// @brief Field _openXRRoot, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__openXRRoot, put=__cordl_internal_set__openXRRoot)) ::UnityW<::UnityEngine::Transform>  _openXRRoot;

/// @brief Field _openXRSkinnedMeshRenderer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__openXRSkinnedMeshRenderer, put=__cordl_internal_set__openXRSkinnedMeshRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  _openXRSkinnedMeshRenderer;

/// @brief Field _root, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__root, put=__cordl_internal_set__root)) ::UnityW<::UnityEngine::Transform>  _root;

/// @brief Field _skinnedMeshRenderer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__skinnedMeshRenderer, put=__cordl_internal_set__skinnedMeshRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  _skinnedMeshRenderer;

/// @brief Field _started, offset 0x85, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _updateRootPose, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__updateRootPose, put=__cordl_internal_set__updateRootPose)) bool  _updateRootPose;

/// @brief Field _updateRootScale, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__updateRootScale, put=__cordl_internal_set__updateRootScale)) bool  _updateRootScale;

/// @brief Field _updateVisibility, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get__updateVisibility, put=__cordl_internal_set__updateVisibility)) bool  _updateVisibility;

/// @brief Field _wristScalePropertyId, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__wristScalePropertyId, put=__cordl_internal_set__wristScalePropertyId)) int32_t  _wristScalePropertyId;

/// @brief Convert operator to "::Oculus::Interaction::IHandVisual"
constexpr operator  ::Oculus::Interaction::IHandVisual*() noexcept;

/// @brief Method Awake, addr 0xa46f034, size 0x2e4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetJointPose, addr 0xa46fcbc, size 0x48, virtual true, abstract: false, final true
inline ::UnityEngine::Pose GetJointPose(::Oculus::Interaction::Input::HandJointId  jointId, ::UnityEngine::Space  space) ;

/// @brief Method GetTransformByHandJointId, addr 0xa46fc14, size 0xa8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetTransformByHandJointId(::Oculus::Interaction::Input::HandJointId  handJointId) ;

/// @brief Method InjectAllHandSkeletonVisual, addr 0xa46fd04, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllHandSkeletonVisual(::Oculus::Interaction::Input::IHand*  hand, ::UnityEngine::SkinnedMeshRenderer*  skinnedMeshRenderer) ;

/// @brief Method InjectHand, addr 0xa46fd30, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectOptionalMaterialPropertyBlockEditor, addr 0xa46fe20, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalMaterialPropertyBlockEditor(::Oculus::Interaction::MaterialPropertyBlockEditor*  editor) ;

/// @brief Method InjectOptionalRoot, addr 0xa46fe18, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalRoot(::UnityEngine::Transform*  root) ;

/// @brief Method InjectOptionalUpdateRootPose, addr 0xa46fe08, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalUpdateRootPose(bool  updateRootPose) ;

/// @brief Method InjectOptionalUpdateRootScale, addr 0xa46fe10, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalUpdateRootScale(bool  updateRootScale) ;

/// @brief Method InjectSkinnedMeshRenderer, addr 0xa46fe00, size 0x8, virtual false, abstract: false, final false
inline void InjectSkinnedMeshRenderer(::UnityEngine::SkinnedMeshRenderer*  skinnedMeshRenderer) ;

static inline ::Oculus::Interaction::HandVisual* New_ctor() ;

/// @brief Method OnDisable, addr 0xa46f4cc, size 0x13c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa46f3cc, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa46f318, size 0xb4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateSkeleton, addr 0xa46f608, size 0x60c, virtual false, abstract: false, final false
inline void UpdateSkeleton() ;

/// @brief Method UpdateVisibility, addr 0xa46ef20, size 0x114, virtual false, abstract: false, final false
inline void UpdateVisibility() ;

constexpr ::System::Action* const& __cordl_internal_get_WhenHandVisualUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_WhenHandVisualUpdated() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr bool const& __cordl_internal_get__forceOffVisibility() const;

constexpr bool& __cordl_internal_get__forceOffVisibility() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& __cordl_internal_get__handMaterialPropertyBlockEditor() const;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& __cordl_internal_get__handMaterialPropertyBlockEditor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get__jointTransforms() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get__jointTransforms() ;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& __cordl_internal_get__openXRHandMaterialPropertyBlockEditor() const;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& __cordl_internal_get__openXRHandMaterialPropertyBlockEditor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get__openXRJointTransforms() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get__openXRJointTransforms() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__openXRRoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__openXRRoot() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get__openXRSkinnedMeshRenderer() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get__openXRSkinnedMeshRenderer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__root() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__root() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get__skinnedMeshRenderer() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get__skinnedMeshRenderer() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr bool const& __cordl_internal_get__updateRootPose() const;

constexpr bool& __cordl_internal_get__updateRootPose() ;

constexpr bool const& __cordl_internal_get__updateRootScale() const;

constexpr bool& __cordl_internal_get__updateRootScale() ;

constexpr bool const& __cordl_internal_get__updateVisibility() const;

constexpr bool& __cordl_internal_get__updateVisibility() ;

constexpr int32_t const& __cordl_internal_get__wristScalePropertyId() const;

constexpr int32_t& __cordl_internal_get__wristScalePropertyId() ;

constexpr void __cordl_internal_set_WhenHandVisualUpdated(::System::Action*  value) ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__forceOffVisibility(bool  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__handMaterialPropertyBlockEditor(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value) ;

constexpr void __cordl_internal_set__jointTransforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set__openXRHandMaterialPropertyBlockEditor(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value) ;

constexpr void __cordl_internal_set__openXRJointTransforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set__openXRRoot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__openXRSkinnedMeshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set__root(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__skinnedMeshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__updateRootPose(bool  value) ;

constexpr void __cordl_internal_set__updateRootScale(bool  value) ;

constexpr void __cordl_internal_set__updateVisibility(bool  value) ;

constexpr void __cordl_internal_set__wristScalePropertyId(int32_t  value) ;

/// @brief Method .ctor, addr 0xa46fe28, size 0x170, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenHandVisualUpdated, addr 0xa46ed0c, size 0x9c, virtual true, abstract: false, final true
inline void add_WhenHandVisualUpdated(::System::Action*  value) ;

/// @brief Method get_ForceOffVisibility, addr 0xa46ef04, size 0x8, virtual true, abstract: false, final true
inline bool get_ForceOffVisibility() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa46ecfc, size 0x8, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// @brief Method get_HandMaterialPropertyBlockEditor, addr 0xa46eef4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> get_HandMaterialPropertyBlockEditor() ;

/// @brief Method get_IsVisible, addr 0xa46ee44, size 0x88, virtual true, abstract: false, final true
inline bool get_IsVisible() ;

/// @brief Method get_Joints, addr 0xa46eecc, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Transform>>* get_Joints() ;

/// @brief Method get_Root, addr 0xa46eed4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_Root() ;

/// @brief Method get_SkinnedMeshRenderer, addr 0xa46eee4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::SkinnedMeshRenderer> get_SkinnedMeshRenderer() ;

/// @brief Convert to "::Oculus::Interaction::IHandVisual"
constexpr ::Oculus::Interaction::IHandVisual* i___Oculus__Interaction__IHandVisual() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenHandVisualUpdated, addr 0xa46eda8, size 0x9c, virtual true, abstract: false, final true
inline void remove_WhenHandVisualUpdated(::System::Action*  value) ;

/// @brief Method set_ForceOffVisibility, addr 0xa46ef0c, size 0x14, virtual true, abstract: false, final true
inline void set_ForceOffVisibility(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa46ed04, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

/// @brief Method set_HandMaterialPropertyBlockEditor, addr 0xa46eefc, size 0x8, virtual false, abstract: false, final false
inline void set_HandMaterialPropertyBlockEditor(::Oculus::Interaction::MaterialPropertyBlockEditor*  value) ;

/// @brief Method set_Root, addr 0xa46eedc, size 0x8, virtual false, abstract: false, final false
inline void set_Root(::UnityEngine::Transform*  value) ;

/// @brief Method set_SkinnedMeshRenderer, addr 0xa46eeec, size 0x8, virtual false, abstract: false, final false
inline void set_SkinnedMeshRenderer(::UnityEngine::SkinnedMeshRenderer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandVisual(HandVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandVisual(HandVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15924};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// [SerializeField]
/// @brief Field _updateRootPose, offset: 0x30, size: 0x1, def value: None
 bool  ____updateRootPose;

/// [SerializeField]
/// @brief Field _updateRootScale, offset: 0x31, size: 0x1, def value: None
 bool  ____updateRootScale;

/// [SerializeField]
/// @brief Field _updateVisibility, offset: 0x32, size: 0x1, def value: None
 bool  ____updateVisibility;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field _skinnedMeshRenderer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ____skinnedMeshRenderer;

/// [HideInInspector]
/// [SerializeField]
/// [Optional]
/// @brief Field _root, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____root;

/// [HideInInspector]
/// [SerializeField]
/// [Optional]
/// @brief Field _handMaterialPropertyBlockEditor, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  ____handMaterialPropertyBlockEditor;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field _jointTransforms, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ____jointTransforms;

/// [SerializeField]
/// @brief Field _openXRSkinnedMeshRenderer, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ____openXRSkinnedMeshRenderer;

/// [SerializeField]
/// [Optional]
/// @brief Field _openXRRoot, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____openXRRoot;

/// [SerializeField]
/// [Optional]
/// @brief Field _openXRHandMaterialPropertyBlockEditor, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  ____openXRHandMaterialPropertyBlockEditor;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field _openXRJointTransforms, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ____openXRJointTransforms;

/// [CompilerGenerated]
/// @brief Field WhenHandVisualUpdated, offset: 0x78, size: 0x8, def value: None
 ::System::Action*  ___WhenHandVisualUpdated;

/// @brief Field _wristScalePropertyId, offset: 0x80, size: 0x4, def value: None
 int32_t  ____wristScalePropertyId;

/// @brief Field _forceOffVisibility, offset: 0x84, size: 0x1, def value: None
 bool  ____forceOffVisibility;

/// @brief Field _started, offset: 0x85, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandVisual, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandVisual, ____Hand_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandVisual, ____updateRootPose) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandVisual, ____updateRootScale) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandVisual, ____updateVisibility) == 0x32, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandVisual, ____skinnedMeshRenderer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandVisual, ____root) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandVisual, ____handMaterialPropertyBlockEditor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandVisual, ____jointTransforms) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandVisual, ____openXRSkinnedMeshRenderer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandVisual, ____openXRRoot) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandVisual, ____openXRHandMaterialPropertyBlockEditor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandVisual, ____openXRJointTransforms) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandVisual, ___WhenHandVisualUpdated) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandVisual, ____wristScalePropertyId) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandVisual, ____forceOffVisibility) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandVisual, ____started) == 0x85, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandVisual) == 0x88, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HandVisual/<>c
class CORDL_TYPE HandVisual___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::HandVisual___c*  __9;

/// @brief Field <>9__53_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__53_0, put=setStaticF___9__53_0)) ::System::Action*  __9__53_0;

static inline ::Oculus::Interaction::HandVisual___c* New_ctor() ;

/// @brief Method <.ctor>b__53_0, addr 0xa470008, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__53_0() ;

/// @brief Method .ctor, addr 0xa470000, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::HandVisual___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__53_0() ;

static inline void setStaticF___9(::Oculus::Interaction::HandVisual___c*  value) ;

static inline void setStaticF___9__53_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandVisual___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandVisual___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandVisual___c(HandVisual___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandVisual___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandVisual___c(HandVisual___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15923};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::HandVisual___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
