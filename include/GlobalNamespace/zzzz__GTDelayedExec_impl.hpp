#pragma once
// IWYU pragma private; include "GlobalNamespace/GTDelayedExec.hpp"
#include "GlobalNamespace/zzzz__GTDelayedExec_Listener_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GTDelayedExec_def.hpp"
#include "GlobalNamespace/zzzz__GTDelayedExec_Listener_def.hpp"
#include "GlobalNamespace/zzzz__IDelayedExecListener_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTDelayedExec.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GTDelayedExec* (*)()>(&::GlobalNamespace::GTDelayedExec::get_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ac6724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDelayedExec*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDelayedExec.set_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GTDelayedExec*)>(&::GlobalNamespace::GTDelayedExec::set_instance)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ac677c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDelayedExec*>(),
                        {"set_instance", {}, {::i2c::type_of<::GlobalNamespace::GTDelayedExec*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDelayedExec.get_listenerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::GTDelayedExec::get_listenerCount)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ac67e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDelayedExec*>(),
                        {"get_listenerCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDelayedExec.set_listenerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::GTDelayedExec::set_listenerCount)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ac683c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDelayedExec*>(),
                        {"set_listenerCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDelayedExec.EdReInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GTDelayedExec::EdReInit)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5ac6898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDelayedExec*>(),
                        {"EdReInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDelayedExec.InitializeAfterAssemblies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GTDelayedExec::InitializeAfterAssemblies)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5ac6954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDelayedExec*>(),
                        {"InitializeAfterAssemblies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDelayedExec.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::IDelayedExecListener*, float_t, int32_t)>(&::GlobalNamespace::GTDelayedExec::Add)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x5ac6ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDelayedExec*>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::IDelayedExecListener*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDelayedExec.ITickSystemTick_get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GTDelayedExec::*)()>(&::GlobalNamespace::GTDelayedExec::ITickSystemTick_get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac6ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDelayedExec*>(),
                        {"ITickSystemTick.get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDelayedExec.ITickSystemTick_set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTDelayedExec::*)(bool)>(&::GlobalNamespace::GTDelayedExec::ITickSystemTick_set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac6ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDelayedExec*>(),
                        {"ITickSystemTick.set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDelayedExec.ITickSystemTick_Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTDelayedExec::*)()>(&::GlobalNamespace::GTDelayedExec::ITickSystemTick_Tick)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x5ac6f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDelayedExec*>(),
                        {"ITickSystemTick.Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDelayedExec._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTDelayedExec::*)()>(&::GlobalNamespace::GTDelayedExec::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac6ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDelayedExec*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GTDelayedExec::__cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemTick_TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::GTDelayedExec::__cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemTick_TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::GTDelayedExec::__cordl_internal_set__ITickSystemTick_TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ITickSystemTick_TickRunning_k__BackingField = value;
}
inline void GlobalNamespace::GTDelayedExec::setStaticF__instance_k__BackingField(::GlobalNamespace::GTDelayedExec*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GTDelayedExec*, "<instance>k__BackingField", ::GlobalNamespace::GTDelayedExec*>(std::forward<::GlobalNamespace::GTDelayedExec*>(value));
}
inline ::GlobalNamespace::GTDelayedExec* GlobalNamespace::GTDelayedExec::getStaticF__instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GTDelayedExec*, "<instance>k__BackingField", ::GlobalNamespace::GTDelayedExec*>();
}
inline void GlobalNamespace::GTDelayedExec::setStaticF_maxListenersCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "maxListenersCount", ::GlobalNamespace::GTDelayedExec*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::GTDelayedExec::getStaticF_maxListenersCount()  {
return ::cordl_internals::getStaticField<int32_t, "maxListenersCount", ::GlobalNamespace::GTDelayedExec*>();
}
inline void GlobalNamespace::GTDelayedExec::setStaticF__listenerCount_k__BackingField(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "<listenerCount>k__BackingField", ::GlobalNamespace::GTDelayedExec*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::GTDelayedExec::getStaticF__listenerCount_k__BackingField()  {
return ::cordl_internals::getStaticField<int32_t, "<listenerCount>k__BackingField", ::GlobalNamespace::GTDelayedExec*>();
}
inline void GlobalNamespace::GTDelayedExec::setStaticF__listenerDelays(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "_listenerDelays", ::GlobalNamespace::GTDelayedExec*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> GlobalNamespace::GTDelayedExec::getStaticF__listenerDelays()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "_listenerDelays", ::GlobalNamespace::GTDelayedExec*>();
}
inline void GlobalNamespace::GTDelayedExec::setStaticF__listeners(::ArrayW<::GlobalNamespace::GTDelayedExec_Listener>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::GTDelayedExec_Listener>, "_listeners", ::GlobalNamespace::GTDelayedExec*>(std::forward<::ArrayW<::GlobalNamespace::GTDelayedExec_Listener>>(value));
}
inline ::ArrayW<::GlobalNamespace::GTDelayedExec_Listener> GlobalNamespace::GTDelayedExec::getStaticF__listeners()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::GTDelayedExec_Listener>, "_listeners", ::GlobalNamespace::GTDelayedExec*>();
}
inline ::GlobalNamespace::GTDelayedExec* GlobalNamespace::GTDelayedExec::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDelayedExec*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GTDelayedExec*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GTDelayedExec::set_instance(::GlobalNamespace::GTDelayedExec*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDelayedExec*>(),
                        {"set_instance", {}, {::i2c::type_of<::GlobalNamespace::GTDelayedExec*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::GTDelayedExec::get_listenerCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDelayedExec*>(),
                        {"get_listenerCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GTDelayedExec::set_listenerCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDelayedExec*>(),
                        {"set_listenerCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::GTDelayedExec::EdReInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDelayedExec*>(),
                        {"EdReInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GTDelayedExec::InitializeAfterAssemblies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDelayedExec*>(),
                        {"InitializeAfterAssemblies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GTDelayedExec::Add(::GlobalNamespace::IDelayedExecListener*  listener, float_t  delay, int32_t  contextId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDelayedExec*>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::IDelayedExecListener*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listener, delay, contextId);
}
inline bool GlobalNamespace::GTDelayedExec::ITickSystemTick_get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDelayedExec*>(),
                        {"ITickSystemTick.get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GTDelayedExec::ITickSystemTick_set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDelayedExec*>(),
                        {"ITickSystemTick.set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GTDelayedExec::ITickSystemTick_Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDelayedExec*>(),
                        {"ITickSystemTick.Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTDelayedExec::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDelayedExec*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GTDelayedExec* GlobalNamespace::GTDelayedExec::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GTDelayedExec*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::GTDelayedExec::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::GTDelayedExec::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTDelayedExec::GTDelayedExec()   {
}
