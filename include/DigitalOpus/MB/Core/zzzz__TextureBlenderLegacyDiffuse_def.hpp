#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/TextureBlenderLegacyDiffuse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TextureBlenderLegacyDiffuse)
namespace DigitalOpus::MB::Core {
class ShaderTextureProperty;
}
namespace DigitalOpus::MB::Core {
class TextureBlender;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class TextureBlenderLegacyDiffuse;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse*, "DigitalOpus.MB.Core", "TextureBlenderLegacyDiffuse");
// Dependencies System.Object, UnityEngine.Color
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.TextureBlenderLegacyDiffuse
class CORDL_TYPE TextureBlenderLegacyDiffuse : public ::System::Object {
public:
// Declarations
/// @brief Field doColor, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_doColor, put=__cordl_internal_set_doColor)) bool  doColor;

/// @brief Field m_defaultTintColor, offset 0x24, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_defaultTintColor, put=__cordl_internal_set_m_defaultTintColor)) ::UnityEngine::Color  m_defaultTintColor;

/// @brief Field m_tintColor, offset 0x14, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_tintColor, put=__cordl_internal_set_m_tintColor)) ::UnityEngine::Color  m_tintColor;

/// @brief Convert operator to "::DigitalOpus::MB::Core::TextureBlender"
constexpr operator  ::DigitalOpus::MB::Core::TextureBlender*() noexcept;

/// @brief Method DoesShaderNameMatch, addr 0x9df4fe4, size 0x8c, virtual true, abstract: false, final true
inline bool DoesShaderNameMatch(::StringW  shaderName) ;

/// @brief Method GetColorIfNoTexture, addr 0x9df520c, size 0xdc, virtual true, abstract: false, final true
inline ::UnityEngine::Color GetColorIfNoTexture(::UnityEngine::Material*  m, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texPropertyName) ;

static inline ::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse* New_ctor() ;

/// @brief Method NonTexturePropertiesAreEqual, addr 0x9df5140, size 0x68, virtual true, abstract: false, final true
inline bool NonTexturePropertiesAreEqual(::UnityEngine::Material*  a, ::UnityEngine::Material*  b) ;

/// @brief Method OnBeforeTintTexture, addr 0x9df5070, size 0xac, virtual true, abstract: false, final true
inline void OnBeforeTintTexture(::UnityEngine::Material*  sourceMat, ::StringW  shaderTexturePropertyName) ;

/// @brief Method OnBlendTexturePixel, addr 0x9df511c, size 0x24, virtual true, abstract: false, final true
inline ::UnityEngine::Color OnBlendTexturePixel(::StringW  propertyToDoshaderPropertyName, ::UnityEngine::Color  pixelColor) ;

/// @brief Method SetNonTexturePropertyValuesOnResultMaterial, addr 0x9df51a8, size 0x64, virtual true, abstract: false, final true
inline void SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material*  resultMaterial) ;

constexpr bool const& __cordl_internal_get_doColor() const;

constexpr bool& __cordl_internal_get_doColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_defaultTintColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_defaultTintColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_tintColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_tintColor() ;

constexpr void __cordl_internal_set_doColor(bool  value) ;

constexpr void __cordl_internal_set_m_defaultTintColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_tintColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x9df52e8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::DigitalOpus::MB::Core::TextureBlender"
constexpr ::DigitalOpus::MB::Core::TextureBlender* i___DigitalOpus__MB__Core__TextureBlender() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureBlenderLegacyDiffuse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureBlenderLegacyDiffuse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureBlenderLegacyDiffuse(TextureBlenderLegacyDiffuse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureBlenderLegacyDiffuse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureBlenderLegacyDiffuse(TextureBlenderLegacyDiffuse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22852};

/// @brief Field doColor, offset: 0x10, size: 0x1, def value: None
 bool  ___doColor;

/// @brief Field m_tintColor, offset: 0x14, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_tintColor;

/// @brief Field m_defaultTintColor, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_defaultTintColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse, ___doColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse, ___m_tintColor) == 0x14, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse, ___m_defaultTintColor) == 0x24, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse) == 0x38, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
