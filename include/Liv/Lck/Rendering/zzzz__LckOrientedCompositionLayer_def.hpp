#pragma once
// IWYU pragma private; include "Liv/Lck/Rendering/LckOrientedCompositionLayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Rendering/zzzz__LckCompositionLayer_def.hpp"
CORDL_MODULE_EXPORT(LckOrientedCompositionLayer)
namespace Liv::Lck::Rendering {
class ILckOrientationAwareLayer;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace Liv::Lck::Rendering {
class LckOrientedCompositionLayer;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Rendering::LckOrientedCompositionLayer*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Rendering::LckOrientedCompositionLayer*, "Liv.Lck.Rendering", "LckOrientedCompositionLayer");
// Dependencies Liv.Lck.Rendering.LckCompositionLayer
namespace Liv::Lck::Rendering {
// Is value type: false
// CS Name: Liv.Lck.Rendering.LckOrientedCompositionLayer
class CORDL_TYPE LckOrientedCompositionLayer : public ::Liv::Lck::Rendering::LckCompositionLayer {
public:
// Declarations
 __declspec(property(get=get_CurrentTexture)) ::UnityW<::UnityEngine::Texture>  CurrentTexture;

/// @brief Field HorizontalTexture, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_HorizontalTexture, put=__cordl_internal_set_HorizontalTexture)) ::UnityW<::UnityEngine::Texture>  HorizontalTexture;

/// @brief Field VerticalTexture, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_VerticalTexture, put=__cordl_internal_set_VerticalTexture)) ::UnityW<::UnityEngine::Texture>  VerticalTexture;

/// @brief Field _isHorizontal, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__isHorizontal, put=__cordl_internal_set__isHorizontal)) bool  _isHorizontal;

/// @brief Convert operator to "::Liv::Lck::Rendering::ILckOrientationAwareLayer"
constexpr operator  ::Liv::Lck::Rendering::ILckOrientationAwareLayer*() noexcept;

static inline ::Liv::Lck::Rendering::LckOrientedCompositionLayer* New_ctor() ;

/// @brief Method SetOrientation, addr 0x9d41158, size 0x84, virtual true, abstract: false, final true
inline void SetOrientation(bool  isHorizontal) ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_HorizontalTexture() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_HorizontalTexture() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_VerticalTexture() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_VerticalTexture() ;

constexpr bool const& __cordl_internal_get__isHorizontal() const;

constexpr bool& __cordl_internal_get__isHorizontal() ;

constexpr void __cordl_internal_set_HorizontalTexture(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set_VerticalTexture(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set__isHorizontal(bool  value) ;

/// @brief Method .ctor, addr 0x9d411f8, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentTexture, addr 0x9d411dc, size 0x1c, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> get_CurrentTexture() ;

/// @brief Convert to "::Liv::Lck::Rendering::ILckOrientationAwareLayer"
constexpr ::Liv::Lck::Rendering::ILckOrientationAwareLayer* i___Liv__Lck__Rendering__ILckOrientationAwareLayer() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckOrientedCompositionLayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckOrientedCompositionLayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckOrientedCompositionLayer(LckOrientedCompositionLayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckOrientedCompositionLayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckOrientedCompositionLayer(LckOrientedCompositionLayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24865};

/// [Header("Orientation Textures")]
/// @brief Field HorizontalTexture, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ___HorizontalTexture;

/// @brief Field VerticalTexture, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ___VerticalTexture;

/// @brief Field _isHorizontal, offset: 0x38, size: 0x1, def value: None
 bool  ____isHorizontal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Rendering::LckOrientedCompositionLayer, ___HorizontalTexture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Rendering::LckOrientedCompositionLayer, ___VerticalTexture) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Rendering::LckOrientedCompositionLayer, ____isHorizontal) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Rendering::LckOrientedCompositionLayer) == 0x40, "Size mismatch!");

} // namespace end def Liv::Lck::Rendering
