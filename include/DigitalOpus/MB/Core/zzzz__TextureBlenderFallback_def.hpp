#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/TextureBlenderFallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TextureBlenderFallback)
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
class TextureBlenderFallback;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::TextureBlenderFallback*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::TextureBlenderFallback*, "DigitalOpus.MB.Core", "TextureBlenderFallback");
// Dependencies System.Object, UnityEngine.Color
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.TextureBlenderFallback
class CORDL_TYPE TextureBlenderFallback : public ::System::Object {
public:
// Declarations
/// @brief Field m_defaultColor, offset 0x24, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_defaultColor, put=__cordl_internal_set_m_defaultColor)) ::UnityEngine::Color  m_defaultColor;

/// @brief Field m_doTintColor, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_doTintColor, put=__cordl_internal_set_m_doTintColor)) bool  m_doTintColor;

/// @brief Field m_tintColor, offset 0x14, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_tintColor, put=__cordl_internal_set_m_tintColor)) ::UnityEngine::Color  m_tintColor;

/// @brief Convert operator to "::DigitalOpus::MB::Core::TextureBlender"
constexpr operator  ::DigitalOpus::MB::Core::TextureBlender*() noexcept;

/// @brief Method DoesShaderNameMatch, addr 0x9df2a64, size 0x8, virtual true, abstract: false, final true
inline bool DoesShaderNameMatch(::StringW  shaderName) ;

/// @brief Method GetColorIfNoTexture, addr 0x9df2e1c, size 0x884, virtual true, abstract: false, final true
inline ::UnityEngine::Color GetColorIfNoTexture(::UnityEngine::Material*  mat, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texProperty) ;

/// @brief Method GetDefaultNormalMapColor, addr 0x9df2df0, size 0x2c, virtual false, abstract: false, final false
static inline ::UnityEngine::Color GetDefaultNormalMapColor() ;

static inline ::DigitalOpus::MB::Core::TextureBlenderFallback* New_ctor() ;

/// @brief Method NonTexturePropertiesAreEqual, addr 0x9df2b80, size 0xbc, virtual true, abstract: false, final true
inline bool NonTexturePropertiesAreEqual(::UnityEngine::Material*  a, ::UnityEngine::Material*  b) ;

/// @brief Method OnBeforeTintTexture, addr 0x9df2a6c, size 0xf0, virtual true, abstract: false, final true
inline void OnBeforeTintTexture(::UnityEngine::Material*  sourceMat, ::StringW  shaderTexturePropertyName) ;

/// @brief Method OnBlendTexturePixel, addr 0x9df2b5c, size 0x24, virtual true, abstract: false, final true
inline ::UnityEngine::Color OnBlendTexturePixel(::StringW  shaderPropertyName, ::UnityEngine::Color  pixelColor) ;

/// @brief Method SetNonTexturePropertyValuesOnResultMaterial, addr 0x9df2d48, size 0xa8, virtual true, abstract: false, final true
inline void SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material*  resultMaterial) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_defaultColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_defaultColor() ;

constexpr bool const& __cordl_internal_get_m_doTintColor() const;

constexpr bool& __cordl_internal_get_m_doTintColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_tintColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_tintColor() ;

constexpr void __cordl_internal_set_m_defaultColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_doTintColor(bool  value) ;

constexpr void __cordl_internal_set_m_tintColor(::UnityEngine::Color  value) ;

/// @brief Method _compareColor, addr 0x9df2c3c, size 0x10c, virtual false, abstract: false, final false
static inline bool _compareColor(::UnityEngine::Material*  a, ::UnityEngine::Material*  b, ::UnityEngine::Color  defaultVal, ::StringW  propertyName) ;

/// @brief Method _compareFloat, addr 0x9df36a0, size 0x90, virtual false, abstract: false, final false
static inline bool _compareFloat(::UnityEngine::Material*  a, ::UnityEngine::Material*  b, float_t  defaultVal, ::StringW  propertyName) ;

/// @brief Method .ctor, addr 0x9df3730, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::DigitalOpus::MB::Core::TextureBlender"
constexpr ::DigitalOpus::MB::Core::TextureBlender* i___DigitalOpus__MB__Core__TextureBlender() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureBlenderFallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureBlenderFallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureBlenderFallback(TextureBlenderFallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureBlenderFallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureBlenderFallback(TextureBlenderFallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22847};

/// @brief Field m_doTintColor, offset: 0x10, size: 0x1, def value: None
 bool  ___m_doTintColor;

/// @brief Field m_tintColor, offset: 0x14, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_tintColor;

/// @brief Field m_defaultColor, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_defaultColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderFallback, ___m_doTintColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderFallback, ___m_tintColor) == 0x14, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderFallback, ___m_defaultColor) == 0x24, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::TextureBlenderFallback) == 0x38, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
