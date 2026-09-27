#pragma once
// IWYU pragma private; include "Viveport/Subscription.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Viveport/zzzz__Subscription_def.hpp"
#include "Viveport/Internal/zzzz__StatusCallback2_def.hpp"
#include "Viveport/zzzz__StatusCallback2_def.hpp"
#include "Viveport/zzzz__SubscriptionStatus_def.hpp"
//  Writing Method size for method: ::Viveport::Subscription.IsReadyIl2cppCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::StringW)>(&::Viveport::Subscription::IsReadyIl2cppCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b5760c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Subscription*>(),
                        {"IsReadyIl2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Subscription.IsReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::StatusCallback2*)>(&::Viveport::Subscription::IsReady)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5b57680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Subscription*>(),
                        {"IsReady", {}, {::i2c::type_of<::Viveport::StatusCallback2*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Subscription.GetUserStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Viveport::SubscriptionStatus* (*)()>(&::Viveport::Subscription::GetUserStatus)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5b57a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Subscription*>(),
                        {"GetUserStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Subscription._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Subscription::*)()>(&::Viveport::Subscription::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Subscription*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Viveport::Subscription::setStaticF_isReadyIl2cppCallback(::Viveport::Internal::StatusCallback2*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::StatusCallback2*, "isReadyIl2cppCallback", ::Viveport::Subscription*>(std::forward<::Viveport::Internal::StatusCallback2*>(value));
}
inline ::Viveport::Internal::StatusCallback2* Viveport::Subscription::getStaticF_isReadyIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::StatusCallback2*, "isReadyIl2cppCallback", ::Viveport::Subscription*>();
}
inline void Viveport::Subscription::IsReadyIl2cppCallback(int32_t  errorCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Subscription*>(),
                        {"IsReadyIl2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode, message);
}
inline void Viveport::Subscription::IsReady(::Viveport::StatusCallback2*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Subscription*>(),
                        {"IsReady", {}, {::i2c::type_of<::Viveport::StatusCallback2*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline ::Viveport::SubscriptionStatus* Viveport::Subscription::GetUserStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Subscription*>(),
                        {"GetUserStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Viveport::SubscriptionStatus*>(nullptr, ___internal_method);
}
inline void Viveport::Subscription::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Subscription*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::Subscription* Viveport::Subscription::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::Subscription*>());
}
// Ctor Parameters []
constexpr ::Viveport::Subscription::Subscription()   {
}
