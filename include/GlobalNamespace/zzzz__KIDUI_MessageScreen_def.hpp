#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_MessageScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(KIDUI_MessageScreen)
namespace GlobalNamespace {
class KIDUI_MainScreen;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDUI_MessageScreen;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDUI_MessageScreen*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_MessageScreen*, "", "KIDUI_MessageScreen");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUI_MessageScreen
class CORDL_TYPE KIDUI_MessageScreen : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _errorTxt, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__errorTxt, put=__cordl_internal_set__errorTxt)) ::UnityW<::TMPro::TMP_Text>  _errorTxt;

/// @brief Field _mainScreen, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__mainScreen, put=__cordl_internal_set__mainScreen)) ::UnityW<::GlobalNamespace::KIDUI_MainScreen>  _mainScreen;

static inline ::GlobalNamespace::KIDUI_MessageScreen* New_ctor() ;

/// @brief Method OnClose, addr 0x5a5ac50, size 0x38, virtual false, abstract: false, final false
inline void OnClose() ;

/// @brief Method OnDisable, addr 0x5a5ac88, size 0x28, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method Show, addr 0x5a5abe4, size 0x6c, virtual false, abstract: false, final false
inline void Show(::StringW  errorMessage) ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__errorTxt() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__errorTxt() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen> const& __cordl_internal_get__mainScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen>& __cordl_internal_get__mainScreen() ;

constexpr void __cordl_internal_set__errorTxt(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__mainScreen(::UnityW<::GlobalNamespace::KIDUI_MainScreen>  value) ;

/// @brief Method .ctor, addr 0x5a5acb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_MessageScreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_MessageScreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUI_MessageScreen(KIDUI_MessageScreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_MessageScreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUI_MessageScreen(KIDUI_MessageScreen const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3035};

/// [SerializeField]
/// @brief Field _mainScreen, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_MainScreen>  ____mainScreen;

/// [SerializeField]
/// @brief Field _errorTxt, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____errorTxt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_MessageScreen, ____mainScreen) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MessageScreen, ____errorTxt) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_MessageScreen) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
