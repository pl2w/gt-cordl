#pragma once
// IWYU pragma private; include "GlobalNamespace/RotatingQuestsManager.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RotatingQuestsManager_def.hpp"
#include "GlobalNamespace/zzzz__GorillaQuestManager_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__RotatingQuest_def.hpp"
#include "GlobalNamespace/zzzz__RotatingQuestsManager_RotatingQuestList___c__DisplayClass3_0_def.hpp"
#include "GlobalNamespace/zzzz__RotatingQuestsManager___c__DisplayClass29_0_def.hpp"
#include "GlobalNamespace/zzzz__RotatingQuestsManager_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RotatingQuestsManager::*)()>(&::GlobalNamespace::RotatingQuestsManager::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x562d3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager::*)(bool)>(&::GlobalNamespace::RotatingQuestsManager::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x562d400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager.get_DailyQuestCountdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GlobalNamespace::RotatingQuestsManager::*)()>(&::GlobalNamespace::RotatingQuestsManager::get_DailyQuestCountdown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x562d408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"get_DailyQuestCountdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager.set_DailyQuestCountdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager::*)(::System::DateTime)>(&::GlobalNamespace::RotatingQuestsManager::set_DailyQuestCountdown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x562d410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"set_DailyQuestCountdown", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager.get_WeeklyQuestCountdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GlobalNamespace::RotatingQuestsManager::*)()>(&::GlobalNamespace::RotatingQuestsManager::get_WeeklyQuestCountdown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x562d418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"get_WeeklyQuestCountdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager.set_WeeklyQuestCountdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager::*)(::System::DateTime)>(&::GlobalNamespace::RotatingQuestsManager::set_WeeklyQuestCountdown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x562d420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"set_WeeklyQuestCountdown", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager::*)()>(&::GlobalNamespace::RotatingQuestsManager::Start)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x562d428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager::*)()>(&::GlobalNamespace::RotatingQuestsManager::OnEnable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x562d618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager::*)()>(&::GlobalNamespace::RotatingQuestsManager::OnDisable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x562d684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager::*)()>(&::GlobalNamespace::RotatingQuestsManager::Tick)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x562d6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager.ProcessAllQuests
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager::*)(::System::Action_1<::GlobalNamespace::RotatingQuest*>*)>(&::GlobalNamespace::RotatingQuestsManager::ProcessAllQuests)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x562d810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"ProcessAllQuests", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::RotatingQuest*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager.QuestLoadPostProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager::*)(::GlobalNamespace::RotatingQuest*)>(&::GlobalNamespace::RotatingQuestsManager::QuestLoadPostProcess)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x562dadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"QuestLoadPostProcess", {}, {::i2c::type_of<::GlobalNamespace::RotatingQuest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager.QuestSavePreProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager::*)(::GlobalNamespace::RotatingQuest*)>(&::GlobalNamespace::RotatingQuestsManager::QuestSavePreProcess)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x562db78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"QuestSavePreProcess", {}, {::i2c::type_of<::GlobalNamespace::RotatingQuest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager.LoadTestQuestsFromFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager::*)()>(&::GlobalNamespace::RotatingQuestsManager::LoadTestQuestsFromFile)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x562dc28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"LoadTestQuestsFromFile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager.RequestQuestsFromTitleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager::*)()>(&::GlobalNamespace::RotatingQuestsManager::RequestQuestsFromTitleData)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x562d488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"RequestQuestsFromTitleData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager.LoadQuestsFromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager::*)(::StringW)>(&::GlobalNamespace::RotatingQuestsManager::LoadQuestsFromJson)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x562dc8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"LoadQuestsFromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager.SetupQuests
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager::*)()>(&::GlobalNamespace::RotatingQuestsManager::SetupQuests)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x562d778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"SetupQuests", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager.SelectActiveQuests
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager::*)()>(&::GlobalNamespace::RotatingQuestsManager::SelectActiveQuests)> {
  constexpr static std::size_t size = 0xe68;
  constexpr static std::size_t addrs = 0x562e264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"SelectActiveQuests", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager.RemoveDisabledQuests
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager::*)()>(&::GlobalNamespace::RotatingQuestsManager::RemoveDisabledQuests)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x562fa48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"RemoveDisabledQuests", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager.LoadQuestProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager::*)()>(&::GlobalNamespace::RotatingQuestsManager::LoadQuestProgress)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x562f0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"LoadQuestProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager.SaveQuestProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager::*)()>(&::GlobalNamespace::RotatingQuestsManager::SaveQuestProgress)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x562fc64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"SaveQuestProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager.SetupAllQuestEventListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager::*)()>(&::GlobalNamespace::RotatingQuestsManager::SetupAllQuestEventListeners)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x562f5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"SetupAllQuestEventListeners", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager.ClearAllQuestEventListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager::*)()>(&::GlobalNamespace::RotatingQuestsManager::ClearAllQuestEventListeners)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x562de4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"ClearAllQuestEventListeners", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager.HandleQuestCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager::*)(int32_t)>(&::GlobalNamespace::RotatingQuestsManager::HandleQuestCompleted)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5630064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"HandleQuestCompleted", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager.HandleQuestProgressChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager::*)(bool)>(&::GlobalNamespace::RotatingQuestsManager::HandleQuestProgressChanged)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x562f548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"HandleQuestProgressChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager::*)()>(&::GlobalNamespace::RotatingQuestsManager::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5630140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager._ProcessAllQuests_g__ProcessAllQuestsInList_29_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*, ::by_ref<::GlobalNamespace::RotatingQuestsManager___c__DisplayClass29_0>)>(&::GlobalNamespace::RotatingQuestsManager::_ProcessAllQuests_g__ProcessAllQuestsInList_29_0)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x562d860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"<ProcessAllQuests>g__ProcessAllQuestsInList|29_0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RotatingQuestsManager___c__DisplayClass29_0>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager._RequestQuestsFromTitleData_b__33_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager::*)(::StringW)>(&::GlobalNamespace::RotatingQuestsManager::_RequestQuestsFromTitleData_b__33_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5630198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"<RequestQuestsFromTitleData>b__33_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager._RemoveDisabledQuests_g__RemoveDisabledQuestsFromGroupList_37_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*)>(&::GlobalNamespace::RotatingQuestsManager::_RemoveDisabledQuests_g__RemoveDisabledQuestsFromGroupList_37_0)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x562fa78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"<RemoveDisabledQuests>g__RemoveDisabledQuestsFromGroupList|37_0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::RotatingQuestsManager::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::RotatingQuestsManager::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::RotatingQuestsManager::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
constexpr bool& GlobalNamespace::RotatingQuestsManager::__cordl_internal_get_hasQuest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasQuest;
}
constexpr bool const& GlobalNamespace::RotatingQuestsManager::__cordl_internal_get_hasQuest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasQuest;
}
constexpr void GlobalNamespace::RotatingQuestsManager::__cordl_internal_set_hasQuest(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasQuest = value;
}
constexpr bool& GlobalNamespace::RotatingQuestsManager::__cordl_internal_get_useTestLocalQuests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useTestLocalQuests;
}
constexpr bool const& GlobalNamespace::RotatingQuestsManager::__cordl_internal_get_useTestLocalQuests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useTestLocalQuests;
}
constexpr void GlobalNamespace::RotatingQuestsManager::__cordl_internal_set_useTestLocalQuests(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useTestLocalQuests = value;
}
constexpr ::StringW& GlobalNamespace::RotatingQuestsManager::__cordl_internal_get_localQuestPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localQuestPath;
}
constexpr ::StringW const& GlobalNamespace::RotatingQuestsManager::__cordl_internal_get_localQuestPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localQuestPath;
}
constexpr void GlobalNamespace::RotatingQuestsManager::__cordl_internal_set_localQuestPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localQuestPath = value;
}
constexpr ::GlobalNamespace::RotatingQuestsManager_RotatingQuestList*& GlobalNamespace::RotatingQuestsManager::__cordl_internal_get_quests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quests;
}
constexpr ::GlobalNamespace::RotatingQuestsManager_RotatingQuestList* const& GlobalNamespace::RotatingQuestsManager::__cordl_internal_get_quests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quests;
}
constexpr void GlobalNamespace::RotatingQuestsManager::__cordl_internal_set_quests(::GlobalNamespace::RotatingQuestsManager_RotatingQuestList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___quests = value;
}
constexpr int32_t& GlobalNamespace::RotatingQuestsManager::__cordl_internal_get_dailyQuestSetID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dailyQuestSetID;
}
constexpr int32_t const& GlobalNamespace::RotatingQuestsManager::__cordl_internal_get_dailyQuestSetID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dailyQuestSetID;
}
constexpr void GlobalNamespace::RotatingQuestsManager::__cordl_internal_set_dailyQuestSetID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dailyQuestSetID = value;
}
constexpr int32_t& GlobalNamespace::RotatingQuestsManager::__cordl_internal_get_weeklyQuestSetID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weeklyQuestSetID;
}
constexpr int32_t const& GlobalNamespace::RotatingQuestsManager::__cordl_internal_get_weeklyQuestSetID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weeklyQuestSetID;
}
constexpr void GlobalNamespace::RotatingQuestsManager::__cordl_internal_set_weeklyQuestSetID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weeklyQuestSetID = value;
}
constexpr bool& GlobalNamespace::RotatingQuestsManager::__cordl_internal_get__playQuestSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playQuestSounds;
}
constexpr bool const& GlobalNamespace::RotatingQuestsManager::__cordl_internal_get__playQuestSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playQuestSounds;
}
constexpr void GlobalNamespace::RotatingQuestsManager::__cordl_internal_set__playQuestSounds(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playQuestSounds = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::RotatingQuestsManager::__cordl_internal_get__questAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____questAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::RotatingQuestsManager::__cordl_internal_get__questAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____questAudio;
}
constexpr void GlobalNamespace::RotatingQuestsManager::__cordl_internal_set__questAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____questAudio = value;
}
constexpr ::System::DateTime& GlobalNamespace::RotatingQuestsManager::__cordl_internal_get__DailyQuestCountdown_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DailyQuestCountdown_k__BackingField;
}
constexpr ::System::DateTime const& GlobalNamespace::RotatingQuestsManager::__cordl_internal_get__DailyQuestCountdown_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DailyQuestCountdown_k__BackingField;
}
constexpr void GlobalNamespace::RotatingQuestsManager::__cordl_internal_set__DailyQuestCountdown_k__BackingField(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DailyQuestCountdown_k__BackingField = value;
}
constexpr ::System::DateTime& GlobalNamespace::RotatingQuestsManager::__cordl_internal_get__WeeklyQuestCountdown_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WeeklyQuestCountdown_k__BackingField;
}
constexpr ::System::DateTime const& GlobalNamespace::RotatingQuestsManager::__cordl_internal_get__WeeklyQuestCountdown_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WeeklyQuestCountdown_k__BackingField;
}
constexpr void GlobalNamespace::RotatingQuestsManager::__cordl_internal_set__WeeklyQuestCountdown_k__BackingField(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WeeklyQuestCountdown_k__BackingField = value;
}
constexpr ::System::DateTime& GlobalNamespace::RotatingQuestsManager::__cordl_internal_get_nextQuestUpdateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextQuestUpdateTime;
}
constexpr ::System::DateTime const& GlobalNamespace::RotatingQuestsManager::__cordl_internal_get_nextQuestUpdateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextQuestUpdateTime;
}
constexpr void GlobalNamespace::RotatingQuestsManager::__cordl_internal_set_nextQuestUpdateTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextQuestUpdateTime = value;
}
inline void GlobalNamespace::RotatingQuestsManager::setStaticF_LastQuestChange(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "LastQuestChange", ::GlobalNamespace::RotatingQuestsManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::RotatingQuestsManager::getStaticF_LastQuestChange()  {
return ::cordl_internals::getStaticField<int32_t, "LastQuestChange", ::GlobalNamespace::RotatingQuestsManager*>();
}
inline void GlobalNamespace::RotatingQuestsManager::setStaticF_LastQuestDailyID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "LastQuestDailyID", ::GlobalNamespace::RotatingQuestsManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::RotatingQuestsManager::getStaticF_LastQuestDailyID()  {
return ::cordl_internals::getStaticField<int32_t, "LastQuestDailyID", ::GlobalNamespace::RotatingQuestsManager*>();
}
inline bool GlobalNamespace::RotatingQuestsManager::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RotatingQuestsManager::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime GlobalNamespace::RotatingQuestsManager::get_DailyQuestCountdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"get_DailyQuestCountdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void GlobalNamespace::RotatingQuestsManager::set_DailyQuestCountdown(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"set_DailyQuestCountdown", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime GlobalNamespace::RotatingQuestsManager::get_WeeklyQuestCountdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"get_WeeklyQuestCountdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void GlobalNamespace::RotatingQuestsManager::set_WeeklyQuestCountdown(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"set_WeeklyQuestCountdown", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::RotatingQuestsManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotatingQuestsManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotatingQuestsManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotatingQuestsManager::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotatingQuestsManager::ProcessAllQuests(::System::Action_1<::GlobalNamespace::RotatingQuest*>*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"ProcessAllQuests", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::RotatingQuest*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void GlobalNamespace::RotatingQuestsManager::QuestLoadPostProcess(::GlobalNamespace::RotatingQuest*  quest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"QuestLoadPostProcess", {}, {::i2c::type_of<::GlobalNamespace::RotatingQuest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, quest);
}
inline void GlobalNamespace::RotatingQuestsManager::QuestSavePreProcess(::GlobalNamespace::RotatingQuest*  quest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"QuestSavePreProcess", {}, {::i2c::type_of<::GlobalNamespace::RotatingQuest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, quest);
}
inline void GlobalNamespace::RotatingQuestsManager::LoadTestQuestsFromFile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"LoadTestQuestsFromFile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotatingQuestsManager::RequestQuestsFromTitleData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"RequestQuestsFromTitleData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotatingQuestsManager::LoadQuestsFromJson(::StringW  jsonString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"LoadQuestsFromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jsonString);
}
inline void GlobalNamespace::RotatingQuestsManager::SetupQuests()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"SetupQuests", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotatingQuestsManager::SelectActiveQuests()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"SelectActiveQuests", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotatingQuestsManager::RemoveDisabledQuests()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"RemoveDisabledQuests", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotatingQuestsManager::LoadQuestProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"LoadQuestProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotatingQuestsManager::SaveQuestProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"SaveQuestProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotatingQuestsManager::SetupAllQuestEventListeners()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"SetupAllQuestEventListeners", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotatingQuestsManager::ClearAllQuestEventListeners()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"ClearAllQuestEventListeners", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotatingQuestsManager::HandleQuestCompleted(int32_t  questID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"HandleQuestCompleted", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, questID);
}
inline void GlobalNamespace::RotatingQuestsManager::HandleQuestProgressChanged(bool  initialLoad)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"HandleQuestProgressChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialLoad);
}
inline void GlobalNamespace::RotatingQuestsManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotatingQuestsManager::_ProcessAllQuests_g__ProcessAllQuestsInList_29_0(::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*  questGroups, ::by_ref<::GlobalNamespace::RotatingQuestsManager___c__DisplayClass29_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"<ProcessAllQuests>g__ProcessAllQuestsInList|29_0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RotatingQuestsManager___c__DisplayClass29_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, questGroups, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::RotatingQuestsManager::_RequestQuestsFromTitleData_b__33_0(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"<RequestQuestsFromTitleData>b__33_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::RotatingQuestsManager::_RemoveDisabledQuests_g__RemoveDisabledQuestsFromGroupList_37_0(::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*  questList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager*>(),
                        {"<RemoveDisabledQuests>g__RemoveDisabledQuestsFromGroupList|37_0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, questList);
}
inline ::GlobalNamespace::RotatingQuestsManager* GlobalNamespace::RotatingQuestsManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RotatingQuestsManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::RotatingQuestsManager::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::RotatingQuestsManager::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::GorillaQuestManager"
constexpr  GlobalNamespace::RotatingQuestsManager::operator ::GlobalNamespace::GorillaQuestManager*() noexcept {
return static_cast<::GlobalNamespace::GorillaQuestManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::GorillaQuestManager"
constexpr ::GlobalNamespace::GorillaQuestManager* GlobalNamespace::RotatingQuestsManager::i___GlobalNamespace__GorillaQuestManager() noexcept {
return static_cast<::GlobalNamespace::GorillaQuestManager*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RotatingQuestsManager::RotatingQuestsManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager___c::*)()>(&::GlobalNamespace::RotatingQuestsManager___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5630720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager___c._RequestQuestsFromTitleData_b__33_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager___c::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::RotatingQuestsManager___c::_RequestQuestsFromTitleData_b__33_1)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5630728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager___c*>(),
                        {"<RequestQuestsFromTitleData>b__33_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RotatingQuestsManager___c::setStaticF___9(::GlobalNamespace::RotatingQuestsManager___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RotatingQuestsManager___c*, "<>9", ::GlobalNamespace::RotatingQuestsManager___c*>(std::forward<::GlobalNamespace::RotatingQuestsManager___c*>(value));
}
inline ::GlobalNamespace::RotatingQuestsManager___c* GlobalNamespace::RotatingQuestsManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RotatingQuestsManager___c*, "<>9", ::GlobalNamespace::RotatingQuestsManager___c*>();
}
inline void GlobalNamespace::RotatingQuestsManager___c::setStaticF___9__33_1(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__33_1", ::GlobalNamespace::RotatingQuestsManager___c*>(std::forward<::System::Action_1<::PlayFab::PlayFabError*>*>(value));
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GlobalNamespace::RotatingQuestsManager___c::getStaticF___9__33_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__33_1", ::GlobalNamespace::RotatingQuestsManager___c*>();
}
inline void GlobalNamespace::RotatingQuestsManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotatingQuestsManager___c::_RequestQuestsFromTitleData_b__33_1(::PlayFab::PlayFabError*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager___c*>(),
                        {"<RequestQuestsFromTitleData>b__33_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline ::GlobalNamespace::RotatingQuestsManager___c* GlobalNamespace::RotatingQuestsManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RotatingQuestsManager___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RotatingQuestsManager___c::RotatingQuestsManager___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager_RotatingQuestList.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager_RotatingQuestList::*)()>(&::GlobalNamespace::RotatingQuestsManager_RotatingQuestList::Init)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x562de28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager_RotatingQuestList*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager_RotatingQuestList.GetQuest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RotatingQuest* (::GlobalNamespace::RotatingQuestsManager_RotatingQuestList::*)(int32_t)>(&::GlobalNamespace::RotatingQuestsManager_RotatingQuestList::GetQuest)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5630108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager_RotatingQuestList*>(),
                        {"GetQuest", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager_RotatingQuestList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager_RotatingQuestList::*)()>(&::GlobalNamespace::RotatingQuestsManager_RotatingQuestList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56306b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager_RotatingQuestList*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager_RotatingQuestList._Init_g__SetIsDaily_2_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*, bool)>(&::GlobalNamespace::RotatingQuestsManager_RotatingQuestList::_Init_g__SetIsDaily_2_0)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x56301a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager_RotatingQuestList*>(),
                        {"<Init>g__SetIsDaily|2_0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager_RotatingQuestList._GetQuest_g__GetQuestFrom_3_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RotatingQuest* (*)(::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*, ::by_ref<::GlobalNamespace::RotatingQuestList_RotatingQuestsManager___c__DisplayClass3_0>)>(&::GlobalNamespace::RotatingQuestsManager_RotatingQuestList::_GetQuest_g__GetQuestFrom_3_0)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5630408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager_RotatingQuestList*>(),
                        {"<GetQuest>g__GetQuestFrom|3_0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RotatingQuestList_RotatingQuestsManager___c__DisplayClass3_0>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*& GlobalNamespace::RotatingQuestsManager_RotatingQuestList::__cordl_internal_get_DailyQuests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DailyQuests;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>* const& GlobalNamespace::RotatingQuestsManager_RotatingQuestList::__cordl_internal_get_DailyQuests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DailyQuests;
}
constexpr void GlobalNamespace::RotatingQuestsManager_RotatingQuestList::__cordl_internal_set_DailyQuests(::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DailyQuests = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*& GlobalNamespace::RotatingQuestsManager_RotatingQuestList::__cordl_internal_get_WeeklyQuests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WeeklyQuests;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>* const& GlobalNamespace::RotatingQuestsManager_RotatingQuestList::__cordl_internal_get_WeeklyQuests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WeeklyQuests;
}
constexpr void GlobalNamespace::RotatingQuestsManager_RotatingQuestList::__cordl_internal_set_WeeklyQuests(::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WeeklyQuests = value;
}
inline void GlobalNamespace::RotatingQuestsManager_RotatingQuestList::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager_RotatingQuestList*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RotatingQuest* GlobalNamespace::RotatingQuestsManager_RotatingQuestList::GetQuest(int32_t  questID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager_RotatingQuestList*>(),
                        {"GetQuest", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RotatingQuest*>(this, ___internal_method, questID);
}
inline void GlobalNamespace::RotatingQuestsManager_RotatingQuestList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager_RotatingQuestList*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotatingQuestsManager_RotatingQuestList::_Init_g__SetIsDaily_2_0(::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*  questList, bool  isDaily)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager_RotatingQuestList*>(),
                        {"<Init>g__SetIsDaily|2_0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, questList, isDaily);
}
inline ::GlobalNamespace::RotatingQuest* GlobalNamespace::RotatingQuestsManager_RotatingQuestList::_GetQuest_g__GetQuestFrom_3_0(::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*  list, ::by_ref<::GlobalNamespace::RotatingQuestList_RotatingQuestsManager___c__DisplayClass3_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager_RotatingQuestList*>(),
                        {"<GetQuest>g__GetQuestFrom|3_0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RotatingQuestList_RotatingQuestsManager___c__DisplayClass3_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RotatingQuest*>(nullptr, ___internal_method, list, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::RotatingQuestsManager_RotatingQuestList* GlobalNamespace::RotatingQuestsManager_RotatingQuestList::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RotatingQuestsManager_RotatingQuestList*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RotatingQuestsManager_RotatingQuestList::RotatingQuestsManager_RotatingQuestList()   {
}
//  Writing Method size for method: ::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup::*)()>(&::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x563019c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup::__cordl_internal_get_selectCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectCount;
}
constexpr int32_t const& GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup::__cordl_internal_get_selectCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectCount;
}
constexpr void GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup::__cordl_internal_set_selectCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectCount = value;
}
constexpr ::StringW& GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*& GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup::__cordl_internal_get_quests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quests;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>* const& GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup::__cordl_internal_get_quests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quests;
}
constexpr void GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup::__cordl_internal_set_quests(::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___quests = value;
}
inline void GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup* GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup::RotatingQuestsManager_RotatingQuestGroup()   {
}
