#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/SharedBlocksScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksTerminal_ScreenType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SharedBlocksScreen)
namespace GorillaTagScripts::Builder {
class SharedBlocksTerminal;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class SharedBlocksScreen;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksScreen*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksScreen*, "GorillaTagScripts.Builder", "SharedBlocksScreen");
// Dependencies GorillaTagScripts.Builder.SharedBlocksTerminal::ScreenType, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksScreen
class CORDL_TYPE SharedBlocksScreen : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field screenType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_screenType, put=__cordl_internal_set_screenType)) ::GlobalNamespace::SharedBlocksTerminal_ScreenType  screenType;

/// @brief Field terminal, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_terminal, put=__cordl_internal_set_terminal)) ::UnityW<::GorillaTagScripts::Builder::SharedBlocksTerminal>  terminal;

/// @brief Method Hide, addr 0x5c403bc, size 0x4c, virtual true, abstract: false, final false
inline void Hide() ;

static inline ::GorillaTagScripts::Builder::SharedBlocksScreen* New_ctor() ;

/// @brief Method OnDeletePressed, addr 0x5c40364, size 0x4, virtual true, abstract: false, final false
inline void OnDeletePressed() ;

/// @brief Method OnDownPressed, addr 0x5c4035c, size 0x4, virtual true, abstract: false, final false
inline void OnDownPressed() ;

/// @brief Method OnLetterPressed, addr 0x5c4036c, size 0x4, virtual true, abstract: false, final false
inline void OnLetterPressed(::StringW  letter) ;

/// @brief Method OnNumberPressed, addr 0x5c40368, size 0x4, virtual true, abstract: false, final false
inline void OnNumberPressed(int32_t  number) ;

/// @brief Method OnSelectPressed, addr 0x5c40360, size 0x4, virtual true, abstract: false, final false
inline void OnSelectPressed() ;

/// @brief Method OnUpPressed, addr 0x5c40358, size 0x4, virtual true, abstract: false, final false
inline void OnUpPressed() ;

/// @brief Method Show, addr 0x5c40370, size 0x4c, virtual true, abstract: false, final false
inline void Show() ;

constexpr ::GlobalNamespace::SharedBlocksTerminal_ScreenType const& __cordl_internal_get_screenType() const;

constexpr ::GlobalNamespace::SharedBlocksTerminal_ScreenType& __cordl_internal_get_screenType() ;

constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksTerminal> const& __cordl_internal_get_terminal() const;

constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksTerminal>& __cordl_internal_get_terminal() ;

constexpr void __cordl_internal_set_screenType(::GlobalNamespace::SharedBlocksTerminal_ScreenType  value) ;

constexpr void __cordl_internal_set_terminal(::UnityW<::GorillaTagScripts::Builder::SharedBlocksTerminal>  value) ;

/// @brief Method .ctor, addr 0x5c40408, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksScreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksScreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksScreen(SharedBlocksScreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksScreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksScreen(SharedBlocksScreen const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4213};

/// @brief Field screenType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::SharedBlocksTerminal_ScreenType  ___screenType;

/// @brief Field terminal, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Builder::SharedBlocksTerminal>  ___terminal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksScreen, ___screenType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksScreen, ___terminal) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksScreen) == 0x30, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
