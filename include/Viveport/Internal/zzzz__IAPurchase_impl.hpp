#pragma once
// IWYU pragma private; include "Viveport/Internal/IAPurchase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Viveport/Internal/zzzz__IAPurchase_def.hpp"
#include "Viveport/Internal/zzzz__IAPurchaseCallback_def.hpp"
//  Writing Method size for method: ::Viveport::Internal::IAPurchase.IsReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::Internal::IAPurchaseCallback*, ::StringW)>(&::Viveport::Internal::IAPurchase::IsReady)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5b5041c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"IsReady", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::IAPurchase.Request
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::Internal::IAPurchaseCallback*, ::StringW)>(&::Viveport::Internal::IAPurchase::Request)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5b506e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"Request", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::IAPurchase.Request
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::Internal::IAPurchaseCallback*, ::StringW, ::StringW)>(&::Viveport::Internal::IAPurchase::Request)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5b5094c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"Request", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::IAPurchase.Purchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::Internal::IAPurchaseCallback*, ::StringW)>(&::Viveport::Internal::IAPurchase::Purchase)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5b50c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"Purchase", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::IAPurchase.Query
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::Internal::IAPurchaseCallback*, ::StringW)>(&::Viveport::Internal::IAPurchase::Query)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5b50f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"Query", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::IAPurchase.Query
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::Internal::IAPurchaseCallback*)>(&::Viveport::Internal::IAPurchase::Query)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5b511c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"Query", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::IAPurchase.GetBalance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::Internal::IAPurchaseCallback*)>(&::Viveport::Internal::IAPurchase::GetBalance)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5b51444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"GetBalance", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::IAPurchase.RequestSubscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::Internal::IAPurchaseCallback*, ::StringW, ::StringW, int32_t, ::StringW, int32_t, int32_t, ::StringW)>(&::Viveport::Internal::IAPurchase::RequestSubscription)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5b51710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"RequestSubscription", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::IAPurchase.RequestSubscriptionWithPlanID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::Internal::IAPurchaseCallback*, ::StringW)>(&::Viveport::Internal::IAPurchase::RequestSubscriptionWithPlanID)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5b51b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"RequestSubscriptionWithPlanID", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::IAPurchase.Subscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::Internal::IAPurchaseCallback*, ::StringW)>(&::Viveport::Internal::IAPurchase::Subscribe)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5b51e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"Subscribe", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::IAPurchase.QuerySubscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::Internal::IAPurchaseCallback*, ::StringW)>(&::Viveport::Internal::IAPurchase::QuerySubscription)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5b52110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"QuerySubscription", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::IAPurchase.QuerySubscriptionList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::Internal::IAPurchaseCallback*)>(&::Viveport::Internal::IAPurchase::QuerySubscriptionList)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5b523cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"QuerySubscriptionList", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::IAPurchase.CancelSubscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::Internal::IAPurchaseCallback*, ::StringW)>(&::Viveport::Internal::IAPurchase::CancelSubscription)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5b52650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"CancelSubscription", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::IAPurchase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Internal::IAPurchase::*)()>(&::Viveport::Internal::IAPurchase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5a078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Viveport::Internal::IAPurchase::IsReady(::Viveport::Internal::IAPurchaseCallback*  callback, ::StringW  pchAppKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"IsReady", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback, pchAppKey);
}
inline void Viveport::Internal::IAPurchase::Request(::Viveport::Internal::IAPurchaseCallback*  callback, ::StringW  pchPrice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"Request", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback, pchPrice);
}
inline void Viveport::Internal::IAPurchase::Request(::Viveport::Internal::IAPurchaseCallback*  callback, ::StringW  pchPrice, ::StringW  pchUserData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"Request", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback, pchPrice, pchUserData);
}
inline void Viveport::Internal::IAPurchase::Purchase(::Viveport::Internal::IAPurchaseCallback*  callback, ::StringW  pchPurchaseId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"Purchase", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback, pchPurchaseId);
}
inline void Viveport::Internal::IAPurchase::Query(::Viveport::Internal::IAPurchaseCallback*  callback, ::StringW  pchPurchaseId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"Query", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback, pchPurchaseId);
}
inline void Viveport::Internal::IAPurchase::Query(::Viveport::Internal::IAPurchaseCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"Query", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void Viveport::Internal::IAPurchase::GetBalance(::Viveport::Internal::IAPurchaseCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"GetBalance", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void Viveport::Internal::IAPurchase::RequestSubscription(::Viveport::Internal::IAPurchaseCallback*  callback, ::StringW  pchPrice, ::StringW  pchFreeTrialType, int32_t  nFreeTrialValue, ::StringW  pchChargePeriodType, int32_t  nChargePeriodValue, int32_t  nNumberOfChargePeriod, ::StringW  pchPlanId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"RequestSubscription", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback, pchPrice, pchFreeTrialType, nFreeTrialValue, pchChargePeriodType, nChargePeriodValue, nNumberOfChargePeriod, pchPlanId);
}
inline void Viveport::Internal::IAPurchase::RequestSubscriptionWithPlanID(::Viveport::Internal::IAPurchaseCallback*  callback, ::StringW  pchPlanId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"RequestSubscriptionWithPlanID", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback, pchPlanId);
}
inline void Viveport::Internal::IAPurchase::Subscribe(::Viveport::Internal::IAPurchaseCallback*  callback, ::StringW  pchSubscriptionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"Subscribe", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback, pchSubscriptionId);
}
inline void Viveport::Internal::IAPurchase::QuerySubscription(::Viveport::Internal::IAPurchaseCallback*  callback, ::StringW  pchSubscriptionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"QuerySubscription", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback, pchSubscriptionId);
}
inline void Viveport::Internal::IAPurchase::QuerySubscriptionList(::Viveport::Internal::IAPurchaseCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"QuerySubscriptionList", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void Viveport::Internal::IAPurchase::CancelSubscription(::Viveport::Internal::IAPurchaseCallback*  callback, ::StringW  pchSubscriptionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {"CancelSubscription", {}, {::i2c::type_of<::Viveport::Internal::IAPurchaseCallback*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback, pchSubscriptionId);
}
inline void Viveport::Internal::IAPurchase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::IAPurchase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::Internal::IAPurchase* Viveport::Internal::IAPurchase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::Internal::IAPurchase*>());
}
// Ctor Parameters []
constexpr ::Viveport::Internal::IAPurchase::IAPurchase()   {
}
