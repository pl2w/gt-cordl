#pragma once
// IWYU pragma private; include "GlobalNamespace/GameModePages.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasePageHandler_def.hpp"
#include "GlobalNamespace/zzzz__GameModeSelectButton_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameModePages)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class GameModePages;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameModePages*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameModePages*, "", "GameModePages");
// Dependencies BasePageHandler, GameModeSelectButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameModePages
class CORDL_TYPE GameModePages : public ::GlobalNamespace::BasePageHandler {
public:
// Declarations
/// @brief Field buttons, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttons, put=__cordl_internal_set_buttons)) ::ArrayW<::UnityW<::GlobalNamespace::GameModeSelectButton>>  buttons;

/// @brief Field currentButtonIndex, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentButtonIndex, put=__cordl_internal_set_currentButtonIndex)) int32_t  currentButtonIndex;

 __declspec(property(get=get_entriesCount)) int32_t  entriesCount;

/// @brief Field gameModeSelectorInstances, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gameModeSelectorInstances, put=setStaticF_gameModeSelectorInstances)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameModePages>>*  gameModeSelectorInstances;

/// @brief Field gameModeText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameModeText, put=__cordl_internal_set_gameModeText)) ::UnityW<::UnityEngine::UI::Text>  gameModeText;

/// @brief Field initialized, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

 __declspec(property(get=get_pageSize)) int32_t  pageSize;

/// @brief Field sharedSelectedIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_sharedSelectedIndex, put=setStaticF_sharedSelectedIndex)) int32_t  sharedSelectedIndex;

/// @brief Field textBuilder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_textBuilder, put=setStaticF_textBuilder)) ::System::Text::StringBuilder*  textBuilder;

/// @brief Method Awake, addr 0x579c874, size 0x154, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method EnableEntryButtons, addr 0x579cdbc, size 0xd8, virtual false, abstract: false, final false
inline void EnableEntryButtons(int32_t  buttonsMissing) ;

static inline ::GlobalNamespace::GameModePages* New_ctor() ;

/// @brief Method OnDestroy, addr 0x579cabc, size 0x80, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x579ca44, size 0x78, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PageEntrySelected, addr 0x579ce94, size 0x144, virtual true, abstract: false, final false
inline void PageEntrySelected(int32_t  pageEntry, int32_t  selectionIndex) ;

/// @brief Method SetSelectedGameModeShared, addr 0x579cfd8, size 0x160, virtual false, abstract: false, final false
static inline void SetSelectedGameModeShared(::StringW  gameMode) ;

/// @brief Method ShowPage, addr 0x579cb3c, size 0x1c8, virtual true, abstract: false, final false
inline void ShowPage(int32_t  selectedPage, int32_t  startIndex, int32_t  endIndex) ;

/// @brief Method Start, addr 0x579c9c8, size 0x7c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateAllButtons, addr 0x579cd04, size 0xb8, virtual false, abstract: false, final false
inline void UpdateAllButtons(int32_t  onButton) ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameModeSelectButton>> const& __cordl_internal_get_buttons() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameModeSelectButton>>& __cordl_internal_get_buttons() ;

constexpr int32_t const& __cordl_internal_get_currentButtonIndex() const;

constexpr int32_t& __cordl_internal_get_currentButtonIndex() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_gameModeText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_gameModeText() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr void __cordl_internal_set_buttons(::ArrayW<::UnityW<::GlobalNamespace::GameModeSelectButton>>  value) ;

constexpr void __cordl_internal_set_currentButtonIndex(int32_t  value) ;

constexpr void __cordl_internal_set_gameModeText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

/// @brief Method .ctor, addr 0x579d138, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameModePages>>* getStaticF_gameModeSelectorInstances() ;

static inline int32_t getStaticF_sharedSelectedIndex() ;

static inline ::System::Text::StringBuilder* getStaticF_textBuilder() ;

/// @brief Method get_entriesCount, addr 0x579c804, size 0x70, virtual true, abstract: false, final false
inline int32_t get_entriesCount() ;

/// @brief Method get_pageSize, addr 0x579c7ec, size 0x18, virtual true, abstract: false, final false
inline int32_t get_pageSize() ;

static inline void setStaticF_gameModeSelectorInstances(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameModePages>>*  value) ;

static inline void setStaticF_sharedSelectedIndex(int32_t  value) ;

static inline void setStaticF_textBuilder(::System::Text::StringBuilder*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameModePages() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameModePages", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameModePages(GameModePages && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameModePages", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameModePages(GameModePages const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1493};

/// @brief Field currentButtonIndex, offset: 0x30, size: 0x4, def value: None
 int32_t  ___currentButtonIndex;

/// [SerializeField]
/// @brief Field gameModeText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___gameModeText;

/// [SerializeField]
/// @brief Field buttons, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GameModeSelectButton>>  ___buttons;

/// @brief Field initialized, offset: 0x48, size: 0x1, def value: None
 bool  ___initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameModePages, ___currentButtonIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameModePages, ___gameModeText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameModePages, ___buttons) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameModePages, ___initialized) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameModePages) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
