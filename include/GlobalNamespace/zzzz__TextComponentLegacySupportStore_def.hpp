#pragma once
// IWYU pragma private; include "GlobalNamespace/TextComponentLegacySupportStore.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TextComponentLegacySupportStore)
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
class TextMesh;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct TextComponentLegacySupportStore;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TextComponentLegacySupportStore);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextComponentLegacySupportStore, "", "TextComponentLegacySupportStore");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TextComponentLegacySupportStore
struct CORDL_TYPE TextComponentLegacySupportStore {
public:
// Declarations
 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_characterSpacing, put=set_characterSpacing)) float_t  characterSpacing;

 __declspec(property(get=get_text, put=set_text)) ::StringW  text;

/// @brief Method SetCharSpacing, addr 0x5a69ecc, size 0x4, virtual false, abstract: false, final false
inline void SetCharSpacing(float_t  spacing) ;

/// @brief Method SetFont, addr 0x5a6a260, size 0x98, virtual false, abstract: false, final false
inline void SetFont(::TMPro::TMP_FontAsset*  font) ;

/// @brief Method SetFont, addr 0x5a69c94, size 0x190, virtual false, abstract: false, final false
inline void SetFont(::TMPro::TMP_FontAsset*  font, ::UnityEngine::Font*  legacyFont) ;

/// @brief Method SetFont, addr 0x5a6a2f8, size 0x11c, virtual false, abstract: false, final false
inline void SetFont(::UnityEngine::Font*  font) ;

/// @brief Method SetFontSize, addr 0x5a69e24, size 0xa8, virtual false, abstract: false, final false
inline void SetFontSize(float_t  fontSize) ;

/// @brief Method SetText, addr 0x5a69ed0, size 0x4, virtual false, abstract: false, final false
inline void SetText(::StringW  newText) ;

/// @brief Method .ctor, addr 0x5a68fe8, size 0x234, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Transform*  objRef) ;

/// @brief Method get_IsValid, addr 0x5a68f34, size 0xb4, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_characterSpacing, addr 0x5a6a154, size 0x78, virtual false, abstract: false, final false
inline float_t get_characterSpacing() ;

/// @brief Method get_text, addr 0x5a6a414, size 0x15c, virtual false, abstract: false, final false
inline ::StringW get_text() ;

/// @brief Method set_characterSpacing, addr 0x5a6a1cc, size 0x94, virtual false, abstract: false, final false
inline void set_characterSpacing(float_t  value) ;

/// @brief Method set_text, addr 0x5a6a570, size 0x16c, virtual false, abstract: false, final false
inline void set_text(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TextComponentLegacySupportStore() ;

// Ctor Parameters [CppParam { name: "_objectReference", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_tmpTextReference", ty: "::UnityW<::TMPro::TMP_Text>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_legacyTextReference", ty: "::UnityW<::UnityEngine::UI::Text>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_legacyTextMeshReference", ty: "::UnityW<::UnityEngine::TextMesh>", modifiers: "", def_value: None, comment: None }]
constexpr TextComponentLegacySupportStore(::UnityW<::UnityEngine::Transform>  _objectReference, ::UnityW<::TMPro::TMP_Text>  _tmpTextReference, ::UnityW<::UnityEngine::UI::Text>  _legacyTextReference, ::UnityW<::UnityEngine::TextMesh>  _legacyTextMeshReference) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3092};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _objectReference, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  _objectReference;

/// @brief Field _tmpTextReference, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  _tmpTextReference;

/// @brief Field _legacyTextReference, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  _legacyTextReference;

/// @brief Field _legacyTextMeshReference, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextMesh>  _legacyTextMeshReference;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextComponentLegacySupportStore, _objectReference) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextComponentLegacySupportStore, _tmpTextReference) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextComponentLegacySupportStore, _legacyTextReference) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextComponentLegacySupportStore, _legacyTextMeshReference) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextComponentLegacySupportStore) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
