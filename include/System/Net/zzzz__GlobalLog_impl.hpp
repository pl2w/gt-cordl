#pragma once
// IWYU pragma private; include "System/Net/GlobalLog.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__GlobalLog_def.hpp"
#include "System/Net/zzzz__BaseLoggingObject_def.hpp"
#include "System/Net/zzzz__ThreadKinds_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::GlobalLog.LoggingInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::BaseLoggingObject* (*)()>(&::System::Net::GlobalLog::LoggingInitialize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xac72b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"LoggingInitialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalLog.get_CurrentThreadKind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ThreadKinds (*)()>(&::System::Net::GlobalLog::get_CurrentThreadKind)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac72ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"get_CurrentThreadKind", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalLog.SetThreadSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::ThreadKinds)>(&::System::Net::GlobalLog::SetThreadSource)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"SetThreadSource", {}, {::i2c::type_of<::System::Net::ThreadKinds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalLog.ThreadContract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::ThreadKinds, ::StringW)>(&::System::Net::GlobalLog::ThreadContract)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"ThreadContract", {}, {::i2c::type_of<::System::Net::ThreadKinds>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalLog.ThreadContract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::ThreadKinds, ::System::Net::ThreadKinds, ::StringW)>(&::System::Net::GlobalLog::ThreadContract)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac72bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"ThreadContract", {}, {::i2c::type_of<::System::Net::ThreadKinds>(), ::i2c::type_of<::System::Net::ThreadKinds>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalLog.AddToArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::Net::GlobalLog::AddToArray)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"AddToArray", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalLog.Ignore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Net::GlobalLog::Ignore)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Ignore", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalLog.Print
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::Net::GlobalLog::Print)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Print", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalLog.PrintHex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Object*)>(&::System::Net::GlobalLog::PrintHex)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"PrintHex", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalLog.Enter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::Net::GlobalLog::Enter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Enter", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalLog.Enter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::System::Net::GlobalLog::Enter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Enter", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalLog._cordl_Assert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::StringW, ::ArrayW<::System::Object*>)>(&::System::Net::GlobalLog::_cordl_Assert)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac72c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Assert", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalLog._cordl_Assert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::Net::GlobalLog::_cordl_Assert)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Assert", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalLog._cordl_Assert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::System::Net::GlobalLog::_cordl_Assert)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xac72d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Assert", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalLog.LeaveException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Exception*)>(&::System::Net::GlobalLog::LeaveException)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"LeaveException", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalLog.Leave
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::Net::GlobalLog::Leave)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Leave", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalLog.Leave
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::System::Net::GlobalLog::Leave)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Leave", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalLog.Leave
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, int32_t)>(&::System::Net::GlobalLog::Leave)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Leave", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalLog.Leave
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, bool)>(&::System::Net::GlobalLog::Leave)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Leave", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalLog.DumpArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Net::GlobalLog::DumpArray)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"DumpArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalLog.Dump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>)>(&::System::Net::GlobalLog::Dump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Dump", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalLog.Dump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t)>(&::System::Net::GlobalLog::Dump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Dump", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalLog.Dump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::GlobalLog::Dump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Dump", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::GlobalLog.Dump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t)>(&::System::Net::GlobalLog::Dump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Dump", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::GlobalLog::setStaticF_Logobject(::System::Net::BaseLoggingObject*  value)  {
::cordl_internals::setStaticField<::System::Net::BaseLoggingObject*, "Logobject", ::System::Net::GlobalLog*>(std::forward<::System::Net::BaseLoggingObject*>(value));
}
inline ::System::Net::BaseLoggingObject* System::Net::GlobalLog::getStaticF_Logobject()  {
return ::cordl_internals::getStaticField<::System::Net::BaseLoggingObject*, "Logobject", ::System::Net::GlobalLog*>();
}
inline ::System::Net::BaseLoggingObject* System::Net::GlobalLog::LoggingInitialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"LoggingInitialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::BaseLoggingObject*>(nullptr, ___internal_method);
}
inline ::System::Net::ThreadKinds System::Net::GlobalLog::get_CurrentThreadKind()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"get_CurrentThreadKind", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ThreadKinds>(nullptr, ___internal_method);
}
inline void System::Net::GlobalLog::SetThreadSource(::System::Net::ThreadKinds  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"SetThreadSource", {}, {::i2c::type_of<::System::Net::ThreadKinds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source);
}
inline void System::Net::GlobalLog::ThreadContract(::System::Net::ThreadKinds  kind, ::StringW  errorMsg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"ThreadContract", {}, {::i2c::type_of<::System::Net::ThreadKinds>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, kind, errorMsg);
}
inline void System::Net::GlobalLog::ThreadContract(::System::Net::ThreadKinds  kind, ::System::Net::ThreadKinds  allowedSources, ::StringW  errorMsg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"ThreadContract", {}, {::i2c::type_of<::System::Net::ThreadKinds>(), ::i2c::type_of<::System::Net::ThreadKinds>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, kind, allowedSources, errorMsg);
}
inline void System::Net::GlobalLog::AddToArray(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"AddToArray", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void System::Net::GlobalLog::Ignore(::System::Object*  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Ignore", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void System::Net::GlobalLog::Print(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Print", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void System::Net::GlobalLog::PrintHex(::StringW  msg, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"PrintHex", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, value);
}
inline void System::Net::GlobalLog::Enter(::StringW  func)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Enter", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, func);
}
inline void System::Net::GlobalLog::Enter(::StringW  func, ::StringW  parms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Enter", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, func, parms);
}
inline void System::Net::GlobalLog::_cordl_Assert(bool  condition, ::StringW  messageFormat, /* [ParamArray] */ ::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Assert", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, messageFormat, data);
}
inline void System::Net::GlobalLog::_cordl_Assert(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Assert", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void System::Net::GlobalLog::_cordl_Assert(::StringW  message, ::StringW  detailMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Assert", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, detailMessage);
}
inline void System::Net::GlobalLog::LeaveException(::StringW  func, ::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"LeaveException", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, func, exception);
}
inline void System::Net::GlobalLog::Leave(::StringW  func)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Leave", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, func);
}
inline void System::Net::GlobalLog::Leave(::StringW  func, ::StringW  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Leave", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, func, result);
}
inline void System::Net::GlobalLog::Leave(::StringW  func, int32_t  returnval)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Leave", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, func, returnval);
}
inline void System::Net::GlobalLog::Leave(::StringW  func, bool  returnval)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Leave", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, func, returnval);
}
inline void System::Net::GlobalLog::DumpArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"DumpArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Net::GlobalLog::Dump(::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Dump", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer);
}
inline void System::Net::GlobalLog::Dump(::ArrayW<uint8_t>  buffer, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Dump", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, length);
}
inline void System::Net::GlobalLog::Dump(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Dump", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, offset, length);
}
inline void System::Net::GlobalLog::Dump(::System::IntPtr  buffer, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::GlobalLog*>(),
                        {"Dump", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, offset, length);
}
// Ctor Parameters []
constexpr ::System::Net::GlobalLog::GlobalLog()   {
}
