#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/TeleportCandidateComputer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TeleportCandidateComputer)
namespace GlobalNamespace {
template<typename TInteractor,typename TInteractable>
struct InteractableRegistry_2_InteractableSet;
}
namespace GlobalNamespace {
struct TeleportCandidateComputer___c__DisplayClass10_0;
}
namespace Oculus::Interaction::Locomotion {
struct TeleportHit;
}
namespace Oculus::Interaction::Locomotion {
class TeleportInteractable;
}
namespace Oculus::Interaction::Locomotion {
class TeleportInteractor_ComputeCandidateTiebreakerDelegate;
}
namespace Oculus::Interaction::Locomotion {
class TeleportInteractor;
}
namespace Oculus::Interaction {
class IPolyline;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class TeleportCandidateComputer;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::TeleportCandidateComputer*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::TeleportCandidateComputer*, "Oculus.Interaction.Locomotion", "TeleportCandidateComputer");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.TeleportCandidateComputer
class CORDL_TYPE TeleportCandidateComputer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass10_0 = ::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0;

 __declspec(property(get=get_BlockCheckOrigin, put=set_BlockCheckOrigin)) ::UnityW<::UnityEngine::Transform>  BlockCheckOrigin;

 __declspec(property(get=get_EqualDistanceThreshold, put=set_EqualDistanceThreshold)) float_t  EqualDistanceThreshold;

/// @brief Field _blockCheckOrigin, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__blockCheckOrigin, put=__cordl_internal_set__blockCheckOrigin)) ::UnityW<::UnityEngine::Transform>  _blockCheckOrigin;

/// @brief Field _equalDistanceThreshold, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__equalDistanceThreshold, put=__cordl_internal_set__equalDistanceThreshold)) float_t  _equalDistanceThreshold;

/// @brief Field _teleportInteractor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__teleportInteractor, put=__cordl_internal_set__teleportInteractor)) ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>  _teleportInteractor;

/// @brief Method Awake, addr 0xa4cc308, size 0xbc, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ComputeCandidate, addr 0xa4cc4d0, size 0x540, virtual true, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable> ComputeCandidate(::Oculus::Interaction::IPolyline*  TeleportArc, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::InteractableRegistry_2_InteractableSet<::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>,::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable>>>  interactables, ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*  tiebreaker, ::by_ref<::Oculus::Interaction::Locomotion::TeleportHit>  hitPose) ;

static inline ::Oculus::Interaction::Locomotion::TeleportCandidateComputer* New_ctor() ;

/// [CompilerGenerated]
/// @brief Method <ComputeCandidate>g__CheckCandidate|10_1, addr 0xa4ccd24, size 0x300, virtual false, abstract: false, final false
inline void _ComputeCandidate_g__CheckCandidate_10_1(::Oculus::Interaction::Locomotion::TeleportInteractable*  candidate, ::by_ref<::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <ComputeCandidate>g__CheckOriginBlockers|10_0, addr 0xa4ccbac, size 0x178, virtual false, abstract: false, final false
inline bool _ComputeCandidate_g__CheckOriginBlockers_10_0(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::Oculus::Interaction::Locomotion::TeleportInteractable*  candidate, ::by_ref<::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <ComputeCandidate>g__Tiebreak|10_3, addr 0xa4cd4ac, size 0x50, virtual false, abstract: false, final false
inline int32_t _ComputeCandidate_g__Tiebreak_10_3(::Oculus::Interaction::Locomotion::TeleportInteractable*  a, ::Oculus::Interaction::Locomotion::TeleportInteractable*  b, ::by_ref<::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <ComputeCandidate>g__TrySetScore|10_2, addr 0xa4cd398, size 0x114, virtual false, abstract: false, final false
inline bool _ComputeCandidate_g__TrySetScore_10_2(::Oculus::Interaction::Locomotion::TeleportInteractable*  candidate, ::Oculus::Interaction::Locomotion::TeleportHit  hit, float_t  score, ::by_ref<::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0>  _cordl_fixed_empty_name_whitespace) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__blockCheckOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__blockCheckOrigin() ;

constexpr float_t const& __cordl_internal_get__equalDistanceThreshold() const;

constexpr float_t& __cordl_internal_get__equalDistanceThreshold() ;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor> const& __cordl_internal_get__teleportInteractor() const;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>& __cordl_internal_get__teleportInteractor() ;

constexpr void __cordl_internal_set__blockCheckOrigin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__equalDistanceThreshold(float_t  value) ;

constexpr void __cordl_internal_set__teleportInteractor(::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>  value) ;

/// @brief Method .ctor, addr 0xa4cd024, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BlockCheckOrigin, addr 0xa4cc2f8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_BlockCheckOrigin() ;

/// @brief Method get_EqualDistanceThreshold, addr 0xa4cc2e8, size 0x8, virtual false, abstract: false, final false
inline float_t get_EqualDistanceThreshold() ;

/// @brief Method set_BlockCheckOrigin, addr 0xa4cc300, size 0x8, virtual false, abstract: false, final false
inline void set_BlockCheckOrigin(::UnityEngine::Transform*  value) ;

/// @brief Method set_EqualDistanceThreshold, addr 0xa4cc2f0, size 0x8, virtual false, abstract: false, final false
inline void set_EqualDistanceThreshold(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportCandidateComputer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportCandidateComputer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportCandidateComputer(TeleportCandidateComputer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportCandidateComputer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportCandidateComputer(TeleportCandidateComputer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16279};

/// [SerializeField]
/// [Tooltip("(Meters, World) The threshold below which distances to a interactable are treated as equal for the purposes of ranking.")]
/// @brief Field _equalDistanceThreshold, offset: 0x20, size: 0x4, def value: None
 float_t  ____equalDistanceThreshold;

/// [SerializeField]
/// [Tooltip("When provided, the Interactor will perform an extra check to ensurenothing is blocking the line between this point and the teleport origin")]
/// @brief Field _blockCheckOrigin, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____blockCheckOrigin;

/// [SerializeField]
/// [Optional]
/// [Tooltip("When assigned in Editor, this component will inject itself into the Interactor during Awake.")]
/// @brief Field _teleportInteractor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>  ____teleportInteractor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportCandidateComputer, ____equalDistanceThreshold) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportCandidateComputer, ____blockCheckOrigin) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportCandidateComputer, ____teleportInteractor) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::TeleportCandidateComputer) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
