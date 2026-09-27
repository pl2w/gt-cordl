#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsModTile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CustomMapsScreenTouchPoint_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CustomMapsModTile)
namespace GlobalNamespace {
struct CustomMapsModTile__SetMod_d__23;
}
namespace Modio::Mods {
class Mod;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomMapsModTile;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapsModTile*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsModTile*, "", "CustomMapsModTile");
// Dependencies CustomMapsScreenTouchPoint
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsModTile
class CORDL_TYPE CustomMapsModTile : public ::GlobalNamespace::CustomMapsScreenTouchPoint {
public:
// Declarations
using _SetMod_d__23 = ::GlobalNamespace::CustomMapsModTile__SetMod_d__23;

 __declspec(property(get=get_CurrentMod)) ::Modio::Mods::Mod*  CurrentMod;

 __declspec(property(get=get_PlayerCountText, put=set_PlayerCountText)) ::StringW  PlayerCountText;

/// @brief Field _playerCountText, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerCountText, put=__cordl_internal_set__playerCountText)) ::UnityW<::TMPro::TMP_Text>  _playerCountText;

/// @brief Field currentMod, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentMod, put=__cordl_internal_set_currentMod)) ::Modio::Mods::Mod*  currentMod;

/// @brief Field defaultLogo, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultLogo, put=__cordl_internal_set_defaultLogo)) ::UnityW<::UnityEngine::Sprite>  defaultLogo;

/// @brief Field highlight, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_highlight, put=__cordl_internal_set_highlight)) ::UnityW<::UnityEngine::GameObject>  highlight;

/// @brief Field isActive, offset 0x82, size 0x1 
 __declspec(property(get=__cordl_internal_get_isActive, put=__cordl_internal_set_isActive)) bool  isActive;

/// @brief Field isDownloadingThumbnail, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDownloadingThumbnail, put=__cordl_internal_set_isDownloadingThumbnail)) bool  isDownloadingThumbnail;

/// @brief Field mapNameText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapNameText, put=__cordl_internal_set_mapNameText)) ::UnityW<::TMPro::TMP_Text>  mapNameText;

/// @brief Field newDownloadRequest, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get_newDownloadRequest, put=__cordl_internal_set_newDownloadRequest)) bool  newDownloadRequest;

/// @brief Field ratingsText, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_ratingsText, put=__cordl_internal_set_ratingsText)) ::UnityW<::TMPro::TMP_Text>  ratingsText;

/// @brief Field thumsbUp, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_thumsbUp, put=__cordl_internal_set_thumsbUp)) ::UnityW<::UnityEngine::GameObject>  thumsbUp;

/// @brief Method ActivateTile, addr 0x5a03a7c, size 0xac, virtual false, abstract: false, final false
inline void ActivateTile(bool  useMapName) ;

/// @brief Method Awake, addr 0x5a038ec, size 0x44, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method DeactivateTile, addr 0x5a03b28, size 0x58, virtual false, abstract: false, final false
inline void DeactivateTile() ;

/// @brief Method HighlightTile, addr 0x5a03e64, size 0x1c, virtual false, abstract: false, final false
inline void HighlightTile() ;

/// @brief Method IsCurrentModHidden, addr 0x5a03e80, size 0xc8, virtual false, abstract: false, final false
inline bool IsCurrentModHidden() ;

static inline ::GlobalNamespace::CustomMapsModTile* New_ctor() ;

/// @brief Method OnButtonPressedEvent, addr 0x5a03ba4, size 0x4, virtual true, abstract: false, final false
inline void OnButtonPressedEvent() ;

/// @brief Method PressButtonColourUpdate, addr 0x5a03ba0, size 0x4, virtual true, abstract: false, final false
inline void PressButtonColourUpdate() ;

/// @brief Method ResetLogo, addr 0x5a03b80, size 0x20, virtual false, abstract: false, final false
inline void ResetLogo() ;

/// [AsyncStateMachine(typeof(CustomMapsModTile::<SetMod>d__23))]
/// @brief Method SetMod, addr 0x5a03ba8, size 0xd4, virtual false, abstract: false, final false
inline void SetMod(::Modio::Mods::Mod*  mod, bool  useMapName) ;

/// @brief Method ShowDetails, addr 0x5a03c7c, size 0x58, virtual false, abstract: false, final false
inline void ShowDetails() ;

/// @brief Method ShowTileText, addr 0x5a03934, size 0x148, virtual false, abstract: false, final false
inline void ShowTileText(bool  show, bool  useMapName) ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__playerCountText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__playerCountText() ;

constexpr ::Modio::Mods::Mod* const& __cordl_internal_get_currentMod() const;

constexpr ::Modio::Mods::Mod*& __cordl_internal_get_currentMod() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_defaultLogo() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_defaultLogo() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_highlight() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_highlight() ;

constexpr bool const& __cordl_internal_get_isActive() const;

constexpr bool& __cordl_internal_get_isActive() ;

constexpr bool const& __cordl_internal_get_isDownloadingThumbnail() const;

constexpr bool& __cordl_internal_get_isDownloadingThumbnail() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_mapNameText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_mapNameText() ;

constexpr bool const& __cordl_internal_get_newDownloadRequest() const;

constexpr bool& __cordl_internal_get_newDownloadRequest() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_ratingsText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_ratingsText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_thumsbUp() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_thumsbUp() ;

constexpr void __cordl_internal_set__playerCountText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_currentMod(::Modio::Mods::Mod*  value) ;

constexpr void __cordl_internal_set_defaultLogo(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_highlight(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_isActive(bool  value) ;

constexpr void __cordl_internal_set_isDownloadingThumbnail(bool  value) ;

constexpr void __cordl_internal_set_mapNameText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_newDownloadRequest(bool  value) ;

constexpr void __cordl_internal_set_ratingsText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_thumsbUp(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5a03f48, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentMod, addr 0x5a038e4, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Mods::Mod* get_CurrentMod() ;

/// @brief Method get_PlayerCountText, addr 0x5a038a4, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_PlayerCountText() ;

/// @brief Method set_PlayerCountText, addr 0x5a038c4, size 0x20, virtual false, abstract: false, final false
inline void set_PlayerCountText(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsModTile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsModTile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsModTile(CustomMapsModTile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsModTile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsModTile(CustomMapsModTile const& ) = delete;

/// @brief Field LOGO_HEIGHT offset 0xffffffff size 0x4
static constexpr float_t  LOGO_HEIGHT{static_cast<float_t>(180.0f)};

/// @brief Field LOGO_WIDTH offset 0xffffffff size 0x4
static constexpr float_t  LOGO_WIDTH{static_cast<float_t>(320.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2755};

/// [SerializeField]
/// @brief Field ratingsText, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___ratingsText;

/// [SerializeField]
/// @brief Field mapNameText, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___mapNameText;

/// [SerializeField]
/// @brief Field thumsbUp, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___thumsbUp;

/// [SerializeField]
/// @brief Field highlight, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___highlight;

/// [SerializeField]
/// @brief Field _playerCountText, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____playerCountText;

/// @brief Field currentMod, offset: 0x70, size: 0x8, def value: None
 ::Modio::Mods::Mod*  ___currentMod;

/// @brief Field defaultLogo, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___defaultLogo;

/// @brief Field isDownloadingThumbnail, offset: 0x80, size: 0x1, def value: None
 bool  ___isDownloadingThumbnail;

/// @brief Field newDownloadRequest, offset: 0x81, size: 0x1, def value: None
 bool  ___newDownloadRequest;

/// @brief Field isActive, offset: 0x82, size: 0x1, def value: None
 bool  ___isActive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsModTile, ___ratingsText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsModTile, ___mapNameText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsModTile, ___thumsbUp) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsModTile, ___highlight) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsModTile, ____playerCountText) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsModTile, ___currentMod) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsModTile, ___defaultLogo) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsModTile, ___isDownloadingThumbnail) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsModTile, ___newDownloadRequest) == 0x81, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsModTile, ___isActive) == 0x82, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsModTile) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
