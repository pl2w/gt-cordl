#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolUpgradeStation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRToolUpgradeStation_UpgradeStationState_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_GRToolType_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRToolUpgradeStation)
namespace GlobalNamespace {
class GRToolProgressionManager;
}
namespace GlobalNamespace {
class GRToolProgressionTree_GRToolProgressionNode;
}
namespace GlobalNamespace {
struct GRToolUpgradeStation_UpgradeStationState;
}
namespace GlobalNamespace {
class GRTool;
}
namespace GlobalNamespace {
struct GameEntityId;
}
namespace GlobalNamespace {
class GameEntity;
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
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRToolUpgradeStation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRToolUpgradeStation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolUpgradeStation*, "", "GRToolUpgradeStation");
// Dependencies GRTool::GRToolType, GRToolUpgradeStation::UpgradeStationState, GorillaPressableButton, TMPro.TMP_Text, UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.UI.Image, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRToolUpgradeStation
class CORDL_TYPE GRToolUpgradeStation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using UpgradeStationState = ::GlobalNamespace::GRToolUpgradeStation_UpgradeStationState;

/// @brief Field CostText, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_CostText, put=__cordl_internal_set_CostText)) ::UnityW<::TMPro::TMP_Text>  CostText;

/// @brief Field DescriptionText, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_DescriptionText, put=__cordl_internal_set_DescriptionText)) ::UnityW<::TMPro::TMP_Text>  DescriptionText;

/// @brief Field IDCardScanner, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_IDCardScanner, put=__cordl_internal_set_IDCardScanner)) ::UnityW<::GlobalNamespace::IDCardScanner>  IDCardScanner;

/// @brief Field MFD_ButtonTexts, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_MFD_ButtonTexts, put=__cordl_internal_set_MFD_ButtonTexts)) ::ArrayW<::UnityW<::TMPro::TMP_Text>>  MFD_ButtonTexts;

/// @brief Field ToolNameText, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ToolNameText, put=__cordl_internal_set_ToolNameText)) ::UnityW<::TMPro::TMP_Text>  ToolNameText;

/// @brief Field UpgradeButtons, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_UpgradeButtons, put=__cordl_internal_set_UpgradeButtons)) ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>  UpgradeButtons;

/// @brief Field UpgradeLockedImage, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_UpgradeLockedImage, put=__cordl_internal_set_UpgradeLockedImage)) ::ArrayW<::UnityW<::UnityEngine::UI::Image>>  UpgradeLockedImage;

/// @brief Field UpgradeTitlesText, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_UpgradeTitlesText, put=__cordl_internal_set_UpgradeTitlesText)) ::ArrayW<::UnityW<::TMPro::TMP_Text>>  UpgradeTitlesText;

/// @brief Field _reactor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__reactor, put=__cordl_internal_set__reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  _reactor;

/// @brief Field attachedItem, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachedItem, put=__cordl_internal_set_attachedItem)) ::UnityW<::GlobalNamespace::GameEntity>  attachedItem;

/// @brief Field bIsToolInserted, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_bIsToolInserted, put=__cordl_internal_set_bIsToolInserted)) bool  bIsToolInserted;

 __declspec(property(get=get_canInsertTool)) bool  canInsertTool;

/// @brief Field currentState, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::GRToolUpgradeStation_UpgradeStationState  currentState;

/// @brief Field defaultCostText, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultCostText, put=__cordl_internal_set_defaultCostText)) ::StringW  defaultCostText;

/// @brief Field depositedLocation, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_depositedLocation, put=__cordl_internal_set_depositedLocation)) ::UnityW<::UnityEngine::Transform>  depositedLocation;

/// @brief Field ejectionTransform, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_ejectionTransform, put=__cordl_internal_set_ejectionTransform)) ::UnityW<::UnityEngine::Transform>  ejectionTransform;

/// @brief Field ejectionVelocity, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_ejectionVelocity, put=__cordl_internal_set_ejectionVelocity)) float_t  ejectionVelocity;

/// @brief Field insertedTool, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_insertedTool, put=__cordl_internal_set_insertedTool)) ::UnityW<::GlobalNamespace::GRTool>  insertedTool;

/// @brief Field insertedToolEntity, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_insertedToolEntity, put=__cordl_internal_set_insertedToolEntity)) ::UnityW<::GlobalNamespace::GameEntity>  insertedToolEntity;

/// @brief Field insertedToolType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_insertedToolType, put=__cordl_internal_set_insertedToolType)) ::GlobalNamespace::GRTool_GRToolType  insertedToolType;

/// @brief Field lockedColor, offset 0x9c, size 0x10 
 __declspec(property(get=__cordl_internal_get_lockedColor, put=__cordl_internal_set_lockedColor)) ::UnityEngine::Color  lockedColor;

/// @brief Field rotationAnimation, offset 0x120, size 0xc 
 __declspec(property(get=__cordl_internal_get_rotationAnimation, put=__cordl_internal_set_rotationAnimation)) ::UnityEngine::Vector3  rotationAnimation;

/// @brief Field selectedColor, offset 0x7c, size 0x10 
 __declspec(property(get=__cordl_internal_get_selectedColor, put=__cordl_internal_set_selectedColor)) ::UnityEngine::Color  selectedColor;

/// @brief Field selectedToolUpgrades, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectedToolUpgrades, put=__cordl_internal_set_selectedToolUpgrades)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*  selectedToolUpgrades;

/// @brief Field selectedUpgradeIndex, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_selectedUpgradeIndex, put=__cordl_internal_set_selectedUpgradeIndex)) int32_t  selectedUpgradeIndex;

/// @brief Field startingLocation, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_startingLocation, put=__cordl_internal_set_startingLocation)) ::UnityW<::UnityEngine::Transform>  startingLocation;

/// @brief Field toolProgressionManager, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_toolProgressionManager, put=__cordl_internal_set_toolProgressionManager)) ::UnityW<::GlobalNamespace::GRToolProgressionManager>  toolProgressionManager;

/// @brief Field unSelectedColor, offset 0x8c, size 0x10 
 __declspec(property(get=__cordl_internal_get_unSelectedColor, put=__cordl_internal_set_unSelectedColor)) ::UnityEngine::Color  unSelectedColor;

/// @brief Field unlockedColor, offset 0xac, size 0x10 
 __declspec(property(get=__cordl_internal_get_unlockedColor, put=__cordl_internal_set_unlockedColor)) ::UnityEngine::Color  unlockedColor;

/// @brief Field upgradeAnimationLength, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgradeAnimationLength, put=__cordl_internal_set_upgradeAnimationLength)) double_t  upgradeAnimationLength;

/// @brief Field upgradeStartTime, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgradeStartTime, put=__cordl_internal_set_upgradeStartTime)) double_t  upgradeStartTime;

/// @brief Field upgradingLocation, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgradingLocation, put=__cordl_internal_set_upgradingLocation)) ::UnityW<::UnityEngine::Transform>  upgradingLocation;

/// @brief Method CompleteUpgrade, addr 0x58d0874, size 0x20, virtual false, abstract: false, final false
inline void CompleteUpgrade() ;

/// @brief Method EjectToolFromEnd, addr 0x58d0d10, size 0x288, virtual false, abstract: false, final false
inline void EjectToolFromEnd() ;

/// @brief Method EjectToolFromStart, addr 0x58d0f98, size 0x290, virtual false, abstract: false, final false
inline void EjectToolFromStart() ;

/// @brief Method Init, addr 0x58cf580, size 0xf0, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::GRToolProgressionManager*  tree, ::GlobalNamespace::GhostReactor*  reactor) ;

/// @brief Method LocalPlacedToolInUpgradeStation, addr 0x58cfd68, size 0x1b0, virtual false, abstract: false, final false
inline void LocalPlacedToolInUpgradeStation(::GlobalNamespace::GameEntityId  entityId) ;

/// @brief Method MoveItemToUpgradeSlot, addr 0x58d0adc, size 0x234, virtual false, abstract: false, final false
inline void MoveItemToUpgradeSlot() ;

/// @brief Method MoveToolToFinished, addr 0x58d0894, size 0x248, virtual false, abstract: false, final false
inline void MoveToolToFinished() ;

static inline ::GlobalNamespace::GRToolUpgradeStation* New_ctor() ;

/// @brief Method PayForUpgrade, addr 0x58d05ac, size 0x1c4, virtual false, abstract: false, final false
inline void PayForUpgrade(int32_t  Player) ;

/// @brief Method PositionInsertedTool, addr 0x58d036c, size 0x240, virtual false, abstract: false, final false
inline void PositionInsertedTool(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method ResearchTreeUpdated, addr 0x58cf86c, size 0x18, virtual false, abstract: false, final false
inline void ResearchTreeUpdated() ;

/// @brief Method ResetScreen, addr 0x58cf670, size 0x1dc, virtual false, abstract: false, final false
inline void ResetScreen() ;

/// @brief Method SelectUpgrade, addr 0x58cfa00, size 0x368, virtual false, abstract: false, final false
inline void SelectUpgrade(int32_t  index) ;

/// @brief Method StartUpgrade, addr 0x58d0770, size 0x104, virtual false, abstract: false, final false
inline void StartUpgrade(double_t  startTime) ;

/// @brief Method ToolInserted, addr 0x58cf944, size 0xbc, virtual false, abstract: false, final false
inline void ToolInserted(::GlobalNamespace::GRTool*  tool) ;

/// @brief Method UnlockAllUpgrades, addr 0x58d02d4, size 0x4, virtual false, abstract: false, final false
inline void UnlockAllUpgrades() ;

/// @brief Method Update, addr 0x58cf89c, size 0x74, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateSelectedUpgrade, addr 0x58d0048, size 0x28c, virtual false, abstract: false, final false
inline void UpdateSelectedUpgrade() ;

/// @brief Method UpdateUI, addr 0x58cf884, size 0x18, virtual false, abstract: false, final false
inline void UpdateUI() ;

/// @brief Method UpdateUpgradeTexts, addr 0x58cff18, size 0x130, virtual false, abstract: false, final false
inline void UpdateUpgradeTexts() ;

/// @brief Method UpgradeTool, addr 0x58d02d8, size 0x94, virtual false, abstract: false, final false
inline void UpgradeTool() ;

/// @brief Method UpgradingUpdate, addr 0x58cf910, size 0x34, virtual false, abstract: false, final false
inline void UpgradingUpdate(double_t  currentTime) ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_CostText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_CostText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_DescriptionText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_DescriptionText() ;

constexpr ::UnityW<::GlobalNamespace::IDCardScanner> const& __cordl_internal_get_IDCardScanner() const;

constexpr ::UnityW<::GlobalNamespace::IDCardScanner>& __cordl_internal_get_IDCardScanner() ;

constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>> const& __cordl_internal_get_MFD_ButtonTexts() const;

constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>>& __cordl_internal_get_MFD_ButtonTexts() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_ToolNameText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_ToolNameText() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>> const& __cordl_internal_get_UpgradeButtons() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>& __cordl_internal_get_UpgradeButtons() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>> const& __cordl_internal_get_UpgradeLockedImage() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>>& __cordl_internal_get_UpgradeLockedImage() ;

constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>> const& __cordl_internal_get_UpgradeTitlesText() const;

constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>>& __cordl_internal_get_UpgradeTitlesText() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get__reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get__reactor() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_attachedItem() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_attachedItem() ;

constexpr bool const& __cordl_internal_get_bIsToolInserted() const;

constexpr bool& __cordl_internal_get_bIsToolInserted() ;

constexpr ::GlobalNamespace::GRToolUpgradeStation_UpgradeStationState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::GRToolUpgradeStation_UpgradeStationState& __cordl_internal_get_currentState() ;

constexpr ::StringW const& __cordl_internal_get_defaultCostText() const;

constexpr ::StringW& __cordl_internal_get_defaultCostText() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_depositedLocation() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_depositedLocation() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_ejectionTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_ejectionTransform() ;

constexpr float_t const& __cordl_internal_get_ejectionVelocity() const;

constexpr float_t& __cordl_internal_get_ejectionVelocity() ;

constexpr ::UnityW<::GlobalNamespace::GRTool> const& __cordl_internal_get_insertedTool() const;

constexpr ::UnityW<::GlobalNamespace::GRTool>& __cordl_internal_get_insertedTool() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_insertedToolEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_insertedToolEntity() ;

constexpr ::GlobalNamespace::GRTool_GRToolType const& __cordl_internal_get_insertedToolType() const;

constexpr ::GlobalNamespace::GRTool_GRToolType& __cordl_internal_get_insertedToolType() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_lockedColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_lockedColor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotationAnimation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotationAnimation() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_selectedColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_selectedColor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* const& __cordl_internal_get_selectedToolUpgrades() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*& __cordl_internal_get_selectedToolUpgrades() ;

constexpr int32_t const& __cordl_internal_get_selectedUpgradeIndex() const;

constexpr int32_t& __cordl_internal_get_selectedUpgradeIndex() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_startingLocation() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_startingLocation() ;

constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager> const& __cordl_internal_get_toolProgressionManager() const;

constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager>& __cordl_internal_get_toolProgressionManager() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_unSelectedColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_unSelectedColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_unlockedColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_unlockedColor() ;

constexpr double_t const& __cordl_internal_get_upgradeAnimationLength() const;

constexpr double_t& __cordl_internal_get_upgradeAnimationLength() ;

constexpr double_t const& __cordl_internal_get_upgradeStartTime() const;

constexpr double_t& __cordl_internal_get_upgradeStartTime() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_upgradingLocation() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_upgradingLocation() ;

constexpr void __cordl_internal_set_CostText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_DescriptionText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_IDCardScanner(::UnityW<::GlobalNamespace::IDCardScanner>  value) ;

constexpr void __cordl_internal_set_MFD_ButtonTexts(::ArrayW<::UnityW<::TMPro::TMP_Text>>  value) ;

constexpr void __cordl_internal_set_ToolNameText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_UpgradeButtons(::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>  value) ;

constexpr void __cordl_internal_set_UpgradeLockedImage(::ArrayW<::UnityW<::UnityEngine::UI::Image>>  value) ;

constexpr void __cordl_internal_set_UpgradeTitlesText(::ArrayW<::UnityW<::TMPro::TMP_Text>>  value) ;

constexpr void __cordl_internal_set__reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

constexpr void __cordl_internal_set_attachedItem(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_bIsToolInserted(bool  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::GRToolUpgradeStation_UpgradeStationState  value) ;

constexpr void __cordl_internal_set_defaultCostText(::StringW  value) ;

constexpr void __cordl_internal_set_depositedLocation(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_ejectionTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_ejectionVelocity(float_t  value) ;

constexpr void __cordl_internal_set_insertedTool(::UnityW<::GlobalNamespace::GRTool>  value) ;

constexpr void __cordl_internal_set_insertedToolEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_insertedToolType(::GlobalNamespace::GRTool_GRToolType  value) ;

constexpr void __cordl_internal_set_lockedColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_rotationAnimation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_selectedColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_selectedToolUpgrades(::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*  value) ;

constexpr void __cordl_internal_set_selectedUpgradeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_startingLocation(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_toolProgressionManager(::UnityW<::GlobalNamespace::GRToolProgressionManager>  value) ;

constexpr void __cordl_internal_set_unSelectedColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_unlockedColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_upgradeAnimationLength(double_t  value) ;

constexpr void __cordl_internal_set_upgradeStartTime(double_t  value) ;

constexpr void __cordl_internal_set_upgradingLocation(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x58d1228, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_canInsertTool, addr 0x58cf84c, size 0x20, virtual false, abstract: false, final false
inline bool get_canInsertTool() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRToolUpgradeStation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRToolUpgradeStation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRToolUpgradeStation(GRToolUpgradeStation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRToolUpgradeStation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRToolUpgradeStation(GRToolUpgradeStation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2095};

/// @brief Field insertedTool, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRTool>  ___insertedTool;

/// @brief Field insertedToolType, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::GRTool_GRToolType  ___insertedToolType;

/// @brief Field insertedToolEntity, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___insertedToolEntity;

/// @brief Field _reactor, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ____reactor;

/// @brief Field toolProgressionManager, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRToolProgressionManager>  ___toolProgressionManager;

/// @brief Field selectedToolUpgrades, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*  ___selectedToolUpgrades;

/// @brief Field bIsToolInserted, offset: 0x50, size: 0x1, def value: None
 bool  ___bIsToolInserted;

/// @brief Field startingLocation, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___startingLocation;

/// @brief Field upgradingLocation, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___upgradingLocation;

/// @brief Field depositedLocation, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___depositedLocation;

/// @brief Field ejectionTransform, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___ejectionTransform;

/// @brief Field ejectionVelocity, offset: 0x78, size: 0x4, def value: None
 float_t  ___ejectionVelocity;

/// @brief Field selectedColor, offset: 0x7c, size: 0x10, def value: None
 ::UnityEngine::Color  ___selectedColor;

/// @brief Field unSelectedColor, offset: 0x8c, size: 0x10, def value: None
 ::UnityEngine::Color  ___unSelectedColor;

/// @brief Field lockedColor, offset: 0x9c, size: 0x10, def value: None
 ::UnityEngine::Color  ___lockedColor;

/// @brief Field unlockedColor, offset: 0xac, size: 0x10, def value: None
 ::UnityEngine::Color  ___unlockedColor;

/// @brief Field UpgradeTitlesText, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::TMPro::TMP_Text>>  ___UpgradeTitlesText;

/// @brief Field MFD_ButtonTexts, offset: 0xc8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::TMPro::TMP_Text>>  ___MFD_ButtonTexts;

/// @brief Field UpgradeButtons, offset: 0xd0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>  ___UpgradeButtons;

/// @brief Field UpgradeLockedImage, offset: 0xd8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::UI::Image>>  ___UpgradeLockedImage;

/// @brief Field ToolNameText, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___ToolNameText;

/// @brief Field DescriptionText, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___DescriptionText;

/// @brief Field CostText, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___CostText;

/// @brief Field defaultCostText, offset: 0xf8, size: 0x8, def value: None
 ::StringW  ___defaultCostText;

/// @brief Field IDCardScanner, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::IDCardScanner>  ___IDCardScanner;

/// @brief Field selectedUpgradeIndex, offset: 0x108, size: 0x4, def value: None
 int32_t  ___selectedUpgradeIndex;

/// @brief Field upgradeStartTime, offset: 0x110, size: 0x8, def value: None
 double_t  ___upgradeStartTime;

/// @brief Field upgradeAnimationLength, offset: 0x118, size: 0x8, def value: None
 double_t  ___upgradeAnimationLength;

/// @brief Field rotationAnimation, offset: 0x120, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rotationAnimation;

/// @brief Field currentState, offset: 0x12c, size: 0x4, def value: None
 ::GlobalNamespace::GRToolUpgradeStation_UpgradeStationState  ___currentState;

/// @brief Field attachedItem, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___attachedItem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___insertedTool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___insertedToolType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___insertedToolEntity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ____reactor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___toolProgressionManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___selectedToolUpgrades) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___bIsToolInserted) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___startingLocation) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___upgradingLocation) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___depositedLocation) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___ejectionTransform) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___ejectionVelocity) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___selectedColor) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___unSelectedColor) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___lockedColor) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___unlockedColor) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___UpgradeTitlesText) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___MFD_ButtonTexts) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___UpgradeButtons) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___UpgradeLockedImage) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___ToolNameText) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___DescriptionText) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___CostText) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___defaultCostText) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___IDCardScanner) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___selectedUpgradeIndex) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___upgradeStartTime) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___upgradeAnimationLength) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___rotationAnimation) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___currentState) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradeStation, ___attachedItem) == 0x130, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolUpgradeStation) == 0x138, "Size mismatch!");

} // namespace end def GlobalNamespace
