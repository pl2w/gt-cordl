#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsAccessScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CustomMapsTerminalScreen_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CustomMapsAccessScreen)
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomMapsAccessScreen;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapsAccessScreen*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsAccessScreen*, "", "CustomMapsAccessScreen");
// Dependencies CustomMapsTerminalScreen
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsAccessScreen
class CORDL_TYPE CustomMapsAccessScreen : public ::GlobalNamespace::CustomMapsTerminalScreen {
public:
// Declarations
/// @brief Field defaultText, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultText, put=__cordl_internal_set_defaultText)) ::StringW  defaultText;

/// @brief Field detailsScreenText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_detailsScreenText, put=__cordl_internal_set_detailsScreenText)) ::StringW  detailsScreenText;

/// @brief Field displayedText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayedText, put=__cordl_internal_set_displayedText)) ::StringW  displayedText;

/// @brief Field errorText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorText, put=__cordl_internal_set_errorText)) ::UnityW<::TMPro::TMP_Text>  errorText;

/// @brief Field isControlScreen, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_isControlScreen, put=__cordl_internal_set_isControlScreen)) bool  isControlScreen;

/// @brief Field terminalControlPromptText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_terminalControlPromptText, put=__cordl_internal_set_terminalControlPromptText)) ::UnityW<::TMPro::TMP_Text>  terminalControlPromptText;

/// @brief Field useNametags, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_useNametags, put=__cordl_internal_set_useNametags)) bool  useNametags;

/// @brief Method DisplayError, addr 0x59f54d8, size 0x78, virtual false, abstract: false, final false
inline void DisplayError(::StringW  errorMessage) ;

/// @brief Method Hide, addr 0x59f5410, size 0x5c, virtual true, abstract: false, final false
inline void Hide() ;

/// @brief Method Initialize, addr 0x59f5358, size 0x4, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method LateUpdate, addr 0x59f4e90, size 0x198, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::CustomMapsAccessScreen* New_ctor() ;

/// @brief Method Reset, addr 0x59f546c, size 0x60, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetDetailsScreenForDriver, addr 0x59f54cc, size 0xc, virtual false, abstract: false, final false
inline void SetDetailsScreenForDriver() ;

/// @brief Method SetDriverName, addr 0x59f5028, size 0x330, virtual false, abstract: false, final false
inline void SetDriverName() ;

/// @brief Method Show, addr 0x59f535c, size 0xb4, virtual true, abstract: false, final false
inline void Show() ;

constexpr ::StringW const& __cordl_internal_get_defaultText() const;

constexpr ::StringW& __cordl_internal_get_defaultText() ;

constexpr ::StringW const& __cordl_internal_get_detailsScreenText() const;

constexpr ::StringW& __cordl_internal_get_detailsScreenText() ;

constexpr ::StringW const& __cordl_internal_get_displayedText() const;

constexpr ::StringW& __cordl_internal_get_displayedText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_errorText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_errorText() ;

constexpr bool const& __cordl_internal_get_isControlScreen() const;

constexpr bool& __cordl_internal_get_isControlScreen() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_terminalControlPromptText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_terminalControlPromptText() ;

constexpr bool const& __cordl_internal_get_useNametags() const;

constexpr bool& __cordl_internal_get_useNametags() ;

constexpr void __cordl_internal_set_defaultText(::StringW  value) ;

constexpr void __cordl_internal_set_detailsScreenText(::StringW  value) ;

constexpr void __cordl_internal_set_displayedText(::StringW  value) ;

constexpr void __cordl_internal_set_errorText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_isControlScreen(bool  value) ;

constexpr void __cordl_internal_set_terminalControlPromptText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_useNametags(bool  value) ;

/// @brief Method .ctor, addr 0x59f5550, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsAccessScreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsAccessScreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsAccessScreen(CustomMapsAccessScreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsAccessScreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsAccessScreen(CustomMapsAccessScreen const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2735};

/// [SerializeField]
/// @brief Field errorText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___errorText;

/// [SerializeField]
/// @brief Field terminalControlPromptText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___terminalControlPromptText;

/// [SerializeField]
/// @brief Field isControlScreen, offset: 0x40, size: 0x1, def value: None
 bool  ___isControlScreen;

/// [SerializeField]
/// @brief Field defaultText, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___defaultText;

/// @brief Field detailsScreenText, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___detailsScreenText;

/// @brief Field displayedText, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___displayedText;

/// @brief Field useNametags, offset: 0x60, size: 0x1, def value: None
 bool  ___useNametags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsAccessScreen, ___errorText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAccessScreen, ___terminalControlPromptText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAccessScreen, ___isControlScreen) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAccessScreen, ___defaultText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAccessScreen, ___detailsScreenText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAccessScreen, ___displayedText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAccessScreen, ___useNametags) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsAccessScreen) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
