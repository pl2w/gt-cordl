#pragma once
// IWYU pragma private; include "GorillaTagScripts/UI/ModIO/CustomMapsRoomMapDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapsRoomMapDisplay)
namespace GlobalNamespace {
struct CustomMapsRoomMapDisplay__UpdateRoomMap_d__20;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
struct MapLoadStatus;
}
namespace Modio::Mods {
struct ModId;
}
namespace System::Threading::Tasks {
class Task;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GorillaTagScripts::UI::ModIO {
class CustomMapsRoomMapDisplay;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay*, "GorillaTagScripts.UI.ModIO", "CustomMapsRoomMapDisplay");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::UI::ModIO {
// Is value type: false
// CS Name: GorillaTagScripts.UI.ModIO.CustomMapsRoomMapDisplay
class CORDL_TYPE CustomMapsRoomMapDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _UpdateRoomMap_d__20 = ::GlobalNamespace::CustomMapsRoomMapDisplay__UpdateRoomMap_d__20;

/// @brief Field downloadingStatusString, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_downloadingStatusString, put=__cordl_internal_set_downloadingStatusString)) ::StringW  downloadingStatusString;

/// @brief Field installingStatusString, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_installingStatusString, put=__cordl_internal_set_installingStatusString)) ::StringW  installingStatusString;

/// @brief Field loadFailedStatusString, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadFailedStatusString, put=__cordl_internal_set_loadFailedStatusString)) ::StringW  loadFailedStatusString;

/// @brief Field loadFailedStatusStringColor, offset 0xa8, size 0x10 
 __declspec(property(get=__cordl_internal_get_loadFailedStatusStringColor, put=__cordl_internal_set_loadFailedStatusStringColor)) ::UnityEngine::Color  loadFailedStatusStringColor;

/// @brief Field loadingStatusString, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadingStatusString, put=__cordl_internal_set_loadingStatusString)) ::StringW  loadingStatusString;

/// @brief Field loadingStatusStringColor, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get_loadingStatusStringColor, put=__cordl_internal_set_loadingStatusStringColor)) ::UnityEngine::Color  loadingStatusStringColor;

/// @brief Field noRoomMapString, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_noRoomMapString, put=__cordl_internal_set_noRoomMapString)) ::StringW  noRoomMapString;

/// @brief Field notLoadedStatusString, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_notLoadedStatusString, put=__cordl_internal_set_notLoadedStatusString)) ::StringW  notLoadedStatusString;

/// @brief Field notLoadedStatusStringColor, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get_notLoadedStatusStringColor, put=__cordl_internal_set_notLoadedStatusStringColor)) ::UnityEngine::Color  notLoadedStatusStringColor;

/// @brief Field readyToPlayStatusString, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_readyToPlayStatusString, put=__cordl_internal_set_readyToPlayStatusString)) ::StringW  readyToPlayStatusString;

/// @brief Field readyToPlayStatusStringColor, offset 0x98, size 0x10 
 __declspec(property(get=__cordl_internal_get_readyToPlayStatusStringColor, put=__cordl_internal_set_readyToPlayStatusStringColor)) ::UnityEngine::Color  readyToPlayStatusStringColor;

/// @brief Field roomMapLabelText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomMapLabelText, put=__cordl_internal_set_roomMapLabelText)) ::UnityW<::TMPro::TMP_Text>  roomMapLabelText;

/// @brief Field roomMapNameText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomMapNameText, put=__cordl_internal_set_roomMapNameText)) ::UnityW<::TMPro::TMP_Text>  roomMapNameText;

/// @brief Field roomMapStatusLabelText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomMapStatusLabelText, put=__cordl_internal_set_roomMapStatusLabelText)) ::UnityW<::TMPro::TMP_Text>  roomMapStatusLabelText;

/// @brief Field roomMapStatusText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomMapStatusText, put=__cordl_internal_set_roomMapStatusText)) ::UnityW<::TMPro::TMP_Text>  roomMapStatusText;

static inline ::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5bf4aec, size 0x2e4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisconnectedFromRoom, addr 0x5bf4eb0, size 0x4, virtual false, abstract: false, final false
inline void OnDisconnectedFromRoom() ;

/// @brief Method OnJoinedRoom, addr 0x5bf4dd0, size 0x4, virtual false, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnMapLoadComplete, addr 0x5bf4eb8, size 0x80, virtual false, abstract: false, final false
inline void OnMapLoadComplete(bool  success) ;

/// @brief Method OnMapLoadProgress, addr 0x5bf4f38, size 0x14c, virtual false, abstract: false, final false
inline void OnMapLoadProgress(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  status, int32_t  progress, ::StringW  message) ;

/// @brief Method OnRoomMapChanged, addr 0x5bf4eb4, size 0x4, virtual false, abstract: false, final false
inline void OnRoomMapChanged(::Modio::Mods::ModId  roomMapModId) ;

/// @brief Method Start, addr 0x5bf4750, size 0x39c, virtual false, abstract: false, final false
inline void Start() ;

/// [AsyncStateMachine(typeof(GorillaTagScripts.UI.ModIO.CustomMapsRoomMapDisplay::<UpdateRoomMap>d__20))]
/// @brief Method UpdateRoomMap, addr 0x5bf4dd4, size 0xdc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* UpdateRoomMap() ;

constexpr ::StringW const& __cordl_internal_get_downloadingStatusString() const;

constexpr ::StringW& __cordl_internal_get_downloadingStatusString() ;

constexpr ::StringW const& __cordl_internal_get_installingStatusString() const;

constexpr ::StringW& __cordl_internal_get_installingStatusString() ;

constexpr ::StringW const& __cordl_internal_get_loadFailedStatusString() const;

constexpr ::StringW& __cordl_internal_get_loadFailedStatusString() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_loadFailedStatusStringColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_loadFailedStatusStringColor() ;

constexpr ::StringW const& __cordl_internal_get_loadingStatusString() const;

constexpr ::StringW& __cordl_internal_get_loadingStatusString() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_loadingStatusStringColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_loadingStatusStringColor() ;

constexpr ::StringW const& __cordl_internal_get_noRoomMapString() const;

constexpr ::StringW& __cordl_internal_get_noRoomMapString() ;

constexpr ::StringW const& __cordl_internal_get_notLoadedStatusString() const;

constexpr ::StringW& __cordl_internal_get_notLoadedStatusString() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_notLoadedStatusStringColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_notLoadedStatusStringColor() ;

constexpr ::StringW const& __cordl_internal_get_readyToPlayStatusString() const;

constexpr ::StringW& __cordl_internal_get_readyToPlayStatusString() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_readyToPlayStatusStringColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_readyToPlayStatusStringColor() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_roomMapLabelText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_roomMapLabelText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_roomMapNameText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_roomMapNameText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_roomMapStatusLabelText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_roomMapStatusLabelText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_roomMapStatusText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_roomMapStatusText() ;

constexpr void __cordl_internal_set_downloadingStatusString(::StringW  value) ;

constexpr void __cordl_internal_set_installingStatusString(::StringW  value) ;

constexpr void __cordl_internal_set_loadFailedStatusString(::StringW  value) ;

constexpr void __cordl_internal_set_loadFailedStatusStringColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_loadingStatusString(::StringW  value) ;

constexpr void __cordl_internal_set_loadingStatusStringColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_noRoomMapString(::StringW  value) ;

constexpr void __cordl_internal_set_notLoadedStatusString(::StringW  value) ;

constexpr void __cordl_internal_set_notLoadedStatusStringColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_readyToPlayStatusString(::StringW  value) ;

constexpr void __cordl_internal_set_readyToPlayStatusStringColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_roomMapLabelText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_roomMapNameText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_roomMapStatusLabelText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_roomMapStatusText(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x5bf5084, size 0x170, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsRoomMapDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsRoomMapDisplay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsRoomMapDisplay(CustomMapsRoomMapDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsRoomMapDisplay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsRoomMapDisplay(CustomMapsRoomMapDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4080};

/// [SerializeField]
/// @brief Field roomMapLabelText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___roomMapLabelText;

/// [SerializeField]
/// @brief Field roomMapNameText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___roomMapNameText;

/// [SerializeField]
/// @brief Field roomMapStatusLabelText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___roomMapStatusLabelText;

/// [SerializeField]
/// @brief Field roomMapStatusText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___roomMapStatusText;

/// [SerializeField]
/// @brief Field noRoomMapString, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___noRoomMapString;

/// [SerializeField]
/// @brief Field notLoadedStatusString, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___notLoadedStatusString;

/// [SerializeField]
/// @brief Field loadingStatusString, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___loadingStatusString;

/// [SerializeField]
/// @brief Field downloadingStatusString, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___downloadingStatusString;

/// [SerializeField]
/// @brief Field installingStatusString, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___installingStatusString;

/// [SerializeField]
/// @brief Field readyToPlayStatusString, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___readyToPlayStatusString;

/// [SerializeField]
/// @brief Field loadFailedStatusString, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___loadFailedStatusString;

/// [SerializeField]
/// @brief Field notLoadedStatusStringColor, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Color  ___notLoadedStatusStringColor;

/// [SerializeField]
/// @brief Field loadingStatusStringColor, offset: 0x88, size: 0x10, def value: None
 ::UnityEngine::Color  ___loadingStatusStringColor;

/// [SerializeField]
/// @brief Field readyToPlayStatusStringColor, offset: 0x98, size: 0x10, def value: None
 ::UnityEngine::Color  ___readyToPlayStatusStringColor;

/// [SerializeField]
/// @brief Field loadFailedStatusStringColor, offset: 0xa8, size: 0x10, def value: None
 ::UnityEngine::Color  ___loadFailedStatusStringColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay, ___roomMapLabelText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay, ___roomMapNameText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay, ___roomMapStatusLabelText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay, ___roomMapStatusText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay, ___noRoomMapString) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay, ___notLoadedStatusString) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay, ___loadingStatusString) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay, ___downloadingStatusString) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay, ___installingStatusString) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay, ___readyToPlayStatusString) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay, ___loadFailedStatusString) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay, ___notLoadedStatusStringColor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay, ___loadingStatusStringColor) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay, ___readyToPlayStatusStringColor) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay, ___loadFailedStatusStringColor) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay) == 0xb8, "Size mismatch!");

} // namespace end def GorillaTagScripts::UI::ModIO
