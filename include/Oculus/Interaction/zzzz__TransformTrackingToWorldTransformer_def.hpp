#pragma once
// IWYU pragma private; include "Oculus/Interaction/TransformTrackingToWorldTransformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
CORDL_MODULE_EXPORT(TransformTrackingToWorldTransformer)
namespace Oculus::Interaction::Input {
class ITrackingToWorldTransformer;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction {
class TransformTrackingToWorldTransformer;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::TransformTrackingToWorldTransformer*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TransformTrackingToWorldTransformer*, "Oculus.Interaction", "TransformTrackingToWorldTransformer");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TransformTrackingToWorldTransformer
class CORDL_TYPE TransformTrackingToWorldTransformer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field TrackingSpace, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TrackingSpace, put=__cordl_internal_set_TrackingSpace)) ::UnityW<::UnityEngine::Transform>  TrackingSpace;

 __declspec(property(get=get_Transform)) ::UnityW<::UnityEngine::Transform>  Transform;

 __declspec(property(get=get_WorldToTrackingWristJointFixup)) ::UnityEngine::Quaternion  WorldToTrackingWristJointFixup;

/// @brief Field <WorldToTrackingWristJointFixup>k__BackingField, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__WorldToTrackingWristJointFixup_k__BackingField, put=__cordl_internal_set__WorldToTrackingWristJointFixup_k__BackingField)) ::UnityEngine::Quaternion  _WorldToTrackingWristJointFixup_k__BackingField;

/// @brief Convert operator to "::Oculus::Interaction::Input::ITrackingToWorldTransformer"
constexpr operator  ::Oculus::Interaction::Input::ITrackingToWorldTransformer*() noexcept;

static inline ::Oculus::Interaction::TransformTrackingToWorldTransformer* New_ctor() ;

/// @brief Method Oculus.Interaction.Input.ITrackingToWorldTransformer.ToTrackingPose, addr 0xa408c00, size 0x30, virtual true, abstract: false, final true
inline ::UnityEngine::Pose Oculus_Interaction_Input_ITrackingToWorldTransformer_ToTrackingPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  worldPose) ;

/// @brief Method ToTrackingPose, addr 0xa408ad0, size 0x110, virtual false, abstract: false, final false
inline ::UnityEngine::Pose ToTrackingPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  worldPose) ;

/// @brief Method ToWorldPose, addr 0xa4089f8, size 0xd8, virtual true, abstract: false, final true
inline ::UnityEngine::Pose ToWorldPose(::UnityEngine::Pose  pose) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_TrackingSpace() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_TrackingSpace() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__WorldToTrackingWristJointFixup_k__BackingField() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__WorldToTrackingWristJointFixup_k__BackingField() ;

constexpr void __cordl_internal_set_TrackingSpace(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__WorldToTrackingWristJointFixup_k__BackingField(::UnityEngine::Quaternion  value) ;

/// @brief Method .ctor, addr 0xa408bec, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Transform, addr 0xa4089f0, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_Transform() ;

/// [CompilerGenerated]
/// @brief Method get_WorldToTrackingWristJointFixup, addr 0xa408be0, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Quaternion get_WorldToTrackingWristJointFixup() ;

/// @brief Convert to "::Oculus::Interaction::Input::ITrackingToWorldTransformer"
constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer* i___Oculus__Interaction__Input__ITrackingToWorldTransformer() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformTrackingToWorldTransformer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformTrackingToWorldTransformer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformTrackingToWorldTransformer(TransformTrackingToWorldTransformer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformTrackingToWorldTransformer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformTrackingToWorldTransformer(TransformTrackingToWorldTransformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15723};

/// [SerializeField]
/// @brief Field TrackingSpace, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___TrackingSpace;

/// [CompilerGenerated]
/// @brief Field <WorldToTrackingWristJointFixup>k__BackingField, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____WorldToTrackingWristJointFixup_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::TransformTrackingToWorldTransformer, ___TrackingSpace) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TransformTrackingToWorldTransformer, ____WorldToTrackingWristJointFixup_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::TransformTrackingToWorldTransformer) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction
