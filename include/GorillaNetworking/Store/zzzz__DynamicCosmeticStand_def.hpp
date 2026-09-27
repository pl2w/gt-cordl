#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/DynamicCosmeticStand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicCosmeticStand)
namespace GlobalNamespace {
struct CosmeticsController_CosmeticItem;
}
namespace GlobalNamespace {
struct DynamicCosmeticStand__AsyncAddStandToStoreController_d__30;
}
namespace GlobalNamespace {
struct GTObjectPlaceholder_ECustomMapCosmeticItem;
}
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace GlobalNamespace {
struct HeadModel_CosmeticStand_BustType;
}
namespace GlobalNamespace {
class iFlagForBaking;
}
namespace GorillaNetworking::Store {
class DynamicCosmeticStand__ConnectToStoreController_d__29;
}
namespace GorillaNetworking::Store {
class DynamicCosmeticStand__SetStandPriceCoroutine_d__40;
}
namespace GorillaNetworking::Store {
class HeadModel_CosmeticStand;
}
namespace GorillaNetworking::Store {
class StoreDepartment;
}
namespace GorillaNetworking::Store {
class StoreDisplay;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class WaitForSeconds;
}
// Forward declare root types
namespace GorillaNetworking::Store {
class DynamicCosmeticStand;
}
namespace GorillaNetworking::Store {
class DynamicCosmeticStand__ConnectToStoreController_d__29;
}
namespace GorillaNetworking::Store {
class DynamicCosmeticStand__SetStandPriceCoroutine_d__40;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::Store::DynamicCosmeticStand*);
MARK_REF_T(::GorillaNetworking::Store::DynamicCosmeticStand__ConnectToStoreController_d__29*);
MARK_REF_T(::GorillaNetworking::Store::DynamicCosmeticStand__SetStandPriceCoroutine_d__40*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::DynamicCosmeticStand*, "GorillaNetworking.Store", "DynamicCosmeticStand");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::DynamicCosmeticStand__ConnectToStoreController_d__29*, "GorillaNetworking.Store", "DynamicCosmeticStand/<ConnectToStoreController>d__29");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::DynamicCosmeticStand__SetStandPriceCoroutine_d__40*, "GorillaNetworking.Store", "DynamicCosmeticStand/<SetStandPriceCoroutine>d__40");
// Dependencies GorillaNetworking.CosmeticsController::CosmeticItem, UnityEngine.MonoBehaviour, UnityEngine.SceneManagement.Scene
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.DynamicCosmeticStand
class CORDL_TYPE DynamicCosmeticStand : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _AsyncAddStandToStoreController_d__30 = ::GlobalNamespace::DynamicCosmeticStand__AsyncAddStandToStoreController_d__30;

using _ConnectToStoreController_d__29 = ::GorillaNetworking::Store::DynamicCosmeticStand__ConnectToStoreController_d__29;

using _SetStandPriceCoroutine_d__40 = ::GorillaNetworking::Store::DynamicCosmeticStand__SetStandPriceCoroutine_d__40;

/// @brief Field AddToCartButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_AddToCartButton, put=__cordl_internal_set_AddToCartButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  AddToCartButton;

/// @brief Field DisplayHeadModel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayHeadModel, put=__cordl_internal_set_DisplayHeadModel)) ::UnityW<::GorillaNetworking::Store::HeadModel_CosmeticStand>  DisplayHeadModel;

/// @brief Field GorillaHeadModel, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_GorillaHeadModel, put=__cordl_internal_set_GorillaHeadModel)) ::UnityW<::UnityEngine::GameObject>  GorillaHeadModel;

/// @brief Field GorillaMannequinModel, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_GorillaMannequinModel, put=__cordl_internal_set_GorillaMannequinModel)) ::UnityW<::UnityEngine::GameObject>  GorillaMannequinModel;

/// @brief Field GorillaTorsoModel, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_GorillaTorsoModel, put=__cordl_internal_set_GorillaTorsoModel)) ::UnityW<::UnityEngine::GameObject>  GorillaTorsoModel;

/// @brief Field GorillaTorsoPostModel, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_GorillaTorsoPostModel, put=__cordl_internal_set_GorillaTorsoPostModel)) ::UnityW<::UnityEngine::GameObject>  GorillaTorsoPostModel;

/// @brief Field GuitarStandModel, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_GuitarStandModel, put=__cordl_internal_set_GuitarStandModel)) ::UnityW<::UnityEngine::GameObject>  GuitarStandModel;

/// @brief Field GuitarStandMount, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_GuitarStandMount, put=__cordl_internal_set_GuitarStandMount)) ::UnityW<::UnityEngine::GameObject>  GuitarStandMount;

/// @brief Field JeweleryBoxModel, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_JeweleryBoxModel, put=__cordl_internal_set_JeweleryBoxModel)) ::UnityW<::UnityEngine::GameObject>  JeweleryBoxModel;

/// @brief Field JeweleryBoxMount, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_JeweleryBoxMount, put=__cordl_internal_set_JeweleryBoxMount)) ::UnityW<::UnityEngine::GameObject>  JeweleryBoxMount;

/// @brief Field PinDisplayMount, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_PinDisplayMount, put=__cordl_internal_set_PinDisplayMount)) ::UnityW<::UnityEngine::GameObject>  PinDisplayMount;

/// @brief Field StandName, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_StandName, put=__cordl_internal_set_StandName)) ::StringW  StandName;

/// @brief Field TableMount, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_TableMount, put=__cordl_internal_set_TableMount)) ::UnityW<::UnityEngine::GameObject>  TableMount;

/// @brief Field TagEffectDisplayMount, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_TagEffectDisplayMount, put=__cordl_internal_set_TagEffectDisplayMount)) ::UnityW<::UnityEngine::GameObject>  TagEffectDisplayMount;

/// @brief Field TageEffectDisplayModel, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_TageEffectDisplayModel, put=__cordl_internal_set_TageEffectDisplayModel)) ::UnityW<::UnityEngine::GameObject>  TageEffectDisplayModel;

/// @brief Field _thisCosmeticName, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__thisCosmeticName, put=__cordl_internal_set__thisCosmeticName)) ::StringW  _thisCosmeticName;

/// @brief Field addToCartText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_addToCartText, put=__cordl_internal_set_addToCartText)) ::UnityW<::UnityEngine::UI::Text>  addToCartText;

/// @brief Field addToCartTextTMP, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_addToCartTextTMP, put=__cordl_internal_set_addToCartTextTMP)) ::UnityW<::TMPro::TMP_Text>  addToCartTextTMP;

/// @brief Field customMapScene, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get_customMapScene, put=__cordl_internal_set_customMapScene)) ::UnityEngine::SceneManagement::Scene  customMapScene;

/// @brief Field parentDepartment, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentDepartment, put=__cordl_internal_set_parentDepartment)) ::UnityW<::GorillaNetworking::Store::StoreDepartment>  parentDepartment;

/// @brief Field parentDisplay, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentDisplay, put=__cordl_internal_set_parentDisplay)) ::UnityW<::GorillaNetworking::Store::StoreDisplay>  parentDisplay;

/// @brief Field root, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_root, put=__cordl_internal_set_root)) ::UnityW<::UnityEngine::GameObject>  root;

/// @brief Field searchIndex, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get_searchIndex, put=__cordl_internal_set_searchIndex)) int32_t  searchIndex;

/// @brief Field slotPriceText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_slotPriceText, put=__cordl_internal_set_slotPriceText)) ::UnityW<::UnityEngine::UI::Text>  slotPriceText;

/// @brief Field slotPriceTextTMP, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_slotPriceTextTMP, put=__cordl_internal_set_slotPriceTextTMP)) ::UnityW<::TMPro::TMP_Text>  slotPriceTextTMP;

/// @brief Field thisCosmeticItem, offset 0x50, size 0x98 
 __declspec(property(get=__cordl_internal_get_thisCosmeticItem, put=__cordl_internal_set_thisCosmeticItem)) ::GlobalNamespace::CosmeticsController_CosmeticItem  thisCosmeticItem;

 __declspec(property(get=get_thisCosmeticName, put=set_thisCosmeticName)) ::StringW  thisCosmeticName;

/// @brief Field wait, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_wait, put=__cordl_internal_set_wait)) ::UnityEngine::WaitForSeconds*  wait;

/// @brief Convert operator to "::GlobalNamespace::iFlagForBaking"
constexpr operator  ::GlobalNamespace::iFlagForBaking*() noexcept;

/// @brief Method AddStandToStoreController, addr 0x5ca9398, size 0xd8, virtual false, abstract: false, final false
inline void AddStandToStoreController() ;

/// @brief Method AssignCosmeticItem, addr 0x5cab020, size 0x100, virtual false, abstract: false, final false
inline void AssignCosmeticItem() ;

/// [AsyncStateMachine(typeof(GorillaNetworking.Store.DynamicCosmeticStand::<AsyncAddStandToStoreController>d__30))]
/// @brief Method AsyncAddStandToStoreController, addr 0x5ca9878, size 0xa8, virtual false, abstract: false, final false
inline void AsyncAddStandToStoreController() ;

/// @brief Method ClearCosmetics, addr 0x5cab8bc, size 0x6c, virtual false, abstract: false, final false
inline void ClearCosmetics() ;

/// [IteratorStateMachine(typeof(GorillaNetworking.Store.DynamicCosmeticStand::<ConnectToStoreController>d__29))]
/// @brief Method ConnectToStoreController, addr 0x5ca97e4, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ConnectToStoreController() ;

/// @brief Method CopyChildsName, addr 0x5cabf94, size 0xfc, virtual false, abstract: false, final false
inline void CopyChildsName() ;

/// @brief Method InitializeCosmetic, addr 0x5caa1e4, size 0x114, virtual false, abstract: false, final false
inline void InitializeCosmetic() ;

/// @brief Method InitializeForCustomMapCosmeticItem, addr 0x5caccf8, size 0x140, virtual false, abstract: false, final false
inline void InitializeForCustomMapCosmeticItem(::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem  cosmeticItemSlot, ::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method IsFromCustomMapScene, addr 0x5cace38, size 0x10, virtual false, abstract: false, final false
inline bool IsFromCustomMapScene(::UnityEngine::SceneManagement::Scene  scene) ;

static inline ::GorillaNetworking::Store::DynamicCosmeticStand* New_ctor() ;

/// @brief Method OnDisable, addr 0x5ca9470, size 0x1ac, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5ca91ec, size 0x1ac, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PressCosmeticStandButton, addr 0x5cac090, size 0x958, virtual false, abstract: false, final false
inline void PressCosmeticStandButton() ;

/// @brief Method RefreshPurchaseGate, addr 0x5cab298, size 0x344, virtual false, abstract: false, final false
inline void RefreshPurchaseGate() ;

/// @brief Method RemoveStandFromStoreController, addr 0x5ca961c, size 0xfc, virtual false, abstract: false, final false
inline void RemoveStandFromStoreController() ;

/// @brief Method SetForBaking, addr 0x5ca9144, size 0xa8, virtual true, abstract: false, final false
inline void SetForBaking() ;

/// @brief Method SetForGame, addr 0x5caa6d8, size 0xc0, virtual true, abstract: false, final false
inline void SetForGame() ;

/// @brief Method SetSlotPriceText, addr 0x5cab120, size 0x10c, virtual false, abstract: false, final false
inline void SetSlotPriceText() ;

/// [IteratorStateMachine(typeof(GorillaNetworking.Store.DynamicCosmeticStand::<SetStandPriceCoroutine>d__40))]
/// @brief Method SetStandPriceCoroutine, addr 0x5cab22c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SetStandPriceCoroutine() ;

/// @brief Method SetStandType, addr 0x5caa798, size 0x878, virtual false, abstract: false, final false
inline void SetStandType(::GlobalNamespace::HeadModel_CosmeticStand_BustType  newBustType) ;

/// @brief Method SetStandTypeString, addr 0x5cac9e8, size 0x2ec, virtual false, abstract: false, final false
inline void SetStandTypeString(::StringW  bustTypeString) ;

/// @brief Method SpawnItemOntoStand, addr 0x5cab604, size 0x2b8, virtual false, abstract: false, final false
inline void SpawnItemOntoStand(::StringW  PlayFabID) ;

/// @brief Method UpdateCosmeticsMountPositions, addr 0x5caccd4, size 0x20, virtual false, abstract: false, final false
inline void UpdateCosmeticsMountPositions() ;

/// @brief Method _AddStandToStoreController, addr 0x5ca9718, size 0xcc, virtual false, abstract: false, final false
inline void _AddStandToStoreController() ;

/// [CompilerGenerated]
/// @brief Method <AssignCosmeticItem>b__41_0, addr 0x5cacea0, size 0x60, virtual false, abstract: false, final false
inline bool _AssignCosmeticItem_b__41_0(::GlobalNamespace::CosmeticsController_CosmeticItem  x) ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_AddToCartButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_AddToCartButton() ;

constexpr ::UnityW<::GorillaNetworking::Store::HeadModel_CosmeticStand> const& __cordl_internal_get_DisplayHeadModel() const;

constexpr ::UnityW<::GorillaNetworking::Store::HeadModel_CosmeticStand>& __cordl_internal_get_DisplayHeadModel() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_GorillaHeadModel() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_GorillaHeadModel() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_GorillaMannequinModel() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_GorillaMannequinModel() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_GorillaTorsoModel() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_GorillaTorsoModel() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_GorillaTorsoPostModel() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_GorillaTorsoPostModel() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_GuitarStandModel() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_GuitarStandModel() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_GuitarStandMount() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_GuitarStandMount() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_JeweleryBoxModel() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_JeweleryBoxModel() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_JeweleryBoxMount() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_JeweleryBoxMount() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_PinDisplayMount() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_PinDisplayMount() ;

constexpr ::StringW const& __cordl_internal_get_StandName() const;

constexpr ::StringW& __cordl_internal_get_StandName() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_TableMount() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_TableMount() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_TagEffectDisplayMount() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_TagEffectDisplayMount() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_TageEffectDisplayModel() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_TageEffectDisplayModel() ;

constexpr ::StringW const& __cordl_internal_get__thisCosmeticName() const;

constexpr ::StringW& __cordl_internal_get__thisCosmeticName() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_addToCartText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_addToCartText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_addToCartTextTMP() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_addToCartTextTMP() ;

constexpr ::UnityEngine::SceneManagement::Scene const& __cordl_internal_get_customMapScene() const;

constexpr ::UnityEngine::SceneManagement::Scene& __cordl_internal_get_customMapScene() ;

constexpr ::UnityW<::GorillaNetworking::Store::StoreDepartment> const& __cordl_internal_get_parentDepartment() const;

constexpr ::UnityW<::GorillaNetworking::Store::StoreDepartment>& __cordl_internal_get_parentDepartment() ;

constexpr ::UnityW<::GorillaNetworking::Store::StoreDisplay> const& __cordl_internal_get_parentDisplay() const;

constexpr ::UnityW<::GorillaNetworking::Store::StoreDisplay>& __cordl_internal_get_parentDisplay() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_root() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_root() ;

constexpr int32_t const& __cordl_internal_get_searchIndex() const;

constexpr int32_t& __cordl_internal_get_searchIndex() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_slotPriceText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_slotPriceText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_slotPriceTextTMP() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_slotPriceTextTMP() ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& __cordl_internal_get_thisCosmeticItem() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& __cordl_internal_get_thisCosmeticItem() ;

constexpr ::UnityEngine::WaitForSeconds* const& __cordl_internal_get_wait() const;

constexpr ::UnityEngine::WaitForSeconds*& __cordl_internal_get_wait() ;

constexpr void __cordl_internal_set_AddToCartButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_DisplayHeadModel(::UnityW<::GorillaNetworking::Store::HeadModel_CosmeticStand>  value) ;

constexpr void __cordl_internal_set_GorillaHeadModel(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_GorillaMannequinModel(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_GorillaTorsoModel(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_GorillaTorsoPostModel(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_GuitarStandModel(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_GuitarStandMount(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_JeweleryBoxModel(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_JeweleryBoxMount(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_PinDisplayMount(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_StandName(::StringW  value) ;

constexpr void __cordl_internal_set_TableMount(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_TagEffectDisplayMount(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_TageEffectDisplayModel(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__thisCosmeticName(::StringW  value) ;

constexpr void __cordl_internal_set_addToCartText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_addToCartTextTMP(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_customMapScene(::UnityEngine::SceneManagement::Scene  value) ;

constexpr void __cordl_internal_set_parentDepartment(::UnityW<::GorillaNetworking::Store::StoreDepartment>  value) ;

constexpr void __cordl_internal_set_parentDisplay(::UnityW<::GorillaNetworking::Store::StoreDisplay>  value) ;

constexpr void __cordl_internal_set_root(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_searchIndex(int32_t  value) ;

constexpr void __cordl_internal_set_slotPriceText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_slotPriceTextTMP(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_thisCosmeticItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value) ;

constexpr void __cordl_internal_set_wait(::UnityEngine::WaitForSeconds*  value) ;

/// @brief Method .ctor, addr 0x5cace48, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_thisCosmeticName, addr 0x5cab010, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_thisCosmeticName() ;

/// @brief Convert to "::GlobalNamespace::iFlagForBaking"
constexpr ::GlobalNamespace::iFlagForBaking* i___GlobalNamespace__iFlagForBaking() noexcept;

/// @brief Method set_thisCosmeticName, addr 0x5cab018, size 0x8, virtual false, abstract: false, final false
inline void set_thisCosmeticName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicCosmeticStand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicCosmeticStand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicCosmeticStand(DynamicCosmeticStand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicCosmeticStand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicCosmeticStand(DynamicCosmeticStand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4433};

/// @brief Field DisplayHeadModel, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::Store::HeadModel_CosmeticStand>  ___DisplayHeadModel;

/// @brief Field AddToCartButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___AddToCartButton;

/// [HideInInspector]
/// @brief Field slotPriceText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___slotPriceText;

/// [HideInInspector]
/// @brief Field addToCartText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___addToCartText;

/// @brief Field slotPriceTextTMP, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___slotPriceTextTMP;

/// @brief Field addToCartTextTMP, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___addToCartTextTMP;

/// @brief Field thisCosmeticItem, offset: 0x50, size: 0x98, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticItem  ___thisCosmeticItem;

/// [FormerlySerializedAs("StandID")]
/// @brief Field StandName, offset: 0xe8, size: 0x8, def value: None
 ::StringW  ___StandName;

/// @brief Field _thisCosmeticName, offset: 0xf0, size: 0x8, def value: None
 ::StringW  ____thisCosmeticName;

/// @brief Field GorillaHeadModel, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___GorillaHeadModel;

/// @brief Field GorillaTorsoModel, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___GorillaTorsoModel;

/// @brief Field GorillaTorsoPostModel, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___GorillaTorsoPostModel;

/// @brief Field GorillaMannequinModel, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___GorillaMannequinModel;

/// @brief Field GuitarStandModel, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___GuitarStandModel;

/// @brief Field GuitarStandMount, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___GuitarStandMount;

/// @brief Field JeweleryBoxModel, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___JeweleryBoxModel;

/// @brief Field JeweleryBoxMount, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___JeweleryBoxMount;

/// @brief Field TableMount, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___TableMount;

/// [FormerlySerializedAs("PinDisplayMounnt")]
/// [FormerlySerializedAs("PinDisplayMountn")]
/// @brief Field PinDisplayMount, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___PinDisplayMount;

/// @brief Field root, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___root;

/// @brief Field TagEffectDisplayMount, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___TagEffectDisplayMount;

/// @brief Field TageEffectDisplayModel, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___TageEffectDisplayModel;

/// @brief Field customMapScene, offset: 0x160, size: 0x4, def value: None
 ::UnityEngine::SceneManagement::Scene  ___customMapScene;

/// [HideInInspector]
/// @brief Field parentDisplay, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::Store::StoreDisplay>  ___parentDisplay;

/// [HideInInspector]
/// @brief Field parentDepartment, offset: 0x170, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::Store::StoreDepartment>  ___parentDepartment;

/// @brief Field searchIndex, offset: 0x178, size: 0x4, def value: None
 int32_t  ___searchIndex;

/// @brief Field wait, offset: 0x180, size: 0x8, def value: None
 ::UnityEngine::WaitForSeconds*  ___wait;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___DisplayHeadModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___AddToCartButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___slotPriceText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___addToCartText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___slotPriceTextTMP) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___addToCartTextTMP) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___thisCosmeticItem) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___StandName) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ____thisCosmeticName) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___GorillaHeadModel) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___GorillaTorsoModel) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___GorillaTorsoPostModel) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___GorillaMannequinModel) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___GuitarStandModel) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___GuitarStandMount) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___JeweleryBoxModel) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___JeweleryBoxMount) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___TableMount) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___PinDisplayMount) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___root) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___TagEffectDisplayMount) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___TageEffectDisplayModel) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___customMapScene) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___parentDisplay) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___parentDepartment) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___searchIndex) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand, ___wait) == 0x180, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::DynamicCosmeticStand) == 0x188, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.DynamicCosmeticStand/<SetStandPriceCoroutine>d__40
class CORDL_TYPE DynamicCosmeticStand__SetStandPriceCoroutine_d__40 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>  __4__this;

/// @brief Field <startTime>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__startTime_5__2, put=__cordl_internal_set__startTime_5__2)) float_t  _startTime_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5cad41c, size 0x16c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::Store::DynamicCosmeticStand__SetStandPriceCoroutine_d__40* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5cad588, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5cad590, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5cad5c8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5cad418, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__startTime_5__2() const;

constexpr float_t& __cordl_internal_get__startTime_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>  value) ;

constexpr void __cordl_internal_set__startTime_5__2(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5cab5dc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicCosmeticStand__SetStandPriceCoroutine_d__40() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicCosmeticStand__SetStandPriceCoroutine_d__40", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicCosmeticStand__SetStandPriceCoroutine_d__40(DynamicCosmeticStand__SetStandPriceCoroutine_d__40 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicCosmeticStand__SetStandPriceCoroutine_d__40", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicCosmeticStand__SetStandPriceCoroutine_d__40(DynamicCosmeticStand__SetStandPriceCoroutine_d__40 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4432};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>  _____4__this;

/// @brief Field <startTime>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____startTime_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand__SetStandPriceCoroutine_d__40, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand__SetStandPriceCoroutine_d__40, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand__SetStandPriceCoroutine_d__40, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand__SetStandPriceCoroutine_d__40, ____startTime_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::DynamicCosmeticStand__SetStandPriceCoroutine_d__40) == 0x30, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.DynamicCosmeticStand/<ConnectToStoreController>d__29
class CORDL_TYPE DynamicCosmeticStand__ConnectToStoreController_d__29 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>  __4__this;

/// @brief Field <i>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__2, put=__cordl_internal_set__i_5__2)) int32_t  _i_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5cad140, size 0x290, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::Store::DynamicCosmeticStand__ConnectToStoreController_d__29* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5cad3d0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5cad3d8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5cad410, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5cad13c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__i_5__2() const;

constexpr int32_t& __cordl_internal_get__i_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>  value) ;

constexpr void __cordl_internal_set__i_5__2(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5ca9850, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicCosmeticStand__ConnectToStoreController_d__29() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicCosmeticStand__ConnectToStoreController_d__29", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicCosmeticStand__ConnectToStoreController_d__29(DynamicCosmeticStand__ConnectToStoreController_d__29 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicCosmeticStand__ConnectToStoreController_d__29", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicCosmeticStand__ConnectToStoreController_d__29(DynamicCosmeticStand__ConnectToStoreController_d__29 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4431};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>  _____4__this;

/// @brief Field <i>5__2, offset: 0x28, size: 0x4, def value: None
 int32_t  ____i_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand__ConnectToStoreController_d__29, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand__ConnectToStoreController_d__29, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand__ConnectToStoreController_d__29, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand__ConnectToStoreController_d__29, ____i_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::DynamicCosmeticStand__ConnectToStoreController_d__29) == 0x30, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
