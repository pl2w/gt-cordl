#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistantCandidateComputer_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__DistantPointDetectorFrustums_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DistantCandidateComputer_2)
namespace GlobalNamespace {
template<typename TInteractor,typename TInteractable>
struct InteractableRegistry_2_InteractableSet;
}
namespace Oculus::Interaction {
struct DistantPointDetectorFrustums;
}
namespace Oculus::Interaction {
class DistantPointDetector;
}
namespace Oculus::Interaction {
template<typename TInteractor,typename TInteractable>
class InteractableRegistry_2;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
template<typename TInteractor,typename TInteractable>
class DistantCandidateComputer_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::DistantCandidateComputer_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::DistantCandidateComputer_2, "Oculus.Interaction", "DistantCandidateComputer`2");
// Dependencies Oculus.Interaction.DistantPointDetectorFrustums, System.Object
namespace Oculus::Interaction {
// cpp template
template<typename TInteractor,typename TInteractable>
// Is value type: false
// CS Name: Oculus.Interaction.DistantCandidateComputer`2<TInteractor,TInteractable>
class CORDL_TYPE DistantCandidateComputer_2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_DetectionDelay, put=set_DetectionDelay)) float_t  DetectionDelay;

 __declspec(property(get=get_DetectionFrustums, put=set_DetectionFrustums)) ::Oculus::Interaction::DistantPointDetectorFrustums  DetectionFrustums;

 __declspec(property(get=get_Origin)) ::UnityEngine::Pose  Origin;

/// @brief Field _detectionDelay, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__detectionDelay, put=__cordl_internal_set__detectionDelay)) float_t  _detectionDelay;

/// @brief Field _detectionFrustums, offset 0x10, size 0x20 
 __declspec(property(get=__cordl_internal_get__detectionFrustums, put=__cordl_internal_set__detectionFrustums)) ::Oculus::Interaction::DistantPointDetectorFrustums  _detectionFrustums;

/// @brief Field _detector, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__detector, put=__cordl_internal_set__detector)) ::Oculus::Interaction::DistantPointDetector*  _detector;

/// @brief Field _hoverStartTime, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__hoverStartTime, put=__cordl_internal_set__hoverStartTime)) float_t  _hoverStartTime;

/// @brief Field _pointedCandidate, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointedCandidate, put=__cordl_internal_set__pointedCandidate)) TInteractable  _pointedCandidate;

/// @brief Field _stableCandidate, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__stableCandidate, put=__cordl_internal_set__stableCandidate)) TInteractable  _stableCandidate;

/// @brief Method ComputeBestInteractable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TInteractable ComputeBestInteractable(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>>  candidates, bool  narrowSearch, ::by_ref<::UnityEngine::Vector3>  bestHitPoint) ;

/// @brief Method ComputeCandidate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TInteractable ComputeCandidate(::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>*  registry, TInteractor  interactor, ::by_ref<::UnityEngine::Vector3>  bestHitPoint) ;

static inline ::Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>* New_ctor() ;

constexpr float_t const& __cordl_internal_get__detectionDelay() const;

constexpr float_t& __cordl_internal_get__detectionDelay() ;

constexpr ::Oculus::Interaction::DistantPointDetectorFrustums const& __cordl_internal_get__detectionFrustums() const;

constexpr ::Oculus::Interaction::DistantPointDetectorFrustums& __cordl_internal_get__detectionFrustums() ;

constexpr ::Oculus::Interaction::DistantPointDetector* const& __cordl_internal_get__detector() const;

constexpr ::Oculus::Interaction::DistantPointDetector*& __cordl_internal_get__detector() ;

constexpr float_t const& __cordl_internal_get__hoverStartTime() const;

constexpr float_t& __cordl_internal_get__hoverStartTime() ;

constexpr TInteractable const& __cordl_internal_get__pointedCandidate() const;

constexpr TInteractable& __cordl_internal_get__pointedCandidate() ;

constexpr TInteractable const& __cordl_internal_get__stableCandidate() const;

constexpr TInteractable& __cordl_internal_get__stableCandidate() ;

constexpr void __cordl_internal_set__detectionDelay(float_t  value) ;

constexpr void __cordl_internal_set__detectionFrustums(::Oculus::Interaction::DistantPointDetectorFrustums  value) ;

constexpr void __cordl_internal_set__detector(::Oculus::Interaction::DistantPointDetector*  value) ;

constexpr void __cordl_internal_set__hoverStartTime(float_t  value) ;

constexpr void __cordl_internal_set__pointedCandidate(TInteractable  value) ;

constexpr void __cordl_internal_set__stableCandidate(TInteractable  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DetectionDelay, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline float_t get_DetectionDelay() ;

/// @brief Method get_DetectionFrustums, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Oculus::Interaction::DistantPointDetectorFrustums get_DetectionFrustums() ;

/// @brief Method get_Origin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Pose get_Origin() ;

/// @brief Method set_DetectionDelay, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_DetectionDelay(float_t  value) ;

/// @brief Method set_DetectionFrustums, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_DetectionFrustums(::Oculus::Interaction::DistantPointDetectorFrustums  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DistantCandidateComputer_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DistantCandidateComputer_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DistantCandidateComputer_2(DistantCandidateComputer_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DistantCandidateComputer_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DistantCandidateComputer_2(DistantCandidateComputer_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15838};

/// [Tooltip("Frustum used to detect and select objects.")]
/// [SerializeField]
/// @brief Field _detectionFrustums, offset: 0x10, size: 0x20, def value: None
 ::Oculus::Interaction::DistantPointDetectorFrustums  ____detectionFrustums;

/// [Tooltip("How long you must hover over an object before it\'s considered a candidate for interaction.")]
/// [SerializeField]
/// @brief Field _detectionDelay, offset: 0x30, size: 0x4, def value: None
 float_t  ____detectionDelay;

/// @brief Field _hoverStartTime, offset: 0x34, size: 0x4, def value: None
 float_t  ____hoverStartTime;

/// @brief Field _detector, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::DistantPointDetector*  ____detector;

/// @brief Field _stableCandidate, offset: 0x40, size: 0x8, def value: None
 TInteractable  ____stableCandidate;

/// @brief Field _pointedCandidate, offset: 0x48, size: 0x8, def value: None
 TInteractable  ____pointedCandidate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
