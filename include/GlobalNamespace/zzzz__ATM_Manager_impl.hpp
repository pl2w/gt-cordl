#pragma once
// IWYU pragma private; include "GlobalNamespace/ATM_Manager.hpp"
#include "GlobalNamespace/zzzz__ATM_Manager_ATMStages_impl.hpp"
#include "GlobalNamespace/zzzz__NexusGroupId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ATM_Manager_def.hpp"
#include "GlobalNamespace/zzzz__ATM_Manager_ATMStages_def.hpp"
#include "GlobalNamespace/zzzz__ATM_Manager__ProcessATMState_d__56_def.hpp"
#include "GlobalNamespace/zzzz__ATM_Manager_def.hpp"
#include "GlobalNamespace/zzzz__CreatorCodeSmallDisplay_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
#include "GorillaNetworking/Store/zzzz__ATM_UI_def.hpp"
#include "GorillaNetworking/zzzz__GorillaATMKeyBindings_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager.get_CurrentATMStage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ATM_Manager_ATMStages (::GlobalNamespace::ATM_Manager::*)()>(&::GlobalNamespace::ATM_Manager::get_CurrentATMStage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5779214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"get_CurrentATMStage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ATM_Manager::*)()>(&::GlobalNamespace::ATM_Manager::Awake)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x577921c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ATM_Manager::*)()>(&::GlobalNamespace::ATM_Manager::Start)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x577c418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager.HookupToCreatorCodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ATM_Manager::*)()>(&::GlobalNamespace::ATM_Manager::HookupToCreatorCodes)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x577c2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"HookupToCreatorCodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager.CreatorCodesInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ATM_Manager::*)()>(&::GlobalNamespace::ATM_Manager::CreatorCodesInitialized)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x577c5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"CreatorCodesInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager.OnCreatorCodeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ATM_Manager::*)(::StringW)>(&::GlobalNamespace::ATM_Manager::OnCreatorCodeChanged)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x577c93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"OnCreatorCodeChanged", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager.OnOnCreatorCodeFailureEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ATM_Manager::*)(::StringW)>(&::GlobalNamespace::ATM_Manager::OnOnCreatorCodeFailureEvent)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x577cd64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"OnOnCreatorCodeFailureEvent", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager.OnCreatorCodeInvalid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ATM_Manager::*)(::StringW)>(&::GlobalNamespace::ATM_Manager::OnCreatorCodeInvalid)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x577cfc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"OnCreatorCodeInvalid", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ATM_Manager::*)()>(&::GlobalNamespace::ATM_Manager::OnEnable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x577d12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ATM_Manager::*)()>(&::GlobalNamespace::ATM_Manager::OnDisable)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x577d1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager.OnLanguageChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ATM_Manager::*)()>(&::GlobalNamespace::ATM_Manager::OnLanguageChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x577d280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"OnLanguageChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager.PressButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ATM_Manager::*)(::GorillaNetworking::GorillaATMKeyBindings)>(&::GlobalNamespace::ATM_Manager::PressButton)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x577d288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"PressButton", {}, {::i2c::type_of<::GorillaNetworking::GorillaATMKeyBindings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager.ProcessATMState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ATM_Manager::*)(::GorillaNetworking::Store::ATM_UI*, ::StringW)>(&::GlobalNamespace::ATM_Manager::ProcessATMState)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x577d518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"ProcessATMState", {}, {::i2c::type_of<::GorillaNetworking::Store::ATM_UI*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager.AddATM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ATM_Manager::*)(::GorillaNetworking::Store::ATM_UI*, ::System::Tuple_2<::StringW,::StringW>*)>(&::GlobalNamespace::ATM_Manager::AddATM)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x577d5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"AddATM", {}, {::i2c::type_of<::GorillaNetworking::Store::ATM_UI*>(), ::i2c::type_of<::System::Tuple_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager.RemoveATM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ATM_Manager::*)(::GorillaNetworking::Store::ATM_UI*)>(&::GlobalNamespace::ATM_Manager::RemoveATM)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x577d804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"RemoveATM", {}, {::i2c::type_of<::GorillaNetworking::Store::ATM_UI*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager.CreatorCodeValidating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ATM_Manager::*)()>(&::GlobalNamespace::ATM_Manager::CreatorCodeValidating)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x577d85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"CreatorCodeValidating", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager.CreatorCodeValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ATM_Manager::*)()>(&::GlobalNamespace::ATM_Manager::CreatorCodeValid)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x577d9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"CreatorCodeValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager.SwitchToStage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ATM_Manager::*)(::GlobalNamespace::ATM_Manager_ATMStages)>(&::GlobalNamespace::ATM_Manager::SwitchToStage)> {
  constexpr static std::size_t size = 0x2d48;
  constexpr static std::size_t addrs = 0x577956c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"SwitchToStage", {}, {::i2c::type_of<::GlobalNamespace::ATM_Manager_ATMStages>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager.SetATMText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ATM_Manager::*)(::StringW)>(&::GlobalNamespace::ATM_Manager::SetATMText)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x577dbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"SetATMText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager.PressCurrencyPurchaseButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ATM_Manager::*)(::GorillaNetworking::Store::ATM_UI*, ::StringW)>(&::GlobalNamespace::ATM_Manager::PressCurrencyPurchaseButton)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x577847c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"PressCurrencyPurchaseButton", {}, {::i2c::type_of<::GorillaNetworking::Store::ATM_UI*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager.LeaveSystemMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ATM_Manager::*)()>(&::GlobalNamespace::ATM_Manager::LeaveSystemMenu)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x577dd14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"LeaveSystemMenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager.IBuildValidation_BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ATM_Manager::*)()>(&::GlobalNamespace::ATM_Manager::IBuildValidation_BuildValidationCheck)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x577dd18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"IBuildValidation.BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager.SetTemporaryCreatorCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ATM_Manager::*)(::StringW)>(&::GlobalNamespace::ATM_Manager::SetTemporaryCreatorCode)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x577dde4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"SetTemporaryCreatorCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ATM_Manager::*)()>(&::GlobalNamespace::ATM_Manager::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x577dee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::ATM_UI>>*& GlobalNamespace::ATM_Manager::__cordl_internal_get_atmUIs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atmUIs;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::ATM_UI>>* const& GlobalNamespace::ATM_Manager::__cordl_internal_get_atmUIs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atmUIs;
}
constexpr void GlobalNamespace::ATM_Manager::__cordl_internal_set_atmUIs(::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::ATM_UI>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___atmUIs = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaNetworking::Store::ATM_UI>,::System::Tuple_2<::StringW,::StringW>*>*& GlobalNamespace::ATM_Manager::__cordl_internal_get_atmUIToMemberCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atmUIToMemberCode;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaNetworking::Store::ATM_UI>,::System::Tuple_2<::StringW,::StringW>*>* const& GlobalNamespace::ATM_Manager::__cordl_internal_get_atmUIToMemberCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atmUIToMemberCode;
}
constexpr void GlobalNamespace::ATM_Manager::__cordl_internal_set_atmUIToMemberCode(::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaNetworking::Store::ATM_UI>,::System::Tuple_2<::StringW,::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___atmUIToMemberCode = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CreatorCodeSmallDisplay>>*& GlobalNamespace::ATM_Manager::__cordl_internal_get_smallDisplays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smallDisplays;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CreatorCodeSmallDisplay>>* const& GlobalNamespace::ATM_Manager::__cordl_internal_get_smallDisplays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smallDisplays;
}
constexpr void GlobalNamespace::ATM_Manager::__cordl_internal_set_smallDisplays(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CreatorCodeSmallDisplay>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smallDisplays = value;
}
constexpr ::GlobalNamespace::ATM_Manager_ATMStages& GlobalNamespace::ATM_Manager::__cordl_internal_get_currentATMStage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentATMStage;
}
constexpr ::GlobalNamespace::ATM_Manager_ATMStages const& GlobalNamespace::ATM_Manager::__cordl_internal_get_currentATMStage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentATMStage;
}
constexpr void GlobalNamespace::ATM_Manager::__cordl_internal_set_currentATMStage(::GlobalNamespace::ATM_Manager_ATMStages  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentATMStage = value;
}
constexpr int32_t& GlobalNamespace::ATM_Manager::__cordl_internal_get_numShinyRocksToBuy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numShinyRocksToBuy;
}
constexpr int32_t const& GlobalNamespace::ATM_Manager::__cordl_internal_get_numShinyRocksToBuy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numShinyRocksToBuy;
}
constexpr void GlobalNamespace::ATM_Manager::__cordl_internal_set_numShinyRocksToBuy(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numShinyRocksToBuy = value;
}
constexpr float_t& GlobalNamespace::ATM_Manager::__cordl_internal_get_shinyRocksCost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shinyRocksCost;
}
constexpr float_t const& GlobalNamespace::ATM_Manager::__cordl_internal_get_shinyRocksCost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shinyRocksCost;
}
constexpr void GlobalNamespace::ATM_Manager::__cordl_internal_set_shinyRocksCost(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shinyRocksCost = value;
}
constexpr bool& GlobalNamespace::ATM_Manager::__cordl_internal_get_alreadyBegan()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alreadyBegan;
}
constexpr bool const& GlobalNamespace::ATM_Manager::__cordl_internal_get_alreadyBegan() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alreadyBegan;
}
constexpr void GlobalNamespace::ATM_Manager::__cordl_internal_set_alreadyBegan(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alreadyBegan = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::NexusGroupId>>& GlobalNamespace::ATM_Manager::__cordl_internal_get_nexusGroups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nexusGroups;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::NexusGroupId>> const& GlobalNamespace::ATM_Manager::__cordl_internal_get_nexusGroups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nexusGroups;
}
constexpr void GlobalNamespace::ATM_Manager::__cordl_internal_set_nexusGroups(::ArrayW<::UnityW<::GlobalNamespace::NexusGroupId>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nexusGroups = value;
}
constexpr ::StringW& GlobalNamespace::ATM_Manager::__cordl_internal_get__tempCreatorCodeOveride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempCreatorCodeOveride;
}
constexpr ::StringW const& GlobalNamespace::ATM_Manager::__cordl_internal_get__tempCreatorCodeOveride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempCreatorCodeOveride;
}
constexpr void GlobalNamespace::ATM_Manager::__cordl_internal_set__tempCreatorCodeOveride(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tempCreatorCodeOveride = value;
}
constexpr ::StringW& GlobalNamespace::ATM_Manager::__cordl_internal_get_ATM_TERMINAL_ID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ATM_TERMINAL_ID;
}
constexpr ::StringW const& GlobalNamespace::ATM_Manager::__cordl_internal_get_ATM_TERMINAL_ID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ATM_TERMINAL_ID;
}
constexpr void GlobalNamespace::ATM_Manager::__cordl_internal_set_ATM_TERMINAL_ID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ATM_TERMINAL_ID = value;
}
inline void GlobalNamespace::ATM_Manager::setStaticF_instance(::UnityW<::GlobalNamespace::ATM_Manager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::ATM_Manager>, "instance", ::GlobalNamespace::ATM_Manager*>(std::forward<::UnityW<::GlobalNamespace::ATM_Manager>>(value));
}
inline ::UnityW<::GlobalNamespace::ATM_Manager> GlobalNamespace::ATM_Manager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::ATM_Manager>, "instance", ::GlobalNamespace::ATM_Manager*>();
}
inline ::GlobalNamespace::ATM_Manager_ATMStages GlobalNamespace::ATM_Manager::get_CurrentATMStage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"get_CurrentATMStage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ATM_Manager_ATMStages>(this, ___internal_method);
}
inline void GlobalNamespace::ATM_Manager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ATM_Manager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ATM_Manager::HookupToCreatorCodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"HookupToCreatorCodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ATM_Manager::CreatorCodesInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"CreatorCodesInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ATM_Manager::OnCreatorCodeChanged(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"OnCreatorCodeChanged", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void GlobalNamespace::ATM_Manager::OnOnCreatorCodeFailureEvent(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"OnOnCreatorCodeFailureEvent", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void GlobalNamespace::ATM_Manager::OnCreatorCodeInvalid(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"OnCreatorCodeInvalid", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void GlobalNamespace::ATM_Manager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ATM_Manager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ATM_Manager::OnLanguageChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"OnLanguageChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ATM_Manager::PressButton(::GorillaNetworking::GorillaATMKeyBindings  buttonPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"PressButton", {}, {::i2c::type_of<::GorillaNetworking::GorillaATMKeyBindings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonPressed);
}
inline void GlobalNamespace::ATM_Manager::ProcessATMState(::GorillaNetworking::Store::ATM_UI*  atm_ui, ::StringW  currencyButton)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"ProcessATMState", {}, {::i2c::type_of<::GorillaNetworking::Store::ATM_UI*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, atm_ui, currencyButton);
}
inline void GlobalNamespace::ATM_Manager::AddATM(::GorillaNetworking::Store::ATM_UI*  newATM, ::System::Tuple_2<::StringW,::StringW>*  creatorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"AddATM", {}, {::i2c::type_of<::GorillaNetworking::Store::ATM_UI*>(), ::i2c::type_of<::System::Tuple_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newATM, creatorCode);
}
inline void GlobalNamespace::ATM_Manager::RemoveATM(::GorillaNetworking::Store::ATM_UI*  atmToRemove)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"RemoveATM", {}, {::i2c::type_of<::GorillaNetworking::Store::ATM_UI*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, atmToRemove);
}
inline void GlobalNamespace::ATM_Manager::CreatorCodeValidating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"CreatorCodeValidating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ATM_Manager::CreatorCodeValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"CreatorCodeValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ATM_Manager::SwitchToStage(::GlobalNamespace::ATM_Manager_ATMStages  newStage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"SwitchToStage", {}, {::i2c::type_of<::GlobalNamespace::ATM_Manager_ATMStages>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newStage);
}
inline void GlobalNamespace::ATM_Manager::SetATMText(::StringW  newText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"SetATMText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newText);
}
inline void GlobalNamespace::ATM_Manager::PressCurrencyPurchaseButton(::GorillaNetworking::Store::ATM_UI*  atm_ui, ::StringW  currencyPurchaseSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"PressCurrencyPurchaseButton", {}, {::i2c::type_of<::GorillaNetworking::Store::ATM_UI*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, atm_ui, currencyPurchaseSize);
}
inline void GlobalNamespace::ATM_Manager::LeaveSystemMenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"LeaveSystemMenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ATM_Manager::IBuildValidation_BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"IBuildValidation.BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ATM_Manager::SetTemporaryCreatorCode(::StringW  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {"SetTemporaryCreatorCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline void GlobalNamespace::ATM_Manager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ATM_Manager* GlobalNamespace::ATM_Manager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ATM_Manager*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  GlobalNamespace::ATM_Manager::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* GlobalNamespace::ATM_Manager::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ATM_Manager::ATM_Manager()   {
}
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ATM_Manager___c::*)()>(&::GlobalNamespace::ATM_Manager___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x577e04c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager___c._AddATM_b__57_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ATM_Manager___c::*)(::GorillaNetworking::Store::ATM_UI*)>(&::GlobalNamespace::ATM_Manager___c::_AddATM_b__57_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x577e054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager___c*>(),
                        {"<AddATM>b__57_0", {}, {::i2c::type_of<::GorillaNetworking::Store::ATM_UI*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ATM_Manager___c::setStaticF___9(::GlobalNamespace::ATM_Manager___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ATM_Manager___c*, "<>9", ::GlobalNamespace::ATM_Manager___c*>(std::forward<::GlobalNamespace::ATM_Manager___c*>(value));
}
inline ::GlobalNamespace::ATM_Manager___c* GlobalNamespace::ATM_Manager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ATM_Manager___c*, "<>9", ::GlobalNamespace::ATM_Manager___c*>();
}
inline void GlobalNamespace::ATM_Manager___c::setStaticF___9__57_0(::System::Predicate_1<::UnityW<::GorillaNetworking::Store::ATM_UI>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::GorillaNetworking::Store::ATM_UI>>*, "<>9__57_0", ::GlobalNamespace::ATM_Manager___c*>(std::forward<::System::Predicate_1<::UnityW<::GorillaNetworking::Store::ATM_UI>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::GorillaNetworking::Store::ATM_UI>>* GlobalNamespace::ATM_Manager___c::getStaticF___9__57_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::GorillaNetworking::Store::ATM_UI>>*, "<>9__57_0", ::GlobalNamespace::ATM_Manager___c*>();
}
inline void GlobalNamespace::ATM_Manager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ATM_Manager___c::_AddATM_b__57_0(::GorillaNetworking::Store::ATM_UI*  atm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager___c*>(),
                        {"<AddATM>b__57_0", {}, {::i2c::type_of<::GorillaNetworking::Store::ATM_UI*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, atm);
}
inline ::GlobalNamespace::ATM_Manager___c* GlobalNamespace::ATM_Manager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ATM_Manager___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ATM_Manager___c::ATM_Manager___c()   {
}
