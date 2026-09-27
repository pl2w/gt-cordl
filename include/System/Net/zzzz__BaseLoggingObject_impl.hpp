#pragma once
// IWYU pragma private; include "System/Net/BaseLoggingObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__BaseLoggingObject_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::Net::BaseLoggingObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::BaseLoggingObject::*)()>(&::System::Net::BaseLoggingObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac72b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::BaseLoggingObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BaseLoggingObject.EnterFunc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::BaseLoggingObject::*)(::StringW)>(&::System::Net::BaseLoggingObject::EnterFunc)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::BaseLoggingObject*>(),
                    {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BaseLoggingObject.LeaveFunc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::BaseLoggingObject::*)(::StringW)>(&::System::Net::BaseLoggingObject::LeaveFunc)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::BaseLoggingObject*>(),
                    {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BaseLoggingObject.DumpArrayToConsole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::BaseLoggingObject::*)()>(&::System::Net::BaseLoggingObject::DumpArrayToConsole)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::BaseLoggingObject*>(),
                    {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BaseLoggingObject.PrintLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::BaseLoggingObject::*)(::StringW)>(&::System::Net::BaseLoggingObject::PrintLine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::BaseLoggingObject*>(),
                    {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BaseLoggingObject.DumpArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::BaseLoggingObject::*)(bool)>(&::System::Net::BaseLoggingObject::DumpArray)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::BaseLoggingObject*>(),
                    {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BaseLoggingObject.DumpArrayToFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::BaseLoggingObject::*)(bool)>(&::System::Net::BaseLoggingObject::DumpArrayToFile)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::BaseLoggingObject*>(),
                    {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BaseLoggingObject.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::BaseLoggingObject::*)()>(&::System::Net::BaseLoggingObject::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::BaseLoggingObject*>(),
                    {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BaseLoggingObject.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::BaseLoggingObject::*)(bool)>(&::System::Net::BaseLoggingObject::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::BaseLoggingObject*>(),
                    {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BaseLoggingObject.LoggingMonitorTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::BaseLoggingObject::*)()>(&::System::Net::BaseLoggingObject::LoggingMonitorTick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::BaseLoggingObject*>(),
                    {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BaseLoggingObject.Dump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::BaseLoggingObject::*)(::ArrayW<uint8_t>)>(&::System::Net::BaseLoggingObject::Dump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::BaseLoggingObject*>(),
                    {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BaseLoggingObject.Dump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::BaseLoggingObject::*)(::ArrayW<uint8_t>, int32_t)>(&::System::Net::BaseLoggingObject::Dump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::BaseLoggingObject*>(),
                    {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BaseLoggingObject.Dump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::BaseLoggingObject::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::BaseLoggingObject::Dump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::BaseLoggingObject*>(),
                    {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BaseLoggingObject.Dump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::BaseLoggingObject::*)(::System::IntPtr, int32_t, int32_t)>(&::System::Net::BaseLoggingObject::Dump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac72b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::BaseLoggingObject*>(),
                    {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 16}
                ));
    return ___internal_method;
  }
};
inline void System::Net::BaseLoggingObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::BaseLoggingObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::BaseLoggingObject::EnterFunc(::StringW  funcname)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, funcname);
}
inline void System::Net::BaseLoggingObject::LeaveFunc(::StringW  funcname)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, funcname);
}
inline void System::Net::BaseLoggingObject::DumpArrayToConsole()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::BaseLoggingObject::PrintLine(::StringW  msg)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void System::Net::BaseLoggingObject::DumpArray(bool  shouldClose)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shouldClose);
}
inline void System::Net::BaseLoggingObject::DumpArrayToFile(bool  shouldClose)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shouldClose);
}
inline void System::Net::BaseLoggingObject::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::BaseLoggingObject::Flush(bool  close)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, close);
}
inline void System::Net::BaseLoggingObject::LoggingMonitorTick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::BaseLoggingObject::Dump(::ArrayW<uint8_t>  buffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void System::Net::BaseLoggingObject::Dump(::ArrayW<uint8_t>  buffer, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, length);
}
inline void System::Net::BaseLoggingObject::Dump(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, length);
}
inline void System::Net::BaseLoggingObject::Dump(::System::IntPtr  pBuffer, int32_t  offset, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::BaseLoggingObject*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pBuffer, offset, length);
}
inline ::System::Net::BaseLoggingObject* System::Net::BaseLoggingObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::BaseLoggingObject*>());
}
// Ctor Parameters []
constexpr ::System::Net::BaseLoggingObject::BaseLoggingObject()   {
}
