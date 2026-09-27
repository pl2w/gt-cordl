#pragma once
// IWYU pragma private; include "Viveport/Internal/Subscription.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Viveport/Internal/zzzz__Subscription_def.hpp"
#include "Viveport/Internal/zzzz__ESubscriptionTransactionType_def.hpp"
#include "Viveport/Internal/zzzz__StatusCallback2_def.hpp"
//  Writing Method size for method: ::Viveport::Internal::Subscription.IsReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Viveport::Internal::StatusCallback2*)>(&::Viveport::Internal::Subscription::IsReady)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5b57908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Subscription*>(),
                        {"IsReady", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback2*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::Subscription.IsWindowsSubscriber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Viveport::Internal::Subscription::IsWindowsSubscriber)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5b57bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Subscription*>(),
                        {"IsWindowsSubscriber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::Subscription.IsAndroidSubscriber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Viveport::Internal::Subscription::IsAndroidSubscriber)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5b57cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Subscription*>(),
                        {"IsAndroidSubscriber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::Subscription.GetTransactionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Viveport::Internal::ESubscriptionTransactionType (*)()>(&::Viveport::Internal::Subscription::GetTransactionType)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5b57d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Subscription*>(),
                        {"GetTransactionType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::Subscription._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Internal::Subscription::*)()>(&::Viveport::Internal::Subscription::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5a228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Subscription*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Viveport::Internal::Subscription::IsReady(::Viveport::Internal::StatusCallback2*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Subscription*>(),
                        {"IsReady", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback2*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, callback);
}
inline bool Viveport::Internal::Subscription::IsWindowsSubscriber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Subscription*>(),
                        {"IsWindowsSubscriber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Viveport::Internal::Subscription::IsAndroidSubscriber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Subscription*>(),
                        {"IsAndroidSubscriber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::Viveport::Internal::ESubscriptionTransactionType Viveport::Internal::Subscription::GetTransactionType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Subscription*>(),
                        {"GetTransactionType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Viveport::Internal::ESubscriptionTransactionType>(nullptr, ___internal_method);
}
inline void Viveport::Internal::Subscription::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::Subscription*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::Internal::Subscription* Viveport::Internal::Subscription::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::Internal::Subscription*>());
}
// Ctor Parameters []
constexpr ::Viveport::Internal::Subscription::Subscription()   {
}
