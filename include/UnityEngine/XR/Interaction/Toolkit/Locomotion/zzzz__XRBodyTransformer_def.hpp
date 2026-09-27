#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/XRBodyTransformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRBodyTransformer)
namespace GlobalNamespace {
struct XRBodyTransformer_OrderedTransformation;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Unity::XR::CoreUtils {
class XROrigin;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class ApplyBodyTransformationsEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class IConstrainedXRBodyManipulator;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class IXRBodyPositionEvaluator;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class IXRBodyTransformation;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XRMovableBody;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XRBodyTransformer;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*, "UnityEngine.XR.Interaction.Toolkit.Locomotion", "XRBodyTransformer");
// [AddComponentMenu("XR/Locomotion/XR Body Transformer", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.XRBodyTransformer.html")]
// [DefaultExecutionOrder(-205)]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.XRBodyTransformer
class CORDL_TYPE XRBodyTransformer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using OrderedTransformation = ::GlobalNamespace::XRBodyTransformer_OrderedTransformation;

/// @brief Field afterApplyTransformations, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_afterApplyTransformations, put=__cordl_internal_set_afterApplyTransformations)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>*  afterApplyTransformations;

/// @brief Field beforeApplyTransformations, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_beforeApplyTransformations, put=__cordl_internal_set_beforeApplyTransformations)) ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>>*  beforeApplyTransformations;

 __declspec(property(get=get_bodyPositionEvaluator, put=set_bodyPositionEvaluator)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*  bodyPositionEvaluator;

 __declspec(property(get=get_constrainedBodyManipulator, put=set_constrainedBodyManipulator)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*  constrainedBodyManipulator;

/// @brief Field m_ApplyTransformationsEventArgs, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ApplyTransformationsEventArgs, put=__cordl_internal_set_m_ApplyTransformationsEventArgs)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*  m_ApplyTransformationsEventArgs;

/// @brief Field m_BodyPositionEvaluator, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BodyPositionEvaluator, put=__cordl_internal_set_m_BodyPositionEvaluator)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*  m_BodyPositionEvaluator;

/// @brief Field m_BodyPositionEvaluatorObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BodyPositionEvaluatorObject, put=__cordl_internal_set_m_BodyPositionEvaluatorObject)) ::UnityW<::UnityEngine::Object>  m_BodyPositionEvaluatorObject;

/// @brief Field m_ConstrainedBodyManipulator, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ConstrainedBodyManipulator, put=__cordl_internal_set_m_ConstrainedBodyManipulator)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*  m_ConstrainedBodyManipulator;

/// @brief Field m_ConstrainedBodyManipulatorObject, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ConstrainedBodyManipulatorObject, put=__cordl_internal_set_m_ConstrainedBodyManipulatorObject)) ::UnityW<::UnityEngine::Object>  m_ConstrainedBodyManipulatorObject;

/// @brief Field m_MovableBody, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MovableBody, put=__cordl_internal_set_m_MovableBody)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*  m_MovableBody;

/// @brief Field m_TransformationsQueue, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TransformationsQueue, put=__cordl_internal_set_m_TransformationsQueue)) ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::XRBodyTransformer_OrderedTransformation>*  m_TransformationsQueue;

/// @brief Field m_UseCharacterControllerIfExists, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseCharacterControllerIfExists, put=__cordl_internal_set_m_UseCharacterControllerIfExists)) bool  m_UseCharacterControllerIfExists;

/// @brief Field m_UsingDynamicBodyPositionEvaluator, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UsingDynamicBodyPositionEvaluator, put=__cordl_internal_set_m_UsingDynamicBodyPositionEvaluator)) bool  m_UsingDynamicBodyPositionEvaluator;

/// @brief Field m_UsingDynamicConstrainedBodyManipulator, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UsingDynamicConstrainedBodyManipulator, put=__cordl_internal_set_m_UsingDynamicConstrainedBodyManipulator)) bool  m_UsingDynamicConstrainedBodyManipulator;

/// @brief Field m_XROrigin, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_XROrigin, put=__cordl_internal_set_m_XROrigin)) ::UnityW<::Unity::XR::CoreUtils::XROrigin>  m_XROrigin;

 __declspec(property(get=get_useCharacterControllerIfExists, put=set_useCharacterControllerIfExists)) bool  useCharacterControllerIfExists;

 __declspec(property(get=get_xrOrigin, put=set_xrOrigin)) ::UnityW<::Unity::XR::CoreUtils::XROrigin>  xrOrigin;

/// @brief Method InitializeMovableBody, addr 0xb44a054, size 0x9c, virtual false, abstract: false, final false
inline void InitializeMovableBody() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer* New_ctor() ;

/// @brief Method OnDisable, addr 0xb44aa34, size 0xec, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0xb44ae34, size 0x24c, virtual true, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0xb44a768, size 0x2cc, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method QueueTransformation, addr 0xb44acec, size 0x148, virtual false, abstract: false, final false
inline void QueueTransformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*  transformation, int32_t  priority) ;

/// @brief Method Reset, addr 0xb44a6f0, size 0x78, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method Update, addr 0xb44ab20, size 0x188, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>* const& __cordl_internal_get_afterApplyTransformations() const;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>*& __cordl_internal_get_afterApplyTransformations() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>>* const& __cordl_internal_get_beforeApplyTransformations() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>>*& __cordl_internal_get_beforeApplyTransformations() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs* const& __cordl_internal_get_m_ApplyTransformationsEventArgs() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*& __cordl_internal_get_m_ApplyTransformationsEventArgs() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator* const& __cordl_internal_get_m_BodyPositionEvaluator() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*& __cordl_internal_get_m_BodyPositionEvaluator() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_BodyPositionEvaluatorObject() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_BodyPositionEvaluatorObject() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator* const& __cordl_internal_get_m_ConstrainedBodyManipulator() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*& __cordl_internal_get_m_ConstrainedBodyManipulator() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_ConstrainedBodyManipulatorObject() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_ConstrainedBodyManipulatorObject() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody* const& __cordl_internal_get_m_MovableBody() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*& __cordl_internal_get_m_MovableBody() ;

constexpr ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::XRBodyTransformer_OrderedTransformation>* const& __cordl_internal_get_m_TransformationsQueue() const;

constexpr ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::XRBodyTransformer_OrderedTransformation>*& __cordl_internal_get_m_TransformationsQueue() ;

constexpr bool const& __cordl_internal_get_m_UseCharacterControllerIfExists() const;

constexpr bool& __cordl_internal_get_m_UseCharacterControllerIfExists() ;

constexpr bool const& __cordl_internal_get_m_UsingDynamicBodyPositionEvaluator() const;

constexpr bool& __cordl_internal_get_m_UsingDynamicBodyPositionEvaluator() ;

constexpr bool const& __cordl_internal_get_m_UsingDynamicConstrainedBodyManipulator() const;

constexpr bool& __cordl_internal_get_m_UsingDynamicConstrainedBodyManipulator() ;

constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin> const& __cordl_internal_get_m_XROrigin() const;

constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin>& __cordl_internal_get_m_XROrigin() ;

constexpr void __cordl_internal_set_afterApplyTransformations(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>*  value) ;

constexpr void __cordl_internal_set_beforeApplyTransformations(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>>*  value) ;

constexpr void __cordl_internal_set_m_ApplyTransformationsEventArgs(::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*  value) ;

constexpr void __cordl_internal_set_m_BodyPositionEvaluator(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*  value) ;

constexpr void __cordl_internal_set_m_BodyPositionEvaluatorObject(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_m_ConstrainedBodyManipulator(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*  value) ;

constexpr void __cordl_internal_set_m_ConstrainedBodyManipulatorObject(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_m_MovableBody(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*  value) ;

constexpr void __cordl_internal_set_m_TransformationsQueue(::System::Collections::Generic::LinkedList_1<::GlobalNamespace::XRBodyTransformer_OrderedTransformation>*  value) ;

constexpr void __cordl_internal_set_m_UseCharacterControllerIfExists(bool  value) ;

constexpr void __cordl_internal_set_m_UsingDynamicBodyPositionEvaluator(bool  value) ;

constexpr void __cordl_internal_set_m_UsingDynamicConstrainedBodyManipulator(bool  value) ;

constexpr void __cordl_internal_set_m_XROrigin(::UnityW<::Unity::XR::CoreUtils::XROrigin>  value) ;

/// @brief Method .ctor, addr 0xb44b080, size 0xc8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_afterApplyTransformations, addr 0xb44a590, size 0xb0, virtual false, abstract: false, final false
inline void add_afterApplyTransformations(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_beforeApplyTransformations, addr 0xb44a430, size 0xb0, virtual false, abstract: false, final false
inline void add_beforeApplyTransformations(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>>*  value) ;

/// @brief Method get_bodyPositionEvaluator, addr 0xb44a0f0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator* get_bodyPositionEvaluator() ;

/// @brief Method get_constrainedBodyManipulator, addr 0xb44a184, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator* get_constrainedBodyManipulator() ;

/// @brief Method get_useCharacterControllerIfExists, addr 0xb44a420, size 0x8, virtual false, abstract: false, final false
inline bool get_useCharacterControllerIfExists() ;

/// @brief Method get_xrOrigin, addr 0xb449fc0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Unity::XR::CoreUtils::XROrigin> get_xrOrigin() ;

/// [CompilerGenerated]
/// @brief Method remove_afterApplyTransformations, addr 0xb44a640, size 0xb0, virtual false, abstract: false, final false
inline void remove_afterApplyTransformations(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_beforeApplyTransformations, addr 0xb44a4e0, size 0xb0, virtual false, abstract: false, final false
inline void remove_beforeApplyTransformations(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>>*  value) ;

/// @brief Method set_bodyPositionEvaluator, addr 0xb44a0f8, size 0x8c, virtual false, abstract: false, final false
inline void set_bodyPositionEvaluator(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*  value) ;

/// @brief Method set_constrainedBodyManipulator, addr 0xb44a18c, size 0x54, virtual false, abstract: false, final false
inline void set_constrainedBodyManipulator(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*  value) ;

/// @brief Method set_useCharacterControllerIfExists, addr 0xb44a428, size 0x8, virtual false, abstract: false, final false
inline void set_useCharacterControllerIfExists(bool  value) ;

/// @brief Method set_xrOrigin, addr 0xb449fc8, size 0x8c, virtual false, abstract: false, final false
inline void set_xrOrigin(::Unity::XR::CoreUtils::XROrigin*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRBodyTransformer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRBodyTransformer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRBodyTransformer(XRBodyTransformer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRBodyTransformer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRBodyTransformer(XRBodyTransformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11348};

/// [SerializeField]
/// [Tooltip("The XR Origin to transform (will find one if None).")]
/// @brief Field m_XROrigin, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Unity::XR::CoreUtils::XROrigin>  ___m_XROrigin;

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Locomotion.IXRBodyPositionEvaluator))]
/// [Tooltip("Object that determines the position of the user\'s body. If set to None, this behavior will estimate the position to be the camera position projected onto the XZ plane of the XR Origin.")]
/// @brief Field m_BodyPositionEvaluatorObject, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___m_BodyPositionEvaluatorObject;

/// @brief Field m_BodyPositionEvaluator, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*  ___m_BodyPositionEvaluator;

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Locomotion.IConstrainedXRBodyManipulator))]
/// [Tooltip("Object used to perform movement that is constrained by collision (optional, may be None).")]
/// @brief Field m_ConstrainedBodyManipulatorObject, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___m_ConstrainedBodyManipulatorObject;

/// @brief Field m_ConstrainedBodyManipulator, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*  ___m_ConstrainedBodyManipulator;

/// [SerializeField]
/// [Tooltip("When enabled and if a Constrained Manipulator is not already assigned, this behavior will use the XR Origin\'s Character Controller to perform constrained movement, if one exists on the XR Origin\'s base GameObject.")]
/// @brief Field m_UseCharacterControllerIfExists, offset: 0x48, size: 0x1, def value: None
 bool  ___m_UseCharacterControllerIfExists;

/// [CompilerGenerated]
/// @brief Field beforeApplyTransformations, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>>*  ___beforeApplyTransformations;

/// [CompilerGenerated]
/// @brief Field afterApplyTransformations, offset: 0x58, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>*  ___afterApplyTransformations;

/// @brief Field m_UsingDynamicBodyPositionEvaluator, offset: 0x60, size: 0x1, def value: None
 bool  ___m_UsingDynamicBodyPositionEvaluator;

/// @brief Field m_UsingDynamicConstrainedBodyManipulator, offset: 0x61, size: 0x1, def value: None
 bool  ___m_UsingDynamicConstrainedBodyManipulator;

/// @brief Field m_MovableBody, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*  ___m_MovableBody;

/// @brief Field m_TransformationsQueue, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::XRBodyTransformer_OrderedTransformation>*  ___m_TransformationsQueue;

/// @brief Field m_ApplyTransformationsEventArgs, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*  ___m_ApplyTransformationsEventArgs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer, ___m_XROrigin) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer, ___m_BodyPositionEvaluatorObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer, ___m_BodyPositionEvaluator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer, ___m_ConstrainedBodyManipulatorObject) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer, ___m_ConstrainedBodyManipulator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer, ___m_UseCharacterControllerIfExists) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer, ___beforeApplyTransformations) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer, ___afterApplyTransformations) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer, ___m_UsingDynamicBodyPositionEvaluator) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer, ___m_UsingDynamicConstrainedBodyManipulator) == 0x61, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer, ___m_MovableBody) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer, ___m_TransformationsQueue) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer, ___m_ApplyTransformationsEventArgs) == 0x78, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion
