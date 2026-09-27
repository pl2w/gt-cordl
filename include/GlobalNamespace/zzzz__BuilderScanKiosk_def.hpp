#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderScanKiosk.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BuilderScanKiosk_ScannerState_def.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderScanKiosk)
namespace GlobalNamespace {
struct BuilderScanKiosk_ScannerState;
}
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GorillaTagScripts {
class BuilderTable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderScanKiosk;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderScanKiosk*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderScanKiosk*, "", "BuilderScanKiosk");
// Dependencies BuilderScanKiosk::ScannerState, MonoBehaviourTick
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderScanKiosk
class CORDL_TYPE BuilderScanKiosk : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
using ScannerState = ::GlobalNamespace::BuilderScanKiosk_ScannerState;

/// @brief Field DEV_SAVE_SLOT, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DEV_SAVE_SLOT, put=setStaticF_DEV_SAVE_SLOT)) int32_t  DEV_SAVE_SLOT;

/// @brief Field NUM_SAVE_SLOTS, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_NUM_SAVE_SLOTS, put=setStaticF_NUM_SAVE_SLOTS)) int32_t  NUM_SAVE_SLOTS;

/// @brief Field SAVE_FILE, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SAVE_FILE, put=setStaticF_SAVE_FILE)) ::StringW  SAVE_FILE;

/// @brief Field SAVE_FOLDER, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SAVE_FOLDER, put=setStaticF_SAVE_FOLDER)) ::StringW  SAVE_FOLDER;

/// @brief Field buildCaptureTexture, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_buildCaptureTexture, put=__cordl_internal_set_buildCaptureTexture)) ::UnityW<::UnityEngine::Texture2D>  buildCaptureTexture;

/// @brief Field coolDownCompleteTime, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_coolDownCompleteTime, put=__cordl_internal_set_coolDownCompleteTime)) double_t  coolDownCompleteTime;

/// @brief Field coolingDown, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_coolingDown, put=__cordl_internal_set_coolingDown)) bool  coolingDown;

/// @brief Field errorMsg, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorMsg, put=__cordl_internal_set_errorMsg)) ::StringW  errorMsg;

/// @brief Field isAnimating, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_isAnimating, put=__cordl_internal_set_isAnimating)) bool  isAnimating;

/// @brief Field isDirty, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDirty, put=__cordl_internal_set_isDirty)) bool  isDirty;

/// @brief Field noneButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_noneButton, put=__cordl_internal_set_noneButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  noneButton;

/// @brief Field playerPrefKey, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_playerPrefKey, put=setStaticF_playerPrefKey)) ::StringW  playerPrefKey;

/// @brief Field saveButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_saveButton, put=__cordl_internal_set_saveButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  saveButton;

/// @brief Field saveCooldownSeconds, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_saveCooldownSeconds, put=__cordl_internal_set_saveCooldownSeconds)) float_t  saveCooldownSeconds;

/// @brief Field saveError, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get_saveError, put=__cordl_internal_set_saveError)) bool  saveError;

/// @brief Field scanAnimation, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_scanAnimation, put=__cordl_internal_set_scanAnimation)) ::UnityW<::UnityEngine::Animation>  scanAnimation;

/// @brief Field scanButtons, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_scanButtons, put=__cordl_internal_set_scanButtons)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPressableButton>>*  scanButtons;

/// @brief Field scanCompleteTime, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_scanCompleteTime, put=__cordl_internal_set_scanCompleteTime)) double_t  scanCompleteTime;

/// @brief Field scanTriangle, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_scanTriangle, put=__cordl_internal_set_scanTriangle)) ::UnityW<::UnityEngine::MeshRenderer>  scanTriangle;

/// @brief Field scannerState, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_scannerState, put=__cordl_internal_set_scannerState)) ::GlobalNamespace::BuilderScanKiosk_ScannerState  scannerState;

/// @brief Field screenText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_screenText, put=__cordl_internal_set_screenText)) ::UnityW<::TMPro::TMP_Text>  screenText;

/// @brief Field soundBank, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundBank, put=__cordl_internal_set_soundBank)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  soundBank;

/// @brief Field targetTable, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetTable, put=__cordl_internal_set_targetTable)) ::UnityW<::GorillaTagScripts::BuilderTable>  targetTable;

/// @brief Method GetSaveFolder, addr 0x57d9670, size 0xf0, virtual false, abstract: false, final false
inline ::StringW GetSaveFolder() ;

/// @brief Method GetSavePath, addr 0x57d948c, size 0x1e4, virtual false, abstract: false, final false
inline ::StringW GetSavePath() ;

/// @brief Method GetTextForScreen, addr 0x57d97a8, size 0x9f4, virtual false, abstract: false, final false
inline ::StringW GetTextForScreen() ;

/// @brief Method IsSaveSlotValid, addr 0x57d7f3c, size 0x70, virtual false, abstract: false, final false
static inline bool IsSaveSlotValid(int32_t  slot) ;

/// @brief Method LoadPlayerPrefs, addr 0x57d849c, size 0x88, virtual false, abstract: false, final false
inline void LoadPlayerPrefs() ;

static inline ::GlobalNamespace::BuilderScanKiosk* New_ctor() ;

/// @brief Method OnDestroy, addr 0x57d89dc, size 0x46c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDevScanPressed, addr 0x57d90a4, size 0x4, virtual false, abstract: false, final false
inline void OnDevScanPressed() ;

/// @brief Method OnDisable, addr 0x57d892c, size 0xb0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57d887c, size 0xb0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnNoneButtonPressed, addr 0x57d8e48, size 0xb4, virtual false, abstract: false, final false
inline void OnNoneButtonPressed() ;

/// @brief Method OnSaveDirtyChanged, addr 0x57d9760, size 0x8, virtual false, abstract: false, final false
inline void OnSaveDirtyChanged(bool  dirty) ;

/// @brief Method OnSaveFail, addr 0x57d9780, size 0x28, virtual false, abstract: false, final false
inline void OnSaveFail(::StringW  errorMsg) ;

/// @brief Method OnSavePressed, addr 0x57d91f0, size 0x29c, virtual false, abstract: false, final false
inline void OnSavePressed() ;

/// @brief Method OnSaveSuccess, addr 0x57d9774, size 0xc, virtual false, abstract: false, final false
inline void OnSaveSuccess() ;

/// @brief Method OnSaveTimeUpdated, addr 0x57d9768, size 0xc, virtual false, abstract: false, final false
inline void OnSaveTimeUpdated() ;

/// @brief Method OnScanButtonPressed, addr 0x57d8f74, size 0x130, virtual false, abstract: false, final false
inline void OnScanButtonPressed(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeft) ;

/// @brief Method SavePlayerPrefs, addr 0x57d8efc, size 0x78, virtual false, abstract: false, final false
inline void SavePlayerPrefs() ;

/// @brief Method Start, addr 0x57d7fac, size 0x4f0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Tick, addr 0x57d9118, size 0xd8, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method ToggleSaveButton, addr 0x57d90a8, size 0x70, virtual false, abstract: false, final false
inline void ToggleSaveButton(bool  enabled) ;

/// @brief Method UpdateUI, addr 0x57d8524, size 0x358, virtual false, abstract: false, final false
inline void UpdateUI() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_buildCaptureTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_buildCaptureTexture() ;

constexpr double_t const& __cordl_internal_get_coolDownCompleteTime() const;

constexpr double_t& __cordl_internal_get_coolDownCompleteTime() ;

constexpr bool const& __cordl_internal_get_coolingDown() const;

constexpr bool& __cordl_internal_get_coolingDown() ;

constexpr ::StringW const& __cordl_internal_get_errorMsg() const;

constexpr ::StringW& __cordl_internal_get_errorMsg() ;

constexpr bool const& __cordl_internal_get_isAnimating() const;

constexpr bool& __cordl_internal_get_isAnimating() ;

constexpr bool const& __cordl_internal_get_isDirty() const;

constexpr bool& __cordl_internal_get_isDirty() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_noneButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_noneButton() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_saveButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_saveButton() ;

constexpr float_t const& __cordl_internal_get_saveCooldownSeconds() const;

constexpr float_t& __cordl_internal_get_saveCooldownSeconds() ;

constexpr bool const& __cordl_internal_get_saveError() const;

constexpr bool& __cordl_internal_get_saveError() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_scanAnimation() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_scanAnimation() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPressableButton>>* const& __cordl_internal_get_scanButtons() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPressableButton>>*& __cordl_internal_get_scanButtons() ;

constexpr double_t const& __cordl_internal_get_scanCompleteTime() const;

constexpr double_t& __cordl_internal_get_scanCompleteTime() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_scanTriangle() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_scanTriangle() ;

constexpr ::GlobalNamespace::BuilderScanKiosk_ScannerState const& __cordl_internal_get_scannerState() const;

constexpr ::GlobalNamespace::BuilderScanKiosk_ScannerState& __cordl_internal_get_scannerState() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_screenText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_screenText() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_soundBank() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_soundBank() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& __cordl_internal_get_targetTable() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& __cordl_internal_get_targetTable() ;

constexpr void __cordl_internal_set_buildCaptureTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_coolDownCompleteTime(double_t  value) ;

constexpr void __cordl_internal_set_coolingDown(bool  value) ;

constexpr void __cordl_internal_set_errorMsg(::StringW  value) ;

constexpr void __cordl_internal_set_isAnimating(bool  value) ;

constexpr void __cordl_internal_set_isDirty(bool  value) ;

constexpr void __cordl_internal_set_noneButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_saveButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_saveCooldownSeconds(float_t  value) ;

constexpr void __cordl_internal_set_saveError(bool  value) ;

constexpr void __cordl_internal_set_scanAnimation(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_scanButtons(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPressableButton>>*  value) ;

constexpr void __cordl_internal_set_scanCompleteTime(double_t  value) ;

constexpr void __cordl_internal_set_scanTriangle(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_scannerState(::GlobalNamespace::BuilderScanKiosk_ScannerState  value) ;

constexpr void __cordl_internal_set_screenText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_soundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_targetTable(::UnityW<::GorillaTagScripts::BuilderTable>  value) ;

/// @brief Method .ctor, addr 0x57da19c, size 0x3c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_DEV_SAVE_SLOT() ;

static inline int32_t getStaticF_NUM_SAVE_SLOTS() ;

static inline ::StringW getStaticF_SAVE_FILE() ;

static inline ::StringW getStaticF_SAVE_FOLDER() ;

static inline ::StringW getStaticF_playerPrefKey() ;

static inline void setStaticF_DEV_SAVE_SLOT(int32_t  value) ;

static inline void setStaticF_NUM_SAVE_SLOTS(int32_t  value) ;

static inline void setStaticF_SAVE_FILE(::StringW  value) ;

static inline void setStaticF_SAVE_FOLDER(::StringW  value) ;

static inline void setStaticF_playerPrefKey(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderScanKiosk() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderScanKiosk", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderScanKiosk(BuilderScanKiosk && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderScanKiosk", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderScanKiosk(BuilderScanKiosk const& ) = delete;

/// @brief Field MONKE_BLOCKS_SAVE_KIOSK_CODE_INSTRUCTIONS_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_SAVE_KIOSK_CODE_INSTRUCTIONS_KEY{u"MONKE_BLOCKS_SAVE_KIOSK_CODE_INSTRUCTIONS"};

/// @brief Field MONKE_BLOCKS_SAVE_KIOSK_EMPTY_TABLE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_SAVE_KIOSK_EMPTY_TABLE_KEY{u"MONKE_BLOCKS_SAVE_KIOSK_EMPTY_TABLE"};

/// @brief Field MONKE_BLOCKS_SAVE_KIOSK_LOAD_INSTRUCTIONS_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_SAVE_KIOSK_LOAD_INSTRUCTIONS_KEY{u"MONKE_BLOCKS_SAVE_KIOSK_LOAD_INSTRUCTIONS"};

/// @brief Field MONKE_BLOCKS_SAVE_KIOSK_MAP_ID_LABEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_SAVE_KIOSK_MAP_ID_LABEL_KEY{u"MONKE_BLOCKS_SAVE_KIOSK_MAP_ID_LABEL"};

/// @brief Field MONKE_BLOCKS_SAVE_KIOSK_NO_SAVE_SLOT_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_SAVE_KIOSK_NO_SAVE_SLOT_KEY{u"MONKE_BLOCKS_SAVE_KIOSK_NO_SAVE_SLOT"};

/// @brief Field MONKE_BLOCKS_SAVE_KIOSK_SAVE_COOLDOWN_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_SAVE_KIOSK_SAVE_COOLDOWN_KEY{u"MONKE_BLOCKS_SAVE_KIOSK_SAVE_COOLDOWN"};

/// @brief Field MONKE_BLOCKS_SAVE_KIOSK_SAVE_ERROR_BLOCKS_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_SAVE_KIOSK_SAVE_ERROR_BLOCKS_KEY{u"MONKE_BLOCKS_SAVE_KIOSK_SAVE_ERROR_BLOCKS"};

/// @brief Field MONKE_BLOCKS_SAVE_KIOSK_SAVE_ERROR_BUSY_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_SAVE_KIOSK_SAVE_ERROR_BUSY_KEY{u"MONKE_BLOCKS_SAVE_KIOSK_SAVE_ERROR_BUSY"};

/// @brief Field MONKE_BLOCKS_SAVE_KIOSK_SAVE_ERROR_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_SAVE_KIOSK_SAVE_ERROR_KEY{u"MONKE_BLOCKS_SAVE_KIOSK_SAVE_ERROR"};

/// @brief Field MONKE_BLOCKS_SAVE_KIOSK_SAVE_NO_CHANGES_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_SAVE_KIOSK_SAVE_NO_CHANGES_KEY{u"MONKE_BLOCKS_SAVE_KIOSK_SAVE_NO_CHANGES"};

/// @brief Field MONKE_BLOCKS_SAVE_KIOSK_SAVE_SAVING_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_SAVE_KIOSK_SAVE_SAVING_KEY{u"MONKE_BLOCKS_SAVE_KIOSK_SAVE_SAVING"};

/// @brief Field MONKE_BLOCKS_SAVE_KIOSK_SAVE_WARNING_CONFIRMATION_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_SAVE_KIOSK_SAVE_WARNING_CONFIRMATION_KEY{u"MONKE_BLOCKS_SAVE_KIOSK_SAVE_WARNING_CONFIRMATION"};

/// @brief Field MONKE_BLOCKS_SAVE_KIOSK_SAVE_WARNING_REPLACE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_SAVE_KIOSK_SAVE_WARNING_REPLACE_KEY{u"MONKE_BLOCKS_SAVE_KIOSK_SAVE_WARNING_REPLACE"};

/// @brief Field MONKE_BLOCKS_SAVE_KIOSK_SCAN_LABEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_SAVE_KIOSK_SCAN_LABEL_KEY{u"MONKE_BLOCKS_SAVE_KIOSK_SCAN_LABEL"};

/// @brief Field MONKE_BLOCKS_SAVE_KIOSK_SLOT_NONE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_SAVE_KIOSK_SLOT_NONE_KEY{u"MONKE_BLOCKS_SAVE_KIOSK_SLOT_NONE"};

/// @brief Field MONKE_BLOCKS_SAVE_KIOSK_SLOT_ONE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_SAVE_KIOSK_SLOT_ONE_KEY{u"MONKE_BLOCKS_SAVE_KIOSK_SLOT_ONE"};

/// @brief Field MONKE_BLOCKS_SAVE_KIOSK_SLOT_THREE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_SAVE_KIOSK_SLOT_THREE_KEY{u"MONKE_BLOCKS_SAVE_KIOSK_SLOT_THREE"};

/// @brief Field MONKE_BLOCKS_SAVE_KIOSK_SLOT_TWO_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_SAVE_KIOSK_SLOT_TWO_KEY{u"MONKE_BLOCKS_SAVE_KIOSK_SLOT_TWO"};

/// @brief Field MONKE_BLOCKS_SAVE_KIOSK_UPDATED_BUTTON_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_SAVE_KIOSK_UPDATED_BUTTON_KEY{u"MONKE_BLOCKS_SAVE_KIOSK_UPDATED_BUTTON"};

/// @brief Field MONKE_BLOCKS_SAVE_KIOSK_UPDATE_CONFIRM_BUTTON_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_SAVE_KIOSK_UPDATE_CONFIRM_BUTTON_KEY{u"MONKE_BLOCKS_SAVE_KIOSK_UPDATE_CONFIRM_BUTTON"};

/// @brief Field MONKE_BLOCKS_SAVE_KIOSK_UPDATE_LABEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  MONKE_BLOCKS_SAVE_KIOSK_UPDATE_LABEL_KEY{u"MONKE_BLOCKS_SAVE_KIOSK_UPDATE_LABEL"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1633};

/// [SerializeField]
/// @brief Field saveButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___saveButton;

/// [SerializeField]
/// @brief Field noneButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___noneButton;

/// [SerializeField]
/// @brief Field scanButtons, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPressableButton>>*  ___scanButtons;

/// [SerializeField]
/// @brief Field targetTable, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderTable>  ___targetTable;

/// [SerializeField]
/// @brief Field saveCooldownSeconds, offset: 0x48, size: 0x4, def value: None
 float_t  ___saveCooldownSeconds;

/// [SerializeField]
/// @brief Field screenText, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___screenText;

/// [SerializeField]
/// @brief Field soundBank, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___soundBank;

/// [SerializeField]
/// @brief Field scanAnimation, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___scanAnimation;

/// @brief Field scanTriangle, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___scanTriangle;

/// @brief Field isAnimating, offset: 0x70, size: 0x1, def value: None
 bool  ___isAnimating;

/// @brief Field buildCaptureTexture, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___buildCaptureTexture;

/// @brief Field isDirty, offset: 0x80, size: 0x1, def value: None
 bool  ___isDirty;

/// @brief Field saveError, offset: 0x81, size: 0x1, def value: None
 bool  ___saveError;

/// @brief Field errorMsg, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___errorMsg;

/// @brief Field coolingDown, offset: 0x90, size: 0x1, def value: None
 bool  ___coolingDown;

/// @brief Field coolDownCompleteTime, offset: 0x98, size: 0x8, def value: None
 double_t  ___coolDownCompleteTime;

/// @brief Field scanCompleteTime, offset: 0xa0, size: 0x8, def value: None
 double_t  ___scanCompleteTime;

/// @brief Field scannerState, offset: 0xa8, size: 0x4, def value: None
 ::GlobalNamespace::BuilderScanKiosk_ScannerState  ___scannerState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderScanKiosk, ___saveButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderScanKiosk, ___noneButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderScanKiosk, ___scanButtons) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderScanKiosk, ___targetTable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderScanKiosk, ___saveCooldownSeconds) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderScanKiosk, ___screenText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderScanKiosk, ___soundBank) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderScanKiosk, ___scanAnimation) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderScanKiosk, ___scanTriangle) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderScanKiosk, ___isAnimating) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderScanKiosk, ___buildCaptureTexture) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderScanKiosk, ___isDirty) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderScanKiosk, ___saveError) == 0x81, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderScanKiosk, ___errorMsg) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderScanKiosk, ___coolingDown) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderScanKiosk, ___coolDownCompleteTime) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderScanKiosk, ___scanCompleteTime) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderScanKiosk, ___scannerState) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderScanKiosk) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
