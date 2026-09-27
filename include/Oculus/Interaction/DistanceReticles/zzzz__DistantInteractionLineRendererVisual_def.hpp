#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceReticles/DistantInteractionLineRendererVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/DistanceReticles/zzzz__DistantInteractionLineVisual_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(DistantInteractionLineRendererVisual)
namespace Oculus::Interaction {
class IDistanceInteractor;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::DistanceReticles {
class DistantInteractionLineRendererVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual*, "Oculus.Interaction.DistanceReticles", "DistantInteractionLineRendererVisual");
// Dependencies Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual
namespace Oculus::Interaction::DistanceReticles {
// Is value type: false
// CS Name: Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual
class CORDL_TYPE DistantInteractionLineRendererVisual : public ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual {
public:
// Declarations
/// @brief Field _lineRenderer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__lineRenderer, put=__cordl_internal_set__lineRenderer)) ::UnityW<::UnityEngine::LineRenderer>  _lineRenderer;

/// @brief Method HideLine, addr 0xa4ef250, size 0x1c, virtual true, abstract: false, final false
inline void HideLine() ;

/// @brief Method InjectAllDistantInteractionLineRendererVisual, addr 0xa4ef26c, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllDistantInteractionLineRendererVisual(::Oculus::Interaction::IDistanceInteractor*  interactor, ::UnityEngine::LineRenderer*  lineRenderer) ;

/// @brief Method InjectLineRenderer, addr 0xa4ef368, size 0x8, virtual false, abstract: false, final false
inline void InjectLineRenderer(::UnityEngine::LineRenderer*  lineRenderer) ;

static inline ::Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual* New_ctor() ;

/// @brief Method RenderLine, addr 0xa4ef21c, size 0x34, virtual true, abstract: false, final false
inline void RenderLine(::ArrayW<::UnityEngine::Vector3>  linePoints) ;

/// @brief Method Start, addr 0xa4ef178, size 0x28, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get__lineRenderer() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get__lineRenderer() ;

constexpr void __cordl_internal_set__lineRenderer(::UnityW<::UnityEngine::LineRenderer>  value) ;

/// @brief Method .ctor, addr 0xa4ef370, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DistantInteractionLineRendererVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DistantInteractionLineRendererVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DistantInteractionLineRendererVisual(DistantInteractionLineRendererVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DistantInteractionLineRendererVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DistantInteractionLineRendererVisual(DistantInteractionLineRendererVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16364};

/// [SerializeField]
/// @brief Field _lineRenderer, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ____lineRenderer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual, ____lineRenderer) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual) == 0x70, "Size mismatch!");

} // namespace end def Oculus::Interaction::DistanceReticles
