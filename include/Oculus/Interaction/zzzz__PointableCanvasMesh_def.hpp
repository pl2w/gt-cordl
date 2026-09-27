#pragma once
// IWYU pragma private; include "Oculus/Interaction/PointableCanvasMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__PointableElement_def.hpp"
CORDL_MODULE_EXPORT(PointableCanvasMesh)
namespace Oculus::Interaction::UnityCanvas {
class CanvasMesh;
}
namespace Oculus::Interaction {
struct PointerEvent;
}
// Forward declare root types
namespace Oculus::Interaction {
class PointableCanvasMesh;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PointableCanvasMesh*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PointableCanvasMesh*, "Oculus.Interaction", "PointableCanvasMesh");
// Dependencies Oculus.Interaction.PointableElement
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PointableCanvasMesh
class CORDL_TYPE PointableCanvasMesh : public ::Oculus::Interaction::PointableElement {
public:
// Declarations
/// @brief Field _canvasMesh, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__canvasMesh, put=__cordl_internal_set__canvasMesh)) ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasMesh>  _canvasMesh;

/// @brief Method InjectAllCanvasMeshPointable, addr 0xa48520c, size 0x8, virtual false, abstract: false, final false
inline void InjectAllCanvasMeshPointable(::Oculus::Interaction::UnityCanvas::CanvasMesh*  canvasMesh) ;

/// @brief Method InjectCanvasMesh, addr 0xa485214, size 0x8, virtual false, abstract: false, final false
inline void InjectCanvasMesh(::Oculus::Interaction::UnityCanvas::CanvasMesh*  canvasMesh) ;

static inline ::Oculus::Interaction::PointableCanvasMesh* New_ctor() ;

/// @brief Method ProcessPointerEvent, addr 0xa4850c0, size 0x14c, virtual true, abstract: false, final false
inline void ProcessPointerEvent(::Oculus::Interaction::PointerEvent  evt) ;

/// @brief Method Start, addr 0xa4850b8, size 0x8, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasMesh> const& __cordl_internal_get__canvasMesh() const;

constexpr ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasMesh>& __cordl_internal_get__canvasMesh() ;

constexpr void __cordl_internal_set__canvasMesh(::UnityW<::Oculus::Interaction::UnityCanvas::CanvasMesh>  value) ;

/// @brief Method .ctor, addr 0xa48521c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointableCanvasMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointableCanvasMesh", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointableCanvasMesh(PointableCanvasMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointableCanvasMesh", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointableCanvasMesh(PointableCanvasMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15994};

/// [Tooltip("This CanvasMesh determines the Pose of PointerEvents.")]
/// [SerializeField]
/// [FormerlySerializedAs("_canvasRenderTextureMesh")]
/// @brief Field _canvasMesh, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasMesh>  ____canvasMesh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PointableCanvasMesh, ____canvasMesh) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PointableCanvasMesh) == 0x70, "Size mismatch!");

} // namespace end def Oculus::Interaction
