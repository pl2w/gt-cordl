#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/StoreController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StoreController)
namespace GorillaNetworking::Store {
class DynamicCosmeticStand;
}
namespace GorillaNetworking::Store {
class StandImport;
}
namespace GorillaNetworking::Store {
class StoreController___c;
}
namespace GorillaNetworking::Store {
class StoreDepartment;
}
namespace GorillaTag::CosmeticSystem {
class AllCosmeticsArraySO;
}
namespace GorillaTag::CosmeticSystem {
class CosmeticSO;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GorillaNetworking::Store {
class StoreController;
}
namespace GorillaNetworking::Store {
class StoreController___c;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::Store::StoreController*);
MARK_REF_T(::GorillaNetworking::Store::StoreController___c*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::StoreController*, "GorillaNetworking.Store", "StoreController");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::StoreController___c*, "GorillaNetworking.Store", "StoreController/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.StoreController
class CORDL_TYPE StoreController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GorillaNetworking::Store::StoreController___c;

/// @brief Field AllCosmeticsArraySO, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_AllCosmeticsArraySO, put=__cordl_internal_set_AllCosmeticsArraySO)) ::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>  AllCosmeticsArraySO;

/// @brief Field CosmeticStandsDict, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_CosmeticStandsDict, put=__cordl_internal_set_CosmeticStandsDict)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>>*  CosmeticStandsDict;

/// @brief Field Departments, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Departments, put=__cordl_internal_set_Departments)) ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::StoreDepartment>>*  Departments;

/// @brief Field LoadFromTitleData, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_LoadFromTitleData, put=__cordl_internal_set_LoadFromTitleData)) bool  LoadFromTitleData;

/// @brief Field StandsByPlayfabID, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_StandsByPlayfabID, put=__cordl_internal_set_StandsByPlayfabID)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>>*>*  StandsByPlayfabID;

/// @brief Field cosmeticsInitialized, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_cosmeticsInitialized, put=__cordl_internal_set_cosmeticsInitialized)) bool  cosmeticsInitialized;

/// @brief Field exportHeader, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_exportHeader, put=__cordl_internal_set_exportHeader)) ::StringW  exportHeader;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GorillaNetworking::Store::StoreController>  instance;

/// @brief Field standImport, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_standImport, put=__cordl_internal_set_standImport)) ::GorillaNetworking::Store::StandImport*  standImport;

/// @brief Method AddStandToCosmeticStandsDictionary, addr 0x5ca9920, size 0x348, virtual false, abstract: false, final false
inline void AddStandToCosmeticStandsDictionary(::GorillaNetworking::Store::DynamicCosmeticStand*  stand) ;

/// @brief Method AddStandToPlayfabIDDictionary, addr 0x5ca9c68, size 0x224, virtual false, abstract: false, final false
inline void AddStandToPlayfabIDDictionary(::GorillaNetworking::Store::DynamicCosmeticStand*  dynamicCosmeticStand) ;

/// @brief Method Awake, addr 0x5caf980, size 0x1b8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearCosmetics, addr 0x5cb0af0, size 0x1f4, virtual false, abstract: false, final false
inline void ClearCosmetics() ;

/// @brief Method Create_StandsByPlayfabIDDictionary, addr 0x5cb0130, size 0x14c, virtual false, abstract: false, final false
inline void Create_StandsByPlayfabIDDictionary() ;

/// @brief Method ExportCosmeticStandLayoutWITHOUTItems, addr 0x5cb0280, size 0x4, virtual false, abstract: false, final false
inline void ExportCosmeticStandLayoutWITHOUTItems() ;

/// @brief Method ExportCosmeticStandLayoutWithItems, addr 0x5cb027c, size 0x4, virtual false, abstract: false, final false
inline void ExportCosmeticStandLayoutWithItems() ;

/// @brief Method FindAllDepartments, addr 0x5cb0e5c, size 0x98, virtual false, abstract: false, final false
inline void FindAllDepartments() ;

/// @brief Method FindCosmeticInAllCosmeticsArraySO, addr 0x5cabb00, size 0x108, virtual false, abstract: false, final false
static inline ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO> FindCosmeticInAllCosmeticsArraySO(::StringW  playfabId) ;

/// @brief Method FindCosmeticStandByCosmeticName, addr 0x5cb0ce4, size 0x178, virtual false, abstract: false, final false
inline ::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand> FindCosmeticStandByCosmeticName(::StringW  PlayFabID) ;

/// @brief Method ImportCosmeticStandLayout, addr 0x5cb0284, size 0x4, virtual false, abstract: false, final false
inline void ImportCosmeticStandLayout() ;

/// @brief Method ImportCosmeticStandLayoutFromTitleData, addr 0x5cb0418, size 0x3f8, virtual false, abstract: false, final false
inline void ImportCosmeticStandLayoutFromTitleData(::StringW  TSVData) ;

/// @brief Method InitalizeCosmeticStands, addr 0x5cb099c, size 0x30, virtual false, abstract: false, final false
inline void InitalizeCosmeticStands() ;

/// @brief Method InitializeFromTitleData, addr 0x5cb0288, size 0x190, virtual false, abstract: false, final false
inline void InitializeFromTitleData() ;

/// @brief Method InitializeStandFromTitleData, addr 0x5ca9e8c, size 0x358, virtual false, abstract: false, final false
inline void InitializeStandFromTitleData(::GorillaNetworking::Store::DynamicCosmeticStand*  stand) ;

/// @brief Method LoadCosmeticOntoStand, addr 0x5cb09cc, size 0x124, virtual false, abstract: false, final false
inline void LoadCosmeticOntoStand(::StringW  standID, ::StringW  playFabId) ;

static inline ::GorillaNetworking::Store::StoreController* New_ctor() ;

/// @brief Method RefreshCosmeticStandsDictionaryFromDepartments, addr 0x5cafb38, size 0x5f8, virtual false, abstract: false, final false
inline void RefreshCosmeticStandsDictionaryFromDepartments() ;

/// @brief Method RemoveStandFromDynamicCosmeticStandsDictionary, addr 0x5caa2f8, size 0x344, virtual false, abstract: false, final false
inline void RemoveStandFromDynamicCosmeticStandsDictionary(::GorillaNetworking::Store::DynamicCosmeticStand*  stand) ;

/// @brief Method RemoveStandFromPlayFabIDDictionary, addr 0x5caa63c, size 0x9c, virtual false, abstract: false, final false
inline void RemoveStandFromPlayFabIDDictionary(::GorillaNetworking::Store::DynamicCosmeticStand*  dynamicCosmeticStand) ;

/// @brief Method SaveAllCosmeticsPositions, addr 0x5cb0ef4, size 0x49c, virtual false, abstract: false, final false
inline void SaveAllCosmeticsPositions() ;

/// @brief Method SetForGame, addr 0x5cb1390, size 0x244, virtual false, abstract: false, final false
static inline void SetForGame() ;

/// [CompilerGenerated]
/// @brief Method <InitializeFromTitleData>b__19_0, addr 0x5cb162c, size 0x4, virtual false, abstract: false, final false
inline void _InitializeFromTitleData_b__19_0(::StringW  data) ;

constexpr ::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO> const& __cordl_internal_get_AllCosmeticsArraySO() const;

constexpr ::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>& __cordl_internal_get_AllCosmeticsArraySO() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>>* const& __cordl_internal_get_CosmeticStandsDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>>*& __cordl_internal_get_CosmeticStandsDict() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::StoreDepartment>>* const& __cordl_internal_get_Departments() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::StoreDepartment>>*& __cordl_internal_get_Departments() ;

constexpr bool const& __cordl_internal_get_LoadFromTitleData() const;

constexpr bool& __cordl_internal_get_LoadFromTitleData() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>>*>* const& __cordl_internal_get_StandsByPlayfabID() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>>*>*& __cordl_internal_get_StandsByPlayfabID() ;

constexpr bool const& __cordl_internal_get_cosmeticsInitialized() const;

constexpr bool& __cordl_internal_get_cosmeticsInitialized() ;

constexpr ::StringW const& __cordl_internal_get_exportHeader() const;

constexpr ::StringW& __cordl_internal_get_exportHeader() ;

constexpr ::GorillaNetworking::Store::StandImport* const& __cordl_internal_get_standImport() const;

constexpr ::GorillaNetworking::Store::StandImport*& __cordl_internal_get_standImport() ;

constexpr void __cordl_internal_set_AllCosmeticsArraySO(::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>  value) ;

constexpr void __cordl_internal_set_CosmeticStandsDict(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>>*  value) ;

constexpr void __cordl_internal_set_Departments(::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::StoreDepartment>>*  value) ;

constexpr void __cordl_internal_set_LoadFromTitleData(bool  value) ;

constexpr void __cordl_internal_set_StandsByPlayfabID(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>>*>*  value) ;

constexpr void __cordl_internal_set_cosmeticsInitialized(bool  value) ;

constexpr void __cordl_internal_set_exportHeader(::StringW  value) ;

constexpr void __cordl_internal_set_standImport(::GorillaNetworking::Store::StandImport*  value) ;

/// @brief Method .ctor, addr 0x5cb15d4, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GorillaNetworking::Store::StoreController> getStaticF_instance() ;

static inline void setStaticF_instance(::UnityW<::GorillaNetworking::Store::StoreController>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StoreController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StoreController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StoreController(StoreController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StoreController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StoreController(StoreController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4438};

/// @brief Field Departments, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::StoreDepartment>>*  ___Departments;

/// @brief Field CosmeticStandsDict, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>>*  ___CosmeticStandsDict;

/// @brief Field StandsByPlayfabID, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>>*>*  ___StandsByPlayfabID;

/// @brief Field AllCosmeticsArraySO, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>  ___AllCosmeticsArraySO;

/// @brief Field cosmeticsInitialized, offset: 0x40, size: 0x1, def value: None
 bool  ___cosmeticsInitialized;

/// @brief Field LoadFromTitleData, offset: 0x41, size: 0x1, def value: None
 bool  ___LoadFromTitleData;

/// @brief Field exportHeader, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___exportHeader;

/// @brief Field standImport, offset: 0x50, size: 0x8, def value: None
 ::GorillaNetworking::Store::StandImport*  ___standImport;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::StoreController, ___Departments) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreController, ___CosmeticStandsDict) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreController, ___StandsByPlayfabID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreController, ___AllCosmeticsArraySO) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreController, ___cosmeticsInitialized) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreController, ___LoadFromTitleData) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreController, ___exportHeader) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreController, ___standImport) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::StoreController) == 0x58, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.StoreController/<>c
class CORDL_TYPE StoreController___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GorillaNetworking::Store::StoreController___c*  __9;

/// @brief Field <>9__19_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_1, put=setStaticF___9__19_1)) ::System::Action_1<::PlayFab::PlayFabError*>*  __9__19_1;

static inline ::GorillaNetworking::Store::StoreController___c* New_ctor() ;

/// @brief Method <InitializeFromTitleData>b__19_1, addr 0x5cb16a0, size 0x8c, virtual false, abstract: false, final false
inline void _InitializeFromTitleData_b__19_1(::PlayFab::PlayFabError*  e) ;

/// @brief Method .ctor, addr 0x5cb1698, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GorillaNetworking::Store::StoreController___c* getStaticF___9() ;

static inline ::System::Action_1<::PlayFab::PlayFabError*>* getStaticF___9__19_1() ;

static inline void setStaticF___9(::GorillaNetworking::Store::StoreController___c*  value) ;

static inline void setStaticF___9__19_1(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StoreController___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StoreController___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StoreController___c(StoreController___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StoreController___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StoreController___c(StoreController___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4437};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaNetworking::Store::StoreController___c) == 0x10, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
