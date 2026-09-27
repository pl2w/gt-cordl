#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_EmailSuccess.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(KIDUI_EmailSuccess)
namespace GlobalNamespace {
class KIDUI_MainScreen;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDUI_EmailSuccess;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDUI_EmailSuccess*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_EmailSuccess*, "", "KIDUI_EmailSuccess");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUI_EmailSuccess
class CORDL_TYPE KIDUI_EmailSuccess : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _emailTxt, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__emailTxt, put=__cordl_internal_set__emailTxt)) ::UnityW<::TMPro::TMP_Text>  _emailTxt;

/// @brief Field _mainScreen, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__mainScreen, put=__cordl_internal_set__mainScreen)) ::UnityW<::GlobalNamespace::KIDUI_MainScreen>  _mainScreen;

static inline ::GlobalNamespace::KIDUI_EmailSuccess* New_ctor() ;

/// @brief Method OnClose, addr 0x5a56414, size 0x38, virtual false, abstract: false, final false
inline void OnClose() ;

/// @brief Method OnCloseGame, addr 0x5a564ec, size 0x50, virtual false, abstract: false, final false
inline void OnCloseGame() ;

/// @brief Method ShowSuccessScreen, addr 0x5a52ef8, size 0x248, virtual false, abstract: false, final false
inline void ShowSuccessScreen(::StringW  email) ;

/// @brief Method ShowSuccessScreenAppeal, addr 0x5a4e9cc, size 0x248, virtual false, abstract: false, final false
inline void ShowSuccessScreenAppeal(::StringW  email) ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__emailTxt() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__emailTxt() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen> const& __cordl_internal_get__mainScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen>& __cordl_internal_get__mainScreen() ;

constexpr void __cordl_internal_set__emailTxt(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__mainScreen(::UnityW<::GlobalNamespace::KIDUI_MainScreen>  value) ;

/// @brief Method .ctor, addr 0x5a5653c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_EmailSuccess() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_EmailSuccess", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUI_EmailSuccess(KIDUI_EmailSuccess && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_EmailSuccess", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUI_EmailSuccess(KIDUI_EmailSuccess const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3026};

/// [SerializeField]
/// @brief Field _emailTxt, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____emailTxt;

/// [SerializeField]
/// @brief Field _mainScreen, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_MainScreen>  ____mainScreen;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_EmailSuccess, ____emailTxt) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_EmailSuccess, ____mainScreen) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_EmailSuccess) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
