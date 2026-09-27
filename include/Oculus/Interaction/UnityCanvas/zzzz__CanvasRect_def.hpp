#pragma once
// IWYU pragma private; include "Oculus/Interaction/UnityCanvas/CanvasRect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/UnityCanvas/zzzz__CanvasMesh_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CanvasRect)
namespace Oculus::Interaction::UnityCanvas {
class CanvasRenderTexture;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::UnityCanvas {
class CanvasRect;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::UnityCanvas::CanvasRect*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::UnityCanvas::CanvasRect*, "Oculus.Interaction.UnityCanvas", "CanvasRect");
// Dependencies Oculus.Interaction.UnityCanvas.CanvasMesh
namespace Oculus::Interaction::UnityCanvas {
// Is value type: false
// CS Name: Oculus.Interaction.UnityCanvas.CanvasRect
class CORDL_TYPE CanvasRect : public ::Oculus::Interaction::UnityCanvas::CanvasMesh {
public:
// Declarations
/// @brief Method GenerateMesh, addr 0xa490928, size 0x910, virtual true, abstract: false, final false
inline void GenerateMesh(::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>  verts, ::by_ref<::System::Collections::Generic::List_1<int32_t>*>  tris, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>  uvs) ;

/// @brief Method InjectAllCanvasRect, addr 0xa491238, size 0x30, virtual false, abstract: false, final false
inline void InjectAllCanvasRect(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*  canvasRenderTexture, ::UnityEngine::MeshFilter*  meshFilter) ;

/// @brief Method MeshInverseTransform, addr 0xa490924, size 0x4, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 MeshInverseTransform(::UnityEngine::Vector3  localPosition) ;

static inline ::Oculus::Interaction::UnityCanvas::CanvasRect* New_ctor() ;

/// @brief Method .ctor, addr 0xa491268, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasRect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasRect", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasRect(CanvasRect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasRect", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasRect(CanvasRect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16054};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::UnityCanvas::CanvasRect) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction::UnityCanvas
