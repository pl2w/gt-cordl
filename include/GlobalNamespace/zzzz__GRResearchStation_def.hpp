#pragma once
// IWYU pragma private; include "GlobalNamespace/GRResearchStation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GRResearchStation)
namespace GlobalNamespace {
class GRToolProgressionManager_ToolProgressionMetaData;
}
namespace GlobalNamespace {
class GRToolProgressionManager;
}
namespace GlobalNamespace {
class GRToolProgressionTree_GRToolProgressionNode;
}
namespace GlobalNamespace {
struct GRTool_GRToolType;
}
namespace GlobalNamespace {
class GhostReactor;
}
namespace GlobalNamespace {
class IDCardScanner;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class GRResearchStation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRResearchStation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRResearchStation*, "", "GRResearchStation");
// Dependencies GorillaPressableButton, TMPro.TMP_Text, UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.UI.Image
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRResearchStation
class CORDL_TYPE GRResearchStation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field BonusText, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_BonusText, put=__cordl_internal_set_BonusText)) ::UnityW<::TMPro::TMP_Text>  BonusText;

/// @brief Field CostText, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_CostText, put=__cordl_internal_set_CostText)) ::UnityW<::TMPro::TMP_Text>  CostText;

/// @brief Field DescriptionText, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_DescriptionText, put=__cordl_internal_set_DescriptionText)) ::UnityW<::TMPro::TMP_Text>  DescriptionText;

/// @brief Field LevelText, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_LevelText, put=__cordl_internal_set_LevelText)) ::UnityW<::TMPro::TMP_Text>  LevelText;

/// @brief Field LockedImage, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_LockedImage, put=__cordl_internal_set_LockedImage)) ::ArrayW<::UnityW<::UnityEngine::UI::Image>>  LockedImage;

/// @brief Field RequiredLevelText, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_RequiredLevelText, put=__cordl_internal_set_RequiredLevelText)) ::UnityW<::TMPro::TMP_Text>  RequiredLevelText;

/// @brief Field ResearchPointsTex, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_ResearchPointsTex, put=__cordl_internal_set_ResearchPointsTex)) ::UnityW<::TMPro::TMP_Text>  ResearchPointsTex;

/// @brief Field ToolNameText, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ToolNameText, put=__cordl_internal_set_ToolNameText)) ::UnityW<::TMPro::TMP_Text>  ToolNameText;

/// @brief Field UnlockedText, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_UnlockedText, put=__cordl_internal_set_UnlockedText)) ::UnityW<::TMPro::TMP_Text>  UnlockedText;

/// @brief Field UpgradeButton, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_UpgradeButton, put=__cordl_internal_set_UpgradeButton)) ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>  UpgradeButton;

/// @brief Field UpgradePointerText, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_UpgradePointerText, put=__cordl_internal_set_UpgradePointerText)) ::ArrayW<::UnityW<::TMPro::TMP_Text>>  UpgradePointerText;

/// @brief Field UpgradeTitlesText, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_UpgradeTitlesText, put=__cordl_internal_set_UpgradeTitlesText)) ::ArrayW<::UnityW<::TMPro::TMP_Text>>  UpgradeTitlesText;

/// @brief Field _costString, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__costString, put=__cordl_internal_set__costString)) ::StringW  _costString;

/// @brief Field _levelString, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__levelString, put=__cordl_internal_set__levelString)) ::StringW  _levelString;

/// @brief Field _requiredLevelString, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__requiredLevelString, put=__cordl_internal_set__requiredLevelString)) ::StringW  _requiredLevelString;

/// @brief Field _researchPointsString, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__researchPointsString, put=__cordl_internal_set__researchPointsString)) ::StringW  _researchPointsString;

/// @brief Field currentlySelectedToolUpgrade, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentlySelectedToolUpgrade, put=__cordl_internal_set_currentlySelectedToolUpgrade)) ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*  currentlySelectedToolUpgrade;

/// @brief Field currentlySelectedUpgradeMetadata, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentlySelectedUpgradeMetadata, put=__cordl_internal_set_currentlySelectedUpgradeMetadata)) ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*  currentlySelectedUpgradeMetadata;

/// @brief Field lockedToolColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_lockedToolColor, put=__cordl_internal_set_lockedToolColor)) ::UnityEngine::Color  lockedToolColor;

/// @brief Field reactor, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactor, put=__cordl_internal_set_reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  reactor;

/// @brief Field scanner, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_scanner, put=__cordl_internal_set_scanner)) ::UnityW<::GlobalNamespace::IDCardScanner>  scanner;

/// @brief Field selectedToolIndex, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_selectedToolIndex, put=__cordl_internal_set_selectedToolIndex)) int32_t  selectedToolIndex;

/// @brief Field selectedToolUpgrades, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectedToolUpgrades, put=__cordl_internal_set_selectedToolUpgrades)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*  selectedToolUpgrades;

/// @brief Field selectedUpgradeColor, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_selectedUpgradeColor, put=__cordl_internal_set_selectedUpgradeColor)) ::UnityEngine::Color  selectedUpgradeColor;

/// @brief Field selectedUpgradeIndex, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_selectedUpgradeIndex, put=__cordl_internal_set_selectedUpgradeIndex)) int32_t  selectedUpgradeIndex;

/// @brief Field supportedTools, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_supportedTools, put=__cordl_internal_set_supportedTools)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_GRToolType>*  supportedTools;

/// @brief Field toolProgressionManager, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_toolProgressionManager, put=__cordl_internal_set_toolProgressionManager)) ::UnityW<::GlobalNamespace::GRToolProgressionManager>  toolProgressionManager;

/// @brief Field totalTools, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalTools, put=__cordl_internal_set_totalTools)) int32_t  totalTools;

/// @brief Field unlockedToolColor, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_unlockedToolColor, put=__cordl_internal_set_unlockedToolColor)) ::UnityEngine::Color  unlockedToolColor;

/// @brief Field unselectedUpgradeColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_unselectedUpgradeColor, put=__cordl_internal_set_unselectedUpgradeColor)) ::UnityEngine::Color  unselectedUpgradeColor;

/// @brief Method Init, addr 0x58a887c, size 0x188, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::GRToolProgressionManager*  tree, ::GlobalNamespace::GhostReactor*  ghostReactor) ;

/// @brief Method MFDButton0Pressed, addr 0x58a9590, size 0x8, virtual false, abstract: false, final false
inline void MFDButton0Pressed() ;

/// @brief Method MFDButton1Pressed, addr 0x58a9598, size 0x8, virtual false, abstract: false, final false
inline void MFDButton1Pressed() ;

/// @brief Method MFDButton2Pressed, addr 0x58a95a0, size 0x8, virtual false, abstract: false, final false
inline void MFDButton2Pressed() ;

/// @brief Method MFDButton3Pressed, addr 0x58a95a8, size 0x8, virtual false, abstract: false, final false
inline void MFDButton3Pressed() ;

/// @brief Method MFDButton4Pressed, addr 0x58a95b0, size 0x8, virtual false, abstract: false, final false
inline void MFDButton4Pressed() ;

/// @brief Method MFDButton5Pressed, addr 0x58a95b8, size 0x8, virtual false, abstract: false, final false
inline void MFDButton5Pressed() ;

static inline ::GlobalNamespace::GRResearchStation* New_ctor() ;

/// @brief Method NextToolButtonPressed, addr 0x58a95c0, size 0x18, virtual false, abstract: false, final false
inline void NextToolButtonPressed() ;

/// @brief Method PreviousToolButtonPressed, addr 0x58a95d8, size 0x2c, virtual false, abstract: false, final false
inline void PreviousToolButtonPressed() ;

/// @brief Method ResearchCompleted, addr 0x58a969c, size 0x4, virtual false, abstract: false, final false
inline void ResearchCompleted(bool  success, ::StringW  researchID) ;

/// @brief Method ResearchTreeUpdated, addr 0x58a8c7c, size 0x7c, virtual false, abstract: false, final false
inline void ResearchTreeUpdated() ;

/// @brief Method SelectTool, addr 0x58a8a54, size 0x100, virtual false, abstract: false, final false
inline void SelectTool(int32_t  index) ;

/// @brief Method SelectUpgrade, addr 0x58a8b54, size 0x128, virtual false, abstract: false, final false
inline void SelectUpgrade(int32_t  UpgradeIndex) ;

/// @brief Method SetUpgradeTextColors, addr 0x58a94cc, size 0xa4, virtual false, abstract: false, final false
inline void SetUpgradeTextColors(int32_t  index) ;

/// @brief Method UpdateCost, addr 0x58a9314, size 0x154, virtual false, abstract: false, final false
inline void UpdateCost() ;

/// @brief Method UpdateDescriptionText, addr 0x58a9570, size 0x20, virtual false, abstract: false, final false
inline void UpdateDescriptionText(::StringW  description) ;

/// @brief Method UpdateLocked, addr 0x58a8ea8, size 0x278, virtual false, abstract: false, final false
inline void UpdateLocked() ;

/// @brief Method UpdateRequiredLevel, addr 0x58a9120, size 0x1f4, virtual false, abstract: false, final false
inline void UpdateRequiredLevel() ;

/// @brief Method UpdateResearchPoints, addr 0x58a9468, size 0x64, virtual false, abstract: false, final false
inline void UpdateResearchPoints(int32_t  ResearchPoints) ;

/// @brief Method UpdateToolName, addr 0x58a8cf8, size 0xa0, virtual false, abstract: false, final false
inline void UpdateToolName() ;

/// @brief Method UpdateUI, addr 0x58a8a04, size 0x50, virtual false, abstract: false, final false
inline void UpdateUI() ;

/// @brief Method UpdateUpgradeTitles, addr 0x58a8d98, size 0x110, virtual false, abstract: false, final false
inline void UpdateUpgradeTitles() ;

/// @brief Method UpgradeButtonPressed, addr 0x58a9604, size 0x98, virtual false, abstract: false, final false
inline void UpgradeButtonPressed() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_BonusText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_BonusText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_CostText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_CostText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_DescriptionText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_DescriptionText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_LevelText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_LevelText() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>> const& __cordl_internal_get_LockedImage() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>>& __cordl_internal_get_LockedImage() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_RequiredLevelText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_RequiredLevelText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_ResearchPointsTex() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_ResearchPointsTex() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_ToolNameText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_ToolNameText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_UnlockedText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_UnlockedText() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>> const& __cordl_internal_get_UpgradeButton() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>& __cordl_internal_get_UpgradeButton() ;

constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>> const& __cordl_internal_get_UpgradePointerText() const;

constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>>& __cordl_internal_get_UpgradePointerText() ;

constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>> const& __cordl_internal_get_UpgradeTitlesText() const;

constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>>& __cordl_internal_get_UpgradeTitlesText() ;

constexpr ::StringW const& __cordl_internal_get__costString() const;

constexpr ::StringW& __cordl_internal_get__costString() ;

constexpr ::StringW const& __cordl_internal_get__levelString() const;

constexpr ::StringW& __cordl_internal_get__levelString() ;

constexpr ::StringW const& __cordl_internal_get__requiredLevelString() const;

constexpr ::StringW& __cordl_internal_get__requiredLevelString() ;

constexpr ::StringW const& __cordl_internal_get__researchPointsString() const;

constexpr ::StringW& __cordl_internal_get__researchPointsString() ;

constexpr ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode* const& __cordl_internal_get_currentlySelectedToolUpgrade() const;

constexpr ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*& __cordl_internal_get_currentlySelectedToolUpgrade() ;

constexpr ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData* const& __cordl_internal_get_currentlySelectedUpgradeMetadata() const;

constexpr ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*& __cordl_internal_get_currentlySelectedUpgradeMetadata() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_lockedToolColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_lockedToolColor() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get_reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get_reactor() ;

constexpr ::UnityW<::GlobalNamespace::IDCardScanner> const& __cordl_internal_get_scanner() const;

constexpr ::UnityW<::GlobalNamespace::IDCardScanner>& __cordl_internal_get_scanner() ;

constexpr int32_t const& __cordl_internal_get_selectedToolIndex() const;

constexpr int32_t& __cordl_internal_get_selectedToolIndex() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* const& __cordl_internal_get_selectedToolUpgrades() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*& __cordl_internal_get_selectedToolUpgrades() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_selectedUpgradeColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_selectedUpgradeColor() ;

constexpr int32_t const& __cordl_internal_get_selectedUpgradeIndex() const;

constexpr int32_t& __cordl_internal_get_selectedUpgradeIndex() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_GRToolType>* const& __cordl_internal_get_supportedTools() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_GRToolType>*& __cordl_internal_get_supportedTools() ;

constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager> const& __cordl_internal_get_toolProgressionManager() const;

constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager>& __cordl_internal_get_toolProgressionManager() ;

constexpr int32_t const& __cordl_internal_get_totalTools() const;

constexpr int32_t& __cordl_internal_get_totalTools() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_unlockedToolColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_unlockedToolColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_unselectedUpgradeColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_unselectedUpgradeColor() ;

constexpr void __cordl_internal_set_BonusText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_CostText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_DescriptionText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_LevelText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_LockedImage(::ArrayW<::UnityW<::UnityEngine::UI::Image>>  value) ;

constexpr void __cordl_internal_set_RequiredLevelText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_ResearchPointsTex(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_ToolNameText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_UnlockedText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_UpgradeButton(::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>  value) ;

constexpr void __cordl_internal_set_UpgradePointerText(::ArrayW<::UnityW<::TMPro::TMP_Text>>  value) ;

constexpr void __cordl_internal_set_UpgradeTitlesText(::ArrayW<::UnityW<::TMPro::TMP_Text>>  value) ;

constexpr void __cordl_internal_set__costString(::StringW  value) ;

constexpr void __cordl_internal_set__levelString(::StringW  value) ;

constexpr void __cordl_internal_set__requiredLevelString(::StringW  value) ;

constexpr void __cordl_internal_set__researchPointsString(::StringW  value) ;

constexpr void __cordl_internal_set_currentlySelectedToolUpgrade(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*  value) ;

constexpr void __cordl_internal_set_currentlySelectedUpgradeMetadata(::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*  value) ;

constexpr void __cordl_internal_set_lockedToolColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

constexpr void __cordl_internal_set_scanner(::UnityW<::GlobalNamespace::IDCardScanner>  value) ;

constexpr void __cordl_internal_set_selectedToolIndex(int32_t  value) ;

constexpr void __cordl_internal_set_selectedToolUpgrades(::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*  value) ;

constexpr void __cordl_internal_set_selectedUpgradeColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_selectedUpgradeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_supportedTools(::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_GRToolType>*  value) ;

constexpr void __cordl_internal_set_toolProgressionManager(::UnityW<::GlobalNamespace::GRToolProgressionManager>  value) ;

constexpr void __cordl_internal_set_totalTools(int32_t  value) ;

constexpr void __cordl_internal_set_unlockedToolColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_unselectedUpgradeColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x58a96a0, size 0x17c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRResearchStation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRResearchStation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRResearchStation(GRResearchStation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRResearchStation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRResearchStation(GRResearchStation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2018};

/// @brief Field selectedUpgradeColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ___selectedUpgradeColor;

/// @brief Field unselectedUpgradeColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ___unselectedUpgradeColor;

/// @brief Field lockedToolColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ___lockedToolColor;

/// @brief Field unlockedToolColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ___unlockedToolColor;

/// @brief Field selectedUpgradeIndex, offset: 0x60, size: 0x4, def value: None
 int32_t  ___selectedUpgradeIndex;

/// [SerializeField]
/// @brief Field scanner, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::IDCardScanner>  ___scanner;

/// [SerializeField]
/// @brief Field BonusText, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___BonusText;

/// [SerializeField]
/// @brief Field CostText, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___CostText;

/// [SerializeField]
/// @brief Field DescriptionText, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___DescriptionText;

/// [SerializeField]
/// @brief Field LevelText, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___LevelText;

/// [SerializeField]
/// @brief Field ResearchPointsTex, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___ResearchPointsTex;

/// [SerializeField]
/// @brief Field RequiredLevelText, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___RequiredLevelText;

/// [SerializeField]
/// @brief Field ToolNameText, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___ToolNameText;

/// [SerializeField]
/// @brief Field UnlockedText, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___UnlockedText;

/// [SerializeField]
/// @brief Field UpgradePointerText, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::TMPro::TMP_Text>>  ___UpgradePointerText;

/// [SerializeField]
/// @brief Field UpgradeTitlesText, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::TMPro::TMP_Text>>  ___UpgradeTitlesText;

/// [SerializeField]
/// @brief Field LockedImage, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::UI::Image>>  ___LockedImage;

/// [SerializeField]
/// @brief Field UpgradeButton, offset: 0xc8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>  ___UpgradeButton;

/// @brief Field _costString, offset: 0xd0, size: 0x8, def value: None
 ::StringW  ____costString;

/// @brief Field _levelString, offset: 0xd8, size: 0x8, def value: None
 ::StringW  ____levelString;

/// @brief Field _researchPointsString, offset: 0xe0, size: 0x8, def value: None
 ::StringW  ____researchPointsString;

/// @brief Field _requiredLevelString, offset: 0xe8, size: 0x8, def value: None
 ::StringW  ____requiredLevelString;

/// @brief Field selectedToolIndex, offset: 0xf0, size: 0x4, def value: None
 int32_t  ___selectedToolIndex;

/// @brief Field totalTools, offset: 0xf4, size: 0x4, def value: None
 int32_t  ___totalTools;

/// @brief Field toolProgressionManager, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRToolProgressionManager>  ___toolProgressionManager;

/// @brief Field supportedTools, offset: 0x100, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_GRToolType>*  ___supportedTools;

/// @brief Field selectedToolUpgrades, offset: 0x108, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*  ___selectedToolUpgrades;

/// @brief Field currentlySelectedToolUpgrade, offset: 0x110, size: 0x8, def value: None
 ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*  ___currentlySelectedToolUpgrade;

/// @brief Field currentlySelectedUpgradeMetadata, offset: 0x118, size: 0x8, def value: None
 ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*  ___currentlySelectedUpgradeMetadata;

/// @brief Field reactor, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ___reactor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___selectedUpgradeColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___unselectedUpgradeColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___lockedToolColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___unlockedToolColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___selectedUpgradeIndex) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___scanner) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___BonusText) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___CostText) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___DescriptionText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___LevelText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___ResearchPointsTex) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___RequiredLevelText) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___ToolNameText) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___UnlockedText) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___UpgradePointerText) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___UpgradeTitlesText) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___LockedImage) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___UpgradeButton) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ____costString) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ____levelString) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ____researchPointsString) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ____requiredLevelString) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___selectedToolIndex) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___totalTools) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___toolProgressionManager) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___supportedTools) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___selectedToolUpgrades) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___currentlySelectedToolUpgrade) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___currentlySelectedUpgradeMetadata) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRResearchStation, ___reactor) == 0x120, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRResearchStation) == 0x128, "Size mismatch!");

} // namespace end def GlobalNamespace
