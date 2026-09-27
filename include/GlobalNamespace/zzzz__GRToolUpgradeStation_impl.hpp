#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolUpgradeStation.hpp"
#include "GlobalNamespace/zzzz__GRToolUpgradeStation_UpgradeStationState_impl.hpp"
#include "GlobalNamespace/zzzz__GRTool_GRToolType_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "TMPro/zzzz__TMP_Text_impl.hpp"
#include "UnityEngine/UI/zzzz__Image_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GRToolUpgradeStation_def.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionManager_def.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionTree_def.hpp"
#include "GlobalNamespace/zzzz__GRToolUpgradeStation_UpgradeStationState_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
#include "GlobalNamespace/zzzz__IDCardScanner_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradeStation.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradeStation::*)(::GlobalNamespace::GRToolProgressionManager*, ::GlobalNamespace::GhostReactor*)>(&::GlobalNamespace::GRToolUpgradeStation::Init)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x58cf580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager*>(), ::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradeStation.get_canInsertTool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolUpgradeStation::*)()>(&::GlobalNamespace::GRToolUpgradeStation::get_canInsertTool)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58cf84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"get_canInsertTool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradeStation.ResearchTreeUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradeStation::*)()>(&::GlobalNamespace::GRToolUpgradeStation::ResearchTreeUpdated)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58cf86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"ResearchTreeUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradeStation.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradeStation::*)()>(&::GlobalNamespace::GRToolUpgradeStation::Update)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58cf89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradeStation.ToolInserted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradeStation::*)(::GlobalNamespace::GRTool*)>(&::GlobalNamespace::GRToolUpgradeStation::ToolInserted)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x58cf944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"ToolInserted", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradeStation.UpdateUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradeStation::*)()>(&::GlobalNamespace::GRToolUpgradeStation::UpdateUI)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58cf884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"UpdateUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradeStation.UpdateUpgradeTexts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradeStation::*)()>(&::GlobalNamespace::GRToolUpgradeStation::UpdateUpgradeTexts)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x58cff18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"UpdateUpgradeTexts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradeStation.UnlockAllUpgrades
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradeStation::*)()>(&::GlobalNamespace::GRToolUpgradeStation::UnlockAllUpgrades)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d02d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"UnlockAllUpgrades", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradeStation.UpdateSelectedUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradeStation::*)()>(&::GlobalNamespace::GRToolUpgradeStation::UpdateSelectedUpgrade)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x58d0048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"UpdateSelectedUpgrade", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradeStation.ResetScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradeStation::*)()>(&::GlobalNamespace::GRToolUpgradeStation::ResetScreen)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x58cf670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"ResetScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradeStation.SelectUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradeStation::*)(int32_t)>(&::GlobalNamespace::GRToolUpgradeStation::SelectUpgrade)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x58cfa00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"SelectUpgrade", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradeStation.UpgradeTool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradeStation::*)()>(&::GlobalNamespace::GRToolUpgradeStation::UpgradeTool)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x58d02d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"UpgradeTool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradeStation.LocalPlacedToolInUpgradeStation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradeStation::*)(::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GRToolUpgradeStation::LocalPlacedToolInUpgradeStation)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x58cfd68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"LocalPlacedToolInUpgradeStation", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradeStation.PositionInsertedTool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradeStation::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GRToolUpgradeStation::PositionInsertedTool)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x58d036c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"PositionInsertedTool", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradeStation.PayForUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradeStation::*)(int32_t)>(&::GlobalNamespace::GRToolUpgradeStation::PayForUpgrade)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x58d05ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"PayForUpgrade", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradeStation.StartUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradeStation::*)(double_t)>(&::GlobalNamespace::GRToolUpgradeStation::StartUpgrade)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x58d0770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"StartUpgrade", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradeStation.UpgradingUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradeStation::*)(double_t)>(&::GlobalNamespace::GRToolUpgradeStation::UpgradingUpdate)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58cf910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"UpgradingUpdate", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradeStation.CompleteUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradeStation::*)()>(&::GlobalNamespace::GRToolUpgradeStation::CompleteUpgrade)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58d0874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"CompleteUpgrade", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradeStation.MoveItemToUpgradeSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradeStation::*)()>(&::GlobalNamespace::GRToolUpgradeStation::MoveItemToUpgradeSlot)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x58d0adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"MoveItemToUpgradeSlot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradeStation.MoveToolToFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradeStation::*)()>(&::GlobalNamespace::GRToolUpgradeStation::MoveToolToFinished)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x58d0894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"MoveToolToFinished", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradeStation.EjectToolFromStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradeStation::*)()>(&::GlobalNamespace::GRToolUpgradeStation::EjectToolFromStart)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x58d0f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"EjectToolFromStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradeStation.EjectToolFromEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradeStation::*)()>(&::GlobalNamespace::GRToolUpgradeStation::EjectToolFromEnd)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x58d0d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"EjectToolFromEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradeStation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradeStation::*)()>(&::GlobalNamespace::GRToolUpgradeStation::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x58d1228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GRTool>& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_insertedTool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___insertedTool;
}
constexpr ::UnityW<::GlobalNamespace::GRTool> const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_insertedTool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___insertedTool;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_insertedTool(::UnityW<::GlobalNamespace::GRTool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___insertedTool = value;
}
constexpr ::GlobalNamespace::GRTool_GRToolType& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_insertedToolType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___insertedToolType;
}
constexpr ::GlobalNamespace::GRTool_GRToolType const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_insertedToolType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___insertedToolType;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_insertedToolType(::GlobalNamespace::GRTool_GRToolType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___insertedToolType = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_insertedToolEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___insertedToolEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_insertedToolEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___insertedToolEntity;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_insertedToolEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___insertedToolEntity = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor>& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get__reactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reactor;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get__reactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reactor;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set__reactor(::UnityW<::GlobalNamespace::GhostReactor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reactor = value;
}
constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager>& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_toolProgressionManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolProgressionManager;
}
constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager> const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_toolProgressionManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolProgressionManager;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_toolProgressionManager(::UnityW<::GlobalNamespace::GRToolProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolProgressionManager = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_selectedToolUpgrades()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedToolUpgrades;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_selectedToolUpgrades() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedToolUpgrades;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_selectedToolUpgrades(::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedToolUpgrades = value;
}
constexpr bool& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_bIsToolInserted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bIsToolInserted;
}
constexpr bool const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_bIsToolInserted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bIsToolInserted;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_bIsToolInserted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bIsToolInserted = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_startingLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingLocation;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_startingLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingLocation;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_startingLocation(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingLocation = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_upgradingLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradingLocation;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_upgradingLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradingLocation;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_upgradingLocation(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgradingLocation = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_depositedLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositedLocation;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_depositedLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositedLocation;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_depositedLocation(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depositedLocation = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_ejectionTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ejectionTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_ejectionTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ejectionTransform;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_ejectionTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ejectionTransform = value;
}
constexpr float_t& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_ejectionVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ejectionVelocity;
}
constexpr float_t const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_ejectionVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ejectionVelocity;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_ejectionVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ejectionVelocity = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_selectedColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_selectedColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedColor;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_selectedColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_unSelectedColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unSelectedColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_unSelectedColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unSelectedColor;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_unSelectedColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unSelectedColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_lockedColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockedColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_lockedColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockedColor;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_lockedColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lockedColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_unlockedColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_unlockedColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedColor;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_unlockedColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockedColor = value;
}
constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>>& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_UpgradeTitlesText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpgradeTitlesText;
}
constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>> const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_UpgradeTitlesText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpgradeTitlesText;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_UpgradeTitlesText(::ArrayW<::UnityW<::TMPro::TMP_Text>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpgradeTitlesText = value;
}
constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>>& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_MFD_ButtonTexts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MFD_ButtonTexts;
}
constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>> const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_MFD_ButtonTexts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MFD_ButtonTexts;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_MFD_ButtonTexts(::ArrayW<::UnityW<::TMPro::TMP_Text>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MFD_ButtonTexts = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_UpgradeButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpgradeButtons;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>> const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_UpgradeButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpgradeButtons;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_UpgradeButtons(::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpgradeButtons = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>>& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_UpgradeLockedImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpgradeLockedImage;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>> const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_UpgradeLockedImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpgradeLockedImage;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_UpgradeLockedImage(::ArrayW<::UnityW<::UnityEngine::UI::Image>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpgradeLockedImage = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_ToolNameText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ToolNameText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_ToolNameText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ToolNameText;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_ToolNameText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ToolNameText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_DescriptionText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DescriptionText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_DescriptionText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DescriptionText;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_DescriptionText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DescriptionText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_CostText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CostText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_CostText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CostText;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_CostText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CostText = value;
}
constexpr ::StringW& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_defaultCostText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultCostText;
}
constexpr ::StringW const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_defaultCostText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultCostText;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_defaultCostText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultCostText = value;
}
constexpr ::UnityW<::GlobalNamespace::IDCardScanner>& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_IDCardScanner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IDCardScanner;
}
constexpr ::UnityW<::GlobalNamespace::IDCardScanner> const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_IDCardScanner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IDCardScanner;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_IDCardScanner(::UnityW<::GlobalNamespace::IDCardScanner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IDCardScanner = value;
}
constexpr int32_t& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_selectedUpgradeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedUpgradeIndex;
}
constexpr int32_t const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_selectedUpgradeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedUpgradeIndex;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_selectedUpgradeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedUpgradeIndex = value;
}
constexpr double_t& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_upgradeStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeStartTime;
}
constexpr double_t const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_upgradeStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeStartTime;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_upgradeStartTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgradeStartTime = value;
}
constexpr double_t& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_upgradeAnimationLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeAnimationLength;
}
constexpr double_t const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_upgradeAnimationLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeAnimationLength;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_upgradeAnimationLength(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgradeAnimationLength = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_rotationAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationAnimation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_rotationAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationAnimation;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_rotationAnimation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationAnimation = value;
}
constexpr ::GlobalNamespace::GRToolUpgradeStation_UpgradeStationState& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::GRToolUpgradeStation_UpgradeStationState const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_currentState(::GlobalNamespace::GRToolUpgradeStation_UpgradeStationState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_attachedItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachedItem;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRToolUpgradeStation::__cordl_internal_get_attachedItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachedItem;
}
constexpr void GlobalNamespace::GRToolUpgradeStation::__cordl_internal_set_attachedItem(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachedItem = value;
}
inline void GlobalNamespace::GRToolUpgradeStation::Init(::GlobalNamespace::GRToolProgressionManager*  tree, ::GlobalNamespace::GhostReactor*  reactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager*>(), ::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tree, reactor);
}
inline bool GlobalNamespace::GRToolUpgradeStation::get_canInsertTool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"get_canInsertTool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradeStation::ResearchTreeUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"ResearchTreeUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradeStation::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradeStation::ToolInserted(::GlobalNamespace::GRTool*  tool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"ToolInserted", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool);
}
inline void GlobalNamespace::GRToolUpgradeStation::UpdateUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"UpdateUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradeStation::UpdateUpgradeTexts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"UpdateUpgradeTexts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradeStation::UnlockAllUpgrades()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"UnlockAllUpgrades", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradeStation::UpdateSelectedUpgrade()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"UpdateSelectedUpgrade", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradeStation::ResetScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"ResetScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradeStation::SelectUpgrade(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"SelectUpgrade", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::GRToolUpgradeStation::UpgradeTool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"UpgradeTool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradeStation::LocalPlacedToolInUpgradeStation(::GlobalNamespace::GameEntityId  entityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"LocalPlacedToolInUpgradeStation", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityId);
}
inline void GlobalNamespace::GRToolUpgradeStation::PositionInsertedTool(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"PositionInsertedTool", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline void GlobalNamespace::GRToolUpgradeStation::PayForUpgrade(int32_t  Player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"PayForUpgrade", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Player);
}
inline void GlobalNamespace::GRToolUpgradeStation::StartUpgrade(double_t  startTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"StartUpgrade", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startTime);
}
inline void GlobalNamespace::GRToolUpgradeStation::UpgradingUpdate(double_t  currentTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"UpgradingUpdate", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTime);
}
inline void GlobalNamespace::GRToolUpgradeStation::CompleteUpgrade()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"CompleteUpgrade", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradeStation::MoveItemToUpgradeSlot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"MoveItemToUpgradeSlot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradeStation::MoveToolToFinished()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"MoveToolToFinished", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradeStation::EjectToolFromStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"EjectToolFromStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradeStation::EjectToolFromEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {"EjectToolFromEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradeStation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRToolUpgradeStation* GlobalNamespace::GRToolUpgradeStation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRToolUpgradeStation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolUpgradeStation::GRToolUpgradeStation()   {
}
