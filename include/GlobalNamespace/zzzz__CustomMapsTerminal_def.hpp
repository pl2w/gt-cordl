#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsTerminal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CustomMapsTerminal_ScreenType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapsTerminal)
namespace GlobalNamespace {
class CustomMapsAccessScreen;
}
namespace GlobalNamespace {
class CustomMapsDetailsScreen;
}
namespace GlobalNamespace {
class CustomMapsDisplayScreen;
}
namespace GlobalNamespace {
class CustomMapsListScreen;
}
namespace GlobalNamespace {
class CustomMapsSearchScreen;
}
namespace GlobalNamespace {
class CustomMapsTerminalControlButton;
}
namespace GlobalNamespace {
struct CustomMapsTerminal_ScreenType;
}
namespace GlobalNamespace {
class VirtualStumpSerializer;
}
namespace Modio::Mods {
class Mod;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomMapsTerminal;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapsTerminal*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsTerminal*, "", "CustomMapsTerminal");
// Dependencies CustomMapsTerminal::ScreenType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsTerminal
class CORDL_TYPE CustomMapsTerminal : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ScreenType = ::GlobalNamespace::CustomMapsTerminal_ScreenType;

/// @brief Field cachedCurrentScreen, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_cachedCurrentScreen, put=setStaticF_cachedCurrentScreen)) ::GlobalNamespace::CustomMapsTerminal_ScreenType  cachedCurrentScreen;

/// @brief Field cachedLocalPlayerID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_cachedLocalPlayerID, put=setStaticF_cachedLocalPlayerID)) int32_t  cachedLocalPlayerID;

/// @brief Field cachedModDetailsID, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cachedModDetailsID, put=setStaticF_cachedModDetailsID)) int64_t  cachedModDetailsID;

/// @brief Field controlAccessScreen, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_controlAccessScreen, put=__cordl_internal_set_controlAccessScreen)) ::UnityW<::GlobalNamespace::CustomMapsAccessScreen>  controlAccessScreen;

/// @brief Field detailsAccessScreen, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_detailsAccessScreen, put=__cordl_internal_set_detailsAccessScreen)) ::UnityW<::GlobalNamespace::CustomMapsAccessScreen>  detailsAccessScreen;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::CustomMapsTerminal>  instance;

/// @brief Field localCurrentScreen, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_localCurrentScreen, put=setStaticF_localCurrentScreen)) ::GlobalNamespace::CustomMapsTerminal_ScreenType  localCurrentScreen;

/// @brief Field localDriverID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_localDriverID, put=setStaticF_localDriverID)) int32_t  localDriverID;

/// @brief Field localModDetailsID, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_localModDetailsID, put=setStaticF_localModDetailsID)) int64_t  localModDetailsID;

/// @brief Field mapTerminalNetworkObject, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapTerminalNetworkObject, put=__cordl_internal_set_mapTerminalNetworkObject)) ::UnityW<::GlobalNamespace::VirtualStumpSerializer>  mapTerminalNetworkObject;

/// @brief Field modDetailsScreen, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_modDetailsScreen, put=__cordl_internal_set_modDetailsScreen)) ::UnityW<::GlobalNamespace::CustomMapsDetailsScreen>  modDetailsScreen;

/// @brief Field modDisplayScreen, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_modDisplayScreen, put=__cordl_internal_set_modDisplayScreen)) ::UnityW<::GlobalNamespace::CustomMapsDisplayScreen>  modDisplayScreen;

/// @brief Field modListScreen, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_modListScreen, put=__cordl_internal_set_modListScreen)) ::UnityW<::GlobalNamespace::CustomMapsListScreen>  modListScreen;

/// @brief Field modSearchScreen, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_modSearchScreen, put=__cordl_internal_set_modSearchScreen)) ::UnityW<::GlobalNamespace::CustomMapsSearchScreen>  modSearchScreen;

/// @brief Field previousScreen, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_previousScreen, put=setStaticF_previousScreen)) ::GlobalNamespace::CustomMapsTerminal_ScreenType  previousScreen;

/// @brief Field terminalControlButton, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_terminalControlButton, put=__cordl_internal_set_terminalControlButton)) ::UnityW<::GlobalNamespace::CustomMapsTerminalControlButton>  terminalControlButton;

/// @brief Field terminalControllerLabelText, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_terminalControllerLabelText, put=__cordl_internal_set_terminalControllerLabelText)) ::UnityW<::TMPro::TMP_Text>  terminalControllerLabelText;

/// @brief Field terminalControllerText, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_terminalControllerText, put=__cordl_internal_set_terminalControllerText)) ::UnityW<::TMPro::TMP_Text>  terminalControllerText;

/// @brief Method Awake, addr 0x5a06f04, size 0x7c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetDriverID, addr 0x5a09848, size 0x58, virtual false, abstract: false, final false
static inline int32_t GetDriverID() ;

/// @brief Method GetDriverNickname, addr 0x5a098a0, size 0xb4, virtual false, abstract: false, final false
static inline ::StringW GetDriverNickname() ;

/// @brief Method HandleTerminalControlButtonPressed, addr 0x5a09250, size 0x17c, virtual false, abstract: false, final false
inline void HandleTerminalControlButtonPressed() ;

/// @brief Method HandleTerminalControlStatusChangeRequest, addr 0x5a07cac, size 0xc0, virtual false, abstract: false, final false
static inline void HandleTerminalControlStatusChangeRequest(bool  lockedStatus, int32_t  playerID) ;

/// @brief Method HideTerminalControlScreens, addr 0x5a080e4, size 0x210, virtual false, abstract: false, final false
static inline void HideTerminalControlScreens() ;

/// @brief Method IsLocked, addr 0x5a097e8, size 0x60, virtual false, abstract: false, final false
static inline bool IsLocked() ;

static inline ::GlobalNamespace::CustomMapsTerminal* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5a07234, size 0x228, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnJoinedRoom, addr 0x5a0978c, size 0x5c, virtual false, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnModIOLoggedIn, addr 0x5a09154, size 0x4, virtual false, abstract: false, final false
inline void OnModIOLoggedIn() ;

/// @brief Method OnModIOLoggedOut, addr 0x5a09158, size 0xf8, virtual false, abstract: false, final false
inline void OnModIOLoggedOut() ;

/// @brief Method OnReturnedToSinglePlayer, addr 0x5a096dc, size 0xb0, virtual false, abstract: false, final false
inline void OnReturnedToSinglePlayer() ;

/// @brief Method RefreshDriverNickName, addr 0x5a08708, size 0x49c, virtual false, abstract: false, final false
static inline void RefreshDriverNickName() ;

/// @brief Method RequestDriverNickNameRefresh, addr 0x5a0951c, size 0xac, virtual false, abstract: false, final false
static inline void RequestDriverNickNameRefresh() ;

/// @brief Method ResetTerminalControl, addr 0x5a07a20, size 0x78, virtual false, abstract: false, final false
static inline void ResetTerminalControl() ;

/// @brief Method ReturnFromDetailsScreen, addr 0x5a074ec, size 0x2f0, virtual false, abstract: false, final false
static inline void ReturnFromDetailsScreen() ;

/// @brief Method ReturnFromSearchScreen, addr 0x5a05c00, size 0x298, virtual false, abstract: false, final false
static inline void ReturnFromSearchScreen() ;

/// @brief Method SendTerminalStatus, addr 0x5a0745c, size 0x90, virtual false, abstract: false, final false
static inline void SendTerminalStatus() ;

/// @brief Method SetTerminalControlStatus, addr 0x5a07d6c, size 0x378, virtual false, abstract: false, final false
static inline void SetTerminalControlStatus(bool  isLocked, int32_t  driverID, bool  sendRPC) ;

/// @brief Method ShowDetailsScreen, addr 0x5a03cd4, size 0x190, virtual false, abstract: false, final false
static inline void ShowDetailsScreen(::Modio::Mods::Mod*  mod) ;

/// @brief Method ShowSearchScreen, addr 0x5a077dc, size 0x158, virtual false, abstract: false, final false
static inline void ShowSearchScreen() ;

/// @brief Method ShowTerminalControlScreen, addr 0x5a07a98, size 0x214, virtual false, abstract: false, final false
static inline void ShowTerminalControlScreen() ;

/// @brief Method Start, addr 0x5a06f80, size 0x2b4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateControlScreenForDriver, addr 0x5a08ba4, size 0x3b0, virtual false, abstract: false, final false
inline void UpdateControlScreenForDriver() ;

/// @brief Method UpdateFromDriver, addr 0x5a084b0, size 0x258, virtual false, abstract: false, final false
static inline void UpdateFromDriver(int32_t  currentScreen, int64_t  modDetailsID, int32_t  driverID) ;

/// @brief Method ValidateLocalStatus, addr 0x5a08f54, size 0x200, virtual false, abstract: false, final false
inline void ValidateLocalStatus() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsAccessScreen> const& __cordl_internal_get_controlAccessScreen() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsAccessScreen>& __cordl_internal_get_controlAccessScreen() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsAccessScreen> const& __cordl_internal_get_detailsAccessScreen() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsAccessScreen>& __cordl_internal_get_detailsAccessScreen() ;

constexpr ::UnityW<::GlobalNamespace::VirtualStumpSerializer> const& __cordl_internal_get_mapTerminalNetworkObject() const;

constexpr ::UnityW<::GlobalNamespace::VirtualStumpSerializer>& __cordl_internal_get_mapTerminalNetworkObject() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsDetailsScreen> const& __cordl_internal_get_modDetailsScreen() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsDetailsScreen>& __cordl_internal_get_modDetailsScreen() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsDisplayScreen> const& __cordl_internal_get_modDisplayScreen() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsDisplayScreen>& __cordl_internal_get_modDisplayScreen() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsListScreen> const& __cordl_internal_get_modListScreen() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsListScreen>& __cordl_internal_get_modListScreen() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsSearchScreen> const& __cordl_internal_get_modSearchScreen() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsSearchScreen>& __cordl_internal_get_modSearchScreen() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsTerminalControlButton> const& __cordl_internal_get_terminalControlButton() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsTerminalControlButton>& __cordl_internal_get_terminalControlButton() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_terminalControllerLabelText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_terminalControllerLabelText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_terminalControllerText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_terminalControllerText() ;

constexpr void __cordl_internal_set_controlAccessScreen(::UnityW<::GlobalNamespace::CustomMapsAccessScreen>  value) ;

constexpr void __cordl_internal_set_detailsAccessScreen(::UnityW<::GlobalNamespace::CustomMapsAccessScreen>  value) ;

constexpr void __cordl_internal_set_mapTerminalNetworkObject(::UnityW<::GlobalNamespace::VirtualStumpSerializer>  value) ;

constexpr void __cordl_internal_set_modDetailsScreen(::UnityW<::GlobalNamespace::CustomMapsDetailsScreen>  value) ;

constexpr void __cordl_internal_set_modDisplayScreen(::UnityW<::GlobalNamespace::CustomMapsDisplayScreen>  value) ;

constexpr void __cordl_internal_set_modListScreen(::UnityW<::GlobalNamespace::CustomMapsListScreen>  value) ;

constexpr void __cordl_internal_set_modSearchScreen(::UnityW<::GlobalNamespace::CustomMapsSearchScreen>  value) ;

constexpr void __cordl_internal_set_terminalControlButton(::UnityW<::GlobalNamespace::CustomMapsTerminalControlButton>  value) ;

constexpr void __cordl_internal_set_terminalControllerLabelText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_terminalControllerText(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x5a09954, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::CustomMapsTerminal_ScreenType getStaticF_cachedCurrentScreen() ;

static inline int32_t getStaticF_cachedLocalPlayerID() ;

static inline int64_t getStaticF_cachedModDetailsID() ;

static inline bool getStaticF_hasInstance() ;

static inline ::UnityW<::GlobalNamespace::CustomMapsTerminal> getStaticF_instance() ;

static inline ::GlobalNamespace::CustomMapsTerminal_ScreenType getStaticF_localCurrentScreen() ;

static inline int32_t getStaticF_localDriverID() ;

static inline int64_t getStaticF_localModDetailsID() ;

static inline ::GlobalNamespace::CustomMapsTerminal_ScreenType getStaticF_previousScreen() ;

/// @brief Method get_CurrentScreen, addr 0x5a06e54, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_CurrentScreen() ;

/// @brief Method get_IsDriver, addr 0x5a05b44, size 0x64, virtual false, abstract: false, final false
static inline bool get_IsDriver() ;

/// @brief Method get_LocalModDetailsID, addr 0x5a06dfc, size 0x58, virtual false, abstract: false, final false
static inline int64_t get_LocalModDetailsID() ;

/// @brief Method get_LocalPlayerID, addr 0x5a06d88, size 0x74, virtual false, abstract: false, final false
static inline int32_t get_LocalPlayerID() ;

/// @brief Method get_PreviousScreen, addr 0x5a06eac, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CustomMapsTerminal_ScreenType get_PreviousScreen() ;

static inline void setStaticF_cachedCurrentScreen(::GlobalNamespace::CustomMapsTerminal_ScreenType  value) ;

static inline void setStaticF_cachedLocalPlayerID(int32_t  value) ;

static inline void setStaticF_cachedModDetailsID(int64_t  value) ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::CustomMapsTerminal>  value) ;

static inline void setStaticF_localCurrentScreen(::GlobalNamespace::CustomMapsTerminal_ScreenType  value) ;

static inline void setStaticF_localDriverID(int32_t  value) ;

static inline void setStaticF_localModDetailsID(int64_t  value) ;

static inline void setStaticF_previousScreen(::GlobalNamespace::CustomMapsTerminal_ScreenType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsTerminal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsTerminal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsTerminal(CustomMapsTerminal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsTerminal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsTerminal(CustomMapsTerminal const& ) = delete;

/// @brief Field NO_DRIVER_ID offset 0xffffffff size 0x4
static constexpr int32_t  NO_DRIVER_ID{static_cast<int32_t>(0xfffffffe)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2763};

/// [SerializeField]
/// @brief Field controlAccessScreen, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsAccessScreen>  ___controlAccessScreen;

/// [SerializeField]
/// @brief Field detailsAccessScreen, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsAccessScreen>  ___detailsAccessScreen;

/// [SerializeField]
/// @brief Field modListScreen, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsListScreen>  ___modListScreen;

/// [SerializeField]
/// @brief Field modDetailsScreen, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsDetailsScreen>  ___modDetailsScreen;

/// [SerializeField]
/// @brief Field modDisplayScreen, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsDisplayScreen>  ___modDisplayScreen;

/// [SerializeField]
/// @brief Field modSearchScreen, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsSearchScreen>  ___modSearchScreen;

/// [SerializeField]
/// @brief Field mapTerminalNetworkObject, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VirtualStumpSerializer>  ___mapTerminalNetworkObject;

/// [SerializeField]
/// @brief Field terminalControlButton, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsTerminalControlButton>  ___terminalControlButton;

/// [SerializeField]
/// @brief Field terminalControllerLabelText, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___terminalControllerLabelText;

/// [SerializeField]
/// @brief Field terminalControllerText, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___terminalControllerText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsTerminal, ___controlAccessScreen) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsTerminal, ___detailsAccessScreen) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsTerminal, ___modListScreen) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsTerminal, ___modDetailsScreen) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsTerminal, ___modDisplayScreen) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsTerminal, ___modSearchScreen) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsTerminal, ___mapTerminalNetworkObject) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsTerminal, ___terminalControlButton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsTerminal, ___terminalControllerLabelText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsTerminal, ___terminalControllerText) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsTerminal) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
