#pragma once
// IWYU pragma private; include "GlobalNamespace/GTFileLog.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GTFileLog_def.hpp"
#include "GlobalNamespace/zzzz__GTFileLog_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/IO/zzzz__StreamWriter_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTFileLog.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GTFileLog_FLogInstance* (*)()>(&::GlobalNamespace::GTFileLog::get_Default)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x566fa68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog.GetLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GTFileLog_FLogInstance* (*)(::StringW)>(&::GlobalNamespace::GTFileLog::GetLog)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x566fcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"GetLog", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::GTFileLog::Log)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x566fe9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog.LogWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::GTFileLog::LogWarning)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x56703e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog.LogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::GTFileLog::LogError)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5670498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog.LogNoTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::GTFileLog::LogNoTrace)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x567054c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"LogNoTrace", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog.LogWarningNoTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::GTFileLog::LogWarningNoTrace)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x56709bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"LogWarningNoTrace", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog.LogErrorNoTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::GTFileLog::LogErrorNoTrace)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5670a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"LogErrorNoTrace", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog.CLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::GTFileLog::CLog)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x5670aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"CLog", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog.CLogWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::GTFileLog::CLogWarning)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x5670f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"CLogWarning", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog.CLogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::GTFileLog::CLogError)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x56712a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"CLogError", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GTFileLog::Reset)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x567163c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog.OnUnityLogMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&::GlobalNamespace::GTFileLog::OnUnityLogMessage)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5671998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"OnUnityLogMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog.GetTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::GTFileLog::GetTimestamp)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5671b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"GetTimestamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog.ExtractFirstExternalCaller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::GTFileLog::ExtractFirstExternalCaller)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5671cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"ExtractFirstExternalCaller", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GTFileLog::setStaticF__registryLock(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "_registryLock", ::GlobalNamespace::GTFileLog*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* GlobalNamespace::GTFileLog::getStaticF__registryLock()  {
return ::cordl_internals::getStaticField<::System::Object*, "_registryLock", ::GlobalNamespace::GTFileLog*>();
}
inline void GlobalNamespace::GTFileLog::setStaticF__instances(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GTFileLog_FLogInstance*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GTFileLog_FLogInstance*>*, "_instances", ::GlobalNamespace::GTFileLog*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GTFileLog_FLogInstance*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GTFileLog_FLogInstance*>* GlobalNamespace::GTFileLog::getStaticF__instances()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GTFileLog_FLogInstance*>*, "_instances", ::GlobalNamespace::GTFileLog*>();
}
inline void GlobalNamespace::GTFileLog::setStaticF__default(::GlobalNamespace::GTFileLog_FLogInstance*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GTFileLog_FLogInstance*, "_default", ::GlobalNamespace::GTFileLog*>(std::forward<::GlobalNamespace::GTFileLog_FLogInstance*>(value));
}
inline ::GlobalNamespace::GTFileLog_FLogInstance* GlobalNamespace::GTFileLog::getStaticF__default()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GTFileLog_FLogInstance*, "_default", ::GlobalNamespace::GTFileLog*>();
}
inline void GlobalNamespace::GTFileLog::setStaticF__inCallback(bool  value)  {
::cordl_internals::setStaticField<bool, "_inCallback", ::GlobalNamespace::GTFileLog*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::GTFileLog::getStaticF__inCallback()  {
return ::cordl_internals::getStaticField<bool, "_inCallback", ::GlobalNamespace::GTFileLog*>();
}
inline ::GlobalNamespace::GTFileLog_FLogInstance* GlobalNamespace::GTFileLog::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GTFileLog_FLogInstance*>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::GTFileLog_FLogInstance* GlobalNamespace::GTFileLog::GetLog(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"GetLog", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GTFileLog_FLogInstance*>(nullptr, ___internal_method, name);
}
inline void GlobalNamespace::GTFileLog::Log(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void GlobalNamespace::GTFileLog::LogWarning(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void GlobalNamespace::GTFileLog::LogError(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void GlobalNamespace::GTFileLog::LogNoTrace(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"LogNoTrace", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void GlobalNamespace::GTFileLog::LogWarningNoTrace(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"LogWarningNoTrace", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void GlobalNamespace::GTFileLog::LogErrorNoTrace(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"LogErrorNoTrace", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void GlobalNamespace::GTFileLog::CLog(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"CLog", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void GlobalNamespace::GTFileLog::CLogWarning(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"CLogWarning", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void GlobalNamespace::GTFileLog::CLogError(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"CLogError", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void GlobalNamespace::GTFileLog::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GTFileLog::OnUnityLogMessage(::StringW  condition, ::StringW  stackTrace, ::UnityEngine::LogType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"OnUnityLogMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, stackTrace, type);
}
inline ::StringW GlobalNamespace::GTFileLog::GetTimestamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"GetTimestamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::GTFileLog::ExtractFirstExternalCaller(::StringW  stackTrace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog*>(),
                        {"ExtractFirstExternalCaller", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, stackTrace);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTFileLog::GTFileLog()   {
}
//  Writing Method size for method: ::GlobalNamespace::GTFileLog_FLogInstance._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTFileLog_FLogInstance::*)(::StringW)>(&::GlobalNamespace::GTFileLog_FLogInstance::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x566fc38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog_FLogInstance.get_IsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GTFileLog_FLogInstance::*)()>(&::GlobalNamespace::GTFileLog_FLogInstance::get_IsActive)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5670e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"get_IsActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog_FLogInstance.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTFileLog_FLogInstance::*)(::StringW)>(&::GlobalNamespace::GTFileLog_FLogInstance::Log)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5671ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog_FLogInstance.LogWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTFileLog_FLogInstance::*)(::StringW)>(&::GlobalNamespace::GTFileLog_FLogInstance::LogWarning)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5671f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog_FLogInstance.LogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTFileLog_FLogInstance::*)(::StringW)>(&::GlobalNamespace::GTFileLog_FLogInstance::LogError)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5671ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog_FLogInstance.LogNoTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTFileLog_FLogInstance::*)(::StringW)>(&::GlobalNamespace::GTFileLog_FLogInstance::LogNoTrace)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5672080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"LogNoTrace", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog_FLogInstance.LogWarningNoTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTFileLog_FLogInstance::*)(::StringW)>(&::GlobalNamespace::GTFileLog_FLogInstance::LogWarningNoTrace)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56720d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"LogWarningNoTrace", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog_FLogInstance.LogErrorNoTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTFileLog_FLogInstance::*)(::StringW)>(&::GlobalNamespace::GTFileLog_FLogInstance::LogErrorNoTrace)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5672130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"LogErrorNoTrace", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog_FLogInstance.CLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTFileLog_FLogInstance::*)(::StringW)>(&::GlobalNamespace::GTFileLog_FLogInstance::CLog)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5672188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"CLog", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog_FLogInstance.CLogWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTFileLog_FLogInstance::*)(::StringW)>(&::GlobalNamespace::GTFileLog_FLogInstance::CLogWarning)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5672260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"CLogWarning", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog_FLogInstance.CLogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTFileLog_FLogInstance::*)(::StringW)>(&::GlobalNamespace::GTFileLog_FLogInstance::CLogError)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5672338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"CLogError", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog_FLogInstance.WriteEntryNoTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTFileLog_FLogInstance::*)(::StringW, ::StringW)>(&::GlobalNamespace::GTFileLog_FLogInstance::WriteEntryNoTrace)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x56705c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"WriteEntryNoTrace", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog_FLogInstance.WriteEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTFileLog_FLogInstance::*)(::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::GTFileLog_FLogInstance::WriteEntry)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x566ff50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"WriteEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog_FLogInstance.EnsureWriter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTFileLog_FLogInstance::*)(::StringW)>(&::GlobalNamespace::GTFileLog_FLogInstance::EnsureWriter)> {
  constexpr static std::size_t size = 0x8a8;
  constexpr static std::size_t addrs = 0x5672410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"EnsureWriter", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog_FLogInstance.PruneOldFlogFiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::GTFileLog_FLogInstance::PruneOldFlogFiles)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5672d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"PruneOldFlogFiles", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog_FLogInstance.CloseWriter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTFileLog_FLogInstance::*)()>(&::GlobalNamespace::GTFileLog_FLogInstance::CloseWriter)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5672cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"CloseWriter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTFileLog_FLogInstance.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTFileLog_FLogInstance::*)()>(&::GlobalNamespace::GTFileLog_FLogInstance::Close)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x56718d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"Close", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IO::StreamWriter*& GlobalNamespace::GTFileLog_FLogInstance::__cordl_internal_get__writer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writer;
}
constexpr ::System::IO::StreamWriter* const& GlobalNamespace::GTFileLog_FLogInstance::__cordl_internal_get__writer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writer;
}
constexpr void GlobalNamespace::GTFileLog_FLogInstance::__cordl_internal_set__writer(::System::IO::StreamWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____writer = value;
}
constexpr bool& GlobalNamespace::GTFileLog_FLogInstance::__cordl_internal_get__failed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____failed;
}
constexpr bool const& GlobalNamespace::GTFileLog_FLogInstance::__cordl_internal_get__failed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____failed;
}
constexpr void GlobalNamespace::GTFileLog_FLogInstance::__cordl_internal_set__failed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____failed = value;
}
constexpr ::System::Object*& GlobalNamespace::GTFileLog_FLogInstance::__cordl_internal_get__lock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lock;
}
constexpr ::System::Object* const& GlobalNamespace::GTFileLog_FLogInstance::__cordl_internal_get__lock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lock;
}
constexpr void GlobalNamespace::GTFileLog_FLogInstance::__cordl_internal_set__lock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lock = value;
}
constexpr ::StringW& GlobalNamespace::GTFileLog_FLogInstance::__cordl_internal_get__prefix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefix;
}
constexpr ::StringW const& GlobalNamespace::GTFileLog_FLogInstance::__cordl_internal_get__prefix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefix;
}
constexpr void GlobalNamespace::GTFileLog_FLogInstance::__cordl_internal_set__prefix(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prefix = value;
}
inline void GlobalNamespace::GTFileLog_FLogInstance::_ctor(::StringW  prefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix);
}
inline bool GlobalNamespace::GTFileLog_FLogInstance::get_IsActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"get_IsActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GTFileLog_FLogInstance::Log(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void GlobalNamespace::GTFileLog_FLogInstance::LogWarning(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void GlobalNamespace::GTFileLog_FLogInstance::LogError(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void GlobalNamespace::GTFileLog_FLogInstance::LogNoTrace(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"LogNoTrace", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void GlobalNamespace::GTFileLog_FLogInstance::LogWarningNoTrace(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"LogWarningNoTrace", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void GlobalNamespace::GTFileLog_FLogInstance::LogErrorNoTrace(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"LogErrorNoTrace", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void GlobalNamespace::GTFileLog_FLogInstance::CLog(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"CLog", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void GlobalNamespace::GTFileLog_FLogInstance::CLogWarning(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"CLogWarning", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void GlobalNamespace::GTFileLog_FLogInstance::CLogError(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"CLogError", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void GlobalNamespace::GTFileLog_FLogInstance::WriteEntryNoTrace(::StringW  level, ::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"WriteEntryNoTrace", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, msg);
}
inline void GlobalNamespace::GTFileLog_FLogInstance::WriteEntry(::StringW  level, ::StringW  msg, ::StringW  trace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"WriteEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, msg, trace);
}
inline void GlobalNamespace::GTFileLog_FLogInstance::EnsureWriter(::StringW  callerTrace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"EnsureWriter", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callerTrace);
}
inline void GlobalNamespace::GTFileLog_FLogInstance::PruneOldFlogFiles(::StringW  dir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"PruneOldFlogFiles", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dir);
}
inline void GlobalNamespace::GTFileLog_FLogInstance::CloseWriter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"CloseWriter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTFileLog_FLogInstance::Close()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTFileLog_FLogInstance*>(),
                        {"Close", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GTFileLog_FLogInstance* GlobalNamespace::GTFileLog_FLogInstance::New_ctor(::StringW  prefix)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GTFileLog_FLogInstance*>(prefix));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTFileLog_FLogInstance::GTFileLog_FLogInstance()   {
}
//  Writing Method size for method: ::GlobalNamespace::FLogInstance_GTFileLog___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FLogInstance_GTFileLog___c::*)()>(&::GlobalNamespace::FLogInstance_GTFileLog___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5673070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FLogInstance_GTFileLog___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FLogInstance_GTFileLog___c._PruneOldFlogFiles_b__21_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::FLogInstance_GTFileLog___c::*)(::StringW, ::StringW)>(&::GlobalNamespace::FLogInstance_GTFileLog___c::_PruneOldFlogFiles_b__21_0)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5673078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FLogInstance_GTFileLog___c*>(),
                        {"<PruneOldFlogFiles>b__21_0", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FLogInstance_GTFileLog___c::setStaticF___9(::GlobalNamespace::FLogInstance_GTFileLog___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::FLogInstance_GTFileLog___c*, "<>9", ::GlobalNamespace::FLogInstance_GTFileLog___c*>(std::forward<::GlobalNamespace::FLogInstance_GTFileLog___c*>(value));
}
inline ::GlobalNamespace::FLogInstance_GTFileLog___c* GlobalNamespace::FLogInstance_GTFileLog___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::FLogInstance_GTFileLog___c*, "<>9", ::GlobalNamespace::FLogInstance_GTFileLog___c*>();
}
inline void GlobalNamespace::FLogInstance_GTFileLog___c::setStaticF___9__21_0(::System::Comparison_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::StringW>*, "<>9__21_0", ::GlobalNamespace::FLogInstance_GTFileLog___c*>(std::forward<::System::Comparison_1<::StringW>*>(value));
}
inline ::System::Comparison_1<::StringW>* GlobalNamespace::FLogInstance_GTFileLog___c::getStaticF___9__21_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::StringW>*, "<>9__21_0", ::GlobalNamespace::FLogInstance_GTFileLog___c*>();
}
inline void GlobalNamespace::FLogInstance_GTFileLog___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FLogInstance_GTFileLog___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::FLogInstance_GTFileLog___c::_PruneOldFlogFiles_b__21_0(::StringW  a, ::StringW  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FLogInstance_GTFileLog___c*>(),
                        {"<PruneOldFlogFiles>b__21_0", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::GlobalNamespace::FLogInstance_GTFileLog___c* GlobalNamespace::FLogInstance_GTFileLog___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FLogInstance_GTFileLog___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FLogInstance_GTFileLog___c::FLogInstance_GTFileLog___c()   {
}
