#pragma once
// IWYU pragma private; include "Oculus/Interaction/UnityCanvas/CanvasMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CanvasMesh)
namespace Oculus::Interaction::UnityCanvas {
class CanvasRenderTexture;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::UnityCanvas {
class CanvasMesh;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::UnityCanvas::CanvasMesh*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::UnityCanvas::CanvasMesh*, "Oculus.Interaction.UnityCanvas", "CanvasMesh");
// [DisallowMultipleComponent]
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::UnityCanvas {
// Is value type: false
// CS Name: Oculus.Interaction.UnityCanvas.CanvasMesh
class CORDL_TYPE CanvasMesh : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _canvasRenderTexture, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__canvasRenderTexture, put=__cordl_internal_set__canvasRenderTexture)) ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture>  _canvasRenderTexture;

/// @brief Field _meshCollider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshCollider, put=__cordl_internal_set__meshCollider)) ::UnityW<::UnityEngine::MeshCollider>  _meshCollider;

/// @brief Field _meshFilter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshFilter, put=__cordl_internal_set__meshFilter)) ::UnityW<::UnityEngine::MeshFilter>  _meshFilter;

/// @brief Field _started, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method GenerateMesh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GenerateMesh(::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>  verts, ::by_ref<::System::Collections::Generic::List_1<int32_t>*>  tris, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>  uvs) ;

/// @brief Method HandleUpdateRenderTexture, addr 0xa4901d0, size 0xc, virtual true, abstract: false, final false
inline void HandleUpdateRenderTexture(::UnityEngine::Texture*  texture) ;

/// @brief Method ImposterToCanvasTransformPoint, addr 0xa48fed0, size 0xb8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ImposterToCanvasTransformPoint(::UnityEngine::Vector3  worldPosition) ;

/// @brief Method InjectAllCanvasMesh, addr 0xa48fe10, size 0x30, virtual false, abstract: false, final false
inline void InjectAllCanvasMesh(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*  canvasRenderTexture, ::UnityEngine::MeshFilter*  meshFilter) ;

/// @brief Method InjectCanvasRenderTexture, addr 0xa4901dc, size 0x8, virtual false, abstract: false, final false
inline void InjectCanvasRenderTexture(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*  canvasRenderTexture) ;

/// @brief Method InjectMeshFilter, addr 0xa4901e4, size 0x8, virtual false, abstract: false, final false
inline void InjectMeshFilter(::UnityEngine::MeshFilter*  meshFilter) ;

/// @brief Method InjectOptionalMeshCollider, addr 0xa4901ec, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalMeshCollider(::UnityEngine::MeshCollider*  meshCollider) ;

/// @brief Method MeshInverseTransform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 MeshInverseTransform(::UnityEngine::Vector3  localPosition) ;

static inline ::Oculus::Interaction::UnityCanvas::CanvasMesh* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4900e4, size 0xec, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa48ff88, size 0x15c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa48fea4, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateImposter, addr 0xa48ea74, size 0x1bc, virtual true, abstract: false, final false
inline void UpdateImposter() ;

constexpr ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture> const& __cordl_internal_get__canvasRenderTexture() const;

constexpr ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture>& __cordl_internal_get__canvasRenderTexture() ;

constexpr ::UnityW<::UnityEngine::MeshCollider> const& __cordl_internal_get__meshCollider() const;

constexpr ::UnityW<::UnityEngine::MeshCollider>& __cordl_internal_get__meshCollider() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__meshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__meshFilter() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__canvasRenderTexture(::UnityW<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture>  value) ;

constexpr void __cordl_internal_set__meshCollider(::UnityW<::UnityEngine::MeshCollider>  value) ;

constexpr void __cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa48fe70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasMesh", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasMesh(CanvasMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasMesh", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasMesh(CanvasMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16051};

/// [Tooltip("Mesh construction will be driven by this texture.")]
/// [SerializeField]
/// @brief Field _canvasRenderTexture, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture>  ____canvasRenderTexture;

/// [Tooltip("The mesh filter that will be driven.")]
/// [SerializeField]
/// @brief Field _meshFilter, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ____meshFilter;

/// [Tooltip("Optional mesh collider that will be driven.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _meshCollider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshCollider>  ____meshCollider;

/// @brief Field _started, offset: 0x38, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasMesh, ____canvasRenderTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasMesh, ____meshFilter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasMesh, ____meshCollider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UnityCanvas::CanvasMesh, ____started) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::UnityCanvas::CanvasMesh) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction::UnityCanvas
