#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/UnityLogWriter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/Logging/zzzz__UnityLogWriter_def.hpp"
#include "Meta/Voice/Logging/zzzz__ILogWriter_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Logging::UnityLogWriter.WriteVerbose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::UnityLogWriter::*)(::StringW)>(&::Meta::Voice::Logging::UnityLogWriter::WriteVerbose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e39dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::UnityLogWriter*>(),
                        {"WriteVerbose", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::UnityLogWriter.WriteDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::UnityLogWriter::*)(::StringW)>(&::Meta::Voice::Logging::UnityLogWriter::WriteDebug)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e39e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::UnityLogWriter*>(),
                        {"WriteDebug", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::UnityLogWriter.WriteInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::UnityLogWriter::*)(::StringW)>(&::Meta::Voice::Logging::UnityLogWriter::WriteInfo)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e39e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::UnityLogWriter*>(),
                        {"WriteInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::UnityLogWriter.WriteWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::UnityLogWriter::*)(::StringW)>(&::Meta::Voice::Logging::UnityLogWriter::WriteWarning)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e39ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::UnityLogWriter*>(),
                        {"WriteWarning", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::UnityLogWriter.WriteError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::UnityLogWriter::*)(::StringW)>(&::Meta::Voice::Logging::UnityLogWriter::WriteError)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e39f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::UnityLogWriter*>(),
                        {"WriteError", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::UnityLogWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::UnityLogWriter::*)()>(&::Meta::Voice::Logging::UnityLogWriter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e375c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::UnityLogWriter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::Voice::Logging::UnityLogWriter::WriteVerbose(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::UnityLogWriter*>(),
                        {"WriteVerbose", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Meta::Voice::Logging::UnityLogWriter::WriteDebug(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::UnityLogWriter*>(),
                        {"WriteDebug", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Meta::Voice::Logging::UnityLogWriter::WriteInfo(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::UnityLogWriter*>(),
                        {"WriteInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Meta::Voice::Logging::UnityLogWriter::WriteWarning(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::UnityLogWriter*>(),
                        {"WriteWarning", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Meta::Voice::Logging::UnityLogWriter::WriteError(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::UnityLogWriter*>(),
                        {"WriteError", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Meta::Voice::Logging::UnityLogWriter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::UnityLogWriter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::Logging::UnityLogWriter* Meta::Voice::Logging::UnityLogWriter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Logging::UnityLogWriter*>());
}
/// @brief Convert operator to "::Meta::Voice::Logging::ILogWriter"
constexpr  Meta::Voice::Logging::UnityLogWriter::operator ::Meta::Voice::Logging::ILogWriter*() noexcept {
return static_cast<::Meta::Voice::Logging::ILogWriter*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::Logging::ILogWriter"
constexpr ::Meta::Voice::Logging::ILogWriter* Meta::Voice::Logging::UnityLogWriter::i___Meta__Voice__Logging__ILogWriter() noexcept {
return static_cast<::Meta::Voice::Logging::ILogWriter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Logging::UnityLogWriter::UnityLogWriter()   {
}
