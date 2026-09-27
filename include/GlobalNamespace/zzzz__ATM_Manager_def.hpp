#pragma once
// IWYU pragma private; include "GlobalNamespace/ATM_Manager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ATM_Manager_ATMStages_def.hpp"
#include "GlobalNamespace/zzzz__NexusGroupId_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ATM_Manager)
namespace GlobalNamespace {
struct ATM_Manager_ATMStages;
}
namespace GlobalNamespace {
struct ATM_Manager__ProcessATMState_d__56;
}
namespace GlobalNamespace {
class ATM_Manager___c;
}
namespace GlobalNamespace {
class CreatorCodeSmallDisplay;
}
namespace GlobalNamespace {
class IBuildValidation;
}
namespace GorillaNetworking::Store {
class ATM_UI;
}
namespace GorillaNetworking {
struct GorillaATMKeyBindings;
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
class Predicate_1;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class ATM_Manager;
}
namespace GlobalNamespace {
class ATM_Manager___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ATM_Manager*);
MARK_REF_T(::GlobalNamespace::ATM_Manager___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ATM_Manager*, "", "ATM_Manager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ATM_Manager___c*, "", "ATM_Manager/<>c");
// Dependencies ATM_Manager::ATMStages, NexusGroupId, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ATM_Manager
class CORDL_TYPE ATM_Manager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ATMStages = ::GlobalNamespace::ATM_Manager_ATMStages;

using _ProcessATMState_d__56 = ::GlobalNamespace::ATM_Manager__ProcessATMState_d__56;

using __c = ::GlobalNamespace::ATM_Manager___c;

/// @brief Field ATM_TERMINAL_ID, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_ATM_TERMINAL_ID, put=__cordl_internal_set_ATM_TERMINAL_ID)) ::StringW  ATM_TERMINAL_ID;

 __declspec(property(get=get_CurrentATMStage)) ::GlobalNamespace::ATM_Manager_ATMStages  CurrentATMStage;

/// @brief Field _tempCreatorCodeOveride, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__tempCreatorCodeOveride, put=__cordl_internal_set__tempCreatorCodeOveride)) ::StringW  _tempCreatorCodeOveride;

/// @brief Field alreadyBegan, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_alreadyBegan, put=__cordl_internal_set_alreadyBegan)) bool  alreadyBegan;

/// @brief Field atmUIToMemberCode, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_atmUIToMemberCode, put=__cordl_internal_set_atmUIToMemberCode)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaNetworking::Store::ATM_UI>,::System::Tuple_2<::StringW,::StringW>*>*  atmUIToMemberCode;

/// @brief Field atmUIs, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_atmUIs, put=__cordl_internal_set_atmUIs)) ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::ATM_UI>>*  atmUIs;

/// @brief Field currentATMStage, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentATMStage, put=__cordl_internal_set_currentATMStage)) ::GlobalNamespace::ATM_Manager_ATMStages  currentATMStage;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::ATM_Manager>  instance;

/// @brief Field nexusGroups, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_nexusGroups, put=__cordl_internal_set_nexusGroups)) ::ArrayW<::UnityW<::GlobalNamespace::NexusGroupId>>  nexusGroups;

/// @brief Field numShinyRocksToBuy, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_numShinyRocksToBuy, put=__cordl_internal_set_numShinyRocksToBuy)) int32_t  numShinyRocksToBuy;

/// @brief Field shinyRocksCost, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_shinyRocksCost, put=__cordl_internal_set_shinyRocksCost)) float_t  shinyRocksCost;

/// @brief Field smallDisplays, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_smallDisplays, put=__cordl_internal_set_smallDisplays)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CreatorCodeSmallDisplay>>*  smallDisplays;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Method AddATM, addr 0x577d5f0, size 0x214, virtual false, abstract: false, final false
inline void AddATM(::GorillaNetworking::Store::ATM_UI*  newATM, ::System::Tuple_2<::StringW,::StringW>*  creatorCode) ;

/// @brief Method Awake, addr 0x577921c, size 0x350, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreatorCodeValid, addr 0x577d9ac, size 0x168, virtual false, abstract: false, final false
inline void CreatorCodeValid() ;

/// @brief Method CreatorCodeValidating, addr 0x577d85c, size 0x150, virtual false, abstract: false, final false
inline void CreatorCodeValidating() ;

/// @brief Method CreatorCodesInitialized, addr 0x577c5d8, size 0x2a0, virtual false, abstract: false, final false
inline void CreatorCodesInitialized() ;

/// @brief Method HookupToCreatorCodes, addr 0x577c2b4, size 0x164, virtual false, abstract: false, final false
inline void HookupToCreatorCodes() ;

/// @brief Method IBuildValidation.BuildValidationCheck, addr 0x577dd18, size 0xcc, virtual true, abstract: false, final true
inline bool IBuildValidation_BuildValidationCheck() ;

/// @brief Method LeaveSystemMenu, addr 0x577dd14, size 0x4, virtual false, abstract: false, final false
inline void LeaveSystemMenu() ;

static inline ::GlobalNamespace::ATM_Manager* New_ctor() ;

/// @brief Method OnCreatorCodeChanged, addr 0x577c93c, size 0x428, virtual false, abstract: false, final false
inline void OnCreatorCodeChanged(::StringW  id) ;

/// @brief Method OnCreatorCodeInvalid, addr 0x577cfc4, size 0x168, virtual false, abstract: false, final false
inline void OnCreatorCodeInvalid(::StringW  id) ;

/// @brief Method OnDisable, addr 0x577d1dc, size 0xa4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x577d12c, size 0xb0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLanguageChanged, addr 0x577d280, size 0x8, virtual false, abstract: false, final false
inline void OnLanguageChanged() ;

/// @brief Method OnOnCreatorCodeFailureEvent, addr 0x577cd64, size 0x260, virtual false, abstract: false, final false
inline void OnOnCreatorCodeFailureEvent(::StringW  id) ;

/// @brief Method PressButton, addr 0x577d288, size 0x290, virtual false, abstract: false, final false
inline void PressButton(::GorillaNetworking::GorillaATMKeyBindings  buttonPressed) ;

/// @brief Method PressCurrencyPurchaseButton, addr 0x577847c, size 0x4, virtual false, abstract: false, final false
inline void PressCurrencyPurchaseButton(::GorillaNetworking::Store::ATM_UI*  atm_ui, ::StringW  currencyPurchaseSize) ;

/// [AsyncStateMachine(typeof(ATM_Manager::<ProcessATMState>d__56))]
/// @brief Method ProcessATMState, addr 0x577d518, size 0xd8, virtual false, abstract: false, final false
inline void ProcessATMState(::GorillaNetworking::Store::ATM_UI*  atm_ui, ::StringW  currencyButton) ;

/// @brief Method RemoveATM, addr 0x577d804, size 0x58, virtual false, abstract: false, final false
inline void RemoveATM(::GorillaNetworking::Store::ATM_UI*  atmToRemove) ;

/// @brief Method SetATMText, addr 0x577dbbc, size 0x158, virtual false, abstract: false, final false
inline void SetATMText(::StringW  newText) ;

/// @brief Method SetTemporaryCreatorCode, addr 0x577dde4, size 0x100, virtual false, abstract: false, final false
inline void SetTemporaryCreatorCode(::StringW  code) ;

/// @brief Method Start, addr 0x577c418, size 0x1c0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method SwitchToStage, addr 0x577956c, size 0x2d48, virtual false, abstract: false, final false
inline void SwitchToStage(::GlobalNamespace::ATM_Manager_ATMStages  newStage) ;

constexpr ::StringW const& __cordl_internal_get_ATM_TERMINAL_ID() const;

constexpr ::StringW& __cordl_internal_get_ATM_TERMINAL_ID() ;

constexpr ::StringW const& __cordl_internal_get__tempCreatorCodeOveride() const;

constexpr ::StringW& __cordl_internal_get__tempCreatorCodeOveride() ;

constexpr bool const& __cordl_internal_get_alreadyBegan() const;

constexpr bool& __cordl_internal_get_alreadyBegan() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaNetworking::Store::ATM_UI>,::System::Tuple_2<::StringW,::StringW>*>* const& __cordl_internal_get_atmUIToMemberCode() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaNetworking::Store::ATM_UI>,::System::Tuple_2<::StringW,::StringW>*>*& __cordl_internal_get_atmUIToMemberCode() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::ATM_UI>>* const& __cordl_internal_get_atmUIs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::ATM_UI>>*& __cordl_internal_get_atmUIs() ;

constexpr ::GlobalNamespace::ATM_Manager_ATMStages const& __cordl_internal_get_currentATMStage() const;

constexpr ::GlobalNamespace::ATM_Manager_ATMStages& __cordl_internal_get_currentATMStage() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::NexusGroupId>> const& __cordl_internal_get_nexusGroups() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::NexusGroupId>>& __cordl_internal_get_nexusGroups() ;

constexpr int32_t const& __cordl_internal_get_numShinyRocksToBuy() const;

constexpr int32_t& __cordl_internal_get_numShinyRocksToBuy() ;

constexpr float_t const& __cordl_internal_get_shinyRocksCost() const;

constexpr float_t& __cordl_internal_get_shinyRocksCost() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CreatorCodeSmallDisplay>>* const& __cordl_internal_get_smallDisplays() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CreatorCodeSmallDisplay>>*& __cordl_internal_get_smallDisplays() ;

constexpr void __cordl_internal_set_ATM_TERMINAL_ID(::StringW  value) ;

constexpr void __cordl_internal_set__tempCreatorCodeOveride(::StringW  value) ;

constexpr void __cordl_internal_set_alreadyBegan(bool  value) ;

constexpr void __cordl_internal_set_atmUIToMemberCode(::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaNetworking::Store::ATM_UI>,::System::Tuple_2<::StringW,::StringW>*>*  value) ;

constexpr void __cordl_internal_set_atmUIs(::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::ATM_UI>>*  value) ;

constexpr void __cordl_internal_set_currentATMStage(::GlobalNamespace::ATM_Manager_ATMStages  value) ;

constexpr void __cordl_internal_set_nexusGroups(::ArrayW<::UnityW<::GlobalNamespace::NexusGroupId>>  value) ;

constexpr void __cordl_internal_set_numShinyRocksToBuy(int32_t  value) ;

constexpr void __cordl_internal_set_shinyRocksCost(float_t  value) ;

constexpr void __cordl_internal_set_smallDisplays(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CreatorCodeSmallDisplay>>*  value) ;

/// @brief Method .ctor, addr 0x577dee4, size 0x100, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::ATM_Manager> getStaticF_instance() ;

/// @brief Method get_CurrentATMStage, addr 0x5779214, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ATM_Manager_ATMStages get_CurrentATMStage() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::ATM_Manager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ATM_Manager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ATM_Manager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ATM_Manager(ATM_Manager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ATM_Manager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ATM_Manager(ATM_Manager const& ) = delete;

/// @brief Field ATM_BACK_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_BACK_KEY{u"ATM_BACK"};

/// @brief Field ATM_BALANCE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_BALANCE_KEY{u"ATM_BALANCE"};

/// @brief Field ATM_BEGIN_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_BEGIN_KEY{u"ATM_BEGIN"};

/// @brief Field ATM_CHECK_YOUR_BALANCE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_CHECK_YOUR_BALANCE_KEY{u"ATM_CHECK_YOUR_BALANCE"};

/// @brief Field ATM_CHOOSE_PURCHASE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_CHOOSE_PURCHASE_KEY{u"ATM_CHOOSE_PURCHASE"};

/// @brief Field ATM_CONFIRM_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_CONFIRM_KEY{u"ATM_CONFIRM"};

/// @brief Field ATM_CREATOR_CODE_INVALID_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_CREATOR_CODE_INVALID_KEY{u"ATM_CREATOR_CODE_INVALID"};

/// @brief Field ATM_CREATOR_CODE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_CREATOR_CODE_KEY{u"ATM_CREATOR_CODE"};

/// @brief Field ATM_CREATOR_CODE_VALIDATING_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_CREATOR_CODE_VALIDATING_KEY{u"ATM_CREATOR_CODE_VALIDATING"};

/// @brief Field ATM_CREATOR_CODE_VALID_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_CREATOR_CODE_VALID_KEY{u"ATM_CREATOR_CODE_VALID"};

/// @brief Field ATM_CURRENT_BALANCE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_CURRENT_BALANCE_KEY{u"ATM_CURRENT_BALANCE"};

/// @brief Field ATM_IAP_NOT_AVAILABLE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_IAP_NOT_AVAILABLE_KEY{u"ATM_IAP_NOT_AVAILABLE"};

/// @brief Field ATM_LOCKED_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_LOCKED_KEY{u"ATM_LOCKED"};

/// @brief Field ATM_MAIN_SCREEN_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_MAIN_SCREEN_KEY{u"ATM_MAIN_SCREEN"};

/// @brief Field ATM_MODDED_CLIENT_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_MODDED_CLIENT_KEY{u"ATM_MODDED_CLIENT"};

/// @brief Field ATM_NOT_AVAILABLE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_NOT_AVAILABLE_KEY{u"ATM_NOT_AVAILABLE"};

/// @brief Field ATM_PURCHASE_CANCELLED_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_PURCHASE_CANCELLED_KEY{u"ATM_PURCHASE_CANCELLED"};

/// @brief Field ATM_PURCHASE_CONFIRMATION_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_PURCHASE_CONFIRMATION_KEY{u"ATM_PURCHASE_CONFIRMATION"};

/// @brief Field ATM_PURCHASE_CONFIRMATION_STEAM_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_PURCHASE_CONFIRMATION_STEAM_KEY{u"ATM_PURCHASE_CONFIRMATION_STEAM"};

/// @brief Field ATM_PURCHASE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_PURCHASE_KEY{u"ATM_PURCHASE"};

/// @brief Field ATM_PURCHASE_OPTION_FIRST_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_PURCHASE_OPTION_FIRST_KEY{u"ATM_PURCHASE_OPTION_FIRST"};

/// @brief Field ATM_PURCHASE_OPTION_FOURTH_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_PURCHASE_OPTION_FOURTH_KEY{u"ATM_PURCHASE_OPTION_FOURTH"};

/// @brief Field ATM_PURCHASE_OPTION_SECOND_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_PURCHASE_OPTION_SECOND_KEY{u"ATM_PURCHASE_OPTION_SECOND"};

/// @brief Field ATM_PURCHASE_OPTION_THIRD_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_PURCHASE_OPTION_THIRD_KEY{u"ATM_PURCHASE_OPTION_THIRD"};

/// @brief Field ATM_PURCHASING_DISABLED_OUT_OF_ORDER_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_PURCHASING_DISABLED_OUT_OF_ORDER_KEY{u"ATM_PURCHASING_DISABLED_OUT_OF_ORDER"};

/// @brief Field ATM_PURCHASING_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_PURCHASING_KEY{u"ATM_PURCHASING"};

/// @brief Field ATM_RETURN_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_RETURN_KEY{u"ATM_RETURN"};

/// @brief Field ATM_SCREEN_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_SCREEN_KEY{u"ATM_SCREEN"};

/// @brief Field ATM_STARTUP_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_STARTUP_KEY{u"ATM_STARTUP"};

/// @brief Field ATM_SUCCESS_NEW_BALANCE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  ATM_SUCCESS_NEW_BALANCE_KEY{u"ATM_SUCCESS_NEW_BALANCE"};

/// @brief Field MAX_CODE_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  MAX_CODE_LENGTH{static_cast<int32_t>(0xa)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1393};

/// @brief Field atmUIs, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::ATM_UI>>*  ___atmUIs;

/// @brief Field atmUIToMemberCode, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaNetworking::Store::ATM_UI>,::System::Tuple_2<::StringW,::StringW>*>*  ___atmUIToMemberCode;

/// [HideInInspector]
/// @brief Field smallDisplays, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CreatorCodeSmallDisplay>>*  ___smallDisplays;

/// @brief Field currentATMStage, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::ATM_Manager_ATMStages  ___currentATMStage;

/// @brief Field numShinyRocksToBuy, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___numShinyRocksToBuy;

/// @brief Field shinyRocksCost, offset: 0x40, size: 0x4, def value: None
 float_t  ___shinyRocksCost;

/// @brief Field alreadyBegan, offset: 0x44, size: 0x1, def value: None
 bool  ___alreadyBegan;

/// [SerializeField]
/// @brief Field nexusGroups, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::NexusGroupId>>  ___nexusGroups;

/// @brief Field _tempCreatorCodeOveride, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____tempCreatorCodeOveride;

/// @brief Field ATM_TERMINAL_ID, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___ATM_TERMINAL_ID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ATM_Manager, ___atmUIs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ATM_Manager, ___atmUIToMemberCode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ATM_Manager, ___smallDisplays) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ATM_Manager, ___currentATMStage) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ATM_Manager, ___numShinyRocksToBuy) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ATM_Manager, ___shinyRocksCost) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ATM_Manager, ___alreadyBegan) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ATM_Manager, ___nexusGroups) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ATM_Manager, ____tempCreatorCodeOveride) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ATM_Manager, ___ATM_TERMINAL_ID) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ATM_Manager) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ATM_Manager/<>c
class CORDL_TYPE ATM_Manager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::ATM_Manager___c*  __9;

/// @brief Field <>9__57_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__57_0, put=setStaticF___9__57_0)) ::System::Predicate_1<::UnityW<::GorillaNetworking::Store::ATM_UI>>*  __9__57_0;

static inline ::GlobalNamespace::ATM_Manager___c* New_ctor() ;

/// @brief Method <AddATM>b__57_0, addr 0x577e054, size 0x64, virtual false, abstract: false, final false
inline bool _AddATM_b__57_0(::GorillaNetworking::Store::ATM_UI*  atm) ;

/// @brief Method .ctor, addr 0x577e04c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::ATM_Manager___c* getStaticF___9() ;

static inline ::System::Predicate_1<::UnityW<::GorillaNetworking::Store::ATM_UI>>* getStaticF___9__57_0() ;

static inline void setStaticF___9(::GlobalNamespace::ATM_Manager___c*  value) ;

static inline void setStaticF___9__57_0(::System::Predicate_1<::UnityW<::GorillaNetworking::Store::ATM_UI>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ATM_Manager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ATM_Manager___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ATM_Manager___c(ATM_Manager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ATM_Manager___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ATM_Manager___c(ATM_Manager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1391};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ATM_Manager___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
