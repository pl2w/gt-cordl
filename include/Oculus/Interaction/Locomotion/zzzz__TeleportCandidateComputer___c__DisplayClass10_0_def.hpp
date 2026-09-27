#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/TeleportCandidateComputer___c__DisplayClass10_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Locomotion/zzzz__TeleportHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TeleportCandidateComputer___c__DisplayClass10_0)
namespace Oculus::Interaction::Locomotion {
class TeleportCandidateComputer;
}
namespace Oculus::Interaction::Locomotion {
class TeleportInteractable;
}
namespace Oculus::Interaction::Locomotion {
class TeleportInteractor_ComputeCandidateTiebreakerDelegate;
}
namespace Oculus::Interaction {
class IPolyline;
}
// Forward declare root types
namespace GlobalNamespace {
struct TeleportCandidateComputer___c__DisplayClass10_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0, "Oculus.Interaction.Locomotion", "TeleportCandidateComputer/<>c__DisplayClass10_0");
// [CompilerGenerated]
// Dependencies Oculus.Interaction.Locomotion.TeleportHit, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Locomotion.TeleportCandidateComputer/<>c__DisplayClass10_0
struct CORDL_TYPE TeleportCandidateComputer___c__DisplayClass10_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TeleportCandidateComputer___c__DisplayClass10_0() ;

// Ctor Parameters [CppParam { name: "arcOrigin", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "bestScore", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "TeleportArc", ty: "::Oculus::Interaction::IPolyline*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Oculus::Interaction::Locomotion::TeleportCandidateComputer>", modifiers: "", def_value: None, comment: None }, CppParam { name: "bestCandidate", ty: "::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable>", modifiers: "", def_value: None, comment: None }, CppParam { name: "bestHit", ty: "::Oculus::Interaction::Locomotion::TeleportHit", modifiers: "", def_value: None, comment: None }, CppParam { name: "tiebreaker", ty: "::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*", modifiers: "", def_value: None, comment: None }]
constexpr TeleportCandidateComputer___c__DisplayClass10_0(::UnityEngine::Vector3  arcOrigin, float_t  bestScore, ::Oculus::Interaction::IPolyline*  TeleportArc, ::UnityW<::Oculus::Interaction::Locomotion::TeleportCandidateComputer>  __4__this, ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable>  bestCandidate, ::Oculus::Interaction::Locomotion::TeleportHit  bestHit, ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*  tiebreaker) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16278};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field arcOrigin, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  arcOrigin;

/// @brief Field bestScore, offset: 0xc, size: 0x4, def value: None
 float_t  bestScore;

/// @brief Field TeleportArc, offset: 0x10, size: 0x8, def value: None
 ::Oculus::Interaction::IPolyline*  TeleportArc;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Locomotion::TeleportCandidateComputer>  __4__this;

/// @brief Field bestCandidate, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable>  bestCandidate;

/// @brief Field bestHit, offset: 0x28, size: 0x28, def value: None
 ::Oculus::Interaction::Locomotion::TeleportHit  bestHit;

/// @brief Field tiebreaker, offset: 0x50, size: 0x8, def value: None
 ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*  tiebreaker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0, arcOrigin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0, bestScore) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0, TeleportArc) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0, bestCandidate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0, bestHit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0, tiebreaker) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
