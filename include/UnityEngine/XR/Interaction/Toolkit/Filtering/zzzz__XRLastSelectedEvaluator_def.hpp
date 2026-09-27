#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRLastSelectedEvaluator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRTargetEvaluator_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRLastSelectedEvaluator)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRTargetEvaluatorLinkable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRLastSelectedEvaluator;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRLastSelectedEvaluator");
// Dependencies UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetEvaluator
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.XRLastSelectedEvaluator
class CORDL_TYPE XRLastSelectedEvaluator : public ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator {
public:
// Declarations
/// @brief Field m_InteractableSelectionTimeMap, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractableSelectionTimeMap, put=__cordl_internal_set_m_InteractableSelectionTimeMap)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>*  m_InteractableSelectionTimeMap;

/// @brief Field m_MaxTime, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxTime, put=__cordl_internal_set_m_MaxTime)) float_t  m_MaxTime;

 __declspec(property(get=get_maxTime, put=set_maxTime)) float_t  maxTime;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable*() noexcept;

/// @brief Method CalculateNormalizedScore, addr 0xb4aa1cc, size 0xbc, virtual true, abstract: false, final false
inline float_t CalculateNormalizedScore(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  target) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator* New_ctor() ;

/// @brief Method OnDisable, addr 0xb4aa178, size 0x50, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnLink, addr 0xb4a9f00, size 0x13c, virtual true, abstract: false, final false
inline void OnLink(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method OnSelect, addr 0xb4a9e70, size 0x90, virtual false, abstract: false, final false
inline void OnSelect(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method OnUnlink, addr 0xb4aa03c, size 0x13c, virtual true, abstract: false, final false
inline void OnUnlink(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>* const& __cordl_internal_get_m_InteractableSelectionTimeMap() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>*& __cordl_internal_get_m_InteractableSelectionTimeMap() ;

constexpr float_t const& __cordl_internal_get_m_MaxTime() const;

constexpr float_t& __cordl_internal_get_m_MaxTime() ;

constexpr void __cordl_internal_set_m_InteractableSelectionTimeMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>*  value) ;

constexpr void __cordl_internal_set_m_MaxTime(float_t  value) ;

/// @brief Method .ctor, addr 0xb4aa288, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_maxTime, addr 0xb4a9e60, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxTime() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable* i___UnityEngine__XR__Interaction__Toolkit__Filtering__IXRTargetEvaluatorLinkable() noexcept;

/// @brief Method set_maxTime, addr 0xb4a9e68, size 0x8, virtual false, abstract: false, final false
inline void set_maxTime(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRLastSelectedEvaluator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRLastSelectedEvaluator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRLastSelectedEvaluator(XRLastSelectedEvaluator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRLastSelectedEvaluator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRLastSelectedEvaluator(XRLastSelectedEvaluator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11568};

/// @brief Field m_InteractableSelectionTimeMap, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>*  ___m_InteractableSelectionTimeMap;

/// [Tooltip("Any Interactable which was last selected over Max Time seconds ago will receive a normalized score of 0.")]
/// [SerializeField]
/// @brief Field m_MaxTime, offset: 0x38, size: 0x4, def value: None
 float_t  ___m_MaxTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator, ___m_InteractableSelectionTimeMap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator, ___m_MaxTime) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
