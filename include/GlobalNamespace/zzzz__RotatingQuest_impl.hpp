#pragma once
// IWYU pragma private; include "GlobalNamespace/RotatingQuest.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "GlobalNamespace/zzzz__QuestCategory_impl.hpp"
#include "GlobalNamespace/zzzz__QuestType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RotatingQuest_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__GorillaQuestManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RotatingQuest.get_IsMovementQuest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RotatingQuest::*)()>(&::GlobalNamespace::RotatingQuest::get_IsMovementQuest)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x562c50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"get_IsMovementQuest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuest.get_RequiredZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GTZone (::GlobalNamespace::RotatingQuest::*)()>(&::GlobalNamespace::RotatingQuest::get_RequiredZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x562c520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"get_RequiredZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuest.set_RequiredZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuest::*)(::GlobalNamespace::GTZone)>(&::GlobalNamespace::RotatingQuest::set_RequiredZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x562c528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"set_RequiredZone", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuest.SetRequiredZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuest::*)()>(&::GlobalNamespace::RotatingQuest::SetRequiredZone)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x562c530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"SetRequiredZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuest.AddEventListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuest::*)()>(&::GlobalNamespace::RotatingQuest::AddEventListener)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x562c5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"AddEventListener", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuest.RemoveEventListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuest::*)()>(&::GlobalNamespace::RotatingQuest::RemoveEventListener)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x562c96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"RemoveEventListener", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuest.ApplySavedProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuest::*)(int32_t)>(&::GlobalNamespace::RotatingQuest::ApplySavedProgress)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x562cd14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"ApplySavedProgress", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuest.GetProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RotatingQuest::*)()>(&::GlobalNamespace::RotatingQuest::GetProgress)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x562cd9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"GetProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuest.OnGameEventOccurence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuest::*)(::StringW)>(&::GlobalNamespace::RotatingQuest::OnGameEventOccurence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x562ce20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"OnGameEventOccurence", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuest.OnGameEventOccurence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuest::*)(::StringW, int32_t)>(&::GlobalNamespace::RotatingQuest::OnGameEventOccurence)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x562ce28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"OnGameEventOccurence", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuest.OnGameMoveEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuest::*)(float_t, float_t)>(&::GlobalNamespace::RotatingQuest::OnGameMoveEvent)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x562cfa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"OnGameMoveEvent", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuest.SetProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuest::*)(int32_t)>(&::GlobalNamespace::RotatingQuest::SetProgress)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x562cea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"SetProgress", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuest.Complete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuest::*)()>(&::GlobalNamespace::RotatingQuest::Complete)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x562d0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"Complete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuest.GetTextDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RotatingQuest::*)()>(&::GlobalNamespace::RotatingQuest::GetTextDescription)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x562bcd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"GetTextDescription", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuest.GetProgressText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RotatingQuest::*)()>(&::GlobalNamespace::RotatingQuest::GetProgressText)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x562d2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"GetProgressText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotatingQuest::*)()>(&::GlobalNamespace::RotatingQuest::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x562d388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuest._GetTextDescription_g__GetActionName_32_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RotatingQuest::*)()>(&::GlobalNamespace::RotatingQuest::_GetTextDescription_g__GetActionName_32_0)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x562d170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"<GetTextDescription>g__GetActionName|32_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotatingQuest._GetTextDescription_g__GetLocationText_32_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RotatingQuest::*)()>(&::GlobalNamespace::RotatingQuest::_GetTextDescription_g__GetLocationText_32_1)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x562d230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"<GetTextDescription>g__GetLocationText|32_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::RotatingQuest::__cordl_internal_get_disable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disable;
}
constexpr bool const& GlobalNamespace::RotatingQuest::__cordl_internal_get_disable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disable;
}
constexpr void GlobalNamespace::RotatingQuest::__cordl_internal_set_disable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disable = value;
}
constexpr int32_t& GlobalNamespace::RotatingQuest::__cordl_internal_get_questID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questID;
}
constexpr int32_t const& GlobalNamespace::RotatingQuest::__cordl_internal_get_questID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questID;
}
constexpr void GlobalNamespace::RotatingQuest::__cordl_internal_set_questID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___questID = value;
}
constexpr float_t& GlobalNamespace::RotatingQuest::__cordl_internal_get_weight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weight;
}
constexpr float_t const& GlobalNamespace::RotatingQuest::__cordl_internal_get_weight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weight;
}
constexpr void GlobalNamespace::RotatingQuest::__cordl_internal_set_weight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weight = value;
}
constexpr ::GlobalNamespace::QuestCategory& GlobalNamespace::RotatingQuest::__cordl_internal_get_category()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___category;
}
constexpr ::GlobalNamespace::QuestCategory const& GlobalNamespace::RotatingQuest::__cordl_internal_get_category() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___category;
}
constexpr void GlobalNamespace::RotatingQuest::__cordl_internal_set_category(::GlobalNamespace::QuestCategory  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___category = value;
}
constexpr ::StringW& GlobalNamespace::RotatingQuest::__cordl_internal_get_questName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questName;
}
constexpr ::StringW const& GlobalNamespace::RotatingQuest::__cordl_internal_get_questName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questName;
}
constexpr void GlobalNamespace::RotatingQuest::__cordl_internal_set_questName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___questName = value;
}
constexpr ::GlobalNamespace::QuestType& GlobalNamespace::RotatingQuest::__cordl_internal_get_questType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questType;
}
constexpr ::GlobalNamespace::QuestType const& GlobalNamespace::RotatingQuest::__cordl_internal_get_questType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questType;
}
constexpr void GlobalNamespace::RotatingQuest::__cordl_internal_set_questType(::GlobalNamespace::QuestType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___questType = value;
}
constexpr ::StringW& GlobalNamespace::RotatingQuest::__cordl_internal_get_questOccurenceFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questOccurenceFilter;
}
constexpr ::StringW const& GlobalNamespace::RotatingQuest::__cordl_internal_get_questOccurenceFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questOccurenceFilter;
}
constexpr void GlobalNamespace::RotatingQuest::__cordl_internal_set_questOccurenceFilter(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___questOccurenceFilter = value;
}
constexpr int32_t& GlobalNamespace::RotatingQuest::__cordl_internal_get_requiredOccurenceCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredOccurenceCount;
}
constexpr int32_t const& GlobalNamespace::RotatingQuest::__cordl_internal_get_requiredOccurenceCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredOccurenceCount;
}
constexpr void GlobalNamespace::RotatingQuest::__cordl_internal_set_requiredOccurenceCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requiredOccurenceCount = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTZone>*& GlobalNamespace::RotatingQuest::__cordl_internal_get_requiredZones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredZones;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTZone>* const& GlobalNamespace::RotatingQuest::__cordl_internal_get_requiredZones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredZones;
}
constexpr void GlobalNamespace::RotatingQuest::__cordl_internal_set_requiredZones(::System::Collections::Generic::List_1<::GlobalNamespace::GTZone>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requiredZones = value;
}
constexpr bool& GlobalNamespace::RotatingQuest::__cordl_internal_get_isQuestActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isQuestActive;
}
constexpr bool const& GlobalNamespace::RotatingQuest::__cordl_internal_get_isQuestActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isQuestActive;
}
constexpr void GlobalNamespace::RotatingQuest::__cordl_internal_set_isQuestActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isQuestActive = value;
}
constexpr bool& GlobalNamespace::RotatingQuest::__cordl_internal_get_isQuestComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isQuestComplete;
}
constexpr bool const& GlobalNamespace::RotatingQuest::__cordl_internal_get_isQuestComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isQuestComplete;
}
constexpr void GlobalNamespace::RotatingQuest::__cordl_internal_set_isQuestComplete(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isQuestComplete = value;
}
constexpr bool& GlobalNamespace::RotatingQuest::__cordl_internal_get_isDailyQuest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDailyQuest;
}
constexpr bool const& GlobalNamespace::RotatingQuest::__cordl_internal_get_isDailyQuest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDailyQuest;
}
constexpr void GlobalNamespace::RotatingQuest::__cordl_internal_set_isDailyQuest(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDailyQuest = value;
}
constexpr int32_t& GlobalNamespace::RotatingQuest::__cordl_internal_get_lastChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastChange;
}
constexpr int32_t const& GlobalNamespace::RotatingQuest::__cordl_internal_get_lastChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastChange;
}
constexpr void GlobalNamespace::RotatingQuest::__cordl_internal_set_lastChange(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastChange = value;
}
constexpr ::GlobalNamespace::GTZone& GlobalNamespace::RotatingQuest::__cordl_internal_get__RequiredZone_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequiredZone_k__BackingField;
}
constexpr ::GlobalNamespace::GTZone const& GlobalNamespace::RotatingQuest::__cordl_internal_get__RequiredZone_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequiredZone_k__BackingField;
}
constexpr void GlobalNamespace::RotatingQuest::__cordl_internal_set__RequiredZone_k__BackingField(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RequiredZone_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::RotatingQuest::__cordl_internal_get_occurenceCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occurenceCount;
}
constexpr int32_t const& GlobalNamespace::RotatingQuest::__cordl_internal_get_occurenceCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occurenceCount;
}
constexpr void GlobalNamespace::RotatingQuest::__cordl_internal_set_occurenceCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occurenceCount = value;
}
constexpr float_t& GlobalNamespace::RotatingQuest::__cordl_internal_get_moveDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveDistance;
}
constexpr float_t const& GlobalNamespace::RotatingQuest::__cordl_internal_get_moveDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveDistance;
}
constexpr void GlobalNamespace::RotatingQuest::__cordl_internal_set_moveDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moveDistance = value;
}
constexpr ::GlobalNamespace::GorillaQuestManager*& GlobalNamespace::RotatingQuest::__cordl_internal_get_questManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questManager;
}
constexpr ::GlobalNamespace::GorillaQuestManager* const& GlobalNamespace::RotatingQuest::__cordl_internal_get_questManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questManager;
}
constexpr void GlobalNamespace::RotatingQuest::__cordl_internal_set_questManager(::GlobalNamespace::GorillaQuestManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___questManager = value;
}
inline bool GlobalNamespace::RotatingQuest::get_IsMovementQuest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"get_IsMovementQuest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::GTZone GlobalNamespace::RotatingQuest::get_RequiredZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"get_RequiredZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GTZone>(this, ___internal_method);
}
inline void GlobalNamespace::RotatingQuest::set_RequiredZone(::GlobalNamespace::GTZone  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"set_RequiredZone", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::RotatingQuest::SetRequiredZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"SetRequiredZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotatingQuest::AddEventListener()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"AddEventListener", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotatingQuest::RemoveEventListener()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"RemoveEventListener", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotatingQuest::ApplySavedProgress(int32_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"ApplySavedProgress", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, progress);
}
inline int32_t GlobalNamespace::RotatingQuest::GetProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"GetProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::RotatingQuest::OnGameEventOccurence(::StringW  eventName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"OnGameEventOccurence", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventName);
}
inline void GlobalNamespace::RotatingQuest::OnGameEventOccurence(::StringW  eventName, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"OnGameEventOccurence", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventName, count);
}
inline void GlobalNamespace::RotatingQuest::OnGameMoveEvent(float_t  distance, float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"OnGameMoveEvent", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distance, speed);
}
inline void GlobalNamespace::RotatingQuest::SetProgress(int32_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"SetProgress", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, progress);
}
inline void GlobalNamespace::RotatingQuest::Complete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"Complete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::RotatingQuest::GetTextDescription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"GetTextDescription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::RotatingQuest::GetProgressText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"GetProgressText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::RotatingQuest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::RotatingQuest::_GetTextDescription_g__GetActionName_32_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"<GetTextDescription>g__GetActionName|32_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::RotatingQuest::_GetTextDescription_g__GetLocationText_32_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotatingQuest*>(),
                        {"<GetTextDescription>g__GetLocationText|32_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::RotatingQuest* GlobalNamespace::RotatingQuest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RotatingQuest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RotatingQuest::RotatingQuest()   {
}
