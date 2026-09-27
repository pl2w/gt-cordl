#pragma once
// IWYU pragma private; include "Viveport/User.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Viveport/zzzz__User_def.hpp"
#include "Viveport/Internal/zzzz__StatusCallback_def.hpp"
#include "Viveport/zzzz__StatusCallback_def.hpp"
//  Writing Method size for method: ::Viveport::User.IsReadyIl2cppCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Viveport::User::IsReadyIl2cppCallback)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b4cf30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::User*>(),
                        {"IsReadyIl2cppCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::User.IsReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Viveport::StatusCallback*)>(&::Viveport::User::IsReady)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5b4cf94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::User*>(),
                        {"IsReady", {}, {::i2c::type_of<::Viveport::StatusCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::User.GetUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Viveport::User::GetUserId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b4d2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::User*>(),
                        {"GetUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::User.GetUserName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Viveport::User::GetUserName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b4d3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::User*>(),
                        {"GetUserName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::User.GetUserAvatarUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Viveport::User::GetUserAvatarUrl)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b4d4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::User*>(),
                        {"GetUserAvatarUrl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::User._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::User::*)()>(&::Viveport::User::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4d5d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::User*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Viveport::User::setStaticF_isReadyIl2cppCallback(::Viveport::Internal::StatusCallback*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::StatusCallback*, "isReadyIl2cppCallback", ::Viveport::User*>(std::forward<::Viveport::Internal::StatusCallback*>(value));
}
inline ::Viveport::Internal::StatusCallback* Viveport::User::getStaticF_isReadyIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::StatusCallback*, "isReadyIl2cppCallback", ::Viveport::User*>();
}
inline void Viveport::User::IsReadyIl2cppCallback(int32_t  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::User*>(),
                        {"IsReadyIl2cppCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode);
}
inline int32_t Viveport::User::IsReady(::Viveport::StatusCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::User*>(),
                        {"IsReady", {}, {::i2c::type_of<::Viveport::StatusCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, callback);
}
inline ::StringW Viveport::User::GetUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::User*>(),
                        {"GetUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW Viveport::User::GetUserName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::User*>(),
                        {"GetUserName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW Viveport::User::GetUserAvatarUrl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::User*>(),
                        {"GetUserAvatarUrl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void Viveport::User::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::User*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::User* Viveport::User::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::User*>());
}
// Ctor Parameters []
constexpr ::Viveport::User::User()   {
}
