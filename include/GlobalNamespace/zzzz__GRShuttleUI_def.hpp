#pragma once
// IWYU pragma private; include "GlobalNamespace/GRShuttleUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GRShuttleUI)
namespace GlobalNamespace {
class GRShuttle;
}
namespace GlobalNamespace {
class GhostReactor;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GRShuttleUI;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRShuttleUI*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRShuttleUI*, "", "GRShuttleUI");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRShuttleUI
class CORDL_TYPE GRShuttleUI : public ::System::Object {
public:
// Declarations
/// @brief Field destFloorText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_destFloorText, put=__cordl_internal_set_destFloorText)) ::UnityW<::TMPro::TMP_Text>  destFloorText;

/// @brief Field infoText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_infoText, put=__cordl_internal_set_infoText)) ::UnityW<::TMPro::TMP_Text>  infoText;

/// @brief Field invalidScreen, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_invalidScreen, put=__cordl_internal_set_invalidScreen)) ::UnityW<::UnityEngine::GameObject>  invalidScreen;

/// @brief Field player, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::GlobalNamespace::NetPlayer*  player;

/// @brief Field playerName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerName, put=__cordl_internal_set_playerName)) ::UnityW<::TMPro::TMP_Text>  playerName;

/// @brief Field playerTitle, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerTitle, put=__cordl_internal_set_playerTitle)) ::UnityW<::TMPro::TMP_Text>  playerTitle;

/// @brief Field reactor, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactor, put=__cordl_internal_set_reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  reactor;

/// @brief Field shuttle, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_shuttle, put=__cordl_internal_set_shuttle)) ::UnityW<::GlobalNamespace::GRShuttle>  shuttle;

/// @brief Field validScreen, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_validScreen, put=__cordl_internal_set_validScreen)) ::UnityW<::UnityEngine::GameObject>  validScreen;

static inline ::GlobalNamespace::GRShuttleUI* New_ctor() ;

/// @brief Method RefreshUI, addr 0x58b4914, size 0x308, virtual false, abstract: false, final false
inline void RefreshUI() ;

/// @brief Method Setup, addr 0x58b48dc, size 0x38, virtual false, abstract: false, final false
inline void Setup(::GlobalNamespace::GhostReactor*  reactor, ::GlobalNamespace::NetPlayer*  player) ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_destFloorText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_destFloorText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_infoText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_infoText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_invalidScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_invalidScreen() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_player() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_player() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_playerName() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_playerName() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_playerTitle() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_playerTitle() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get_reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get_reactor() ;

constexpr ::UnityW<::GlobalNamespace::GRShuttle> const& __cordl_internal_get_shuttle() const;

constexpr ::UnityW<::GlobalNamespace::GRShuttle>& __cordl_internal_get_shuttle() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_validScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_validScreen() ;

constexpr void __cordl_internal_set_destFloorText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_infoText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_invalidScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_player(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_playerName(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_playerTitle(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

constexpr void __cordl_internal_set_shuttle(::UnityW<::GlobalNamespace::GRShuttle>  value) ;

constexpr void __cordl_internal_set_validScreen(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x58b4de4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRShuttleUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRShuttleUI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRShuttleUI(GRShuttleUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRShuttleUI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRShuttleUI(GRShuttleUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2042};

/// @brief Field playerName, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___playerName;

/// @brief Field playerTitle, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___playerTitle;

/// @brief Field destFloorText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___destFloorText;

/// @brief Field infoText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___infoText;

/// @brief Field validScreen, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___validScreen;

/// @brief Field invalidScreen, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___invalidScreen;

/// @brief Field shuttle, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRShuttle>  ___shuttle;

/// @brief Field player, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___player;

/// @brief Field reactor, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ___reactor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRShuttleUI, ___playerName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttleUI, ___playerTitle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttleUI, ___destFloorText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttleUI, ___infoText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttleUI, ___validScreen) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttleUI, ___invalidScreen) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttleUI, ___shuttle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttleUI, ___player) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShuttleUI, ___reactor) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRShuttleUI) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
