#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceReticles/DistantInteractionTubeVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/DistanceReticles/zzzz__DistantInteractionLineVisual_def.hpp"
#include "Oculus/Interaction/zzzz__TubePoint_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(DistantInteractionTubeVisual)
namespace Oculus::Interaction {
class IDistanceInteractor;
}
namespace Oculus::Interaction {
class TubeRenderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::DistanceReticles {
class DistantInteractionTubeVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::DistanceReticles::DistantInteractionTubeVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DistanceReticles::DistantInteractionTubeVisual*, "Oculus.Interaction.DistanceReticles", "DistantInteractionTubeVisual");
// Dependencies Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual, Oculus.Interaction.TubePoint
namespace Oculus::Interaction::DistanceReticles {
// Is value type: false
// CS Name: Oculus.Interaction.DistanceReticles.DistantInteractionTubeVisual
class CORDL_TYPE DistantInteractionTubeVisual : public ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual {
public:
// Declarations
/// @brief Field _tubePoints, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__tubePoints, put=__cordl_internal_set__tubePoints)) ::ArrayW<::Oculus::Interaction::TubePoint>  _tubePoints;

/// @brief Field _tubeRenderer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__tubeRenderer, put=__cordl_internal_set__tubeRenderer)) ::UnityW<::Oculus::Interaction::TubeRenderer>  _tubeRenderer;

/// @brief Method HideLine, addr 0xa4f0684, size 0x18, virtual true, abstract: false, final false
inline void HideLine() ;

/// @brief Method InitializeArcPoints, addr 0xa4f03c8, size 0x2bc, virtual false, abstract: false, final false
inline void InitializeArcPoints(::ArrayW<::UnityEngine::Vector3>  linePoints) ;

/// @brief Method InjectAllDistantInteractionPolylineVisual, addr 0xa4f069c, size 0x4, virtual false, abstract: false, final false
inline void InjectAllDistantInteractionPolylineVisual(::Oculus::Interaction::IDistanceInteractor*  interactor) ;

static inline ::Oculus::Interaction::DistanceReticles::DistantInteractionTubeVisual* New_ctor() ;

/// @brief Method RenderLine, addr 0xa4f039c, size 0x2c, virtual true, abstract: false, final false
inline void RenderLine(::ArrayW<::UnityEngine::Vector3>  linePoints) ;

/// @brief Method Start, addr 0xa4f0398, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::ArrayW<::Oculus::Interaction::TubePoint> const& __cordl_internal_get__tubePoints() const;

constexpr ::ArrayW<::Oculus::Interaction::TubePoint>& __cordl_internal_get__tubePoints() ;

constexpr ::UnityW<::Oculus::Interaction::TubeRenderer> const& __cordl_internal_get__tubeRenderer() const;

constexpr ::UnityW<::Oculus::Interaction::TubeRenderer>& __cordl_internal_get__tubeRenderer() ;

constexpr void __cordl_internal_set__tubePoints(::ArrayW<::Oculus::Interaction::TubePoint>  value) ;

constexpr void __cordl_internal_set__tubeRenderer(::UnityW<::Oculus::Interaction::TubeRenderer>  value) ;

/// @brief Method .ctor, addr 0xa4f06a0, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DistantInteractionTubeVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DistantInteractionTubeVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DistantInteractionTubeVisual(DistantInteractionTubeVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DistantInteractionTubeVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DistantInteractionTubeVisual(DistantInteractionTubeVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16368};

/// [SerializeField]
/// @brief Field _tubeRenderer, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::TubeRenderer>  ____tubeRenderer;

/// @brief Field _tubePoints, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::TubePoint>  ____tubePoints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::DistanceReticles::DistantInteractionTubeVisual, ____tubeRenderer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::DistantInteractionTubeVisual, ____tubePoints) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::DistanceReticles::DistantInteractionTubeVisual) == 0x78, "Size mismatch!");

} // namespace end def Oculus::Interaction::DistanceReticles
