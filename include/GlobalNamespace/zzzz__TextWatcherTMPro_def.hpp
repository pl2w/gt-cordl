#pragma once
// IWYU pragma private; include "GlobalNamespace/TextWatcherTMPro.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TextWatcherTMPro)
namespace GlobalNamespace {
class WatchableStringSO;
}
namespace TMPro {
class TextMeshPro;
}
// Forward declare root types
namespace GlobalNamespace {
class TextWatcherTMPro;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TextWatcherTMPro*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextWatcherTMPro*, "", "TextWatcherTMPro");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextWatcherTMPro
class CORDL_TYPE TextWatcherTMPro : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field myText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_myText, put=__cordl_internal_set_myText)) ::UnityW<::TMPro::TextMeshPro>  myText;

/// @brief Field textToCopy, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_textToCopy, put=__cordl_internal_set_textToCopy)) ::UnityW<::GlobalNamespace::WatchableStringSO>  textToCopy;

static inline ::GlobalNamespace::TextWatcherTMPro* New_ctor() ;

/// @brief Method OnDestroy, addr 0x598f8bc, size 0x90, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnTextChanged, addr 0x598f94c, size 0x20, virtual false, abstract: false, final false
inline void OnTextChanged(::StringW  newText) ;

/// @brief Method Start, addr 0x598f7f8, size 0xc4, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_myText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_myText() ;

constexpr ::UnityW<::GlobalNamespace::WatchableStringSO> const& __cordl_internal_get_textToCopy() const;

constexpr ::UnityW<::GlobalNamespace::WatchableStringSO>& __cordl_internal_get_textToCopy() ;

constexpr void __cordl_internal_set_myText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_textToCopy(::UnityW<::GlobalNamespace::WatchableStringSO>  value) ;

/// @brief Method .ctor, addr 0x598f96c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextWatcherTMPro() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextWatcherTMPro", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextWatcherTMPro(TextWatcherTMPro && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextWatcherTMPro", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextWatcherTMPro(TextWatcherTMPro const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2574};

/// @brief Field textToCopy, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::WatchableStringSO>  ___textToCopy;

/// @brief Field myText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___myText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextWatcherTMPro, ___textToCopy) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextWatcherTMPro, ___myText) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextWatcherTMPro) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
