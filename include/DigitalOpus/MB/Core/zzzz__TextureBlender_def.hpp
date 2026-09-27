#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/TextureBlender.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TextureBlender)
namespace DigitalOpus::MB::Core {
class ShaderTextureProperty;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class TextureBlender;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::TextureBlender*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::TextureBlender*, "DigitalOpus.MB.Core", "TextureBlender");
// Dependencies 
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.TextureBlender
class CORDL_TYPE TextureBlender {
public:
// Declarations
/// @brief Method DoesShaderNameMatch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool DoesShaderNameMatch(::StringW  shaderName) ;

/// @brief Method GetColorIfNoTexture, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Color GetColorIfNoTexture(::UnityEngine::Material*  m, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texPropertyName) ;

/// @brief Method NonTexturePropertiesAreEqual, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool NonTexturePropertiesAreEqual(::UnityEngine::Material*  a, ::UnityEngine::Material*  b) ;

/// @brief Method OnBeforeTintTexture, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnBeforeTintTexture(::UnityEngine::Material*  sourceMat, ::StringW  shaderTexturePropertyName) ;

/// @brief Method OnBlendTexturePixel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Color OnBlendTexturePixel(::StringW  shaderPropertyName, ::UnityEngine::Color  pixelColor) ;

/// @brief Method SetNonTexturePropertyValuesOnResultMaterial, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material*  resultMaterial) ;

// Ctor Parameters [CppParam { name: "", ty: "TextureBlender", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureBlender(TextureBlender const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22846};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DigitalOpus::MB::Core
