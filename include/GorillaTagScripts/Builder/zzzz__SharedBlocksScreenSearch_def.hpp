#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/SharedBlocksScreenSearch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksScreen_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SharedBlocksScreenSearch)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace System::Text {
class StringBuilder;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class SharedBlocksScreenSearch;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksScreenSearch*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksScreenSearch*, "GorillaTagScripts.Builder", "SharedBlocksScreenSearch");
// Dependencies GorillaTagScripts.Builder.SharedBlocksScreen
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksScreenSearch
class CORDL_TYPE SharedBlocksScreenSearch : public ::GorillaTagScripts::Builder::SharedBlocksScreen {
public:
// Declarations
/// @brief Field currentMapCode, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentMapCode, put=__cordl_internal_set_currentMapCode)) ::StringW  currentMapCode;

/// @brief Field inputText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputText, put=__cordl_internal_set_inputText)) ::UnityW<::TMPro::TMP_Text>  inputText;

/// @brief Field loadedMap, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadedMap, put=__cordl_internal_set_loadedMap)) ::UnityW<::TMPro::TMP_Text>  loadedMap;

/// @brief Field myScanList, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_myScanList, put=__cordl_internal_set_myScanList)) ::UnityW<::TMPro::TMP_Text>  myScanList;

/// @brief Field playerCountText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCountText, put=__cordl_internal_set_playerCountText)) ::UnityW<::TMPro::TMP_Text>  playerCountText;

/// @brief Field playersInLobbyWarning, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_playersInLobbyWarning, put=__cordl_internal_set_playersInLobbyWarning)) ::UnityW<::TMPro::TMP_Text>  playersInLobbyWarning;

/// @brief Field recentList, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_recentList, put=__cordl_internal_set_recentList)) ::UnityW<::TMPro::TMP_Text>  recentList;

/// @brief Field savedMapCode, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_savedMapCode, put=__cordl_internal_set_savedMapCode)) ::StringW  savedMapCode;

/// @brief Field sb, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_sb, put=__cordl_internal_set_sb)) ::System::Text::StringBuilder*  sb;

/// @brief Field statusText, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_statusText, put=__cordl_internal_set_statusText)) ::UnityW<::TMPro::TMP_Text>  statusText;

/// @brief Field updating, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_updating, put=__cordl_internal_set_updating)) bool  updating;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method DrawScreen, addr 0x5c41608, size 0x664, virtual false, abstract: false, final false
inline void DrawScreen() ;

/// @brief Method Hide, addr 0x5c41f2c, size 0x210, virtual true, abstract: false, final false
inline void Hide() ;

static inline ::GorillaTagScripts::Builder::SharedBlocksScreenSearch* New_ctor() ;

/// @brief Method OnDeletePressed, addr 0x5c41138, size 0x60, virtual true, abstract: false, final false
inline void OnDeletePressed() ;

/// @brief Method OnDisable, addr 0x5c4265c, size 0x104, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5c42548, size 0x110, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLetterPressed, addr 0x5c41394, size 0x5c, virtual true, abstract: false, final false
inline void OnLetterPressed(::StringW  letter) ;

/// @brief Method OnMapCleared, addr 0x5c4213c, size 0x100, virtual false, abstract: false, final false
inline void OnMapCleared() ;

/// @brief Method OnMapLoaded, addr 0x5c41cf8, size 0x234, virtual false, abstract: false, final false
inline void OnMapLoaded(::StringW  mapID) ;

/// @brief Method OnNumberPressed, addr 0x5c41320, size 0x74, virtual true, abstract: false, final false
inline void OnNumberPressed(int32_t  number) ;

/// @brief Method OnSelectPressed, addr 0x5c40df4, size 0x1f4, virtual true, abstract: false, final false
inline void OnSelectPressed() ;

/// @brief Method PlayersChangedEvent, addr 0x5c42658, size 0x4, virtual false, abstract: false, final false
inline void PlayersChangedEvent() ;

/// @brief Method RefreshPlayerCounter, addr 0x5c41c6c, size 0x8c, virtual false, abstract: false, final false
inline void RefreshPlayerCounter() ;

/// @brief Method SetInputTextEnabled, addr 0x5c42274, size 0x4c, virtual false, abstract: false, final false
inline void SetInputTextEnabled(bool  enabled) ;

/// @brief Method SetMapCode, addr 0x5c4223c, size 0x38, virtual false, abstract: false, final false
inline void SetMapCode(::StringW  mapCode) ;

/// @brief Method Show, addr 0x5c413f0, size 0x218, virtual true, abstract: false, final false
inline void Show() ;

/// @brief Method SliceUpdate, addr 0x5c42544, size 0x4, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method UpdateInput, addr 0x5c41198, size 0x188, virtual false, abstract: false, final false
inline void UpdateInput() ;

constexpr ::StringW const& __cordl_internal_get_currentMapCode() const;

constexpr ::StringW& __cordl_internal_get_currentMapCode() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_inputText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_inputText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_loadedMap() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_loadedMap() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_myScanList() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_myScanList() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_playerCountText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_playerCountText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_playersInLobbyWarning() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_playersInLobbyWarning() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_recentList() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_recentList() ;

constexpr ::StringW const& __cordl_internal_get_savedMapCode() const;

constexpr ::StringW& __cordl_internal_get_savedMapCode() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_sb() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_sb() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_statusText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_statusText() ;

constexpr bool const& __cordl_internal_get_updating() const;

constexpr bool& __cordl_internal_get_updating() ;

constexpr void __cordl_internal_set_currentMapCode(::StringW  value) ;

constexpr void __cordl_internal_set_inputText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_loadedMap(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_myScanList(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_playerCountText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_playersInLobbyWarning(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_recentList(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_savedMapCode(::StringW  value) ;

constexpr void __cordl_internal_set_sb(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_statusText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_updating(bool  value) ;

/// @brief Method .ctor, addr 0x5c42760, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksScreenSearch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksScreenSearch", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksScreenSearch(SharedBlocksScreenSearch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksScreenSearch", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksScreenSearch(SharedBlocksScreenSearch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4215};

/// [SerializeField]
/// @brief Field loadedMap, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___loadedMap;

/// [SerializeField]
/// @brief Field inputText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___inputText;

/// [SerializeField]
/// @brief Field statusText, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___statusText;

/// [SerializeField]
/// @brief Field recentList, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___recentList;

/// [SerializeField]
/// @brief Field myScanList, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___myScanList;

/// [SerializeField]
/// @brief Field playerCountText, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___playerCountText;

/// [SerializeField]
/// @brief Field playersInLobbyWarning, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___playersInLobbyWarning;

/// @brief Field currentMapCode, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___currentMapCode;

/// @brief Field savedMapCode, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___savedMapCode;

/// @brief Field sb, offset: 0x78, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___sb;

/// @brief Field updating, offset: 0x80, size: 0x1, def value: None
 bool  ___updating;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksScreenSearch, ___loadedMap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksScreenSearch, ___inputText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksScreenSearch, ___statusText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksScreenSearch, ___recentList) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksScreenSearch, ___myScanList) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksScreenSearch, ___playerCountText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksScreenSearch, ___playersInLobbyWarning) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksScreenSearch, ___currentMapCode) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksScreenSearch, ___savedMapCode) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksScreenSearch, ___sb) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksScreenSearch, ___updating) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksScreenSearch) == 0x88, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
