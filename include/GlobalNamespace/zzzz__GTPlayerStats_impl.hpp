#pragma once
// IWYU pragma private; include "GlobalNamespace/GTPlayerStats.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourPostTick_impl.hpp"
#include "GlobalNamespace/zzzz__SystemProperties_impl.hpp"
#include "GlobalNamespace/zzzz__GTPlayerStats_def.hpp"
#include "GlobalNamespace/zzzz__PlayerStatsReadonly_def.hpp"
#include "GlobalNamespace/zzzz__SystemProperties_def.hpp"
#include "GorillaTag/zzzz__TickSystemTimer_def.hpp"
#include "Utilities/zzzz__FloatAverages_def.hpp"
#include "Utilities/zzzz__IntAverages_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTPlayerStats.get_Ping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)()>(&::GlobalNamespace::GTPlayerStats::get_Ping)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x594844c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {"get_Ping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayerStats.set_Ping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int16_t)>(&::GlobalNamespace::GTPlayerStats::set_Ping)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5948494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {"set_Ping", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayerStats.get_FPS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)()>(&::GlobalNamespace::GTPlayerStats::get_FPS)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x59484e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {"get_FPS", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayerStats.set_FPS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int16_t)>(&::GlobalNamespace::GTPlayerStats::set_FPS)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5948528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {"set_FPS", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayerStats.get_TargetFPS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)()>(&::GlobalNamespace::GTPlayerStats::get_TargetFPS)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5948574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {"get_TargetFPS", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayerStats.set_TargetFPS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int16_t)>(&::GlobalNamespace::GTPlayerStats::set_TargetFPS)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x59485bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {"set_TargetFPS", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayerStats.get_SystemPropertiesFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SystemProperties (*)()>(&::GlobalNamespace::GTPlayerStats::get_SystemPropertiesFlags)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5948608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {"get_SystemPropertiesFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayerStats.set_SystemPropertiesFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SystemProperties)>(&::GlobalNamespace::GTPlayerStats::set_SystemPropertiesFlags)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5948650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {"set_SystemPropertiesFlags", {}, {::i2c::type_of<::GlobalNamespace::SystemProperties>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayerStats.GetPackedValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::GlobalNamespace::GTPlayerStats::GetPackedValues)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x594869c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {"GetPackedValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayerStats.UnPackValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerStatsReadonly (*)(int64_t, int32_t)>(&::GlobalNamespace::GTPlayerStats::UnPackValues)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5948744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {"UnPackValues", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayerStats.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPlayerStats::*)()>(&::GlobalNamespace::GTPlayerStats::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5948750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayerStats.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPlayerStats::*)()>(&::GlobalNamespace::GTPlayerStats::OnEnable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59487e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                    {::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayerStats.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPlayerStats::*)()>(&::GlobalNamespace::GTPlayerStats::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5948b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                    {::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayerStats.PostTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPlayerStats::*)()>(&::GlobalNamespace::GTPlayerStats::PostTick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5948bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                    {::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayerStats.DelayedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPlayerStats::*)()>(&::GlobalNamespace::GTPlayerStats::DelayedUpdate)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x594880c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {"DelayedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPlayerStats._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPlayerStats::*)()>(&::GlobalNamespace::GTPlayerStats::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5948bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Utilities::FloatAverages*& GlobalNamespace::GTPlayerStats::__cordl_internal_get_m_fps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_fps;
}
constexpr ::Utilities::FloatAverages* const& GlobalNamespace::GTPlayerStats::__cordl_internal_get_m_fps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_fps;
}
constexpr void GlobalNamespace::GTPlayerStats::__cordl_internal_set_m_fps(::Utilities::FloatAverages*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_fps = value;
}
constexpr ::Utilities::IntAverages*& GlobalNamespace::GTPlayerStats::__cordl_internal_get_m_ping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ping;
}
constexpr ::Utilities::IntAverages* const& GlobalNamespace::GTPlayerStats::__cordl_internal_get_m_ping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ping;
}
constexpr void GlobalNamespace::GTPlayerStats::__cordl_internal_set_m_ping(::Utilities::IntAverages*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ping = value;
}
constexpr ::GorillaTag::TickSystemTimer*& GlobalNamespace::GTPlayerStats::__cordl_internal_get_m_periodicUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_periodicUpdate;
}
constexpr ::GorillaTag::TickSystemTimer* const& GlobalNamespace::GTPlayerStats::__cordl_internal_get_m_periodicUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_periodicUpdate;
}
constexpr void GlobalNamespace::GTPlayerStats::__cordl_internal_set_m_periodicUpdate(::GorillaTag::TickSystemTimer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_periodicUpdate = value;
}
inline void GlobalNamespace::GTPlayerStats::setStaticF__Ping_k__BackingField(int16_t  value)  {
::cordl_internals::setStaticField<int16_t, "<Ping>k__BackingField", ::GlobalNamespace::GTPlayerStats*>(std::forward<int16_t>(value));
}
inline int16_t GlobalNamespace::GTPlayerStats::getStaticF__Ping_k__BackingField()  {
return ::cordl_internals::getStaticField<int16_t, "<Ping>k__BackingField", ::GlobalNamespace::GTPlayerStats*>();
}
inline void GlobalNamespace::GTPlayerStats::setStaticF__FPS_k__BackingField(int16_t  value)  {
::cordl_internals::setStaticField<int16_t, "<FPS>k__BackingField", ::GlobalNamespace::GTPlayerStats*>(std::forward<int16_t>(value));
}
inline int16_t GlobalNamespace::GTPlayerStats::getStaticF__FPS_k__BackingField()  {
return ::cordl_internals::getStaticField<int16_t, "<FPS>k__BackingField", ::GlobalNamespace::GTPlayerStats*>();
}
inline void GlobalNamespace::GTPlayerStats::setStaticF__TargetFPS_k__BackingField(int16_t  value)  {
::cordl_internals::setStaticField<int16_t, "<TargetFPS>k__BackingField", ::GlobalNamespace::GTPlayerStats*>(std::forward<int16_t>(value));
}
inline int16_t GlobalNamespace::GTPlayerStats::getStaticF__TargetFPS_k__BackingField()  {
return ::cordl_internals::getStaticField<int16_t, "<TargetFPS>k__BackingField", ::GlobalNamespace::GTPlayerStats*>();
}
inline void GlobalNamespace::GTPlayerStats::setStaticF_s_systemPropertiesFlags(::GlobalNamespace::SystemProperties  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SystemProperties, "s_systemPropertiesFlags", ::GlobalNamespace::GTPlayerStats*>(std::forward<::GlobalNamespace::SystemProperties>(value));
}
inline ::GlobalNamespace::SystemProperties GlobalNamespace::GTPlayerStats::getStaticF_s_systemPropertiesFlags()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SystemProperties, "s_systemPropertiesFlags", ::GlobalNamespace::GTPlayerStats*>();
}
inline int16_t GlobalNamespace::GTPlayerStats::get_Ping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {"get_Ping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GTPlayerStats::set_Ping(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {"set_Ping", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int16_t GlobalNamespace::GTPlayerStats::get_FPS()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {"get_FPS", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GTPlayerStats::set_FPS(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {"set_FPS", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int16_t GlobalNamespace::GTPlayerStats::get_TargetFPS()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {"get_TargetFPS", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GTPlayerStats::set_TargetFPS(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {"set_TargetFPS", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::SystemProperties GlobalNamespace::GTPlayerStats::get_SystemPropertiesFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {"get_SystemPropertiesFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SystemProperties>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GTPlayerStats::set_SystemPropertiesFlags(::GlobalNamespace::SystemProperties  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {"set_SystemPropertiesFlags", {}, {::i2c::type_of<::GlobalNamespace::SystemProperties>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int64_t GlobalNamespace::GTPlayerStats::GetPackedValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {"GetPackedValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::PlayerStatsReadonly GlobalNamespace::GTPlayerStats::UnPackValues(int64_t  values, int32_t  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {"UnPackValues", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerStatsReadonly>(nullptr, ___internal_method, values, flags);
}
inline void GlobalNamespace::GTPlayerStats::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTPlayerStats::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTPlayerStats::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTPlayerStats::PostTick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTPlayerStats::DelayedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {"DelayedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTPlayerStats::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPlayerStats*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GTPlayerStats* GlobalNamespace::GTPlayerStats::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GTPlayerStats*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTPlayerStats::GTPlayerStats()   {
}
