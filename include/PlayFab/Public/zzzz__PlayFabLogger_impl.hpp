#pragma once
// IWYU pragma private; include "PlayFab/Public/PlayFabLogger.hpp"
#include "PlayFab/Public/zzzz__PlayFabLoggerBase_impl.hpp"
#include "PlayFab/Public/zzzz__PlayFabLogger_def.hpp"
//  Writing Method size for method: ::PlayFab::Public::PlayFabLogger.BeginUploadLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::PlayFabLogger::*)()>(&::PlayFab::Public::PlayFabLogger::BeginUploadLog)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa842e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Public::PlayFabLogger*>(),
                    {::i2c::class_of<::PlayFab::Public::PlayFabLogger*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::PlayFabLogger.UploadLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::PlayFabLogger::*)(::StringW)>(&::PlayFab::Public::PlayFabLogger::UploadLog)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa842e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Public::PlayFabLogger*>(),
                    {::i2c::class_of<::PlayFab::Public::PlayFabLogger*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::PlayFabLogger.EndUploadLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::PlayFabLogger::*)()>(&::PlayFab::Public::PlayFabLogger::EndUploadLog)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa842e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Public::PlayFabLogger*>(),
                    {::i2c::class_of<::PlayFab::Public::PlayFabLogger*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::PlayFabLogger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::PlayFabLogger::*)()>(&::PlayFab::Public::PlayFabLogger::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa842e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLogger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::Public::PlayFabLogger::BeginUploadLog()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Public::PlayFabLogger*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Public::PlayFabLogger::UploadLog(::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Public::PlayFabLogger*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void PlayFab::Public::PlayFabLogger::EndUploadLog()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Public::PlayFabLogger*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Public::PlayFabLogger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLogger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::Public::PlayFabLogger* PlayFab::Public::PlayFabLogger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Public::PlayFabLogger*>());
}
// Ctor Parameters []
constexpr ::PlayFab::Public::PlayFabLogger::PlayFabLogger()   {
}
