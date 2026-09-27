#pragma once
// IWYU pragma private; include "UnityEngine/SkinnedMeshRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SkinnedMeshRenderer)
namespace GlobalNamespace {
struct GraphicsBuffer_Target;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct SkinQuality;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::SkinnedMeshRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SkinnedMeshRenderer*, "UnityEngine", "SkinnedMeshRenderer");
// [NativeHeader("Runtime/Graphics/Mesh/SkinnedMeshRenderer.h")]
// [RequiredByNativeCode]
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SkinnedMeshRenderer
class CORDL_TYPE SkinnedMeshRenderer : public ::UnityEngine::Renderer {
public:
// Declarations
 __declspec(property(get=get_bones, put=set_bones)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  bones;

 __declspec(property(get=get_forceMatrixRecalculationPerRender, put=set_forceMatrixRecalculationPerRender)) bool  forceMatrixRecalculationPerRender;

 __declspec(property(get=get_quality, put=set_quality)) ::UnityEngine::SkinQuality  quality;

 __declspec(property(get=get_rootBone, put=set_rootBone)) ::UnityW<::UnityEngine::Transform>  rootBone;

/// @brief [NativeProperty("Mesh")]
 __declspec(property(get=get_sharedMesh, put=set_sharedMesh)) ::UnityW<::UnityEngine::Mesh>  sharedMesh;

/// @brief [NativeProperty("SkinnedMeshMotionVectors")]
 __declspec(property(get=get_skinnedMotionVectors, put=set_skinnedMotionVectors)) bool  skinnedMotionVectors;

 __declspec(property(get=get_updateWhenOffscreen, put=set_updateWhenOffscreen)) bool  updateWhenOffscreen;

 __declspec(property(get=get_vertexBufferTarget, put=set_vertexBufferTarget)) ::GlobalNamespace::GraphicsBuffer_Target  vertexBufferTarget;

/// @brief Method BakeMesh, addr 0xb59f664, size 0x8, virtual false, abstract: false, final false
inline void BakeMesh(::UnityEngine::Mesh*  mesh) ;

/// @brief Method BakeMesh, addr 0xb59f66c, size 0xf4, virtual false, abstract: false, final false
inline void BakeMesh(/* [NotNull] */ ::UnityEngine::Mesh*  mesh, bool  useScale) ;

/// @brief Method BakeMesh_Injected, addr 0xb59f760, size 0x54, virtual false, abstract: false, final false
static inline void BakeMesh_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  mesh, bool  useScale) ;

/// @brief Method GetBlendShapeWeight, addr 0xb59f4bc, size 0x80, virtual false, abstract: false, final false
inline float_t GetBlendShapeWeight(int32_t  index) ;

/// @brief Method GetBlendShapeWeight_Injected, addr 0xb59f53c, size 0x44, virtual false, abstract: false, final false
static inline float_t GetBlendShapeWeight_Injected(::System::IntPtr  _unity_self, int32_t  index) ;

/// @brief Method GetPreviousVertexBuffer, addr 0xb59f8dc, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* GetPreviousVertexBuffer() ;

/// [FreeFunction(Name = "SkinnedMeshRendererScripting::GetPreviousVertexBufferPtr", HasExplicitThis = true)]
/// @brief Method GetPreviousVertexBufferImpl, addr 0xb59f978, size 0x8c, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* GetPreviousVertexBufferImpl() ;

/// @brief Method GetPreviousVertexBufferImpl_Injected, addr 0xb59fa40, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetPreviousVertexBufferImpl_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetVertexBuffer, addr 0xb59f7b4, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* GetVertexBuffer() ;

/// [FreeFunction(Name = "SkinnedMeshRendererScripting::GetVertexBufferPtr", HasExplicitThis = true)]
/// @brief Method GetVertexBufferImpl, addr 0xb59f850, size 0x8c, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* GetVertexBufferImpl() ;

/// @brief Method GetVertexBufferImpl_Injected, addr 0xb59fa04, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetVertexBufferImpl_Injected(::System::IntPtr  _unity_self) ;

static inline ::UnityEngine::SkinnedMeshRenderer* New_ctor() ;

/// @brief Method SetBlendShapeWeight, addr 0xb59f580, size 0x90, virtual false, abstract: false, final false
inline void SetBlendShapeWeight(int32_t  index, float_t  value) ;

/// @brief Method SetBlendShapeWeight_Injected, addr 0xb59f610, size 0x54, virtual false, abstract: false, final false
static inline void SetBlendShapeWeight_Injected(::System::IntPtr  _unity_self, int32_t  index, float_t  value) ;

/// @brief Method .ctor, addr 0xb59fbf4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_bones, addr 0xb59f004, size 0x78, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Transform>> get_bones() ;

/// @brief Method get_bones_Injected, addr 0xb59f07c, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Transform>> get_bones_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_forceMatrixRecalculationPerRender, addr 0xb59ecc4, size 0x78, virtual false, abstract: false, final false
inline bool get_forceMatrixRecalculationPerRender() ;

/// @brief Method get_forceMatrixRecalculationPerRender_Injected, addr 0xb59ed3c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_forceMatrixRecalculationPerRender_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_quality, addr 0xb59e9d4, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::SkinQuality get_quality() ;

/// @brief Method get_quality_Injected, addr 0xb59ea4c, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::SkinQuality get_quality_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_rootBone, addr 0xb59ee3c, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_rootBone() ;

/// @brief Method get_rootBone_Injected, addr 0xb59eed0, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_rootBone_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_sharedMesh, addr 0xb59f17c, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_sharedMesh() ;

/// @brief Method get_sharedMesh_Injected, addr 0xb59f210, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_sharedMesh_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_skinnedMotionVectors, addr 0xb59f344, size 0x78, virtual false, abstract: false, final false
inline bool get_skinnedMotionVectors() ;

/// @brief Method get_skinnedMotionVectors_Injected, addr 0xb59f3bc, size 0x3c, virtual false, abstract: false, final false
static inline bool get_skinnedMotionVectors_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_updateWhenOffscreen, addr 0xb59eb4c, size 0x78, virtual false, abstract: false, final false
inline bool get_updateWhenOffscreen() ;

/// @brief Method get_updateWhenOffscreen_Injected, addr 0xb59ebc4, size 0x3c, virtual false, abstract: false, final false
static inline bool get_updateWhenOffscreen_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_vertexBufferTarget, addr 0xb59fa7c, size 0x78, virtual false, abstract: false, final false
inline ::GlobalNamespace::GraphicsBuffer_Target get_vertexBufferTarget() ;

/// @brief Method get_vertexBufferTarget_Injected, addr 0xb59faf4, size 0x3c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GraphicsBuffer_Target get_vertexBufferTarget_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_bones, addr 0xb59f0b8, size 0x80, virtual false, abstract: false, final false
inline void set_bones(::ArrayW<::UnityEngine::Transform*>  value) ;

/// @brief Method set_bones_Injected, addr 0xb59f138, size 0x44, virtual false, abstract: false, final false
static inline void set_bones_Injected(::System::IntPtr  _unity_self, ::ArrayW<::UnityEngine::Transform*>  value) ;

/// @brief Method set_forceMatrixRecalculationPerRender, addr 0xb59ed78, size 0x80, virtual false, abstract: false, final false
inline void set_forceMatrixRecalculationPerRender(bool  value) ;

/// @brief Method set_forceMatrixRecalculationPerRender_Injected, addr 0xb59edf8, size 0x44, virtual false, abstract: false, final false
static inline void set_forceMatrixRecalculationPerRender_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_quality, addr 0xb59ea88, size 0x80, virtual false, abstract: false, final false
inline void set_quality(::UnityEngine::SkinQuality  value) ;

/// @brief Method set_quality_Injected, addr 0xb59eb08, size 0x44, virtual false, abstract: false, final false
static inline void set_quality_Injected(::System::IntPtr  _unity_self, ::UnityEngine::SkinQuality  value) ;

/// @brief Method set_rootBone, addr 0xb59ef0c, size 0xb4, virtual false, abstract: false, final false
inline void set_rootBone(::UnityEngine::Transform*  value) ;

/// @brief Method set_rootBone_Injected, addr 0xb59efc0, size 0x44, virtual false, abstract: false, final false
static inline void set_rootBone_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

/// @brief Method set_sharedMesh, addr 0xb59f24c, size 0xb4, virtual false, abstract: false, final false
inline void set_sharedMesh(::UnityEngine::Mesh*  value) ;

/// @brief Method set_sharedMesh_Injected, addr 0xb59f300, size 0x44, virtual false, abstract: false, final false
static inline void set_sharedMesh_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

/// @brief Method set_skinnedMotionVectors, addr 0xb59f3f8, size 0x80, virtual false, abstract: false, final false
inline void set_skinnedMotionVectors(bool  value) ;

/// @brief Method set_skinnedMotionVectors_Injected, addr 0xb59f478, size 0x44, virtual false, abstract: false, final false
static inline void set_skinnedMotionVectors_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_updateWhenOffscreen, addr 0xb59ec00, size 0x80, virtual false, abstract: false, final false
inline void set_updateWhenOffscreen(bool  value) ;

/// @brief Method set_updateWhenOffscreen_Injected, addr 0xb59ec80, size 0x44, virtual false, abstract: false, final false
static inline void set_updateWhenOffscreen_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_vertexBufferTarget, addr 0xb59fb30, size 0x80, virtual false, abstract: false, final false
inline void set_vertexBufferTarget(::GlobalNamespace::GraphicsBuffer_Target  value) ;

/// @brief Method set_vertexBufferTarget_Injected, addr 0xb59fbb0, size 0x44, virtual false, abstract: false, final false
static inline void set_vertexBufferTarget_Injected(::System::IntPtr  _unity_self, ::GlobalNamespace::GraphicsBuffer_Target  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkinnedMeshRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkinnedMeshRenderer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SkinnedMeshRenderer(SkinnedMeshRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkinnedMeshRenderer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkinnedMeshRenderer(SkinnedMeshRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14934};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::SkinnedMeshRenderer) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
