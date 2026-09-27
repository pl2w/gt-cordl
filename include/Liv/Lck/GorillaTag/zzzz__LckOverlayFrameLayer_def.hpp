#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/LckOverlayFrameLayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Rendering/zzzz__LckOrientedCompositionLayer_def.hpp"
CORDL_MODULE_EXPORT(LckOverlayFrameLayer)
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class LckOverlayFrameLayer;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::LckOverlayFrameLayer*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::LckOverlayFrameLayer*, "Liv.Lck.GorillaTag", "LckOverlayFrameLayer");
// Dependencies Liv.Lck.Rendering.LckOrientedCompositionLayer
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.LckOverlayFrameLayer
class CORDL_TYPE LckOverlayFrameLayer : public ::Liv::Lck::Rendering::LckOrientedCompositionLayer {
public:
// Declarations
 __declspec(property(get=get_CurrentTexture)) ::UnityW<::UnityEngine::Texture>  CurrentTexture;

static inline ::Liv::Lck::GorillaTag::LckOverlayFrameLayer* New_ctor() ;

/// @brief Method .ctor, addr 0x9d31148, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentTexture, addr 0x9d31130, size 0x18, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> get_CurrentTexture() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckOverlayFrameLayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckOverlayFrameLayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckOverlayFrameLayer(LckOverlayFrameLayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckOverlayFrameLayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckOverlayFrameLayer(LckOverlayFrameLayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29674};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::GorillaTag::LckOverlayFrameLayer) == 0x40, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
