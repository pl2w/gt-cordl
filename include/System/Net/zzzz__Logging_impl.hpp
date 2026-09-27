#pragma once
// IWYU pragma private; include "System/Net/Logging.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__Logging_def.hpp"
#include "System/Net/zzzz__TraceSource_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Logging.get_On
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Net::Logging::get_On)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac837b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"get_On", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Logging.get_Web
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::TraceSource* (*)()>(&::System::Net::Logging::get_Web)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac897b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"get_Web", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Logging.get_HttpListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::TraceSource* (*)()>(&::System::Net::Logging::get_HttpListener)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac897bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"get_HttpListener", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Logging.get_Sockets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::TraceSource* (*)()>(&::System::Net::Logging::get_Sockets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac897c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"get_Sockets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Logging.Enter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::TraceSource*, ::System::Object*, ::StringW, ::System::Object*)>(&::System::Net::Logging::Enter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac897cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"Enter", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Logging.Enter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::TraceSource*, ::StringW)>(&::System::Net::Logging::Enter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac897d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"Enter", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Logging.Enter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::TraceSource*, ::StringW, ::StringW)>(&::System::Net::Logging::Enter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac897d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"Enter", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Logging.Exception
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::TraceSource*, ::System::Object*, ::StringW, ::System::Exception*)>(&::System::Net::Logging::Exception)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac897d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"Exception", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Logging.Exit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::TraceSource*, ::System::Object*, ::StringW, ::System::Object*)>(&::System::Net::Logging::Exit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac897dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"Exit", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Logging.Exit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::TraceSource*, ::StringW)>(&::System::Net::Logging::Exit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac897e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"Exit", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Logging.Exit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::TraceSource*, ::StringW, ::StringW)>(&::System::Net::Logging::Exit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac897e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"Exit", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Logging.PrintInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::TraceSource*, ::System::Object*, ::StringW, ::StringW)>(&::System::Net::Logging::PrintInfo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac897e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"PrintInfo", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Logging.PrintInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::TraceSource*, ::System::Object*, ::StringW)>(&::System::Net::Logging::PrintInfo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac897ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"PrintInfo", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Logging.PrintInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::TraceSource*, ::StringW)>(&::System::Net::Logging::PrintInfo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac897f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"PrintInfo", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Logging.PrintWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::TraceSource*, ::System::Object*, ::StringW, ::StringW)>(&::System::Net::Logging::PrintWarning)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac897f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"PrintWarning", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Logging.PrintWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::TraceSource*, ::StringW)>(&::System::Net::Logging::PrintWarning)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac897f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"PrintWarning", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Logging.PrintError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::TraceSource*, ::StringW)>(&::System::Net::Logging::PrintError)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac897fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"PrintError", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline bool System::Net::Logging::get_On()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"get_On", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::Net::TraceSource* System::Net::Logging::get_Web()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"get_Web", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::TraceSource*>(nullptr, ___internal_method);
}
inline ::System::Net::TraceSource* System::Net::Logging::get_HttpListener()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"get_HttpListener", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::TraceSource*>(nullptr, ___internal_method);
}
inline ::System::Net::TraceSource* System::Net::Logging::get_Sockets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"get_Sockets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::TraceSource*>(nullptr, ___internal_method);
}
inline void System::Net::Logging::Enter(::System::Net::TraceSource*  traceSource, ::System::Object*  obj, ::StringW  method, ::System::Object*  paramObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"Enter", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, traceSource, obj, method, paramObject);
}
inline void System::Net::Logging::Enter(::System::Net::TraceSource*  traceSource, ::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"Enter", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, traceSource, msg);
}
inline void System::Net::Logging::Enter(::System::Net::TraceSource*  traceSource, ::StringW  msg, ::StringW  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"Enter", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, traceSource, msg, parameters);
}
inline void System::Net::Logging::Exception(::System::Net::TraceSource*  traceSource, ::System::Object*  obj, ::StringW  method, ::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"Exception", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, traceSource, obj, method, e);
}
inline void System::Net::Logging::Exit(::System::Net::TraceSource*  traceSource, ::System::Object*  obj, ::StringW  method, ::System::Object*  retObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"Exit", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, traceSource, obj, method, retObject);
}
inline void System::Net::Logging::Exit(::System::Net::TraceSource*  traceSource, ::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"Exit", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, traceSource, msg);
}
inline void System::Net::Logging::Exit(::System::Net::TraceSource*  traceSource, ::StringW  msg, ::StringW  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"Exit", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, traceSource, msg, parameters);
}
inline void System::Net::Logging::PrintInfo(::System::Net::TraceSource*  traceSource, ::System::Object*  obj, ::StringW  method, ::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"PrintInfo", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, traceSource, obj, method, msg);
}
inline void System::Net::Logging::PrintInfo(::System::Net::TraceSource*  traceSource, ::System::Object*  obj, ::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"PrintInfo", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, traceSource, obj, msg);
}
inline void System::Net::Logging::PrintInfo(::System::Net::TraceSource*  traceSource, ::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"PrintInfo", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, traceSource, msg);
}
inline void System::Net::Logging::PrintWarning(::System::Net::TraceSource*  traceSource, ::System::Object*  obj, ::StringW  method, ::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"PrintWarning", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, traceSource, obj, method, msg);
}
inline void System::Net::Logging::PrintWarning(::System::Net::TraceSource*  traceSource, ::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"PrintWarning", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, traceSource, msg);
}
inline void System::Net::Logging::PrintError(::System::Net::TraceSource*  traceSource, ::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Logging*>(),
                        {"PrintError", {}, {::i2c::type_of<::System::Net::TraceSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, traceSource, msg);
}
// Ctor Parameters []
constexpr ::System::Net::Logging::Logging()   {
}
