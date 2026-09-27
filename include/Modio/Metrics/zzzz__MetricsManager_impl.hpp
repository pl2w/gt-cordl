#pragma once
// IWYU pragma private; include "Modio/Metrics/MetricsManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Metrics/zzzz__MetricsManager_def.hpp"
#include "Modio/Metrics/zzzz__MetricsManager__EndSession_d__11_def.hpp"
#include "Modio/Metrics/zzzz__MetricsManager__Heartbeat_d__10_def.hpp"
#include "Modio/Metrics/zzzz__MetricsManager__StartSession_d__6_def.hpp"
#include "Modio/Metrics/zzzz__MetricsManager__StartSession_d__7_def.hpp"
#include "Modio/Metrics/zzzz__MetricsManager__StartSession_d__8_def.hpp"
#include "Modio/Metrics/zzzz__MetricsManager__StartSession_d__9_def.hpp"
#include "Modio/Metrics/zzzz__MetricsManager_def.hpp"
#include "Modio/Metrics/zzzz__MetricsSession_def.hpp"
#include "Modio/Metrics/zzzz__MetricsSettings_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Modio::Metrics::MetricsManager.get_Secret
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Metrics::MetricsManager::*)()>(&::Modio::Metrics::MetricsManager::get_Secret)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa03d08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager*>(),
                        {"get_Secret", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Metrics::MetricsManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Metrics::MetricsManager::*)()>(&::Modio::Metrics::MetricsManager::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xa03d0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Metrics::MetricsManager.StartSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW,::Modio::Error*>>* (::Modio::Metrics::MetricsManager::*)()>(&::Modio::Metrics::MetricsManager::StartSession)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa03d274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager*>(),
                        {"StartSession", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Metrics::MetricsManager.StartSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Metrics::MetricsManager::*)(::StringW)>(&::Modio::Metrics::MetricsManager::StartSession)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa03d380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager*>(),
                        {"StartSession", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Metrics::MetricsManager.StartSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW,::Modio::Error*>>* (::Modio::Metrics::MetricsManager::*)(::ArrayW<int64_t>)>(&::Modio::Metrics::MetricsManager::StartSession)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa03d4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager*>(),
                        {"StartSession", {}, {::i2c::type_of<::ArrayW<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Metrics::MetricsManager.StartSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Metrics::MetricsManager::*)(::StringW, ::ArrayW<int64_t>)>(&::Modio::Metrics::MetricsManager::StartSession)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa03d5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager*>(),
                        {"StartSession", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Metrics::MetricsManager.Heartbeat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Modio::Metrics::MetricsManager::*)(::StringW)>(&::Modio::Metrics::MetricsManager::Heartbeat)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa03d6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager*>(),
                        {"Heartbeat", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Metrics::MetricsManager.EndSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Metrics::MetricsManager::*)(::StringW)>(&::Modio::Metrics::MetricsManager::EndSession)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa03d7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager*>(),
                        {"EndSession", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Metrics::MetricsManager.EndAllSessions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Metrics::MetricsManager::*)()>(&::Modio::Metrics::MetricsManager::EndAllSessions)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0xa03d910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager*>(),
                        {"EndAllSessions", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Metrics::MetricsSession*>*& Modio::Metrics::MetricsManager::__cordl_internal_get__sessions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessions;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Metrics::MetricsSession*>* const& Modio::Metrics::MetricsManager::__cordl_internal_get__sessions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessions;
}
constexpr void Modio::Metrics::MetricsManager::__cordl_internal_set__sessions(::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Metrics::MetricsSession*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sessions = value;
}
constexpr ::Modio::Metrics::MetricsSettings*& Modio::Metrics::MetricsManager::__cordl_internal_get__settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr ::Modio::Metrics::MetricsSettings* const& Modio::Metrics::MetricsManager::__cordl_internal_get__settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr void Modio::Metrics::MetricsManager::__cordl_internal_set__settings(::Modio::Metrics::MetricsSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settings = value;
}
inline ::StringW Modio::Metrics::MetricsManager::get_Secret()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager*>(),
                        {"get_Secret", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Metrics::MetricsManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW,::Modio::Error*>>* Modio::Metrics::MetricsManager::StartSession()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager*>(),
                        {"StartSession", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW,::Modio::Error*>>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Metrics::MetricsManager::StartSession(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager*>(),
                        {"StartSession", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, id);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW,::Modio::Error*>>* Modio::Metrics::MetricsManager::StartSession(::ArrayW<int64_t>  mods)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager*>(),
                        {"StartSession", {}, {::i2c::type_of<::ArrayW<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW,::Modio::Error*>>*>(this, ___internal_method, mods);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Metrics::MetricsManager::StartSession(::StringW  id, ::ArrayW<int64_t>  mods)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager*>(),
                        {"StartSession", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, id, mods);
}
inline ::System::Threading::Tasks::Task* Modio::Metrics::MetricsManager::Heartbeat(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager*>(),
                        {"Heartbeat", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, id);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Metrics::MetricsManager::EndSession(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager*>(),
                        {"EndSession", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, id);
}
inline void Modio::Metrics::MetricsManager::EndAllSessions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager*>(),
                        {"EndAllSessions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Metrics::MetricsManager* Modio::Metrics::MetricsManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Metrics::MetricsManager*>());
}
// Ctor Parameters []
constexpr ::Modio::Metrics::MetricsManager::MetricsManager()   {
}
//  Writing Method size for method: ::Modio::Metrics::MetricsManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Metrics::MetricsManager___c::*)()>(&::Modio::Metrics::MetricsManager___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa03dd2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Metrics::MetricsManager___c._StartSession_b__7_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Metrics::MetricsManager___c::*)(::Modio::Mods::Mod*)>(&::Modio::Metrics::MetricsManager___c::_StartSession_b__7_0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa03dd34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager___c*>(),
                        {"<StartSession>b__7_0", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Metrics::MetricsManager___c._StartSession_b__7_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Metrics::MetricsManager___c::*)(::Modio::Mods::Mod*)>(&::Modio::Metrics::MetricsManager___c::_StartSession_b__7_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa03dd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager___c*>(),
                        {"<StartSession>b__7_1", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Metrics::MetricsManager___c._EndAllSessions_b__12_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Metrics::MetricsManager___c::*)(::Modio::Metrics::MetricsSession*)>(&::Modio::Metrics::MetricsManager___c::_EndAllSessions_b__12_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa03dd74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager___c*>(),
                        {"<EndAllSessions>b__12_0", {}, {::i2c::type_of<::Modio::Metrics::MetricsSession*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Metrics::MetricsManager___c::setStaticF___9(::Modio::Metrics::MetricsManager___c*  value)  {
::cordl_internals::setStaticField<::Modio::Metrics::MetricsManager___c*, "<>9", ::Modio::Metrics::MetricsManager___c*>(std::forward<::Modio::Metrics::MetricsManager___c*>(value));
}
inline ::Modio::Metrics::MetricsManager___c* Modio::Metrics::MetricsManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::Metrics::MetricsManager___c*, "<>9", ::Modio::Metrics::MetricsManager___c*>();
}
inline void Modio::Metrics::MetricsManager___c::setStaticF___9__7_0(::System::Func_2<::Modio::Mods::Mod*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::Mods::Mod*,bool>*, "<>9__7_0", ::Modio::Metrics::MetricsManager___c*>(std::forward<::System::Func_2<::Modio::Mods::Mod*,bool>*>(value));
}
inline ::System::Func_2<::Modio::Mods::Mod*,bool>* Modio::Metrics::MetricsManager___c::getStaticF___9__7_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::Mods::Mod*,bool>*, "<>9__7_0", ::Modio::Metrics::MetricsManager___c*>();
}
inline void Modio::Metrics::MetricsManager___c::setStaticF___9__7_1(::System::Func_2<::Modio::Mods::Mod*,int64_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::Mods::Mod*,int64_t>*, "<>9__7_1", ::Modio::Metrics::MetricsManager___c*>(std::forward<::System::Func_2<::Modio::Mods::Mod*,int64_t>*>(value));
}
inline ::System::Func_2<::Modio::Mods::Mod*,int64_t>* Modio::Metrics::MetricsManager___c::getStaticF___9__7_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::Mods::Mod*,int64_t>*, "<>9__7_1", ::Modio::Metrics::MetricsManager___c*>();
}
inline void Modio::Metrics::MetricsManager___c::setStaticF___9__12_0(::System::Func_2<::Modio::Metrics::MetricsSession*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::Metrics::MetricsSession*,bool>*, "<>9__12_0", ::Modio::Metrics::MetricsManager___c*>(std::forward<::System::Func_2<::Modio::Metrics::MetricsSession*,bool>*>(value));
}
inline ::System::Func_2<::Modio::Metrics::MetricsSession*,bool>* Modio::Metrics::MetricsManager___c::getStaticF___9__12_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::Metrics::MetricsSession*,bool>*, "<>9__12_0", ::Modio::Metrics::MetricsManager___c*>();
}
inline void Modio::Metrics::MetricsManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Modio::Metrics::MetricsManager___c::_StartSession_b__7_0(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager___c*>(),
                        {"<StartSession>b__7_0", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mod);
}
inline int64_t Modio::Metrics::MetricsManager___c::_StartSession_b__7_1(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager___c*>(),
                        {"<StartSession>b__7_1", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, mod);
}
inline bool Modio::Metrics::MetricsManager___c::_EndAllSessions_b__12_0(::Modio::Metrics::MetricsSession*  session)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsManager___c*>(),
                        {"<EndAllSessions>b__12_0", {}, {::i2c::type_of<::Modio::Metrics::MetricsSession*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, session);
}
inline ::Modio::Metrics::MetricsManager___c* Modio::Metrics::MetricsManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Metrics::MetricsManager___c*>());
}
// Ctor Parameters []
constexpr ::Modio::Metrics::MetricsManager___c::MetricsManager___c()   {
}
