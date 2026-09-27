#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRDistanceEvaluator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRTargetEvaluator_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRDistanceEvaluator)
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRDistanceEvaluator;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRDistanceEvaluator");
// Dependencies UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetEvaluator
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.XRDistanceEvaluator
class CORDL_TYPE XRDistanceEvaluator : public ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator {
public:
// Declarations
/// @brief Field m_MaxDistance, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxDistance, put=__cordl_internal_set_m_MaxDistance)) float_t  m_MaxDistance;

 __declspec(property(get=get_maxDistance, put=set_maxDistance)) float_t  maxDistance;

/// @brief Method CalculateNormalizedScore, addr 0xb4a9c6c, size 0x1dc, virtual true, abstract: false, final false
inline float_t CalculateNormalizedScore(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  target) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator* New_ctor() ;

/// @brief Method Reset, addr 0xb4a9b38, size 0x134, virtual true, abstract: false, final false
inline void Reset() ;

constexpr float_t const& __cordl_internal_get_m_MaxDistance() const;

constexpr float_t& __cordl_internal_get_m_MaxDistance() ;

constexpr void __cordl_internal_set_m_MaxDistance(float_t  value) ;

/// @brief Method .ctor, addr 0xb4a9e48, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_maxDistance, addr 0xb4a9b28, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxDistance() ;

/// @brief Method set_maxDistance, addr 0xb4a9b30, size 0x8, virtual false, abstract: false, final false
inline void set_maxDistance(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRDistanceEvaluator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRDistanceEvaluator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRDistanceEvaluator(XRDistanceEvaluator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRDistanceEvaluator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRDistanceEvaluator(XRDistanceEvaluator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11567};

/// [Tooltip("The maximum distance from the Interactor. Any target from this distance will receive a 0 normalized score.")]
/// [SerializeField]
/// @brief Field m_MaxDistance, offset: 0x2c, size: 0x4, def value: None
 float_t  ___m_MaxDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator, ___m_MaxDistance) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
