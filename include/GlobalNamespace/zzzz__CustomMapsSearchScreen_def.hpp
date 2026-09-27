#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsSearchScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CustomMapsTerminalScreen_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapsSearchScreen)
namespace GlobalNamespace {
class CustomMapsGalleryView;
}
namespace GlobalNamespace {
struct CustomMapsSearchScreen__RetrieveMods_d__26;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
struct CustomMapKeyboardBinding;
}
namespace Modio::Mods {
class Mod;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomMapsSearchScreen;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapsSearchScreen*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsSearchScreen*, "", "CustomMapsSearchScreen");
// Dependencies CustomMapsTerminalScreen
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsSearchScreen
class CORDL_TYPE CustomMapsSearchScreen : public ::GlobalNamespace::CustomMapsTerminalScreen {
public:
// Declarations
using _RetrieveMods_d__26 = ::GlobalNamespace::CustomMapsSearchScreen__RetrieveMods_d__26;

/// @brief Field currentModPage, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentModPage, put=__cordl_internal_set_currentModPage)) int32_t  currentModPage;

/// @brief Field currentSearchModsRequestPage, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSearchModsRequestPage, put=__cordl_internal_set_currentSearchModsRequestPage)) int32_t  currentSearchModsRequestPage;

/// @brief Field customMapsGalleryView, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_customMapsGalleryView, put=__cordl_internal_set_customMapsGalleryView)) ::UnityW<::GlobalNamespace::CustomMapsGalleryView>  customMapsGalleryView;

/// @brief Field defaultSearchString, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultSearchString, put=__cordl_internal_set_defaultSearchString)) ::StringW  defaultSearchString;

/// @brief Field displayedMods, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayedMods, put=__cordl_internal_set_displayedMods)) ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  displayedMods;

/// @brief Field errorLoadingSearchMods, offset 0x9d, size 0x1 
 __declspec(property(get=__cordl_internal_get_errorLoadingSearchMods, put=__cordl_internal_set_errorLoadingSearchMods)) bool  errorLoadingSearchMods;

/// @brief Field errorMessage, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorMessage, put=__cordl_internal_set_errorMessage)) ::StringW  errorMessage;

/// @brief Field filteredSearchedMods, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_filteredSearchedMods, put=__cordl_internal_set_filteredSearchedMods)) ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  filteredSearchedMods;

/// @brief Field leftPageButton, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftPageButton, put=__cordl_internal_set_leftPageButton)) ::UnityW<::UnityEngine::GameObject>  leftPageButton;

/// @brief Field loadingSearchMods, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get_loadingSearchMods, put=__cordl_internal_set_loadingSearchMods)) bool  loadingSearchMods;

/// @brief Field modsPerPage, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_modsPerPage, put=__cordl_internal_set_modsPerPage)) int32_t  modsPerPage;

/// @brief Field noMapsFoundString, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_noMapsFoundString, put=__cordl_internal_set_noMapsFoundString)) ::StringW  noMapsFoundString;

/// @brief Field numModsPerRequest, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_numModsPerRequest, put=__cordl_internal_set_numModsPerRequest)) int32_t  numModsPerRequest;

/// @brief Field rightPageButton, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightPageButton, put=__cordl_internal_set_rightPageButton)) ::UnityW<::UnityEngine::GameObject>  rightPageButton;

/// @brief Field searchMessageText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_searchMessageText, put=__cordl_internal_set_searchMessageText)) ::UnityW<::TMPro::TMP_Text>  searchMessageText;

/// @brief Field searchPhrase, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_searchPhrase, put=__cordl_internal_set_searchPhrase)) ::StringW  searchPhrase;

/// @brief Field searchPhraseText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_searchPhraseText, put=__cordl_internal_set_searchPhraseText)) ::UnityW<::TMPro::TMP_Text>  searchPhraseText;

/// @brief Field searchedMods, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_searchedMods, put=__cordl_internal_set_searchedMods)) ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  searchedMods;

/// @brief Field searchingString, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_searchingString, put=__cordl_internal_set_searchingString)) ::StringW  searchingString;

/// @brief Field totalSearchMods, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalSearchMods, put=__cordl_internal_set_totalSearchMods)) int32_t  totalSearchMods;

/// @brief Method FilterSearchMods, addr 0x5a063b4, size 0x2a8, virtual false, abstract: false, final false
inline void FilterSearchMods() ;

/// @brief Method GetNumPages, addr 0x5a06694, size 0x1c, virtual false, abstract: false, final false
inline int32_t GetNumPages() ;

/// @brief Method Hide, addr 0x5a0574c, size 0x2c, virtual true, abstract: false, final false
inline void Hide() ;

/// @brief Method Initialize, addr 0x5a0584c, size 0x4, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method IsOnFirstPage, addr 0x5a0665c, size 0x10, virtual false, abstract: false, final false
inline bool IsOnFirstPage() ;

/// @brief Method IsOnLastPage, addr 0x5a0666c, size 0x28, virtual false, abstract: false, final false
inline bool IsOnLastPage() ;

static inline ::GlobalNamespace::CustomMapsSearchScreen* New_ctor() ;

/// @brief Method PressButton, addr 0x5a0587c, size 0x2c8, virtual true, abstract: false, final false
inline void PressButton(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding  pressedButton) ;

/// @brief Method RefreshScreenState, addr 0x5a05f70, size 0x444, virtual false, abstract: false, final false
inline void RefreshScreenState() ;

/// @brief Method RefreshSearchText, addr 0x5a05ba8, size 0x58, virtual false, abstract: false, final false
inline void RefreshSearchText() ;

/// [AsyncStateMachine(typeof(CustomMapsSearchScreen::<RetrieveMods>d__26))]
/// @brief Method RetrieveMods, addr 0x5a05e98, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* RetrieveMods() ;

/// @brief Method ReturnFromDetailsScreen, addr 0x5a05850, size 0x2c, virtual false, abstract: false, final false
inline void ReturnFromDetailsScreen() ;

/// @brief Method Show, addr 0x5a054c4, size 0x1ac, virtual true, abstract: false, final false
inline void Show() ;

constexpr int32_t const& __cordl_internal_get_currentModPage() const;

constexpr int32_t& __cordl_internal_get_currentModPage() ;

constexpr int32_t const& __cordl_internal_get_currentSearchModsRequestPage() const;

constexpr int32_t& __cordl_internal_get_currentSearchModsRequestPage() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsGalleryView> const& __cordl_internal_get_customMapsGalleryView() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsGalleryView>& __cordl_internal_get_customMapsGalleryView() ;

constexpr ::StringW const& __cordl_internal_get_defaultSearchString() const;

constexpr ::StringW& __cordl_internal_get_defaultSearchString() ;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* const& __cordl_internal_get_displayedMods() const;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*& __cordl_internal_get_displayedMods() ;

constexpr bool const& __cordl_internal_get_errorLoadingSearchMods() const;

constexpr bool& __cordl_internal_get_errorLoadingSearchMods() ;

constexpr ::StringW const& __cordl_internal_get_errorMessage() const;

constexpr ::StringW& __cordl_internal_get_errorMessage() ;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* const& __cordl_internal_get_filteredSearchedMods() const;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*& __cordl_internal_get_filteredSearchedMods() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_leftPageButton() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_leftPageButton() ;

constexpr bool const& __cordl_internal_get_loadingSearchMods() const;

constexpr bool& __cordl_internal_get_loadingSearchMods() ;

constexpr int32_t const& __cordl_internal_get_modsPerPage() const;

constexpr int32_t& __cordl_internal_get_modsPerPage() ;

constexpr ::StringW const& __cordl_internal_get_noMapsFoundString() const;

constexpr ::StringW& __cordl_internal_get_noMapsFoundString() ;

constexpr int32_t const& __cordl_internal_get_numModsPerRequest() const;

constexpr int32_t& __cordl_internal_get_numModsPerRequest() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rightPageButton() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rightPageButton() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_searchMessageText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_searchMessageText() ;

constexpr ::StringW const& __cordl_internal_get_searchPhrase() const;

constexpr ::StringW& __cordl_internal_get_searchPhrase() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_searchPhraseText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_searchPhraseText() ;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* const& __cordl_internal_get_searchedMods() const;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*& __cordl_internal_get_searchedMods() ;

constexpr ::StringW const& __cordl_internal_get_searchingString() const;

constexpr ::StringW& __cordl_internal_get_searchingString() ;

constexpr int32_t const& __cordl_internal_get_totalSearchMods() const;

constexpr int32_t& __cordl_internal_get_totalSearchMods() ;

constexpr void __cordl_internal_set_currentModPage(int32_t  value) ;

constexpr void __cordl_internal_set_currentSearchModsRequestPage(int32_t  value) ;

constexpr void __cordl_internal_set_customMapsGalleryView(::UnityW<::GlobalNamespace::CustomMapsGalleryView>  value) ;

constexpr void __cordl_internal_set_defaultSearchString(::StringW  value) ;

constexpr void __cordl_internal_set_displayedMods(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value) ;

constexpr void __cordl_internal_set_errorLoadingSearchMods(bool  value) ;

constexpr void __cordl_internal_set_errorMessage(::StringW  value) ;

constexpr void __cordl_internal_set_filteredSearchedMods(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value) ;

constexpr void __cordl_internal_set_leftPageButton(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_loadingSearchMods(bool  value) ;

constexpr void __cordl_internal_set_modsPerPage(int32_t  value) ;

constexpr void __cordl_internal_set_noMapsFoundString(::StringW  value) ;

constexpr void __cordl_internal_set_numModsPerRequest(int32_t  value) ;

constexpr void __cordl_internal_set_rightPageButton(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_searchMessageText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_searchPhrase(::StringW  value) ;

constexpr void __cordl_internal_set_searchPhraseText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_searchedMods(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value) ;

constexpr void __cordl_internal_set_searchingString(::StringW  value) ;

constexpr void __cordl_internal_set_totalSearchMods(int32_t  value) ;

/// @brief Method .ctor, addr 0x5a066b0, size 0x194, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsSearchScreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsSearchScreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsSearchScreen(CustomMapsSearchScreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsSearchScreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsSearchScreen(CustomMapsSearchScreen const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2761};

/// [SerializeField]
/// @brief Field searchPhraseText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___searchPhraseText;

/// [SerializeField]
/// @brief Field searchMessageText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___searchMessageText;

/// [SerializeField]
/// @brief Field customMapsGalleryView, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsGalleryView>  ___customMapsGalleryView;

/// [SerializeField]
/// @brief Field leftPageButton, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___leftPageButton;

/// [SerializeField]
/// @brief Field rightPageButton, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rightPageButton;

/// [SerializeField]
/// @brief Field defaultSearchString, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___defaultSearchString;

/// [SerializeField]
/// @brief Field noMapsFoundString, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___noMapsFoundString;

/// [SerializeField]
/// @brief Field searchingString, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___searchingString;

/// [SerializeField]
/// @brief Field numModsPerRequest, offset: 0x70, size: 0x4, def value: None
 int32_t  ___numModsPerRequest;

/// [SerializeField]
/// @brief Field modsPerPage, offset: 0x74, size: 0x4, def value: None
 int32_t  ___modsPerPage;

/// @brief Field searchPhrase, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___searchPhrase;

/// @brief Field searchedMods, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  ___searchedMods;

/// @brief Field filteredSearchedMods, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  ___filteredSearchedMods;

/// @brief Field displayedMods, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  ___displayedMods;

/// @brief Field currentSearchModsRequestPage, offset: 0x98, size: 0x4, def value: None
 int32_t  ___currentSearchModsRequestPage;

/// @brief Field loadingSearchMods, offset: 0x9c, size: 0x1, def value: None
 bool  ___loadingSearchMods;

/// @brief Field errorLoadingSearchMods, offset: 0x9d, size: 0x1, def value: None
 bool  ___errorLoadingSearchMods;

/// @brief Field totalSearchMods, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___totalSearchMods;

/// @brief Field currentModPage, offset: 0xa4, size: 0x4, def value: None
 int32_t  ___currentModPage;

/// @brief Field errorMessage, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ___errorMessage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsSearchScreen, ___searchPhraseText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsSearchScreen, ___searchMessageText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsSearchScreen, ___customMapsGalleryView) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsSearchScreen, ___leftPageButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsSearchScreen, ___rightPageButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsSearchScreen, ___defaultSearchString) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsSearchScreen, ___noMapsFoundString) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsSearchScreen, ___searchingString) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsSearchScreen, ___numModsPerRequest) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsSearchScreen, ___modsPerPage) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsSearchScreen, ___searchPhrase) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsSearchScreen, ___searchedMods) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsSearchScreen, ___filteredSearchedMods) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsSearchScreen, ___displayedMods) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsSearchScreen, ___currentSearchModsRequestPage) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsSearchScreen, ___loadingSearchMods) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsSearchScreen, ___errorLoadingSearchMods) == 0x9d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsSearchScreen, ___totalSearchMods) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsSearchScreen, ___currentModPage) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsSearchScreen, ___errorMessage) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsSearchScreen) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
