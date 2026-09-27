#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/InteractionCasterBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InteractionCasterBase)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Casters {
class IInteractionCaster;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRRayProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename TInterface,typename TObject>
class UnityObjectReferenceCache_2;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Casters {
class InteractionCasterBase;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Casters", "InteractionCasterBase");
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Casters {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.InteractionCasterBase
class CORDL_TYPE InteractionCasterBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field <isInitialized>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInitialized_k__BackingField, put=__cordl_internal_set__isInitialized_k__BackingField)) bool  _isInitialized_k__BackingField;

 __declspec(property(get=get_aimTarget, put=set_aimTarget)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*  aimTarget;

 __declspec(property(get=get_angleStabilization, put=set_angleStabilization)) float_t  angleStabilization;

 __declspec(property(get=get_castOrigin, put=set_castOrigin)) ::UnityW<::UnityEngine::Transform>  castOrigin;

 __declspec(property(get=get_effectiveCastOrigin)) ::UnityW<::UnityEngine::Transform>  effectiveCastOrigin;

 __declspec(property(get=get_enableStabilization, put=set_enableStabilization)) bool  enableStabilization;

 __declspec(property(get=get_isInitialized, put=set_isInitialized)) bool  isInitialized;

/// @brief Field m_AimTargetObject, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AimTargetObject, put=__cordl_internal_set_m_AimTargetObject)) ::UnityW<::UnityEngine::Object>  m_AimTargetObject;

/// @brief Field m_AimTargetObjectRef, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AimTargetObjectRef, put=__cordl_internal_set_m_AimTargetObjectRef)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*,::UnityW<::UnityEngine::Object>>*  m_AimTargetObjectRef;

/// @brief Field m_AngleStabilization, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AngleStabilization, put=__cordl_internal_set_m_AngleStabilization)) float_t  m_AngleStabilization;

/// @brief Field m_CastOrigin, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CastOrigin, put=__cordl_internal_set_m_CastOrigin)) ::UnityW<::UnityEngine::Transform>  m_CastOrigin;

/// @brief Field m_EnableStabilization, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableStabilization, put=__cordl_internal_set_m_EnableStabilization)) bool  m_EnableStabilization;

/// @brief Field m_InitializedStabilizationOrigin, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_InitializedStabilizationOrigin, put=__cordl_internal_set_m_InitializedStabilizationOrigin)) bool  m_InitializedStabilizationOrigin;

/// @brief Field m_LastStabilizationUpdateTime, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastStabilizationUpdateTime, put=__cordl_internal_set_m_LastStabilizationUpdateTime)) float_t  m_LastStabilizationUpdateTime;

/// @brief Field m_PositionStabilization, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PositionStabilization, put=__cordl_internal_set_m_PositionStabilization)) float_t  m_PositionStabilization;

/// @brief Field m_StabilizationAnchor, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StabilizationAnchor, put=__cordl_internal_set_m_StabilizationAnchor)) ::UnityW<::UnityEngine::Transform>  m_StabilizationAnchor;

 __declspec(property(get=get_positionStabilization, put=set_positionStabilization)) float_t  positionStabilization;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*() noexcept;

/// @brief Method Awake, addr 0xb48dbb0, size 0xac, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InitializeCaster, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool InitializeCaster() ;

/// @brief Method InitializeStabilization, addr 0xb49049c, size 0x48c, virtual true, abstract: false, final false
inline bool InitializeStabilization() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase* New_ctor() ;

/// @brief Method OnDestroy, addr 0xb48dce0, size 0x8, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnValidate, addr 0xb49040c, size 0x90, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method TryGetColliderTargets, addr 0xb48df34, size 0xb8, virtual true, abstract: false, final false
inline bool TryGetColliderTargets(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  interactionManager, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  targets) ;

/// @brief Method UpdateInternalData, addr 0xb48e230, size 0x6c, virtual true, abstract: false, final false
inline void UpdateInternalData() ;

constexpr bool const& __cordl_internal_get__isInitialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__isInitialized_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_AimTargetObject() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_AimTargetObject() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*,::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_m_AimTargetObjectRef() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*,::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_AimTargetObjectRef() ;

constexpr float_t const& __cordl_internal_get_m_AngleStabilization() const;

constexpr float_t& __cordl_internal_get_m_AngleStabilization() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_CastOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_CastOrigin() ;

constexpr bool const& __cordl_internal_get_m_EnableStabilization() const;

constexpr bool& __cordl_internal_get_m_EnableStabilization() ;

constexpr bool const& __cordl_internal_get_m_InitializedStabilizationOrigin() const;

constexpr bool& __cordl_internal_get_m_InitializedStabilizationOrigin() ;

constexpr float_t const& __cordl_internal_get_m_LastStabilizationUpdateTime() const;

constexpr float_t& __cordl_internal_get_m_LastStabilizationUpdateTime() ;

constexpr float_t const& __cordl_internal_get_m_PositionStabilization() const;

constexpr float_t& __cordl_internal_get_m_PositionStabilization() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_StabilizationAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_StabilizationAnchor() ;

constexpr void __cordl_internal_set__isInitialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_AimTargetObject(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_m_AimTargetObjectRef(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*,::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set_m_AngleStabilization(float_t  value) ;

constexpr void __cordl_internal_set_m_CastOrigin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_EnableStabilization(bool  value) ;

constexpr void __cordl_internal_set_m_InitializedStabilizationOrigin(bool  value) ;

constexpr void __cordl_internal_set_m_LastStabilizationUpdateTime(float_t  value) ;

constexpr void __cordl_internal_set_m_PositionStabilization(float_t  value) ;

constexpr void __cordl_internal_set_m_StabilizationAnchor(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xb490164, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_aimTarget, addr 0xb49035c, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider* get_aimTarget() ;

/// @brief Method get_angleStabilization, addr 0xb49034c, size 0x8, virtual false, abstract: false, final false
inline float_t get_angleStabilization() ;

/// @brief Method get_castOrigin, addr 0xb49031c, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_castOrigin() ;

/// @brief Method get_effectiveCastOrigin, addr 0xb48e348, size 0x24, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_effectiveCastOrigin() ;

/// @brief Method get_enableStabilization, addr 0xb49032c, size 0x8, virtual false, abstract: false, final false
inline bool get_enableStabilization() ;

/// [CompilerGenerated]
/// @brief Method get_isInitialized, addr 0xb49030c, size 0x8, virtual true, abstract: false, final true
inline bool get_isInitialized() ;

/// @brief Method get_positionStabilization, addr 0xb49033c, size 0x8, virtual false, abstract: false, final false
inline float_t get_positionStabilization() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster* i___UnityEngine__XR__Interaction__Toolkit__Interactors__Casters__IInteractionCaster() noexcept;

/// @brief Method set_aimTarget, addr 0xb4903b0, size 0x5c, virtual false, abstract: false, final false
inline void set_aimTarget(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*  value) ;

/// @brief Method set_angleStabilization, addr 0xb490354, size 0x8, virtual false, abstract: false, final false
inline void set_angleStabilization(float_t  value) ;

/// @brief Method set_castOrigin, addr 0xb490324, size 0x8, virtual true, abstract: false, final true
inline void set_castOrigin(::UnityEngine::Transform*  value) ;

/// @brief Method set_enableStabilization, addr 0xb490334, size 0x8, virtual false, abstract: false, final false
inline void set_enableStabilization(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_isInitialized, addr 0xb490314, size 0x8, virtual false, abstract: false, final false
inline void set_isInitialized(bool  value) ;

/// @brief Method set_positionStabilization, addr 0xb490344, size 0x8, virtual false, abstract: false, final false
inline void set_positionStabilization(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractionCasterBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractionCasterBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractionCasterBase(InteractionCasterBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractionCasterBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractionCasterBase(InteractionCasterBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11504};

/// [CompilerGenerated]
/// @brief Field <isInitialized>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____isInitialized_k__BackingField;

/// [SerializeField]
/// [Tooltip("Source of origin and direction used when updating sample points.")]
/// @brief Field m_CastOrigin, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_CastOrigin;

/// [Header("Stabilization Parameters")]
/// [SerializeField]
/// [Tooltip("Determines whether to stabilize the cast origin.")]
/// @brief Field m_EnableStabilization, offset: 0x30, size: 0x1, def value: None
 bool  ___m_EnableStabilization;

/// [SerializeField]
/// [Tooltip("Factor for stabilizing position. Larger values increase the range of stabilization, making the effect more pronounced over a greater distance.")]
/// @brief Field m_PositionStabilization, offset: 0x34, size: 0x4, def value: None
 float_t  ___m_PositionStabilization;

/// [SerializeField]
/// [Tooltip("Factor for stabilizing angle. Larger values increase the range of stabilization, making the effect more pronounced over a greater angle.")]
/// @brief Field m_AngleStabilization, offset: 0x38, size: 0x4, def value: None
 float_t  ___m_AngleStabilization;

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider))]
/// [Tooltip("Optional ray provider for calculating stable rotation.")]
/// @brief Field m_AimTargetObject, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___m_AimTargetObject;

/// @brief Field m_AimTargetObjectRef, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*,::UnityW<::UnityEngine::Object>>*  ___m_AimTargetObjectRef;

/// @brief Field m_InitializedStabilizationOrigin, offset: 0x50, size: 0x1, def value: None
 bool  ___m_InitializedStabilizationOrigin;

/// @brief Field m_StabilizationAnchor, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_StabilizationAnchor;

/// @brief Field m_LastStabilizationUpdateTime, offset: 0x60, size: 0x4, def value: None
 float_t  ___m_LastStabilizationUpdateTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase, ____isInitialized_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase, ___m_CastOrigin) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase, ___m_EnableStabilization) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase, ___m_PositionStabilization) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase, ___m_AngleStabilization) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase, ___m_AimTargetObject) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase, ___m_AimTargetObjectRef) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase, ___m_InitializedStabilizationOrigin) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase, ___m_StabilizationAnchor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase, ___m_LastStabilizationUpdateTime) == 0x60, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Casters
