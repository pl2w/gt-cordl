#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIRUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UIRUtility)
namespace UnityEngine::UIElements::UIR {
class RenderData;
}
namespace UnityEngine::UIElements {
struct PostProcessingMargins;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIRUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UIRUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIRUtility*, "UnityEngine.UIElements", "UIRUtility");
// [Extension]
// Dependencies System.Nullable`1<T>, System.Object, Unity.Profiling.ProfilerMarker
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIRUtility
class CORDL_TYPE UIRUtility : public ::System::Object {
public:
// Declarations
/// @brief Field k_ComputeTransformMatrixMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_ComputeTransformMatrixMarker, put=setStaticF_k_ComputeTransformMatrixMarker)) ::Unity::Profiling::ProfilerMarker  k_ComputeTransformMatrixMarker;

/// @brief Field k_DefaultShaderName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_DefaultShaderName, put=setStaticF_k_DefaultShaderName)) ::StringW  k_DefaultShaderName;

/// @brief Field s_ThreadIndex, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_ThreadIndex, put=setStaticF_s_ThreadIndex)) ::System::Nullable_1<int32_t>  s_ThreadIndex;

/// @brief Method CastToRect, addr 0xb8c9e58, size 0xc4, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect CastToRect(::UnityEngine::RectInt  rect) ;

/// @brief Method CastToRectInt, addr 0xb8c9f1c, size 0x158, virtual false, abstract: false, final false
static inline ::UnityEngine::RectInt CastToRectInt(::UnityEngine::Rect  rect) ;

/// @brief Method ComputeMatrixRelativeToAncestor, addr 0xb8c99d4, size 0xf0, virtual false, abstract: false, final false
static inline void ComputeMatrixRelativeToAncestor(::UnityEngine::UIElements::UIR::RenderData*  renderData, ::UnityEngine::UIElements::UIR::RenderData*  ancestor, ::by_ref<::UnityEngine::Matrix4x4>  transform) ;

/// @brief Method ComputeMatrixRelativeToRenderTree, addr 0xb8c9c44, size 0xbc, virtual false, abstract: false, final false
static inline void ComputeMatrixRelativeToRenderTree(::UnityEngine::UIElements::UIR::RenderData*  renderData, ::by_ref<::UnityEngine::Matrix4x4>  transform) ;

/// @brief Method ComputeTransformMatrix, addr 0xb8c9ac4, size 0x180, virtual false, abstract: false, final false
static inline void ComputeTransformMatrix(::UnityEngine::UIElements::UIR::RenderData*  renderData, ::UnityEngine::UIElements::UIR::RenderData*  ancestor, ::by_ref<::UnityEngine::Matrix4x4>  result) ;

/// @brief Method Destroy, addr 0xb8c3aa8, size 0xd8, virtual false, abstract: false, final false
static inline void Destroy(::UnityEngine::Object*  obj) ;

/// @brief Method Encapsulate, addr 0xb8c997c, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect Encapsulate(::UnityEngine::Rect  a, ::UnityEngine::Rect  b) ;

/// @brief Method GetNextPow2, addr 0xb8c40c4, size 0x1c, virtual false, abstract: false, final false
static inline int32_t GetNextPow2(int32_t  n) ;

/// @brief Method GetNextPow2Exp, addr 0xb8ca360, size 0x30, virtual false, abstract: false, final false
static inline int32_t GetNextPow2Exp(int32_t  n) ;

/// @brief Method GetPrevPow2, addr 0xb8ca328, size 0x38, virtual false, abstract: false, final false
static inline int32_t GetPrevPow2(int32_t  n) ;

/// @brief Method GetThreadIndex, addr 0xb8ca390, size 0xfc, virtual false, abstract: false, final false
static inline int32_t GetThreadIndex() ;

/// @brief Method GetVerticesTransformInfo, addr 0xb8c9d00, size 0x12c, virtual false, abstract: false, final false
static inline void GetVerticesTransformInfo(::UnityEngine::UIElements::UIR::RenderData*  renderData, ::by_ref<::UnityEngine::Matrix4x4>  transform) ;

/// @brief Method InflateByMargins, addr 0xb8c99b8, size 0x1c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect InflateByMargins(::UnityEngine::Rect  r, ::UnityEngine::UIElements::PostProcessingMargins  margins) ;

/// @brief Method IsRoundRect, addr 0xb8ca074, size 0x204, virtual false, abstract: false, final false
static inline bool IsRoundRect(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method IsVectorImageBackground, addr 0xb8ca278, size 0xb0, virtual false, abstract: false, final false
static inline bool IsVectorImageBackground(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method RectHasArea, addr 0xb8c9e2c, size 0x18, virtual false, abstract: false, final false
static inline bool RectHasArea(::UnityEngine::Rect  rect) ;

/// @brief Method RectHasArea, addr 0xb8c9e44, size 0x14, virtual false, abstract: false, final false
static inline bool RectHasArea(::UnityEngine::RectInt  rect) ;

/// @brief Method ShapeWindingIsClockwise, addr 0xb8c9900, size 0x7c, virtual false, abstract: false, final false
static inline bool ShapeWindingIsClockwise(int32_t  maskDepth, int32_t  stencilRef) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ComputeTransformMatrixMarker() ;

static inline ::StringW getStaticF_k_DefaultShaderName() ;

static inline ::System::Nullable_1<int32_t> getStaticF_s_ThreadIndex() ;

static inline void setStaticF_k_ComputeTransformMatrixMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_DefaultShaderName(::StringW  value) ;

static inline void setStaticF_s_ThreadIndex(::System::Nullable_1<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIRUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIRUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UIRUtility(UIRUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIRUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIRUtility(UIRUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7879};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::UIRUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
