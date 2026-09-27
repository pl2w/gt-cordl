#pragma once
// IWYU pragma private; include "GlobalNamespace/DevErrorSoundAnnoyer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DevErrorSoundAnnoyer)
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Font;
}
// Forward declare root types
namespace GlobalNamespace {
class DevErrorSoundAnnoyer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DevErrorSoundAnnoyer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevErrorSoundAnnoyer*, "", "DevErrorSoundAnnoyer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevErrorSoundAnnoyer
class CORDL_TYPE DevErrorSoundAnnoyer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioSource, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field displayedText, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayedText, put=__cordl_internal_set_displayedText)) ::StringW  displayedText;

/// @brief Field errorFont, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorFont, put=__cordl_internal_set_errorFont)) ::UnityW<::UnityEngine::Font>  errorFont;

/// @brief Field errorSound, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorSound, put=__cordl_internal_set_errorSound)) ::UnityW<::UnityEngine::AudioClip>  errorSound;

/// @brief Field errorUIText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorUIText, put=__cordl_internal_set_errorUIText)) ::UnityW<::UnityEngine::UI::Text>  errorUIText;

static inline ::GlobalNamespace::DevErrorSoundAnnoyer* New_ctor() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::StringW const& __cordl_internal_get_displayedText() const;

constexpr ::StringW& __cordl_internal_get_displayedText() ;

constexpr ::UnityW<::UnityEngine::Font> const& __cordl_internal_get_errorFont() const;

constexpr ::UnityW<::UnityEngine::Font>& __cordl_internal_get_errorFont() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_errorSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_errorSound() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_errorUIText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_errorUIText() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_displayedText(::StringW  value) ;

constexpr void __cordl_internal_set_errorFont(::UnityW<::UnityEngine::Font>  value) ;

constexpr void __cordl_internal_set_errorSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_errorUIText(::UnityW<::UnityEngine::UI::Text>  value) ;

/// @brief Method .ctor, addr 0x566f74c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevErrorSoundAnnoyer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevErrorSoundAnnoyer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DevErrorSoundAnnoyer(DevErrorSoundAnnoyer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevErrorSoundAnnoyer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevErrorSoundAnnoyer(DevErrorSoundAnnoyer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{804};

/// [SerializeField]
/// @brief Field errorSound, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___errorSound;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field errorUIText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___errorUIText;

/// [SerializeField]
/// @brief Field errorFont, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Font>  ___errorFont;

/// @brief Field displayedText, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___displayedText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DevErrorSoundAnnoyer, ___errorSound) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevErrorSoundAnnoyer, ___audioSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevErrorSoundAnnoyer, ___errorUIText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevErrorSoundAnnoyer, ___errorFont) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevErrorSoundAnnoyer, ___displayedText) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DevErrorSoundAnnoyer) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
