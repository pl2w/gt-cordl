#pragma once
// IWYU pragma private; include "GorillaTag/ReportMuteTimer.hpp"
#include "GorillaTag/zzzz__TickSystemTimerAbstract_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/zzzz__ReportMuteTimer_def.hpp"
#include "GlobalNamespace/zzzz__NetEventOptions_def.hpp"
#include "GorillaTag/zzzz__ObjectPoolEvents_def.hpp"
//  Writing Method size for method: ::GorillaTag::ReportMuteTimer.get_Muted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::ReportMuteTimer::*)()>(&::GorillaTag::ReportMuteTimer::get_Muted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d348d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ReportMuteTimer*>(),
                        {"get_Muted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ReportMuteTimer.set_Muted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ReportMuteTimer::*)(int32_t)>(&::GorillaTag::ReportMuteTimer::set_Muted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d348d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ReportMuteTimer*>(),
                        {"set_Muted", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ReportMuteTimer.OnTimedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ReportMuteTimer::*)()>(&::GorillaTag::ReportMuteTimer::OnTimedEvent)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x5d348e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::ReportMuteTimer*>(),
                    {::i2c::class_of<::GorillaTag::ReportMuteTimer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ReportMuteTimer.SetReportData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ReportMuteTimer::*)(::StringW, ::StringW, int32_t)>(&::GorillaTag::ReportMuteTimer::SetReportData)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5d34ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ReportMuteTimer*>(),
                        {"SetReportData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ReportMuteTimer.GorillaTag_ObjectPoolEvents_OnTaken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ReportMuteTimer::*)()>(&::GorillaTag::ReportMuteTimer::GorillaTag_ObjectPoolEvents_OnTaken)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d34cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ReportMuteTimer*>(),
                        {"GorillaTag.ObjectPoolEvents.OnTaken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ReportMuteTimer.GorillaTag_ObjectPoolEvents_OnReturned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ReportMuteTimer::*)()>(&::GorillaTag::ReportMuteTimer::GorillaTag_ObjectPoolEvents_OnReturned)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d34cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ReportMuteTimer*>(),
                        {"GorillaTag.ObjectPoolEvents.OnReturned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ReportMuteTimer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ReportMuteTimer::*)()>(&::GorillaTag::ReportMuteTimer::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5d34d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ReportMuteTimer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTag::ReportMuteTimer::__cordl_internal_get__Muted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Muted_k__BackingField;
}
constexpr int32_t const& GorillaTag::ReportMuteTimer::__cordl_internal_get__Muted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Muted_k__BackingField;
}
constexpr void GorillaTag::ReportMuteTimer::__cordl_internal_set__Muted_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Muted_k__BackingField = value;
}
constexpr ::StringW& GorillaTag::ReportMuteTimer::__cordl_internal_get_m_playerID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_playerID;
}
constexpr ::StringW const& GorillaTag::ReportMuteTimer::__cordl_internal_get_m_playerID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_playerID;
}
constexpr void GorillaTag::ReportMuteTimer::__cordl_internal_set_m_playerID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_playerID = value;
}
constexpr ::StringW& GorillaTag::ReportMuteTimer::__cordl_internal_get_m_nickName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_nickName;
}
constexpr ::StringW const& GorillaTag::ReportMuteTimer::__cordl_internal_get_m_nickName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_nickName;
}
constexpr void GorillaTag::ReportMuteTimer::__cordl_internal_set_m_nickName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_nickName = value;
}
inline void GorillaTag::ReportMuteTimer::setStaticF_netEventOptions(::GlobalNamespace::NetEventOptions*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::NetEventOptions*, "netEventOptions", ::GorillaTag::ReportMuteTimer*>(std::forward<::GlobalNamespace::NetEventOptions*>(value));
}
inline ::GlobalNamespace::NetEventOptions* GorillaTag::ReportMuteTimer::getStaticF_netEventOptions()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::NetEventOptions*, "netEventOptions", ::GorillaTag::ReportMuteTimer*>();
}
inline void GorillaTag::ReportMuteTimer::setStaticF_content(::ArrayW<::System::Object*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "content", ::GorillaTag::ReportMuteTimer*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> GorillaTag::ReportMuteTimer::getStaticF_content()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "content", ::GorillaTag::ReportMuteTimer*>();
}
inline int32_t GorillaTag::ReportMuteTimer::get_Muted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ReportMuteTimer*>(),
                        {"get_Muted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTag::ReportMuteTimer::set_Muted(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ReportMuteTimer*>(),
                        {"set_Muted", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::ReportMuteTimer::OnTimedEvent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::ReportMuteTimer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::ReportMuteTimer::SetReportData(::StringW  id, ::StringW  name, int32_t  muted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ReportMuteTimer*>(),
                        {"SetReportData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, name, muted);
}
inline void GorillaTag::ReportMuteTimer::GorillaTag_ObjectPoolEvents_OnTaken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ReportMuteTimer*>(),
                        {"GorillaTag.ObjectPoolEvents.OnTaken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::ReportMuteTimer::GorillaTag_ObjectPoolEvents_OnReturned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ReportMuteTimer*>(),
                        {"GorillaTag.ObjectPoolEvents.OnReturned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::ReportMuteTimer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ReportMuteTimer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::ReportMuteTimer* GorillaTag::ReportMuteTimer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::ReportMuteTimer*>());
}
/// @brief Convert operator to "::GorillaTag::ObjectPoolEvents"
constexpr  GorillaTag::ReportMuteTimer::operator ::GorillaTag::ObjectPoolEvents*() noexcept {
return static_cast<::GorillaTag::ObjectPoolEvents*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ObjectPoolEvents"
constexpr ::GorillaTag::ObjectPoolEvents* GorillaTag::ReportMuteTimer::i___GorillaTag__ObjectPoolEvents() noexcept {
return static_cast<::GorillaTag::ObjectPoolEvents*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::ReportMuteTimer::ReportMuteTimer()   {
}
