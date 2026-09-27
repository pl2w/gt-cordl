#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/ILogWriter.hpp"
#include "Meta/Voice/Logging/zzzz__ILogWriter_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Logging::ILogWriter.WriteVerbose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::ILogWriter::*)(::StringW)>(&::Meta::Voice::Logging::ILogWriter::WriteVerbose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::ILogWriter*>(),
                    {::i2c::class_of<::Meta::Voice::Logging::ILogWriter*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::ILogWriter.WriteDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::ILogWriter::*)(::StringW)>(&::Meta::Voice::Logging::ILogWriter::WriteDebug)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::ILogWriter*>(),
                    {::i2c::class_of<::Meta::Voice::Logging::ILogWriter*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::ILogWriter.WriteInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::ILogWriter::*)(::StringW)>(&::Meta::Voice::Logging::ILogWriter::WriteInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::ILogWriter*>(),
                    {::i2c::class_of<::Meta::Voice::Logging::ILogWriter*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::ILogWriter.WriteWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::ILogWriter::*)(::StringW)>(&::Meta::Voice::Logging::ILogWriter::WriteWarning)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::ILogWriter*>(),
                    {::i2c::class_of<::Meta::Voice::Logging::ILogWriter*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::ILogWriter.WriteError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::ILogWriter::*)(::StringW)>(&::Meta::Voice::Logging::ILogWriter::WriteError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::ILogWriter*>(),
                    {::i2c::class_of<::Meta::Voice::Logging::ILogWriter*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void Meta::Voice::Logging::ILogWriter::WriteVerbose(::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::ILogWriter*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Meta::Voice::Logging::ILogWriter::WriteDebug(::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::ILogWriter*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Meta::Voice::Logging::ILogWriter::WriteInfo(::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::ILogWriter*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Meta::Voice::Logging::ILogWriter::WriteWarning(::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::ILogWriter*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Meta::Voice::Logging::ILogWriter::WriteError(::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::ILogWriter*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
