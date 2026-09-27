#pragma once
// IWYU pragma private; include "UnityEngine/MeshRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MeshRenderer)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine {
class MeshRenderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::MeshRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::MeshRenderer*, "UnityEngine", "MeshRenderer");
// [NativeHeader("Runtime/Graphics/Mesh/MeshRenderer.h")]
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.MeshRenderer
class CORDL_TYPE MeshRenderer : public ::UnityEngine::Renderer {
public:
// Declarations
 __declspec(property(get=get_additionalVertexStreams, put=set_additionalVertexStreams)) ::UnityW<::UnityEngine::Mesh>  additionalVertexStreams;

 __declspec(property(get=get_enlightenVertexStream, put=set_enlightenVertexStream)) ::UnityW<::UnityEngine::Mesh>  enlightenVertexStream;

 __declspec(property(get=get_subMeshStartIndex)) int32_t  subMeshStartIndex;

/// [RequiredByNativeCode]
/// @brief Method DontStripMeshRenderer, addr 0xb59fbfc, size 0x4, virtual false, abstract: false, final false
inline void DontStripMeshRenderer() ;

static inline ::UnityEngine::MeshRenderer* New_ctor() ;

/// @brief Method .ctor, addr 0xb5a0044, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_additionalVertexStreams, addr 0xb59fc00, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_additionalVertexStreams() ;

/// @brief Method get_additionalVertexStreams_Injected, addr 0xb59fc94, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_additionalVertexStreams_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_enlightenVertexStream, addr 0xb59fdc8, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_enlightenVertexStream() ;

/// @brief Method get_enlightenVertexStream_Injected, addr 0xb59fe5c, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_enlightenVertexStream_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("GetSubMeshStartIndex")]
/// @brief Method get_subMeshStartIndex, addr 0xb59ff90, size 0x78, virtual false, abstract: false, final false
inline int32_t get_subMeshStartIndex() ;

/// @brief Method get_subMeshStartIndex_Injected, addr 0xb5a0008, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_subMeshStartIndex_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_additionalVertexStreams, addr 0xb59fcd0, size 0xb4, virtual false, abstract: false, final false
inline void set_additionalVertexStreams(::UnityEngine::Mesh*  value) ;

/// @brief Method set_additionalVertexStreams_Injected, addr 0xb59fd84, size 0x44, virtual false, abstract: false, final false
static inline void set_additionalVertexStreams_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

/// @brief Method set_enlightenVertexStream, addr 0xb59fe98, size 0xb4, virtual false, abstract: false, final false
inline void set_enlightenVertexStream(::UnityEngine::Mesh*  value) ;

/// @brief Method set_enlightenVertexStream_Injected, addr 0xb59ff4c, size 0x44, virtual false, abstract: false, final false
static inline void set_enlightenVertexStream_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshRenderer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshRenderer(MeshRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshRenderer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshRenderer(MeshRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14935};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::MeshRenderer) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
