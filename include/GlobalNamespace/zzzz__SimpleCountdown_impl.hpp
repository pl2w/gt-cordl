#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleCountdown.hpp"
#include "GlobalNamespace/zzzz__ObservableBehavior_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleCountdown_DisplayFormat_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleCountdown_Mode_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleCountdown_def.hpp"
#include "GlobalNamespace/zzzz__ServerTimeSyncRule_def.hpp"
#include "GlobalNamespace/zzzz__SimpleCountdown_DisplayFormat_def.hpp"
#include "GlobalNamespace/zzzz__SimpleCountdown_Mode_def.hpp"
#include "GlobalNamespace/zzzz__SimpleCountdown__Start_d__14_def.hpp"
#include "GlobalNamespace/zzzz__TitleDataActivation_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SimpleCountdown.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleCountdown::*)()>(&::GlobalNamespace::SimpleCountdown::Start)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5d132bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleCountdown.onEventTD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleCountdown::*)(::StringW)>(&::GlobalNamespace::SimpleCountdown::onEventTD)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5d13364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(),
                        {"onEventTD", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleCountdown.onEventTDError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleCountdown::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::SimpleCountdown::onEventTDError)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5d13560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(),
                        {"onEventTDError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleCountdown.GetEventWindowDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GlobalNamespace::SimpleCountdown::*)(::System::DateTime)>(&::GlobalNamespace::SimpleCountdown::GetEventWindowDateTime)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5d13708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(),
                        {"GetEventWindowDateTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleCountdown.ConsiderTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::DateTime, ::System::DateTime, ::by_ref<bool>, ::by_ref<::System::DateTime>)>(&::GlobalNamespace::SimpleCountdown::ConsiderTime)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5d138cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(),
                        {"ConsiderTime", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleCountdown.onTD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleCountdown::*)(::StringW)>(&::GlobalNamespace::SimpleCountdown::onTD)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d13988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(),
                        {"onTD", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleCountdown.onTDError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleCountdown::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::SimpleCountdown::onTDError)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5d13bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(),
                        {"onTDError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleCountdown.ParseDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleCountdown::*)()>(&::GlobalNamespace::SimpleCountdown::ParseDateTime)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5d139a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(),
                        {"ParseDateTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleCountdown.ObservableSliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleCountdown::*)()>(&::GlobalNamespace::SimpleCountdown::ObservableSliceUpdate)> {
  constexpr static std::size_t size = 0x844;
  constexpr static std::size_t addrs = 0x5d13d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(),
                    {::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleCountdown.OnBecameObservable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleCountdown::*)()>(&::GlobalNamespace::SimpleCountdown::OnBecameObservable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d145c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(),
                    {::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleCountdown.OnLostObservable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleCountdown::*)()>(&::GlobalNamespace::SimpleCountdown::OnLostObservable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d145cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(),
                    {::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleCountdown.StartCountdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleCountdown::*)(int32_t)>(&::GlobalNamespace::SimpleCountdown::StartCountdown)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d145d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(),
                        {"StartCountdown", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleCountdown._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleCountdown::*)()>(&::GlobalNamespace::SimpleCountdown::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d14694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SimpleCountdown_DisplayFormat& GlobalNamespace::SimpleCountdown::__cordl_internal_get_displayFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayFormat;
}
constexpr ::GlobalNamespace::SimpleCountdown_DisplayFormat const& GlobalNamespace::SimpleCountdown::__cordl_internal_get_displayFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayFormat;
}
constexpr void GlobalNamespace::SimpleCountdown::__cordl_internal_set_displayFormat(::GlobalNamespace::SimpleCountdown_DisplayFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayFormat = value;
}
constexpr ::GlobalNamespace::SimpleCountdown_Mode& GlobalNamespace::SimpleCountdown::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::GlobalNamespace::SimpleCountdown_Mode const& GlobalNamespace::SimpleCountdown::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void GlobalNamespace::SimpleCountdown::__cordl_internal_set_mode(::GlobalNamespace::SimpleCountdown_Mode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr ::StringW& GlobalNamespace::SimpleCountdown::__cordl_internal_get_titleDataKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleDataKey;
}
constexpr ::StringW const& GlobalNamespace::SimpleCountdown::__cordl_internal_get_titleDataKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleDataKey;
}
constexpr void GlobalNamespace::SimpleCountdown::__cordl_internal_set_titleDataKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___titleDataKey = value;
}
constexpr ::StringW& GlobalNamespace::SimpleCountdown::__cordl_internal_get_titleDataObjectID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleDataObjectID;
}
constexpr ::StringW const& GlobalNamespace::SimpleCountdown::__cordl_internal_get_titleDataObjectID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleDataObjectID;
}
constexpr void GlobalNamespace::SimpleCountdown::__cordl_internal_set_titleDataObjectID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___titleDataObjectID = value;
}
constexpr ::StringW& GlobalNamespace::SimpleCountdown::__cordl_internal_get_date()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___date;
}
constexpr ::StringW const& GlobalNamespace::SimpleCountdown::__cordl_internal_get_date() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___date;
}
constexpr void GlobalNamespace::SimpleCountdown::__cordl_internal_set_date(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___date = value;
}
constexpr ::UnityW<::GlobalNamespace::ServerTimeSyncRule>& GlobalNamespace::SimpleCountdown::__cordl_internal_get_timeSyncRule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSyncRule;
}
constexpr ::UnityW<::GlobalNamespace::ServerTimeSyncRule> const& GlobalNamespace::SimpleCountdown::__cordl_internal_get_timeSyncRule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSyncRule;
}
constexpr void GlobalNamespace::SimpleCountdown::__cordl_internal_set_timeSyncRule(::UnityW<::GlobalNamespace::ServerTimeSyncRule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeSyncRule = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::SimpleCountdown::__cordl_internal_get_hourRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hourRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::SimpleCountdown::__cordl_internal_get_hourRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hourRange;
}
constexpr void GlobalNamespace::SimpleCountdown::__cordl_internal_set_hourRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hourRange = value;
}
constexpr ::System::DateTime& GlobalNamespace::SimpleCountdown::__cordl_internal_get_dt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dt;
}
constexpr ::System::DateTime const& GlobalNamespace::SimpleCountdown::__cordl_internal_get_dt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dt;
}
constexpr void GlobalNamespace::SimpleCountdown::__cordl_internal_set_dt(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dt = value;
}
constexpr ::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*& GlobalNamespace::SimpleCountdown::__cordl_internal_get_activationData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationData;
}
constexpr ::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData* const& GlobalNamespace::SimpleCountdown::__cordl_internal_get_activationData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationData;
}
constexpr void GlobalNamespace::SimpleCountdown::__cordl_internal_set_activationData(::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activationData = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::SimpleCountdown::__cordl_internal_get_tmp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tmp;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::SimpleCountdown::__cordl_internal_get_tmp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tmp;
}
constexpr void GlobalNamespace::SimpleCountdown::__cordl_internal_set_tmp(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tmp = value;
}
constexpr ::System::DateTime& GlobalNamespace::SimpleCountdown::__cordl_internal_get_overrideDt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideDt;
}
constexpr ::System::DateTime const& GlobalNamespace::SimpleCountdown::__cordl_internal_get_overrideDt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideDt;
}
constexpr void GlobalNamespace::SimpleCountdown::__cordl_internal_set_overrideDt(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideDt = value;
}
constexpr ::System::Action*& GlobalNamespace::SimpleCountdown::__cordl_internal_get_ManualCountdownComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ManualCountdownComplete;
}
constexpr ::System::Action* const& GlobalNamespace::SimpleCountdown::__cordl_internal_get_ManualCountdownComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ManualCountdownComplete;
}
constexpr void GlobalNamespace::SimpleCountdown::__cordl_internal_set_ManualCountdownComplete(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ManualCountdownComplete = value;
}
inline void GlobalNamespace::SimpleCountdown::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleCountdown::onEventTD(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(),
                        {"onEventTD", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void GlobalNamespace::SimpleCountdown::onEventTDError(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(),
                        {"onEventTDError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::System::DateTime GlobalNamespace::SimpleCountdown::GetEventWindowDateTime(::System::DateTime  now)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(),
                        {"GetEventWindowDateTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, now);
}
inline void GlobalNamespace::SimpleCountdown::ConsiderTime(::System::DateTime  candidate, ::System::DateTime  now, ::by_ref<bool>  found, ::by_ref<::System::DateTime>  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(),
                        {"ConsiderTime", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, candidate, now, found, target);
}
inline void GlobalNamespace::SimpleCountdown::onTD(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(),
                        {"onTD", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void GlobalNamespace::SimpleCountdown::onTDError(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(),
                        {"onTDError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GlobalNamespace::SimpleCountdown::ParseDateTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(),
                        {"ParseDateTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleCountdown::ObservableSliceUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleCountdown::OnBecameObservable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleCountdown::OnLostObservable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleCountdown::StartCountdown(int32_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(),
                        {"StartCountdown", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seconds);
}
inline void GlobalNamespace::SimpleCountdown::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleCountdown*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SimpleCountdown* GlobalNamespace::SimpleCountdown::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SimpleCountdown*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleCountdown::SimpleCountdown()   {
}
