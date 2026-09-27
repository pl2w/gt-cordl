#pragma once
// IWYU pragma private; include "GlobalNamespace/BitmapFontText.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BitmapFontText)
namespace GlobalNamespace {
class BitmapFont;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class BitmapFontText;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BitmapFontText*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BitmapFontText*, "", "BitmapFontText");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2Int
namespace GlobalNamespace {
// Is value type: false
// CS Name: BitmapFontText
class CORDL_TYPE BitmapFontText : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field font, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_font, put=__cordl_internal_set_font)) ::UnityW<::GlobalNamespace::BitmapFont>  font;

/// @brief Field material, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field renderer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderer, put=__cordl_internal_set_renderer)) ::UnityW<::UnityEngine::Renderer>  renderer;

/// @brief Field text, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::StringW  text;

/// @brief Field textArea, offset 0x2c, size 0x8 
 __declspec(property(get=__cordl_internal_get_textArea, put=__cordl_internal_set_textArea)) ::UnityEngine::Vector2Int  textArea;

/// @brief Field texture, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_texture, put=__cordl_internal_set_texture)) ::UnityW<::UnityEngine::Texture2D>  texture;

/// @brief Field uppercaseOnly, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_uppercaseOnly, put=__cordl_internal_set_uppercaseOnly)) bool  uppercaseOnly;

/// @brief Method Awake, addr 0x5745260, size 0x18, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Init, addr 0x5745278, size 0x138, virtual false, abstract: false, final false
inline void Init() ;

static inline ::GlobalNamespace::BitmapFontText* New_ctor() ;

/// @brief Method Render, addr 0x57453b0, size 0x4c, virtual false, abstract: false, final false
inline void Render() ;

constexpr ::UnityW<::GlobalNamespace::BitmapFont> const& __cordl_internal_get_font() const;

constexpr ::UnityW<::GlobalNamespace::BitmapFont>& __cordl_internal_get_font() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_renderer() ;

constexpr ::StringW const& __cordl_internal_get_text() const;

constexpr ::StringW& __cordl_internal_get_text() ;

constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_textArea() const;

constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_textArea() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_texture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_texture() ;

constexpr bool const& __cordl_internal_get_uppercaseOnly() const;

constexpr bool& __cordl_internal_get_uppercaseOnly() ;

constexpr void __cordl_internal_set_font(::UnityW<::GlobalNamespace::BitmapFont>  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_text(::StringW  value) ;

constexpr void __cordl_internal_set_textArea(::UnityEngine::Vector2Int  value) ;

constexpr void __cordl_internal_set_texture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_uppercaseOnly(bool  value) ;

/// @brief Method .ctor, addr 0x57453fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BitmapFontText() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BitmapFontText", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BitmapFontText(BitmapFontText && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BitmapFontText", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BitmapFontText(BitmapFontText const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1264};

/// @brief Field text, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___text;

/// @brief Field uppercaseOnly, offset: 0x28, size: 0x1, def value: None
 bool  ___uppercaseOnly;

/// @brief Field textArea, offset: 0x2c, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  ___textArea;

/// [Space]
/// @brief Field renderer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___renderer;

/// @brief Field texture, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___texture;

/// @brief Field material, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

/// @brief Field font, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BitmapFont>  ___font;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BitmapFontText, ___text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitmapFontText, ___uppercaseOnly) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitmapFontText, ___textArea) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitmapFontText, ___renderer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitmapFontText, ___texture) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitmapFontText, ___material) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitmapFontText, ___font) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BitmapFontText) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
