#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/BundleManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BundleManager)
namespace Cosmetics {
class ICreatorCodeProvider;
}
namespace GlobalNamespace {
class TryOnBundleButton;
}
namespace GlobalNamespace {
class TryOnBundlesStand;
}
namespace GorillaNetworking::Store {
class BundleManager_BundleStandSpawn;
}
namespace GorillaNetworking::Store {
class BundleManager___c__DisplayClass27_0;
}
namespace GorillaNetworking::Store {
class BundleStandSpawn_BundleManager___c;
}
namespace GorillaNetworking::Store {
class BundleStand;
}
namespace GorillaNetworking::Store {
class EndCapSpawnPoint;
}
namespace GorillaNetworking::Store {
class SpawnedBundle;
}
namespace GorillaNetworking::Store {
class StoreBundleData;
}
namespace GorillaNetworking::Store {
class StoreBundle;
}
namespace Sirenix::OdinInspector {
struct ValueDropdownItem;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GorillaNetworking::Store {
class BundleManager;
}
namespace GorillaNetworking::Store {
class BundleManager_BundleStandSpawn;
}
namespace GorillaNetworking::Store {
class BundleManager___c__DisplayClass27_0;
}
namespace GorillaNetworking::Store {
class BundleStandSpawn_BundleManager___c;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::Store::BundleManager*);
MARK_REF_T(::GorillaNetworking::Store::BundleManager_BundleStandSpawn*);
MARK_REF_T(::GorillaNetworking::Store::BundleManager___c__DisplayClass27_0*);
MARK_REF_T(::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::BundleManager*, "GorillaNetworking.Store", "BundleManager");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::BundleManager_BundleStandSpawn*, "GorillaNetworking.Store", "BundleManager/BundleStandSpawn");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::BundleManager___c__DisplayClass27_0*, "GorillaNetworking.Store", "BundleManager/<>c__DisplayClass27_0");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c*, "GorillaNetworking.Store", "BundleManager/BundleStandSpawn/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.BundleManager
class CORDL_TYPE BundleManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BundleStandSpawn = ::GorillaNetworking::Store::BundleManager_BundleStandSpawn;

using __c__DisplayClass27_0 = ::GorillaNetworking::Store::BundleManager___c__DisplayClass27_0;

/// @brief Field BundleStands, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_BundleStands, put=__cordl_internal_set_BundleStands)) ::System::Collections::Generic::List_1<::GorillaNetworking::Store::BundleManager_BundleStandSpawn*>*  BundleStands;

/// @brief Field _bundleScriptableObjects, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__bundleScriptableObjects, put=__cordl_internal_set__bundleScriptableObjects)) ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::StoreBundleData>>*  _bundleScriptableObjects;

/// @brief Field _spawnedBundleStands, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__spawnedBundleStands, put=__cordl_internal_set__spawnedBundleStands)) ::System::Collections::Generic::List_1<::GorillaNetworking::Store::SpawnedBundle*>*  _spawnedBundleStands;

/// @brief Field _storeBundles, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__storeBundles, put=__cordl_internal_set__storeBundles)) ::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreBundle*>*  _storeBundles;

/// @brief Field _tryOnBundlesStand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__tryOnBundlesStand, put=__cordl_internal_set__tryOnBundlesStand)) ::UnityW<::GlobalNamespace::TryOnBundlesStand>  _tryOnBundlesStand;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GorillaNetworking::Store::BundleManager>  instance;

/// @brief Field nullBundleData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_nullBundleData, put=__cordl_internal_set_nullBundleData)) ::UnityW<::GorillaNetworking::Store::StoreBundleData>  nullBundleData;

/// @brief Field storeBundlesById, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_storeBundlesById, put=__cordl_internal_set_storeBundlesById)) ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::Store::StoreBundle*>*  storeBundlesById;

/// @brief Field storeBundlesBySKU, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_storeBundlesBySKU, put=__cordl_internal_set_storeBundlesBySKU)) ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::Store::StoreBundle*>*  storeBundlesBySKU;

/// @brief Field tryOnBundleButton1, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_tryOnBundleButton1, put=__cordl_internal_set_tryOnBundleButton1)) ::UnityW<::GorillaNetworking::Store::StoreBundleData>  tryOnBundleButton1;

/// @brief Field tryOnBundleButton2, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_tryOnBundleButton2, put=__cordl_internal_set_tryOnBundleButton2)) ::UnityW<::GorillaNetworking::Store::StoreBundleData>  tryOnBundleButton2;

/// @brief Field tryOnBundleButton3, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_tryOnBundleButton3, put=__cordl_internal_set_tryOnBundleButton3)) ::UnityW<::GorillaNetworking::Store::StoreBundleData>  tryOnBundleButton3;

/// @brief Field tryOnBundleButton4, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_tryOnBundleButton4, put=__cordl_internal_set_tryOnBundleButton4)) ::UnityW<::GorillaNetworking::Store::StoreBundleData>  tryOnBundleButton4;

/// @brief Field tryOnBundleButton5, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_tryOnBundleButton5, put=__cordl_internal_set_tryOnBundleButton5)) ::UnityW<::GorillaNetworking::Store::StoreBundleData>  tryOnBundleButton5;

/// @brief Method AddNewBundleStand, addr 0x5ca55f4, size 0x330, virtual false, abstract: false, final false
inline void AddNewBundleStand(::GorillaNetworking::Store::BundleStand*  bundleStand) ;

/// @brief Method Awake, addr 0x5ca3d4c, size 0x12c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BundlePurchaseButtonPressed, addr 0x5ca5b68, size 0xb0, virtual false, abstract: false, final false
inline void BundlePurchaseButtonPressed(::StringW  playFabItemName, ::Cosmetics::ICreatorCodeProvider*  ccp) ;

/// @brief Method CheckForNoPriceBundlesAndDefaultPrice, addr 0x5ca6e84, size 0x188, virtual false, abstract: false, final false
inline void CheckForNoPriceBundlesAndDefaultPrice() ;

/// @brief Method CheckIfBundlesOwned, addr 0x5ca68a0, size 0x28c, virtual false, abstract: false, final false
inline void CheckIfBundlesOwned() ;

/// @brief Method ClearEverything, addr 0x5ca5120, size 0x4d4, virtual false, abstract: false, final false
inline void ClearEverything() ;

/// @brief Method FixBundles, addr 0x5ca5c18, size 0x458, virtual false, abstract: false, final false
inline void FixBundles() ;

/// @brief Method GenerateAllStoreBundleReferences, addr 0x5ca511c, size 0x4, virtual false, abstract: false, final false
inline void GenerateAllStoreBundleReferences() ;

/// @brief Method GenerateBundleDictionaries, addr 0x5ca3e90, size 0x1ec, virtual false, abstract: false, final false
inline void GenerateBundleDictionaries() ;

/// @brief Method GetStoreBundles, addr 0x5ca3c40, size 0x10c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerable* GetStoreBundles() ;

/// @brief Method GetTryOnButtons, addr 0x5ca6078, size 0x180, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::GorillaNetworking::Store::StoreBundleData>> GetTryOnButtons() ;

/// @brief Method Initialize, addr 0x5ca407c, size 0x12c, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method MarkBundleOwnedByPlayFabID, addr 0x5ca6508, size 0x1c0, virtual false, abstract: false, final false
inline void MarkBundleOwnedByPlayFabID(::StringW  ItemId) ;

/// @brief Method MarkBundleOwnedBySKU, addr 0x5ca66e0, size 0x1c0, virtual false, abstract: false, final false
inline void MarkBundleOwnedBySKU(::StringW  SKU) ;

static inline ::GorillaNetworking::Store::BundleManager* New_ctor() ;

/// @brief Method NotifyBundleOfErrorByPlayFabID, addr 0x5ca61f8, size 0x17c, virtual false, abstract: false, final false
inline void NotifyBundleOfErrorByPlayFabID(::StringW  ItemId) ;

/// @brief Method NotifyBundleOfErrorBySKU, addr 0x5ca638c, size 0x17c, virtual false, abstract: false, final false
inline void NotifyBundleOfErrorBySKU(::StringW  ItemSKU) ;

/// @brief Method OnDestroy, addr 0x5ca41a8, size 0x12c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PressPurchaseTryOnBundleButton, addr 0x5ca6bc4, size 0x14, virtual false, abstract: false, final false
inline void PressPurchaseTryOnBundleButton() ;

/// @brief Method PressTryOnBundleButton, addr 0x5ca6b2c, size 0x98, virtual false, abstract: false, final false
inline void PressTryOnBundleButton(::GlobalNamespace::TryOnBundleButton*  pressedTryOnBundleButton, bool  isLeftHand) ;

/// @brief Method SpawnBundleStands, addr 0x5ca4a78, size 0x6a4, virtual false, abstract: false, final false
inline void SpawnBundleStands() ;

/// @brief Method Start, addr 0x5ca3e78, size 0x18, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateBundlePrice, addr 0x5ca6bd8, size 0xac, virtual false, abstract: false, final false
inline void UpdateBundlePrice(::StringW  productSku, ::StringW  productFormattedPrice) ;

/// @brief Method UpdateGtfcBundlePrice, addr 0x5ca6d04, size 0x100, virtual false, abstract: false, final false
inline void UpdateGtfcBundlePrice(::StringW  productSku, ::StringW  productFormattedPrice) ;

/// @brief Method ValidateBundleData, addr 0x5ca4520, size 0x12c, virtual false, abstract: false, final false
inline void ValidateBundleData() ;

constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::Store::BundleManager_BundleStandSpawn*>* const& __cordl_internal_get_BundleStands() const;

constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::Store::BundleManager_BundleStandSpawn*>*& __cordl_internal_get_BundleStands() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::StoreBundleData>>* const& __cordl_internal_get__bundleScriptableObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::StoreBundleData>>*& __cordl_internal_get__bundleScriptableObjects() ;

constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::Store::SpawnedBundle*>* const& __cordl_internal_get__spawnedBundleStands() const;

constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::Store::SpawnedBundle*>*& __cordl_internal_get__spawnedBundleStands() ;

constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreBundle*>* const& __cordl_internal_get__storeBundles() const;

constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreBundle*>*& __cordl_internal_get__storeBundles() ;

constexpr ::UnityW<::GlobalNamespace::TryOnBundlesStand> const& __cordl_internal_get__tryOnBundlesStand() const;

constexpr ::UnityW<::GlobalNamespace::TryOnBundlesStand>& __cordl_internal_get__tryOnBundlesStand() ;

constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData> const& __cordl_internal_get_nullBundleData() const;

constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData>& __cordl_internal_get_nullBundleData() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::Store::StoreBundle*>* const& __cordl_internal_get_storeBundlesById() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::Store::StoreBundle*>*& __cordl_internal_get_storeBundlesById() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::Store::StoreBundle*>* const& __cordl_internal_get_storeBundlesBySKU() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::Store::StoreBundle*>*& __cordl_internal_get_storeBundlesBySKU() ;

constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData> const& __cordl_internal_get_tryOnBundleButton1() const;

constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData>& __cordl_internal_get_tryOnBundleButton1() ;

constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData> const& __cordl_internal_get_tryOnBundleButton2() const;

constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData>& __cordl_internal_get_tryOnBundleButton2() ;

constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData> const& __cordl_internal_get_tryOnBundleButton3() const;

constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData>& __cordl_internal_get_tryOnBundleButton3() ;

constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData> const& __cordl_internal_get_tryOnBundleButton4() const;

constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData>& __cordl_internal_get_tryOnBundleButton4() ;

constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData> const& __cordl_internal_get_tryOnBundleButton5() const;

constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData>& __cordl_internal_get_tryOnBundleButton5() ;

constexpr void __cordl_internal_set_BundleStands(::System::Collections::Generic::List_1<::GorillaNetworking::Store::BundleManager_BundleStandSpawn*>*  value) ;

constexpr void __cordl_internal_set__bundleScriptableObjects(::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::StoreBundleData>>*  value) ;

constexpr void __cordl_internal_set__spawnedBundleStands(::System::Collections::Generic::List_1<::GorillaNetworking::Store::SpawnedBundle*>*  value) ;

constexpr void __cordl_internal_set__storeBundles(::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreBundle*>*  value) ;

constexpr void __cordl_internal_set__tryOnBundlesStand(::UnityW<::GlobalNamespace::TryOnBundlesStand>  value) ;

constexpr void __cordl_internal_set_nullBundleData(::UnityW<::GorillaNetworking::Store::StoreBundleData>  value) ;

constexpr void __cordl_internal_set_storeBundlesById(::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::Store::StoreBundle*>*  value) ;

constexpr void __cordl_internal_set_storeBundlesBySKU(::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::Store::StoreBundle*>*  value) ;

constexpr void __cordl_internal_set_tryOnBundleButton1(::UnityW<::GorillaNetworking::Store::StoreBundleData>  value) ;

constexpr void __cordl_internal_set_tryOnBundleButton2(::UnityW<::GorillaNetworking::Store::StoreBundleData>  value) ;

constexpr void __cordl_internal_set_tryOnBundleButton3(::UnityW<::GorillaNetworking::Store::StoreBundleData>  value) ;

constexpr void __cordl_internal_set_tryOnBundleButton4(::UnityW<::GorillaNetworking::Store::StoreBundleData>  value) ;

constexpr void __cordl_internal_set_tryOnBundleButton5(::UnityW<::GorillaNetworking::Store::StoreBundleData>  value) ;

/// @brief Method .ctor, addr 0x5ca7094, size 0x1f4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GorillaNetworking::Store::BundleManager> getStaticF_instance() ;

static inline void setStaticF_instance(::UnityW<::GorillaNetworking::Store::BundleManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BundleManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BundleManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BundleManager(BundleManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BundleManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BundleManager(BundleManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4422};

/// [FormerlySerializedAs("_TryOnBundlesStand")]
/// @brief Field _tryOnBundlesStand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TryOnBundlesStand>  ____tryOnBundlesStand;

/// [SerializeField]
/// @brief Field nullBundleData, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::Store::StoreBundleData>  ___nullBundleData;

/// @brief Field _bundleScriptableObjects, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::StoreBundleData>>*  ____bundleScriptableObjects;

/// [SerializeField]
/// @brief Field _storeBundles, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreBundle*>*  ____storeBundles;

/// [FormerlySerializedAs("_SpawnedBundleStands")]
/// [SerializeField]
/// @brief Field _spawnedBundleStands, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaNetworking::Store::SpawnedBundle*>*  ____spawnedBundleStands;

/// @brief Field storeBundlesById, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::Store::StoreBundle*>*  ___storeBundlesById;

/// @brief Field storeBundlesBySKU, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::Store::StoreBundle*>*  ___storeBundlesBySKU;

/// [Header("Enable Advanced Search window in your settings to easily see all bundle prefabs")]
/// [SerializeField]
/// @brief Field BundleStands, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaNetworking::Store::BundleManager_BundleStandSpawn*>*  ___BundleStands;

/// [SerializeField]
/// @brief Field tryOnBundleButton1, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::Store::StoreBundleData>  ___tryOnBundleButton1;

/// [SerializeField]
/// @brief Field tryOnBundleButton2, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::Store::StoreBundleData>  ___tryOnBundleButton2;

/// [SerializeField]
/// @brief Field tryOnBundleButton3, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::Store::StoreBundleData>  ___tryOnBundleButton3;

/// [SerializeField]
/// @brief Field tryOnBundleButton4, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::Store::StoreBundleData>  ___tryOnBundleButton4;

/// [SerializeField]
/// @brief Field tryOnBundleButton5, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::Store::StoreBundleData>  ___tryOnBundleButton5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::BundleManager, ____tryOnBundlesStand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundleManager, ___nullBundleData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundleManager, ____bundleScriptableObjects) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundleManager, ____storeBundles) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundleManager, ____spawnedBundleStands) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundleManager, ___storeBundlesById) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundleManager, ___storeBundlesBySKU) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundleManager, ___BundleStands) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundleManager, ___tryOnBundleButton1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundleManager, ___tryOnBundleButton2) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundleManager, ___tryOnBundleButton3) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundleManager, ___tryOnBundleButton4) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundleManager, ___tryOnBundleButton5) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::BundleManager) == 0x88, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.BundleManager/<>c__DisplayClass27_0
class CORDL_TYPE BundleManager___c__DisplayClass27_0 : public ::System::Object {
public:
// Declarations
/// @brief Field bundle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_bundle, put=__cordl_internal_set_bundle)) ::UnityW<::GorillaNetworking::Store::BundleStand>  bundle;

static inline ::GorillaNetworking::Store::BundleManager___c__DisplayClass27_0* New_ctor() ;

/// @brief Method <FixBundles>b__0, addr 0x5ca75e4, size 0xac, virtual false, abstract: false, final false
inline bool _FixBundles_b__0(::GorillaNetworking::Store::SpawnedBundle*  x) ;

/// @brief Method <FixBundles>b__1, addr 0x5ca7690, size 0xac, virtual false, abstract: false, final false
inline bool _FixBundles_b__1(::GorillaNetworking::Store::SpawnedBundle*  x) ;

constexpr ::UnityW<::GorillaNetworking::Store::BundleStand> const& __cordl_internal_get_bundle() const;

constexpr ::UnityW<::GorillaNetworking::Store::BundleStand>& __cordl_internal_get_bundle() ;

constexpr void __cordl_internal_set_bundle(::UnityW<::GorillaNetworking::Store::BundleStand>  value) ;

/// @brief Method .ctor, addr 0x5ca6070, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BundleManager___c__DisplayClass27_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BundleManager___c__DisplayClass27_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BundleManager___c__DisplayClass27_0(BundleManager___c__DisplayClass27_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BundleManager___c__DisplayClass27_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BundleManager___c__DisplayClass27_0(BundleManager___c__DisplayClass27_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4421};

/// @brief Field bundle, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::Store::BundleStand>  ___bundle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::BundleManager___c__DisplayClass27_0, ___bundle) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::BundleManager___c__DisplayClass27_0) == 0x18, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
// Dependencies System.Object
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.BundleManager/BundleStandSpawn
class CORDL_TYPE BundleManager_BundleStandSpawn : public ::System::Object {
public:
// Declarations
using __c = ::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c;

/// @brief Field bundleStand, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_bundleStand, put=__cordl_internal_set_bundleStand)) ::UnityW<::GorillaNetworking::Store::BundleStand>  bundleStand;

/// @brief Field spawnLocation, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnLocation, put=__cordl_internal_set_spawnLocation)) ::UnityW<::GorillaNetworking::Store::EndCapSpawnPoint>  spawnLocation;

/// @brief Method GetEndCapSpawnPoints, addr 0x5ca7288, size 0x144, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerable* GetEndCapSpawnPoints() ;

static inline ::GorillaNetworking::Store::BundleManager_BundleStandSpawn* New_ctor() ;

constexpr ::UnityW<::GorillaNetworking::Store::BundleStand> const& __cordl_internal_get_bundleStand() const;

constexpr ::UnityW<::GorillaNetworking::Store::BundleStand>& __cordl_internal_get_bundleStand() ;

constexpr ::UnityW<::GorillaNetworking::Store::EndCapSpawnPoint> const& __cordl_internal_get_spawnLocation() const;

constexpr ::UnityW<::GorillaNetworking::Store::EndCapSpawnPoint>& __cordl_internal_get_spawnLocation() ;

constexpr void __cordl_internal_set_bundleStand(::UnityW<::GorillaNetworking::Store::BundleStand>  value) ;

constexpr void __cordl_internal_set_spawnLocation(::UnityW<::GorillaNetworking::Store::EndCapSpawnPoint>  value) ;

/// @brief Method .ctor, addr 0x5ca73cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BundleManager_BundleStandSpawn() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BundleManager_BundleStandSpawn", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BundleManager_BundleStandSpawn(BundleManager_BundleStandSpawn && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BundleManager_BundleStandSpawn", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BundleManager_BundleStandSpawn(BundleManager_BundleStandSpawn const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4420};

/// @brief Field spawnLocation, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::Store::EndCapSpawnPoint>  ___spawnLocation;

/// @brief Field bundleStand, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::Store::BundleStand>  ___bundleStand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::BundleManager_BundleStandSpawn, ___spawnLocation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::BundleManager_BundleStandSpawn, ___bundleStand) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::BundleManager_BundleStandSpawn) == 0x20, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.BundleManager/BundleStandSpawn/<>c
class CORDL_TYPE BundleStandSpawn_BundleManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Func_2<::UnityW<::GorillaNetworking::Store::EndCapSpawnPoint>,::Sirenix::OdinInspector::ValueDropdownItem>*  __9__2_0;

static inline ::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c* New_ctor() ;

/// @brief Method <GetEndCapSpawnPoints>b__2_0, addr 0x5ca7444, size 0x1a0, virtual false, abstract: false, final false
inline ::Sirenix::OdinInspector::ValueDropdownItem _GetEndCapSpawnPoints_b__2_0(::GorillaNetworking::Store::EndCapSpawnPoint*  x) ;

/// @brief Method .ctor, addr 0x5ca743c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::GorillaNetworking::Store::EndCapSpawnPoint>,::Sirenix::OdinInspector::ValueDropdownItem>* getStaticF___9__2_0() ;

static inline void setStaticF___9(::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c*  value) ;

static inline void setStaticF___9__2_0(::System::Func_2<::UnityW<::GorillaNetworking::Store::EndCapSpawnPoint>,::Sirenix::OdinInspector::ValueDropdownItem>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BundleStandSpawn_BundleManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BundleStandSpawn_BundleManager___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BundleStandSpawn_BundleManager___c(BundleStandSpawn_BundleManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BundleStandSpawn_BundleManager___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BundleStandSpawn_BundleManager___c(BundleStandSpawn_BundleManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4419};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c) == 0x10, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
