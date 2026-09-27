#pragma once
// IWYU pragma private; include "Liv/Lck/Rendering/LckCompositionRenderPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckCompositionRenderPass)
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace Liv::Lck::Rendering {
class LckCompositionRenderPass;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Rendering::LckCompositionRenderPass*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Rendering::LckCompositionRenderPass*, "Liv.Lck.Rendering", "LckCompositionRenderPass");
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace Liv::Lck::Rendering {
// Is value type: false
// CS Name: Liv.Lck.Rendering.LckCompositionRenderPass
class CORDL_TYPE LckCompositionRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
// Declarations
/// @brief Field OverlayTexID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_OverlayTexID, put=setStaticF_OverlayTexID)) int32_t  OverlayTexID;

/// @brief Field _blitMaterial, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__blitMaterial, put=__cordl_internal_set__blitMaterial)) ::UnityW<::UnityEngine::Material>  _blitMaterial;

/// @brief Field _overlayTexture, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__overlayTexture, put=__cordl_internal_set__overlayTexture)) ::UnityW<::UnityEngine::Texture>  _overlayTexture;

static inline ::Liv::Lck::Rendering::LckCompositionRenderPass* New_ctor() ;

/// @brief Method RecordRenderGraph, addr 0x9d3fbbc, size 0x2b4, virtual true, abstract: false, final false
inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData) ;

/// @brief Method Setup, addr 0x9d3fb08, size 0x3c, virtual false, abstract: false, final false
inline void Setup(::UnityEngine::Material*  mat, ::UnityEngine::Texture*  overlayTexture) ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__blitMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__blitMaterial() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get__overlayTexture() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get__overlayTexture() ;

constexpr void __cordl_internal_set__blitMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__overlayTexture(::UnityW<::UnityEngine::Texture>  value) ;

/// @brief Method .ctor, addr 0x9d3f87c, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_OverlayTexID() ;

static inline void setStaticF_OverlayTexID(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCompositionRenderPass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCompositionRenderPass", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCompositionRenderPass(LckCompositionRenderPass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCompositionRenderPass", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCompositionRenderPass(LckCompositionRenderPass const& ) = delete;

/// @brief Field PassName offset 0xffffffff size 0x8
static constexpr ::ConstString  PassName{u"LckCompositionRenderPass"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24858};

/// @brief Field _blitMaterial, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____blitMaterial;

/// @brief Field _overlayTexture, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ____overlayTexture;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Rendering::LckCompositionRenderPass, ____blitMaterial) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Rendering::LckCompositionRenderPass, ____overlayTexture) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Rendering::LckCompositionRenderPass) == 0xc8, "Size mismatch!");

} // namespace end def Liv::Lck::Rendering
