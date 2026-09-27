#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRAngleGazeEvaluator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRTargetEvaluator_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRAngleGazeEvaluator)
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRAngleGazeEvaluator;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRAngleGazeEvaluator");
// Dependencies UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetEvaluator
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.XRAngleGazeEvaluator
class CORDL_TYPE XRAngleGazeEvaluator : public ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator {
public:
// Declarations
 __declspec(property(get=get_gazeTransform, put=set_gazeTransform)) ::UnityW<::UnityEngine::Transform>  gazeTransform;

/// @brief Field m_GazeTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GazeTransform, put=__cordl_internal_set_m_GazeTransform)) ::UnityW<::UnityEngine::Transform>  m_GazeTransform;

/// @brief Field m_MaxAngle, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxAngle, put=__cordl_internal_set_m_MaxAngle)) float_t  m_MaxAngle;

 __declspec(property(get=get_maxAngle, put=set_maxAngle)) float_t  maxAngle;

/// @brief Method CalculateNormalizedScore, addr 0xb4a9804, size 0x2fc, virtual true, abstract: false, final false
inline float_t CalculateNormalizedScore(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  target) ;

/// @brief Method GetXROriginCamera, addr 0xb4a95a8, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Camera> GetXROriginCamera() ;

/// @brief Method InitializeGazeTransform, addr 0xb4a9670, size 0x110, virtual false, abstract: false, final false
inline void InitializeGazeTransform() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator* New_ctor() ;

/// @brief Method OnEnable, addr 0xb4a9780, size 0x78, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Reset, addr 0xb4a97fc, size 0x4, virtual true, abstract: false, final false
inline void Reset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_GazeTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_GazeTransform() ;

constexpr float_t const& __cordl_internal_get_m_MaxAngle() const;

constexpr float_t& __cordl_internal_get_m_MaxAngle() ;

constexpr void __cordl_internal_set_m_GazeTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_MaxAngle(float_t  value) ;

/// @brief Method .ctor, addr 0xb4a9b00, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_gazeTransform, addr 0xb4a9634, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_gazeTransform() ;

/// @brief Method get_maxAngle, addr 0xb4a9644, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxAngle() ;

/// @brief Method set_gazeTransform, addr 0xb4a963c, size 0x8, virtual false, abstract: false, final false
inline void set_gazeTransform(::UnityEngine::Transform*  value) ;

/// @brief Method set_maxAngle, addr 0xb4a964c, size 0x24, virtual false, abstract: false, final false
inline void set_maxAngle(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRAngleGazeEvaluator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRAngleGazeEvaluator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRAngleGazeEvaluator(XRAngleGazeEvaluator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRAngleGazeEvaluator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRAngleGazeEvaluator(XRAngleGazeEvaluator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11566};

/// [Tooltip("The Transform whose forward direction is used to evaluate the target Interactable angle. If none is specified, during OnEnable this property is initialized with the XROrigin Camera.")]
/// [SerializeField]
/// @brief Field m_GazeTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_GazeTransform;

/// [Tooltip("The maximum value an angle can be evaluated as before the Interactor receives a normalized score of 0. Think of it as a field-of-view angle.")]
/// [SerializeField]
/// [Range(0, 180)]
/// @brief Field m_MaxAngle, offset: 0x38, size: 0x4, def value: None
 float_t  ___m_MaxAngle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator, ___m_GazeTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator, ___m_MaxAngle) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
