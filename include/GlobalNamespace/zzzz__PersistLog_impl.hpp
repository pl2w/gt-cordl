#pragma once
// IWYU pragma private; include "GlobalNamespace/PersistLog.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PersistLog_def.hpp"
#include "GlobalNamespace/zzzz__PersistLog__OnEnable_d__4_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__StreamWriter_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PersistLog.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PersistLog::*)()>(&::GlobalNamespace::PersistLog::OnEnable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x570f628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersistLog*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PersistLog.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PersistLog::*)()>(&::GlobalNamespace::PersistLog::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x570f6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersistLog*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PersistLog.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PersistLog::*)()>(&::GlobalNamespace::PersistLog::OnDestroy)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x570f6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersistLog*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PersistLog.LogMessageEnqueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PersistLog::*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&::GlobalNamespace::PersistLog::LogMessageEnqueue)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x570f81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersistLog*>(),
                        {"LogMessageEnqueue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PersistLog.LogMessageReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PersistLog::*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&::GlobalNamespace::PersistLog::LogMessageReceived)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x570f958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersistLog*>(),
                        {"LogMessageReceived", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PersistLog.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::PersistLog::Log)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x570b82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersistLog*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PersistLog.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::LogType, ::StringW)>(&::GlobalNamespace::PersistLog::Log)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x570fb5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersistLog*>(),
                        {"Log", {}, {::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PersistLog._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PersistLog::*)()>(&::GlobalNamespace::PersistLog::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x570fd2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersistLog*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PersistLog::__cordl_internal_get_plog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___plog;
}
constexpr ::StringW const& GlobalNamespace::PersistLog::__cordl_internal_get_plog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___plog;
}
constexpr void GlobalNamespace::PersistLog::__cordl_internal_set_plog(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___plog = value;
}
constexpr bool& GlobalNamespace::PersistLog::__cordl_internal_get_dup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dup;
}
constexpr bool const& GlobalNamespace::PersistLog::__cordl_internal_get_dup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dup;
}
constexpr void GlobalNamespace::PersistLog::__cordl_internal_set_dup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dup = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<double_t,::StringW,::StringW>>*& GlobalNamespace::PersistLog::__cordl_internal_get_earlyQ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___earlyQ;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<double_t,::StringW,::StringW>>* const& GlobalNamespace::PersistLog::__cordl_internal_get_earlyQ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___earlyQ;
}
constexpr void GlobalNamespace::PersistLog::__cordl_internal_set_earlyQ(::System::Collections::Generic::List_1<::System::ValueTuple_3<double_t,::StringW,::StringW>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___earlyQ = value;
}
inline void GlobalNamespace::PersistLog::setStaticF_sr(::System::IO::StreamWriter*  value)  {
::cordl_internals::setStaticField<::System::IO::StreamWriter*, "sr", ::GlobalNamespace::PersistLog*>(std::forward<::System::IO::StreamWriter*>(value));
}
inline ::System::IO::StreamWriter* GlobalNamespace::PersistLog::getStaticF_sr()  {
return ::cordl_internals::getStaticField<::System::IO::StreamWriter*, "sr", ::GlobalNamespace::PersistLog*>();
}
inline void GlobalNamespace::PersistLog::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersistLog*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PersistLog::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersistLog*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PersistLog::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersistLog*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PersistLog::LogMessageEnqueue(::StringW  msg, ::StringW  strace, ::UnityEngine::LogType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersistLog*>(),
                        {"LogMessageEnqueue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg, strace, type);
}
inline void GlobalNamespace::PersistLog::LogMessageReceived(::StringW  msg, ::StringW  strace, ::UnityEngine::LogType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersistLog*>(),
                        {"LogMessageReceived", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg, strace, type);
}
inline void GlobalNamespace::PersistLog::Log(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersistLog*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void GlobalNamespace::PersistLog::Log(::UnityEngine::LogType  type, ::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersistLog*>(),
                        {"Log", {}, {::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, msg);
}
inline void GlobalNamespace::PersistLog::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersistLog*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PersistLog* GlobalNamespace::PersistLog::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PersistLog*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PersistLog::PersistLog()   {
}
