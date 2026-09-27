#pragma once
// IWYU pragma private; include "GlobalNamespace/TextWatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TextWatcher)
namespace GlobalNamespace {
class WatchableStringSO;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class TextWatcher;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TextWatcher*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextWatcher*, "", "TextWatcher");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextWatcher
class CORDL_TYPE TextWatcher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field myText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_myText, put=__cordl_internal_set_myText)) ::UnityW<::UnityEngine::UI::Text>  myText;

/// @brief Field textToCopy, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_textToCopy, put=__cordl_internal_set_textToCopy)) ::UnityW<::GlobalNamespace::WatchableStringSO>  textToCopy;

static inline ::GlobalNamespace::TextWatcher* New_ctor() ;

/// @brief Method OnDestroy, addr 0x598f740, size 0x90, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnTextChanged, addr 0x598f7d0, size 0x20, virtual false, abstract: false, final false
inline void OnTextChanged(::StringW  newText) ;

/// @brief Method Start, addr 0x598f67c, size 0xc4, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_myText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_myText() ;

constexpr ::UnityW<::GlobalNamespace::WatchableStringSO> const& __cordl_internal_get_textToCopy() const;

constexpr ::UnityW<::GlobalNamespace::WatchableStringSO>& __cordl_internal_get_textToCopy() ;

constexpr void __cordl_internal_set_myText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_textToCopy(::UnityW<::GlobalNamespace::WatchableStringSO>  value) ;

/// @brief Method .ctor, addr 0x598f7f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextWatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextWatcher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextWatcher(TextWatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextWatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextWatcher(TextWatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2573};

/// @brief Field textToCopy, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::WatchableStringSO>  ___textToCopy;

/// @brief Field myText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___myText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextWatcher, ___textToCopy) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextWatcher, ___myText) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextWatcher) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
