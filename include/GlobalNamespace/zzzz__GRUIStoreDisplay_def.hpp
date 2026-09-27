#pragma once
// IWYU pragma private; include "GlobalNamespace/GRUIStoreDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRToolProgressionManager_ToolParts_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager_DrillUpgradeLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GRUIStoreDisplay)
namespace GlobalNamespace {
struct GRToolProgressionManager_ToolParts;
}
namespace GlobalNamespace {
class GRToolProgressionManager;
}
namespace GlobalNamespace {
class GRUIStoreDisplay_GRPurchaseSlot;
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
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class GRUIStoreDisplay;
}
namespace GlobalNamespace {
class GRUIStoreDisplay_GRPurchaseSlot;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRUIStoreDisplay*);
MARK_REF_T(::GlobalNamespace::GRUIStoreDisplay_GRPurchaseSlot*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRUIStoreDisplay*, "", "GRUIStoreDisplay");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRUIStoreDisplay_GRPurchaseSlot*, "", "GRUIStoreDisplay/GRPurchaseSlot");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRUIStoreDisplay
class CORDL_TYPE GRUIStoreDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GRPurchaseSlot = ::GlobalNamespace::GRUIStoreDisplay_GRPurchaseSlot;

/// @brief Field cachedRequiredPartsList, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedRequiredPartsList, put=__cordl_internal_set_cachedRequiredPartsList)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionManager_ToolParts>*  cachedRequiredPartsList;

/// @brief Field colorCanBuyCredits, offset 0x54, size 0x10 
 __declspec(property(get=__cordl_internal_get_colorCanBuyCredits, put=__cordl_internal_set_colorCanBuyCredits)) ::UnityEngine::Color  colorCanBuyCredits;

/// @brief Field colorCanBuyJuice, offset 0x64, size 0x10 
 __declspec(property(get=__cordl_internal_get_colorCanBuyJuice, put=__cordl_internal_set_colorCanBuyJuice)) ::UnityEngine::Color  colorCanBuyJuice;

/// @brief Field colorCantBuy, offset 0x74, size 0x10 
 __declspec(property(get=__cordl_internal_get_colorCantBuy, put=__cordl_internal_set_colorCantBuy)) ::UnityEngine::Color  colorCantBuy;

/// @brief Field colorPurchaseButtonCanAfford, offset 0x44, size 0x10 
 __declspec(property(get=__cordl_internal_get_colorPurchaseButtonCanAfford, put=__cordl_internal_set_colorPurchaseButtonCanAfford)) ::UnityEngine::Color  colorPurchaseButtonCanAfford;

/// @brief Field colorSelectedItem, offset 0x84, size 0x10 
 __declspec(property(get=__cordl_internal_get_colorSelectedItem, put=__cordl_internal_set_colorSelectedItem)) ::UnityEngine::Color  colorSelectedItem;

/// @brief Field colorUnresearchedItem, offset 0xa4, size 0x10 
 __declspec(property(get=__cordl_internal_get_colorUnresearchedItem, put=__cordl_internal_set_colorUnresearchedItem)) ::UnityEngine::Color  colorUnresearchedItem;

/// @brief Field colorUnselectedItem, offset 0x94, size 0x10 
 __declspec(property(get=__cordl_internal_get_colorUnselectedItem, put=__cordl_internal_set_colorUnselectedItem)) ::UnityEngine::Color  colorUnselectedItem;

/// @brief Field colorUnselectedUnresearchedItem, offset 0xb4, size 0x10 
 __declspec(property(get=__cordl_internal_get_colorUnselectedUnresearchedItem, put=__cordl_internal_set_colorUnselectedUnresearchedItem)) ::UnityEngine::Color  colorUnselectedUnresearchedItem;

/// @brief Field playerActorId, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerActorId, put=__cordl_internal_set_playerActorId)) int32_t  playerActorId;

/// @brief Field reactor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactor, put=__cordl_internal_set_reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  reactor;

/// @brief Field scanner, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_scanner, put=__cordl_internal_set_scanner)) ::UnityW<::GlobalNamespace::IDCardScanner>  scanner;

/// @brief Field slot, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_slot, put=__cordl_internal_set_slot)) ::GlobalNamespace::GRUIStoreDisplay_GRPurchaseSlot*  slot;

/// @brief Field toolProgressionManager, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_toolProgressionManager, put=__cordl_internal_set_toolProgressionManager)) ::UnityW<::GlobalNamespace::GRToolProgressionManager>  toolProgressionManager;

/// @brief Method Awake, addr 0x58ee750, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CanLocalPlayerPurchaseItem, addr 0x58ef54c, size 0x18, virtual false, abstract: false, final false
inline bool CanLocalPlayerPurchaseItem() ;

static inline ::GlobalNamespace::GRUIStoreDisplay* New_ctor() ;

/// @brief Method OnBuy, addr 0x58ef30c, size 0x240, virtual false, abstract: false, final false
inline void OnBuy(int32_t  playerActorNumber) ;

/// @brief Method OnDisable, addr 0x58ee75c, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x58ee754, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RefreshItemInfo, addr 0x58ee830, size 0xadc, virtual false, abstract: false, final false
inline void RefreshItemInfo() ;

/// @brief Method RefreshUI, addr 0x58ee758, size 0x4, virtual false, abstract: false, final false
inline void RefreshUI() ;

/// @brief Method Setup, addr 0x58ee760, size 0xcc, virtual false, abstract: false, final false
inline void Setup(int32_t  playerActorId, ::GlobalNamespace::GhostReactor*  reactor) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionManager_ToolParts>* const& __cordl_internal_get_cachedRequiredPartsList() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionManager_ToolParts>*& __cordl_internal_get_cachedRequiredPartsList() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_colorCanBuyCredits() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_colorCanBuyCredits() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_colorCanBuyJuice() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_colorCanBuyJuice() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_colorCantBuy() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_colorCantBuy() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_colorPurchaseButtonCanAfford() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_colorPurchaseButtonCanAfford() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_colorSelectedItem() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_colorSelectedItem() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_colorUnresearchedItem() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_colorUnresearchedItem() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_colorUnselectedItem() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_colorUnselectedItem() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_colorUnselectedUnresearchedItem() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_colorUnselectedUnresearchedItem() ;

constexpr int32_t const& __cordl_internal_get_playerActorId() const;

constexpr int32_t& __cordl_internal_get_playerActorId() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get_reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get_reactor() ;

constexpr ::UnityW<::GlobalNamespace::IDCardScanner> const& __cordl_internal_get_scanner() const;

constexpr ::UnityW<::GlobalNamespace::IDCardScanner>& __cordl_internal_get_scanner() ;

constexpr ::GlobalNamespace::GRUIStoreDisplay_GRPurchaseSlot* const& __cordl_internal_get_slot() const;

constexpr ::GlobalNamespace::GRUIStoreDisplay_GRPurchaseSlot*& __cordl_internal_get_slot() ;

constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager> const& __cordl_internal_get_toolProgressionManager() const;

constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager>& __cordl_internal_get_toolProgressionManager() ;

constexpr void __cordl_internal_set_cachedRequiredPartsList(::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionManager_ToolParts>*  value) ;

constexpr void __cordl_internal_set_colorCanBuyCredits(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_colorCanBuyJuice(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_colorCantBuy(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_colorPurchaseButtonCanAfford(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_colorSelectedItem(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_colorUnresearchedItem(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_colorUnselectedItem(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_colorUnselectedUnresearchedItem(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_playerActorId(int32_t  value) ;

constexpr void __cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

constexpr void __cordl_internal_set_scanner(::UnityW<::GlobalNamespace::IDCardScanner>  value) ;

constexpr void __cordl_internal_set_slot(::GlobalNamespace::GRUIStoreDisplay_GRPurchaseSlot*  value) ;

constexpr void __cordl_internal_set_toolProgressionManager(::UnityW<::GlobalNamespace::GRToolProgressionManager>  value) ;

/// @brief Method .ctor, addr 0x58ef564, size 0x16c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method onProgressionUpdated, addr 0x58ee82c, size 0x4, virtual false, abstract: false, final false
inline void onProgressionUpdated() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRUIStoreDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRUIStoreDisplay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRUIStoreDisplay(GRUIStoreDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRUIStoreDisplay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRUIStoreDisplay(GRUIStoreDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2109};

/// @brief Field scanner, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::IDCardScanner>  ___scanner;

/// @brief Field slot, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::GRUIStoreDisplay_GRPurchaseSlot*  ___slot;

/// @brief Field reactor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ___reactor;

/// @brief Field toolProgressionManager, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRToolProgressionManager>  ___toolProgressionManager;

/// @brief Field playerActorId, offset: 0x40, size: 0x4, def value: None
 int32_t  ___playerActorId;

/// @brief Field colorPurchaseButtonCanAfford, offset: 0x44, size: 0x10, def value: None
 ::UnityEngine::Color  ___colorPurchaseButtonCanAfford;

/// @brief Field colorCanBuyCredits, offset: 0x54, size: 0x10, def value: None
 ::UnityEngine::Color  ___colorCanBuyCredits;

/// @brief Field colorCanBuyJuice, offset: 0x64, size: 0x10, def value: None
 ::UnityEngine::Color  ___colorCanBuyJuice;

/// @brief Field colorCantBuy, offset: 0x74, size: 0x10, def value: None
 ::UnityEngine::Color  ___colorCantBuy;

/// @brief Field colorSelectedItem, offset: 0x84, size: 0x10, def value: None
 ::UnityEngine::Color  ___colorSelectedItem;

/// @brief Field colorUnselectedItem, offset: 0x94, size: 0x10, def value: None
 ::UnityEngine::Color  ___colorUnselectedItem;

/// @brief Field colorUnresearchedItem, offset: 0xa4, size: 0x10, def value: None
 ::UnityEngine::Color  ___colorUnresearchedItem;

/// @brief Field colorUnselectedUnresearchedItem, offset: 0xb4, size: 0x10, def value: None
 ::UnityEngine::Color  ___colorUnselectedUnresearchedItem;

/// @brief Field cachedRequiredPartsList, offset: 0xc8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionManager_ToolParts>*  ___cachedRequiredPartsList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRUIStoreDisplay, ___scanner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIStoreDisplay, ___slot) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIStoreDisplay, ___reactor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIStoreDisplay, ___toolProgressionManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIStoreDisplay, ___playerActorId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIStoreDisplay, ___colorPurchaseButtonCanAfford) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIStoreDisplay, ___colorCanBuyCredits) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIStoreDisplay, ___colorCanBuyJuice) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIStoreDisplay, ___colorCantBuy) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIStoreDisplay, ___colorSelectedItem) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIStoreDisplay, ___colorUnselectedItem) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIStoreDisplay, ___colorUnresearchedItem) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIStoreDisplay, ___colorUnselectedUnresearchedItem) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIStoreDisplay, ___cachedRequiredPartsList) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRUIStoreDisplay) == 0xd0, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GRToolProgressionManager::ToolParts, ProgressionManager::DrillUpgradeLevel, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRUIStoreDisplay/GRPurchaseSlot
class CORDL_TYPE GRUIStoreDisplay_GRPurchaseSlot : public ::System::Object {
public:
// Declarations
/// @brief Field Description, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Description, put=__cordl_internal_set_Description)) ::UnityW<::TMPro::TMP_Text>  Description;

/// @brief Field Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::UnityW<::TMPro::TMP_Text>  Name;

/// @brief Field Price, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Price, put=__cordl_internal_set_Price)) ::UnityW<::TMPro::TMP_Text>  Price;

/// @brief Field PurchaseID, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_PurchaseID, put=__cordl_internal_set_PurchaseID)) ::GlobalNamespace::GRToolProgressionManager_ToolParts  PurchaseID;

/// @brief Field canAfford, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_canAfford, put=__cordl_internal_set_canAfford)) bool  canAfford;

/// @brief Field drillUpgradeLevel, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_drillUpgradeLevel, put=__cordl_internal_set_drillUpgradeLevel)) ::GlobalNamespace::ProgressionManager_DrillUpgradeLevel  drillUpgradeLevel;

/// @brief Field overrideMaterial, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_overrideMaterial, put=__cordl_internal_set_overrideMaterial)) ::UnityW<::UnityEngine::Material>  overrideMaterial;

/// @brief Field purchaseText, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseText, put=__cordl_internal_set_purchaseText)) ::StringW  purchaseText;

static inline ::GlobalNamespace::GRUIStoreDisplay_GRPurchaseSlot* New_ctor() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_Description() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_Description() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_Name() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_Name() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_Price() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_Price() ;

constexpr ::GlobalNamespace::GRToolProgressionManager_ToolParts const& __cordl_internal_get_PurchaseID() const;

constexpr ::GlobalNamespace::GRToolProgressionManager_ToolParts& __cordl_internal_get_PurchaseID() ;

constexpr bool const& __cordl_internal_get_canAfford() const;

constexpr bool& __cordl_internal_get_canAfford() ;

constexpr ::GlobalNamespace::ProgressionManager_DrillUpgradeLevel const& __cordl_internal_get_drillUpgradeLevel() const;

constexpr ::GlobalNamespace::ProgressionManager_DrillUpgradeLevel& __cordl_internal_get_drillUpgradeLevel() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_overrideMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_overrideMaterial() ;

constexpr ::StringW const& __cordl_internal_get_purchaseText() const;

constexpr ::StringW& __cordl_internal_get_purchaseText() ;

constexpr void __cordl_internal_set_Description(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_Name(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_Price(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_PurchaseID(::GlobalNamespace::GRToolProgressionManager_ToolParts  value) ;

constexpr void __cordl_internal_set_canAfford(bool  value) ;

constexpr void __cordl_internal_set_drillUpgradeLevel(::GlobalNamespace::ProgressionManager_DrillUpgradeLevel  value) ;

constexpr void __cordl_internal_set_overrideMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_purchaseText(::StringW  value) ;

/// @brief Method .ctor, addr 0x58ef6d0, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRUIStoreDisplay_GRPurchaseSlot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRUIStoreDisplay_GRPurchaseSlot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRUIStoreDisplay_GRPurchaseSlot(GRUIStoreDisplay_GRPurchaseSlot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRUIStoreDisplay_GRPurchaseSlot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRUIStoreDisplay_GRPurchaseSlot(GRUIStoreDisplay_GRPurchaseSlot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2108};

/// @brief Field Name, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___Name;

/// @brief Field Price, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___Price;

/// @brief Field Description, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___Description;

/// @brief Field PurchaseID, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::GRToolProgressionManager_ToolParts  ___PurchaseID;

/// @brief Field overrideMaterial, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___overrideMaterial;

/// @brief Field canAfford, offset: 0x38, size: 0x1, def value: None
 bool  ___canAfford;

/// @brief Field purchaseText, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___purchaseText;

/// @brief Field drillUpgradeLevel, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::ProgressionManager_DrillUpgradeLevel  ___drillUpgradeLevel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRUIStoreDisplay_GRPurchaseSlot, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIStoreDisplay_GRPurchaseSlot, ___Price) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIStoreDisplay_GRPurchaseSlot, ___Description) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIStoreDisplay_GRPurchaseSlot, ___PurchaseID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIStoreDisplay_GRPurchaseSlot, ___overrideMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIStoreDisplay_GRPurchaseSlot, ___canAfford) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIStoreDisplay_GRPurchaseSlot, ___purchaseText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIStoreDisplay_GRPurchaseSlot, ___drillUpgradeLevel) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRUIStoreDisplay_GRPurchaseSlot) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
