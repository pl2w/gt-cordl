#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/XRMovableBody.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRMovableBody)
namespace Unity::XR::CoreUtils {
class XROrigin;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class IConstrainedXRBodyManipulator;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class IXRBodyPositionEvaluator;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XRMovableBody;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*, "UnityEngine.XR.Interaction.Toolkit.Locomotion", "XRMovableBody");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.XRMovableBody
class CORDL_TYPE XRMovableBody : public ::System::Object {
public:
// Declarations
/// @brief Field <bodyPositionEvaluator>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyPositionEvaluator_k__BackingField, put=__cordl_internal_set__bodyPositionEvaluator_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*  _bodyPositionEvaluator_k__BackingField;

/// @brief Field <constrainedManipulator>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__constrainedManipulator_k__BackingField, put=__cordl_internal_set__constrainedManipulator_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*  _constrainedManipulator_k__BackingField;

/// @brief Field <xrOrigin>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__xrOrigin_k__BackingField, put=__cordl_internal_set__xrOrigin_k__BackingField)) ::UnityW<::Unity::XR::CoreUtils::XROrigin>  _xrOrigin_k__BackingField;

 __declspec(property(get=get_bodyPositionEvaluator, put=set_bodyPositionEvaluator)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*  bodyPositionEvaluator;

 __declspec(property(get=get_constrainedManipulator, put=set_constrainedManipulator)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*  constrainedManipulator;

 __declspec(property(get=get_originTransform)) ::UnityW<::UnityEngine::Transform>  originTransform;

 __declspec(property(get=get_xrOrigin, put=set_xrOrigin)) ::UnityW<::Unity::XR::CoreUtils::XROrigin>  xrOrigin;

/// @brief Method GetBodyGroundLocalPosition, addr 0xb44b178, size 0xa8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetBodyGroundLocalPosition() ;

/// @brief Method GetBodyGroundWorldPosition, addr 0xb449a48, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetBodyGroundWorldPosition() ;

/// @brief Method LinkConstrainedManipulator, addr 0xb44a290, size 0x190, virtual false, abstract: false, final false
inline void LinkConstrainedManipulator(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*  manipulator) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody* New_ctor(::Unity::XR::CoreUtils::XROrigin*  xrOrigin, ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*  bodyPositionEvaluator) ;

/// @brief Method UnlinkConstrainedManipulator, addr 0xb44a1e0, size 0xb0, virtual false, abstract: false, final false
inline void UnlinkConstrainedManipulator() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator* const& __cordl_internal_get__bodyPositionEvaluator_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*& __cordl_internal_get__bodyPositionEvaluator_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator* const& __cordl_internal_get__constrainedManipulator_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*& __cordl_internal_get__constrainedManipulator_k__BackingField() ;

constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin> const& __cordl_internal_get__xrOrigin_k__BackingField() const;

constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin>& __cordl_internal_get__xrOrigin_k__BackingField() ;

constexpr void __cordl_internal_set__bodyPositionEvaluator_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*  value) ;

constexpr void __cordl_internal_set__constrainedManipulator_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*  value) ;

constexpr void __cordl_internal_set__xrOrigin_k__BackingField(::UnityW<::Unity::XR::CoreUtils::XROrigin>  value) ;

/// @brief Method .ctor, addr 0xb44aca8, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::Unity::XR::CoreUtils::XROrigin*  xrOrigin, ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*  bodyPositionEvaluator) ;

/// [CompilerGenerated]
/// @brief Method get_bodyPositionEvaluator, addr 0xb44b158, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator* get_bodyPositionEvaluator() ;

/// [CompilerGenerated]
/// @brief Method get_constrainedManipulator, addr 0xb44b168, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator* get_constrainedManipulator() ;

/// @brief Method get_originTransform, addr 0xb449984, size 0x24, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_originTransform() ;

/// [CompilerGenerated]
/// @brief Method get_xrOrigin, addr 0xb44b148, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Unity::XR::CoreUtils::XROrigin> get_xrOrigin() ;

/// [CompilerGenerated]
/// @brief Method set_bodyPositionEvaluator, addr 0xb44b160, size 0x8, virtual false, abstract: false, final false
inline void set_bodyPositionEvaluator(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*  value) ;

/// [CompilerGenerated]
/// @brief Method set_constrainedManipulator, addr 0xb44b170, size 0x8, virtual false, abstract: false, final false
inline void set_constrainedManipulator(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*  value) ;

/// [CompilerGenerated]
/// @brief Method set_xrOrigin, addr 0xb44b150, size 0x8, virtual false, abstract: false, final false
inline void set_xrOrigin(::Unity::XR::CoreUtils::XROrigin*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRMovableBody() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRMovableBody", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRMovableBody(XRMovableBody && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRMovableBody", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRMovableBody(XRMovableBody const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11349};

/// [CompilerGenerated]
/// @brief Field <xrOrigin>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Unity::XR::CoreUtils::XROrigin>  ____xrOrigin_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <bodyPositionEvaluator>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*  ____bodyPositionEvaluator_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <constrainedManipulator>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*  ____constrainedManipulator_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody, ____xrOrigin_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody, ____bodyPositionEvaluator_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody, ____constrainedManipulator_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion
