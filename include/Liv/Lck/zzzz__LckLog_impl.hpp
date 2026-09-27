#pragma once
// IWYU pragma private; include "Liv/Lck/LckLog.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckLog_def.hpp"
#include "Liv/Lck/Core/zzzz__LogType_def.hpp"
#include "Liv/Lck/zzzz__LogLevel_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_5_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckLog.OnLckCoreInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Liv::Lck::LckLog::OnLckCoreInitialized)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x9ceecc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckLog*>(),
                        {"OnLckCoreInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckLog.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::StringW, int32_t)>(&::Liv::Lck::LckLog::Log)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9cdcfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckLog*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckLog.LogWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::StringW, int32_t)>(&::Liv::Lck::LckLog::LogWarning)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9cdc778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckLog*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckLog.LogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::StringW, int32_t)>(&::Liv::Lck::LckLog::LogError)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9cdd0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckLog*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckLog.LogTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::StringW, int32_t)>(&::Liv::Lck::LckLog::LogTrace)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9cef1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckLog*>(),
                        {"LogTrace", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckLog.SendToLckCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::Core::LogType, ::StringW, ::StringW, ::StringW, int32_t)>(&::Liv::Lck::LckLog::SendToLckCore)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x9ceefbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckLog*>(),
                        {"SendToLckCore", {}, {::i2c::type_of<::Liv::Lck::Core::LogType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckLog.ShouldPrint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Liv::Lck::LogLevel)>(&::Liv::Lck::LckLog::ShouldPrint)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9ceeed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckLog*>(),
                        {"ShouldPrint", {}, {::i2c::type_of<::Liv::Lck::LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckLog.GetFileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Liv::Lck::LckLog::GetFileName)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9ceef00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckLog*>(),
                        {"GetFileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::LckLog::setStaticF__earlyLogs(::System::Collections::Generic::Queue_1<::System::ValueTuple_5<::Liv::Lck::Core::LogType,::StringW,::StringW,::StringW,int32_t>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::System::ValueTuple_5<::Liv::Lck::Core::LogType,::StringW,::StringW,::StringW,int32_t>>*, "_earlyLogs", ::Liv::Lck::LckLog*>(std::forward<::System::Collections::Generic::Queue_1<::System::ValueTuple_5<::Liv::Lck::Core::LogType,::StringW,::StringW,::StringW,int32_t>>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::System::ValueTuple_5<::Liv::Lck::Core::LogType,::StringW,::StringW,::StringW,int32_t>>* Liv::Lck::LckLog::getStaticF__earlyLogs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::System::ValueTuple_5<::Liv::Lck::Core::LogType,::StringW,::StringW,::StringW,int32_t>>*, "_earlyLogs", ::Liv::Lck::LckLog*>();
}
inline void Liv::Lck::LckLog::setStaticF__isInitialized(bool  value)  {
::cordl_internals::setStaticField<bool, "_isInitialized", ::Liv::Lck::LckLog*>(std::forward<bool>(value));
}
inline bool Liv::Lck::LckLog::getStaticF__isInitialized()  {
return ::cordl_internals::getStaticField<bool, "_isInitialized", ::Liv::Lck::LckLog*>();
}
inline void Liv::Lck::LckLog::setStaticF__lockObject(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "_lockObject", ::Liv::Lck::LckLog*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Liv::Lck::LckLog::getStaticF__lockObject()  {
return ::cordl_internals::getStaticField<::System::Object*, "_lockObject", ::Liv::Lck::LckLog*>();
}
inline void Liv::Lck::LckLog::OnLckCoreInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckLog*>(),
                        {"OnLckCoreInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Liv::Lck::LckLog::Log(::StringW  message, /* [CallerMemberName] */ ::StringW  memberName, /* [CallerFilePath] */ ::StringW  filePath, /* [CallerLineNumber] */ int32_t  lineNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckLog*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, memberName, filePath, lineNumber);
}
inline void Liv::Lck::LckLog::LogWarning(::StringW  message, /* [CallerMemberName] */ ::StringW  memberName, /* [CallerFilePath] */ ::StringW  filePath, /* [CallerLineNumber] */ int32_t  lineNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckLog*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, memberName, filePath, lineNumber);
}
inline void Liv::Lck::LckLog::LogError(::StringW  message, /* [CallerMemberName] */ ::StringW  memberName, /* [CallerFilePath] */ ::StringW  filePath, /* [CallerLineNumber] */ int32_t  lineNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckLog*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, memberName, filePath, lineNumber);
}
inline void Liv::Lck::LckLog::LogTrace(::StringW  message, /* [CallerMemberName] */ ::StringW  memberName, /* [CallerFilePath] */ ::StringW  filePath, /* [CallerLineNumber] */ int32_t  lineNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckLog*>(),
                        {"LogTrace", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, memberName, filePath, lineNumber);
}
inline void Liv::Lck::LckLog::SendToLckCore(::Liv::Lck::Core::LogType  type, ::StringW  message, ::StringW  memberName, ::StringW  filePath, int32_t  lineNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckLog*>(),
                        {"SendToLckCore", {}, {::i2c::type_of<::Liv::Lck::Core::LogType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, message, memberName, filePath, lineNumber);
}
inline bool Liv::Lck::LckLog::ShouldPrint(::Liv::Lck::LogLevel  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckLog*>(),
                        {"ShouldPrint", {}, {::i2c::type_of<::Liv::Lck::LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, level);
}
inline ::StringW Liv::Lck::LckLog::GetFileName(::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckLog*>(),
                        {"GetFileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, filePath);
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckLog::LckLog()   {
}
