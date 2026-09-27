#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaScoreBoard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaScoreBoard)
namespace GlobalNamespace {
struct BetterDayNightManager_WeatherType;
}
namespace GlobalNamespace {
class GorillaPlayerScoreboardLine;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaScoreBoard;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaScoreBoard*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaScoreBoard*, "", "GorillaScoreBoard");
// Dependencies GTZone, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaScoreBoard
class CORDL_TYPE GorillaScoreBoard : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsDirty)) bool  IsDirty;

/// @brief Field _isDirty, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDirty, put=__cordl_internal_set__isDirty)) bool  _isDirty;

/// @brief Field allowWeatherControls, offset 0xd1, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowWeatherControls, put=__cordl_internal_set_allowWeatherControls)) bool  allowWeatherControls;

/// @brief Field allowedWeatherControlZones, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_allowedWeatherControlZones, put=__cordl_internal_set_allowedWeatherControlZones)) ::ArrayW<::GlobalNamespace::GTZone>  allowedWeatherControlZones;

/// @brief Field bigRoomYOffset, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_bigRoomYOffset, put=__cordl_internal_set_bigRoomYOffset)) float_t  bigRoomYOffset;

/// @brief Field boardText, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_boardText, put=__cordl_internal_set_boardText)) ::UnityW<::TMPro::TextMeshPro>  boardText;

/// @brief Field buttonStringBuilder, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonStringBuilder, put=__cordl_internal_set_buttonStringBuilder)) ::System::Text::StringBuilder*  buttonStringBuilder;

/// @brief Field buttonText, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonText, put=__cordl_internal_set_buttonText)) ::UnityW<::TMPro::TextMeshPro>  buttonText;

/// @brief Field gmName, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_gmName, put=__cordl_internal_set_gmName)) ::StringW  gmName;

/// @brief Field gmNames, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_gmNames, put=__cordl_internal_set_gmNames)) ::System::Collections::Generic::List_1<::StringW>*  gmNames;

/// @brief Field includeMMR, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_includeMMR, put=__cordl_internal_set_includeMMR)) bool  includeMMR;

/// @brief Field initialGameMode, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_initialGameMode, put=__cordl_internal_set_initialGameMode)) ::StringW  initialGameMode;

/// @brief Field isActive, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_isActive, put=__cordl_internal_set_isActive)) bool  isActive;

/// @brief Field leftPanel, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftPanel, put=__cordl_internal_set_leftPanel)) ::UnityW<::UnityEngine::GameObject>  leftPanel;

/// @brief Field leftPanelRoomControlXOffset, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_leftPanelRoomControlXOffset, put=__cordl_internal_set_leftPanelRoomControlXOffset)) float_t  leftPanelRoomControlXOffset;

/// @brief Field lineHeight, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lineHeight, put=__cordl_internal_set_lineHeight)) int32_t  lineHeight;

/// @brief Field lines, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_lines, put=__cordl_internal_set_lines)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>>*  lines;

/// @brief Field linesParent, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_linesParent, put=__cordl_internal_set_linesParent)) ::UnityW<::UnityEngine::GameObject>  linesParent;

/// @brief Field linesRTs, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_linesRTs, put=__cordl_internal_set_linesRTs)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>*  linesRTs;

/// @brief Field needsUpdate, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_needsUpdate, put=__cordl_internal_set_needsUpdate)) bool  needsUpdate;

/// @brief Field notInRoomText, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_notInRoomText, put=__cordl_internal_set_notInRoomText)) ::UnityW<::TMPro::TextMeshPro>  notInRoomText;

/// @brief Field rightPanel, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightPanel, put=__cordl_internal_set_rightPanel)) ::UnityW<::UnityEngine::GameObject>  rightPanel;

/// @brief Field roomControlsActive, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get_roomControlsActive, put=__cordl_internal_set_roomControlsActive)) bool  roomControlsActive;

/// @brief Field roomControlsText, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomControlsText, put=__cordl_internal_set_roomControlsText)) ::UnityW<::TMPro::TextMeshPro>  roomControlsText;

/// @brief Field roomControlsToggle, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomControlsToggle, put=__cordl_internal_set_roomControlsToggle)) ::UnityW<::UnityEngine::GameObject>  roomControlsToggle;

/// @brief Field scoreBoardLinePrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_scoreBoardLinePrefab, put=__cordl_internal_set_scoreBoardLinePrefab)) ::UnityW<::UnityEngine::GameObject>  scoreBoardLinePrefab;

/// @brief Field startingYValue, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingYValue, put=__cordl_internal_set_startingYValue)) int32_t  startingYValue;

/// @brief Field stringBuilder, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_stringBuilder, put=__cordl_internal_set_stringBuilder)) ::System::Text::StringBuilder*  stringBuilder;

/// @brief Field tempGmName, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempGmName, put=__cordl_internal_set_tempGmName)) ::StringW  tempGmName;

/// @brief Field textsParent, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_textsParent, put=__cordl_internal_set_textsParent)) ::UnityW<::UnityEngine::GameObject>  textsParent;

/// @brief Field weatherControlsActive, offset 0xd2, size 0x1 
 __declspec(property(get=__cordl_internal_get_weatherControlsActive, put=__cordl_internal_set_weatherControlsActive)) bool  weatherControlsActive;

/// @brief Field weatherControlsParent, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_weatherControlsParent, put=__cordl_internal_set_weatherControlsParent)) ::UnityW<::UnityEngine::GameObject>  weatherControlsParent;

/// @brief Field weatherControlsText, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_weatherControlsText, put=__cordl_internal_set_weatherControlsText)) ::UnityW<::TMPro::TextMeshPro>  weatherControlsText;

/// @brief Field weatherControlsToggle, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_weatherControlsToggle, put=__cordl_internal_set_weatherControlsToggle)) ::UnityW<::UnityEngine::GameObject>  weatherControlsToggle;

/// @brief Method Awake, addr 0x592274c, size 0x15c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckZoneForControls, addr 0x5922908, size 0xd4, virtual false, abstract: false, final false
inline void CheckZoneForControls() ;

/// @brief Method CleanupRoomControls, addr 0x5921b48, size 0xc4, virtual false, abstract: false, final false
inline void CleanupRoomControls() ;

/// @brief Method GetBeginningString, addr 0x5921480, size 0x378, virtual false, abstract: false, final false
inline ::StringW GetBeginningString() ;

static inline ::GlobalNamespace::GorillaScoreBoard* New_ctor() ;

/// @brief Method OnDisable, addr 0x5922e18, size 0x2a4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x59229dc, size 0x43c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnMasterClientSwitched, addr 0x5923134, size 0x4, virtual false, abstract: false, final false
inline void OnMasterClientSwitched(::GlobalNamespace::NetPlayer*  newMasterClient) ;

/// @brief Method OnRoomControlsEnabledChanged, addr 0x5923138, size 0x4, virtual false, abstract: false, final false
inline void OnRoomControlsEnabledChanged(bool  enabled) ;

/// @brief Method OnSubscribeReady, addr 0x59230bc, size 0x4, virtual false, abstract: false, final false
inline void OnSubscribeReady() ;

/// @brief Method RedrawPlayerLines, addr 0x5921d74, size 0x8d8, virtual false, abstract: false, final false
inline void RedrawPlayerLines() ;

/// @brief Method RefreshRoomControlUI, addr 0x59230c0, size 0x74, virtual false, abstract: false, final false
inline void RefreshRoomControlUI() ;

/// @brief Method RoomType, addr 0x59217f8, size 0x244, virtual false, abstract: false, final false
inline ::StringW RoomType() ;

/// @brief Method SetDirty, addr 0x5921b3c, size 0xc, virtual false, abstract: false, final false
inline void SetDirty() ;

/// @brief Method SetSleepState, addr 0x5921310, size 0xb0, virtual false, abstract: false, final false
inline void SetSleepState(bool  awake) ;

/// @brief Method SetTimeOfDay, addr 0x592313c, size 0x74, virtual false, abstract: false, final false
inline void SetTimeOfDay(int32_t  timeOfDay) ;

/// @brief Method SetWeather, addr 0x59231b8, size 0x74, virtual false, abstract: false, final false
inline void SetWeather(::GlobalNamespace::BetterDayNightManager_WeatherType  weather) ;

/// @brief Method SetWeatherClear, addr 0x59231b0, size 0x8, virtual false, abstract: false, final false
inline void SetWeatherClear() ;

/// @brief Method SetWeatherRain, addr 0x592322c, size 0x8, virtual false, abstract: false, final false
inline void SetWeatherRain() ;

/// @brief Method Start, addr 0x59228a8, size 0x60, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method ToggleRoomControlButtons, addr 0x59213c0, size 0xc0, virtual false, abstract: false, final false
inline void ToggleRoomControlButtons() ;

/// [ContextMenu("Toggle Room Controls")]
/// @brief Method ToggleRoomControls, addr 0x5921a3c, size 0x100, virtual false, abstract: false, final false
inline void ToggleRoomControls() ;

/// [ContextMenu("Toggle Weather Controls")]
/// @brief Method ToggleWeatherControls, addr 0x5921c0c, size 0x168, virtual false, abstract: false, final false
inline void ToggleWeatherControls() ;

/// @brief Method UpdateWeatherText, addr 0x592264c, size 0x100, virtual false, abstract: false, final false
inline void UpdateWeatherText() ;

constexpr bool const& __cordl_internal_get__isDirty() const;

constexpr bool& __cordl_internal_get__isDirty() ;

constexpr bool const& __cordl_internal_get_allowWeatherControls() const;

constexpr bool& __cordl_internal_get_allowWeatherControls() ;

constexpr ::ArrayW<::GlobalNamespace::GTZone> const& __cordl_internal_get_allowedWeatherControlZones() const;

constexpr ::ArrayW<::GlobalNamespace::GTZone>& __cordl_internal_get_allowedWeatherControlZones() ;

constexpr float_t const& __cordl_internal_get_bigRoomYOffset() const;

constexpr float_t& __cordl_internal_get_bigRoomYOffset() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_boardText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_boardText() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_buttonStringBuilder() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_buttonStringBuilder() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_buttonText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_buttonText() ;

constexpr ::StringW const& __cordl_internal_get_gmName() const;

constexpr ::StringW& __cordl_internal_get_gmName() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_gmNames() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_gmNames() ;

constexpr bool const& __cordl_internal_get_includeMMR() const;

constexpr bool& __cordl_internal_get_includeMMR() ;

constexpr ::StringW const& __cordl_internal_get_initialGameMode() const;

constexpr ::StringW& __cordl_internal_get_initialGameMode() ;

constexpr bool const& __cordl_internal_get_isActive() const;

constexpr bool& __cordl_internal_get_isActive() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_leftPanel() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_leftPanel() ;

constexpr float_t const& __cordl_internal_get_leftPanelRoomControlXOffset() const;

constexpr float_t& __cordl_internal_get_leftPanelRoomControlXOffset() ;

constexpr int32_t const& __cordl_internal_get_lineHeight() const;

constexpr int32_t& __cordl_internal_get_lineHeight() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>>* const& __cordl_internal_get_lines() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>>*& __cordl_internal_get_lines() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_linesParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_linesParent() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>* const& __cordl_internal_get_linesRTs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>*& __cordl_internal_get_linesRTs() ;

constexpr bool const& __cordl_internal_get_needsUpdate() const;

constexpr bool& __cordl_internal_get_needsUpdate() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_notInRoomText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_notInRoomText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rightPanel() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rightPanel() ;

constexpr bool const& __cordl_internal_get_roomControlsActive() const;

constexpr bool& __cordl_internal_get_roomControlsActive() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_roomControlsText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_roomControlsText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_roomControlsToggle() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_roomControlsToggle() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_scoreBoardLinePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_scoreBoardLinePrefab() ;

constexpr int32_t const& __cordl_internal_get_startingYValue() const;

constexpr int32_t& __cordl_internal_get_startingYValue() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_stringBuilder() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_stringBuilder() ;

constexpr ::StringW const& __cordl_internal_get_tempGmName() const;

constexpr ::StringW& __cordl_internal_get_tempGmName() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_textsParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_textsParent() ;

constexpr bool const& __cordl_internal_get_weatherControlsActive() const;

constexpr bool& __cordl_internal_get_weatherControlsActive() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_weatherControlsParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_weatherControlsParent() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_weatherControlsText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_weatherControlsText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_weatherControlsToggle() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_weatherControlsToggle() ;

constexpr void __cordl_internal_set__isDirty(bool  value) ;

constexpr void __cordl_internal_set_allowWeatherControls(bool  value) ;

constexpr void __cordl_internal_set_allowedWeatherControlZones(::ArrayW<::GlobalNamespace::GTZone>  value) ;

constexpr void __cordl_internal_set_bigRoomYOffset(float_t  value) ;

constexpr void __cordl_internal_set_boardText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_buttonStringBuilder(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_buttonText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_gmName(::StringW  value) ;

constexpr void __cordl_internal_set_gmNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_includeMMR(bool  value) ;

constexpr void __cordl_internal_set_initialGameMode(::StringW  value) ;

constexpr void __cordl_internal_set_isActive(bool  value) ;

constexpr void __cordl_internal_set_leftPanel(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_leftPanelRoomControlXOffset(float_t  value) ;

constexpr void __cordl_internal_set_lineHeight(int32_t  value) ;

constexpr void __cordl_internal_set_lines(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>>*  value) ;

constexpr void __cordl_internal_set_linesParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_linesRTs(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>*  value) ;

constexpr void __cordl_internal_set_needsUpdate(bool  value) ;

constexpr void __cordl_internal_set_notInRoomText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_rightPanel(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_roomControlsActive(bool  value) ;

constexpr void __cordl_internal_set_roomControlsText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_roomControlsToggle(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_scoreBoardLinePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_startingYValue(int32_t  value) ;

constexpr void __cordl_internal_set_stringBuilder(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_tempGmName(::StringW  value) ;

constexpr void __cordl_internal_set_textsParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_weatherControlsActive(bool  value) ;

constexpr void __cordl_internal_set_weatherControlsParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_weatherControlsText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_weatherControlsToggle(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5923234, size 0x108, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsDirty, addr 0x59212f4, size 0x1c, virtual false, abstract: false, final false
inline bool get_IsDirty() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaScoreBoard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaScoreBoard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaScoreBoard(GorillaScoreBoard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaScoreBoard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaScoreBoard(GorillaScoreBoard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2212};

/// @brief Field error offset 0xffffffff size 0x8
static constexpr ::ConstString  error{u"ERROR"};

/// @brief Field scoreBoardLinePrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___scoreBoardLinePrefab;

/// @brief Field startingYValue, offset: 0x28, size: 0x4, def value: None
 int32_t  ___startingYValue;

/// @brief Field lineHeight, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___lineHeight;

/// @brief Field includeMMR, offset: 0x30, size: 0x1, def value: None
 bool  ___includeMMR;

/// @brief Field isActive, offset: 0x31, size: 0x1, def value: None
 bool  ___isActive;

/// @brief Field leftPanel, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___leftPanel;

/// @brief Field leftPanelRoomControlXOffset, offset: 0x40, size: 0x4, def value: None
 float_t  ___leftPanelRoomControlXOffset;

/// @brief Field rightPanel, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rightPanel;

/// [Space]
/// @brief Field linesParent, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___linesParent;

/// @brief Field bigRoomYOffset, offset: 0x58, size: 0x4, def value: None
 float_t  ___bigRoomYOffset;

/// [SerializeField]
/// @brief Field lines, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>>*  ___lines;

/// @brief Field linesRTs, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>*  ___linesRTs;

/// @brief Field textsParent, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___textsParent;

/// @brief Field allowedWeatherControlZones, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GTZone>  ___allowedWeatherControlZones;

/// @brief Field weatherControlsParent, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___weatherControlsParent;

/// @brief Field boardText, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___boardText;

/// @brief Field buttonText, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___buttonText;

/// @brief Field roomControlsText, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___roomControlsText;

/// @brief Field weatherControlsText, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___weatherControlsText;

/// @brief Field roomControlsToggle, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___roomControlsToggle;

/// @brief Field weatherControlsToggle, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___weatherControlsToggle;

/// @brief Field needsUpdate, offset: 0xb8, size: 0x1, def value: None
 bool  ___needsUpdate;

/// @brief Field notInRoomText, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___notInRoomText;

/// @brief Field initialGameMode, offset: 0xc8, size: 0x8, def value: None
 ::StringW  ___initialGameMode;

/// @brief Field roomControlsActive, offset: 0xd0, size: 0x1, def value: None
 bool  ___roomControlsActive;

/// @brief Field allowWeatherControls, offset: 0xd1, size: 0x1, def value: None
 bool  ___allowWeatherControls;

/// @brief Field weatherControlsActive, offset: 0xd2, size: 0x1, def value: None
 bool  ___weatherControlsActive;

/// @brief Field tempGmName, offset: 0xd8, size: 0x8, def value: None
 ::StringW  ___tempGmName;

/// @brief Field gmName, offset: 0xe0, size: 0x8, def value: None
 ::StringW  ___gmName;

/// @brief Field gmNames, offset: 0xe8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___gmNames;

/// @brief Field _isDirty, offset: 0xf0, size: 0x1, def value: None
 bool  ____isDirty;

/// @brief Field stringBuilder, offset: 0xf8, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___stringBuilder;

/// @brief Field buttonStringBuilder, offset: 0x100, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___buttonStringBuilder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___scoreBoardLinePrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___startingYValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___lineHeight) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___includeMMR) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___isActive) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___leftPanel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___leftPanelRoomControlXOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___rightPanel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___linesParent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___bigRoomYOffset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___lines) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___linesRTs) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___textsParent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___allowedWeatherControlZones) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___weatherControlsParent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___boardText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___buttonText) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___roomControlsText) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___weatherControlsText) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___roomControlsToggle) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___weatherControlsToggle) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___needsUpdate) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___notInRoomText) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___initialGameMode) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___roomControlsActive) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___allowWeatherControls) == 0xd1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___weatherControlsActive) == 0xd2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___tempGmName) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___gmName) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___gmNames) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ____isDirty) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___stringBuilder) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreBoard, ___buttonStringBuilder) == 0x100, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaScoreBoard) == 0x108, "Size mismatch!");

} // namespace end def GlobalNamespace
