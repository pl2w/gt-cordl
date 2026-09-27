#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderingLayerUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderingLayerUtils)
namespace GlobalNamespace {
struct RenderingLayerUtils_Event;
}
namespace GlobalNamespace {
struct RenderingLayerUtils_MaskSize;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingMode;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererFeature;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderer;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class RenderingLayerUtils;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::RenderingLayerUtils*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::RenderingLayerUtils*, "UnityEngine.Rendering.Universal", "RenderingLayerUtils");
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.RenderingLayerUtils
class CORDL_TYPE RenderingLayerUtils : public ::System::Object {
public:
// Declarations
using Event = ::GlobalNamespace::RenderingLayerUtils_Event;

using MaskSize = ::GlobalNamespace::RenderingLayerUtils_MaskSize;

/// @brief Method Combine, addr 0xb291000, size 0xc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::RenderingLayerUtils_Event Combine(::GlobalNamespace::RenderingLayerUtils_Event  a, ::GlobalNamespace::RenderingLayerUtils_Event  b) ;

/// @brief Method Combine, addr 0xb291358, size 0xc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::RenderingLayerUtils_MaskSize Combine(::GlobalNamespace::RenderingLayerUtils_MaskSize  a, ::GlobalNamespace::RenderingLayerUtils_MaskSize  b) ;

/// @brief Method CombineRendererEvents, addr 0xb290fd8, size 0x28, virtual false, abstract: false, final false
static inline void CombineRendererEvents(bool  isDeferred, int32_t  msaaSampleCount, ::GlobalNamespace::RenderingLayerUtils_Event  rendererEvent, ::by_ref<::GlobalNamespace::RenderingLayerUtils_Event>  combinedEvent) ;

/// @brief Method GetBits, addr 0xb2914ec, size 0x4c, virtual false, abstract: false, final false
static inline int32_t GetBits(::GlobalNamespace::RenderingLayerUtils_MaskSize  maskSize) ;

/// @brief Method GetFormat, addr 0xb291538, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetFormat(::GlobalNamespace::RenderingLayerUtils_MaskSize  maskSize) ;

/// @brief Method GetMaskSize, addr 0xb291364, size 0x34, virtual false, abstract: false, final false
static inline ::GlobalNamespace::RenderingLayerUtils_MaskSize GetMaskSize(int32_t  bits) ;

/// @brief Method RequireRenderingLayers, addr 0xb291080, size 0x2d8, virtual false, abstract: false, final false
static inline bool RequireRenderingLayers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*  rendererFeatures, ::UnityEngine::Rendering::Universal::RenderingMode  renderingMode, bool  accurateGbufferNormals, int32_t  msaaSampleCount, ::by_ref<::GlobalNamespace::RenderingLayerUtils_Event>  combinedEvent, ::by_ref<::GlobalNamespace::RenderingLayerUtils_MaskSize>  combinedMaskSize) ;

/// @brief Method RequireRenderingLayers, addr 0xb29100c, size 0x74, virtual false, abstract: false, final false
static inline bool RequireRenderingLayers(::UnityEngine::Rendering::Universal::UniversalRenderer*  universalRenderer, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*  rendererFeatures, int32_t  msaaSampleCount, ::by_ref<::GlobalNamespace::RenderingLayerUtils_Event>  combinedEvent, ::by_ref<::GlobalNamespace::RenderingLayerUtils_MaskSize>  combinedMaskSize) ;

/// @brief Method SetupProperties, addr 0xb291398, size 0xbc, virtual false, abstract: false, final false
static inline void SetupProperties(::UnityEngine::Rendering::CommandBuffer*  cmd, ::GlobalNamespace::RenderingLayerUtils_MaskSize  maskSize) ;

/// @brief Method SetupProperties, addr 0xb291454, size 0x98, virtual false, abstract: false, final false
static inline void SetupProperties(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::GlobalNamespace::RenderingLayerUtils_MaskSize  maskSize) ;

/// @brief Method ToValidRenderingLayers, addr 0xb291588, size 0xdc, virtual false, abstract: false, final false
static inline uint32_t ToValidRenderingLayers(uint32_t  renderingLayers) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RenderingLayerUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RenderingLayerUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderingLayerUtils(RenderingLayerUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderingLayerUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderingLayerUtils(RenderingLayerUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18591};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::RenderingLayerUtils) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
