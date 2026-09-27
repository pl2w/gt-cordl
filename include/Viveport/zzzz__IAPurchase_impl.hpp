#pragma once
// IWYU pragma private; include "Viveport/IAPurchase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Viveport/zzzz__IAPurchase_impl.hpp"
#include "Viveport/zzzz__IAPurchase_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Viveport/Internal/zzzz__IAPurchaseCallback_def.hpp"
#include "Viveport/zzzz__IAPurchase_def.hpp"
//  Writing Method size for method: ::Viveport::IAPurchase.IsReadyIl2cppCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::StringW)>(&::Viveport::IAPurchase::IsReadyIl2cppCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b4fbd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"IsReadyIl2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase.IsReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::IAPurchase_IAPurchaseListener*, ::StringW)>(&::Viveport::IAPurchase::IsReady)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5b501bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"IsReady", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase.Request01Il2cppCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::StringW)>(&::Viveport::IAPurchase::Request01Il2cppCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b4fc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"Request01Il2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase.Request
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::IAPurchase_IAPurchaseListener*, ::StringW)>(&::Viveport::IAPurchase::Request)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b50594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"Request", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase.Request02Il2cppCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::StringW)>(&::Viveport::IAPurchase::Request02Il2cppCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b4fcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"Request02Il2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase.Request
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::IAPurchase_IAPurchaseListener*, ::StringW, ::StringW)>(&::Viveport::IAPurchase::Request)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5b50858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"Request", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase.PurchaseIl2cppCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::StringW)>(&::Viveport::IAPurchase::PurchaseIl2cppCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b4fd34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"PurchaseIl2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase.Purchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::IAPurchase_IAPurchaseListener*, ::StringW)>(&::Viveport::IAPurchase::Purchase)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b50afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"Purchase", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase.Query01Il2cppCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::StringW)>(&::Viveport::IAPurchase::Query01Il2cppCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b4fda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"Query01Il2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase.Query
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::IAPurchase_IAPurchaseListener*, ::StringW)>(&::Viveport::IAPurchase::Query)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b50dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"Query", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase.Query02Il2cppCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::StringW)>(&::Viveport::IAPurchase::Query02Il2cppCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b4fe1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"Query02Il2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase.Query
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::IAPurchase_IAPurchaseListener*)>(&::Viveport::IAPurchase::Query)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5b51084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"Query", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase.GetBalanceIl2cppCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::StringW)>(&::Viveport::IAPurchase::GetBalanceIl2cppCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b4fe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"GetBalanceIl2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase.GetBalance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::IAPurchase_IAPurchaseListener*)>(&::Viveport::IAPurchase::GetBalance)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5b51300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"GetBalance", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase.RequestSubscriptionIl2cppCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::StringW)>(&::Viveport::IAPurchase::RequestSubscriptionIl2cppCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b4ff04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"RequestSubscriptionIl2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase.RequestSubscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::IAPurchase_IAPurchaseListener*, ::StringW, ::StringW, int32_t, ::StringW, int32_t, int32_t, ::StringW)>(&::Viveport::IAPurchase::RequestSubscription)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5b5157c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"RequestSubscription", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase.RequestSubscriptionWithPlanIDIl2cppCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::StringW)>(&::Viveport::IAPurchase::RequestSubscriptionWithPlanIDIl2cppCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b4ff78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"RequestSubscriptionWithPlanIDIl2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase.RequestSubscriptionWithPlanID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::IAPurchase_IAPurchaseListener*, ::StringW)>(&::Viveport::IAPurchase::RequestSubscriptionWithPlanID)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b51a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"RequestSubscriptionWithPlanID", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase.SubscribeIl2cppCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::StringW)>(&::Viveport::IAPurchase::SubscribeIl2cppCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b4ffec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"SubscribeIl2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase.Subscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::IAPurchase_IAPurchaseListener*, ::StringW)>(&::Viveport::IAPurchase::Subscribe)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b51d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"Subscribe", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase.QuerySubscriptionIl2cppCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::StringW)>(&::Viveport::IAPurchase::QuerySubscriptionIl2cppCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b50060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"QuerySubscriptionIl2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase.QuerySubscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::IAPurchase_IAPurchaseListener*, ::StringW)>(&::Viveport::IAPurchase::QuerySubscription)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b51fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"QuerySubscription", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase.QuerySubscriptionListIl2cppCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::StringW)>(&::Viveport::IAPurchase::QuerySubscriptionListIl2cppCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b500d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"QuerySubscriptionListIl2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase.QuerySubscriptionList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::IAPurchase_IAPurchaseListener*)>(&::Viveport::IAPurchase::QuerySubscriptionList)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5b52288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"QuerySubscriptionList", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase.CancelSubscriptionIl2cppCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::StringW)>(&::Viveport::IAPurchase::CancelSubscriptionIl2cppCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b50148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"CancelSubscriptionIl2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase.CancelSubscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Viveport::IAPurchase_IAPurchaseListener*, ::StringW)>(&::Viveport::IAPurchase::CancelSubscription)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b52504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"CancelSubscription", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase::*)()>(&::Viveport::IAPurchase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b527c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Viveport::IAPurchase::setStaticF_isReadyIl2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::IAPurchaseCallback*, "isReadyIl2cppCallback", ::Viveport::IAPurchase*>(std::forward<::Viveport::Internal::IAPurchaseCallback*>(value));
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::IAPurchase::getStaticF_isReadyIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::IAPurchaseCallback*, "isReadyIl2cppCallback", ::Viveport::IAPurchase*>();
}
inline void Viveport::IAPurchase::setStaticF_request01Il2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::IAPurchaseCallback*, "request01Il2cppCallback", ::Viveport::IAPurchase*>(std::forward<::Viveport::Internal::IAPurchaseCallback*>(value));
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::IAPurchase::getStaticF_request01Il2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::IAPurchaseCallback*, "request01Il2cppCallback", ::Viveport::IAPurchase*>();
}
inline void Viveport::IAPurchase::setStaticF_request02Il2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::IAPurchaseCallback*, "request02Il2cppCallback", ::Viveport::IAPurchase*>(std::forward<::Viveport::Internal::IAPurchaseCallback*>(value));
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::IAPurchase::getStaticF_request02Il2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::IAPurchaseCallback*, "request02Il2cppCallback", ::Viveport::IAPurchase*>();
}
inline void Viveport::IAPurchase::setStaticF_purchaseIl2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::IAPurchaseCallback*, "purchaseIl2cppCallback", ::Viveport::IAPurchase*>(std::forward<::Viveport::Internal::IAPurchaseCallback*>(value));
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::IAPurchase::getStaticF_purchaseIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::IAPurchaseCallback*, "purchaseIl2cppCallback", ::Viveport::IAPurchase*>();
}
inline void Viveport::IAPurchase::setStaticF_query01Il2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::IAPurchaseCallback*, "query01Il2cppCallback", ::Viveport::IAPurchase*>(std::forward<::Viveport::Internal::IAPurchaseCallback*>(value));
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::IAPurchase::getStaticF_query01Il2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::IAPurchaseCallback*, "query01Il2cppCallback", ::Viveport::IAPurchase*>();
}
inline void Viveport::IAPurchase::setStaticF_query02Il2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::IAPurchaseCallback*, "query02Il2cppCallback", ::Viveport::IAPurchase*>(std::forward<::Viveport::Internal::IAPurchaseCallback*>(value));
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::IAPurchase::getStaticF_query02Il2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::IAPurchaseCallback*, "query02Il2cppCallback", ::Viveport::IAPurchase*>();
}
inline void Viveport::IAPurchase::setStaticF_getBalanceIl2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::IAPurchaseCallback*, "getBalanceIl2cppCallback", ::Viveport::IAPurchase*>(std::forward<::Viveport::Internal::IAPurchaseCallback*>(value));
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::IAPurchase::getStaticF_getBalanceIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::IAPurchaseCallback*, "getBalanceIl2cppCallback", ::Viveport::IAPurchase*>();
}
inline void Viveport::IAPurchase::setStaticF_requestSubscriptionIl2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::IAPurchaseCallback*, "requestSubscriptionIl2cppCallback", ::Viveport::IAPurchase*>(std::forward<::Viveport::Internal::IAPurchaseCallback*>(value));
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::IAPurchase::getStaticF_requestSubscriptionIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::IAPurchaseCallback*, "requestSubscriptionIl2cppCallback", ::Viveport::IAPurchase*>();
}
inline void Viveport::IAPurchase::setStaticF_requestSubscriptionWithPlanIDIl2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::IAPurchaseCallback*, "requestSubscriptionWithPlanIDIl2cppCallback", ::Viveport::IAPurchase*>(std::forward<::Viveport::Internal::IAPurchaseCallback*>(value));
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::IAPurchase::getStaticF_requestSubscriptionWithPlanIDIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::IAPurchaseCallback*, "requestSubscriptionWithPlanIDIl2cppCallback", ::Viveport::IAPurchase*>();
}
inline void Viveport::IAPurchase::setStaticF_subscribeIl2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::IAPurchaseCallback*, "subscribeIl2cppCallback", ::Viveport::IAPurchase*>(std::forward<::Viveport::Internal::IAPurchaseCallback*>(value));
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::IAPurchase::getStaticF_subscribeIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::IAPurchaseCallback*, "subscribeIl2cppCallback", ::Viveport::IAPurchase*>();
}
inline void Viveport::IAPurchase::setStaticF_querySubscriptionIl2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::IAPurchaseCallback*, "querySubscriptionIl2cppCallback", ::Viveport::IAPurchase*>(std::forward<::Viveport::Internal::IAPurchaseCallback*>(value));
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::IAPurchase::getStaticF_querySubscriptionIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::IAPurchaseCallback*, "querySubscriptionIl2cppCallback", ::Viveport::IAPurchase*>();
}
inline void Viveport::IAPurchase::setStaticF_querySubscriptionListIl2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::IAPurchaseCallback*, "querySubscriptionListIl2cppCallback", ::Viveport::IAPurchase*>(std::forward<::Viveport::Internal::IAPurchaseCallback*>(value));
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::IAPurchase::getStaticF_querySubscriptionListIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::IAPurchaseCallback*, "querySubscriptionListIl2cppCallback", ::Viveport::IAPurchase*>();
}
inline void Viveport::IAPurchase::setStaticF_cancelSubscriptionIl2cppCallback(::Viveport::Internal::IAPurchaseCallback*  value)  {
::cordl_internals::setStaticField<::Viveport::Internal::IAPurchaseCallback*, "cancelSubscriptionIl2cppCallback", ::Viveport::IAPurchase*>(std::forward<::Viveport::Internal::IAPurchaseCallback*>(value));
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::IAPurchase::getStaticF_cancelSubscriptionIl2cppCallback()  {
return ::cordl_internals::getStaticField<::Viveport::Internal::IAPurchaseCallback*, "cancelSubscriptionIl2cppCallback", ::Viveport::IAPurchase*>();
}
inline void Viveport::IAPurchase::IsReadyIl2cppCallback(int32_t  errorCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"IsReadyIl2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode, message);
}
inline void Viveport::IAPurchase::IsReady(::Viveport::IAPurchase_IAPurchaseListener*  listener, ::StringW  pchAppKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"IsReady", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listener, pchAppKey);
}
inline void Viveport::IAPurchase::Request01Il2cppCallback(int32_t  errorCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"Request01Il2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode, message);
}
inline void Viveport::IAPurchase::Request(::Viveport::IAPurchase_IAPurchaseListener*  listener, ::StringW  pchPrice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"Request", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listener, pchPrice);
}
inline void Viveport::IAPurchase::Request02Il2cppCallback(int32_t  errorCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"Request02Il2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode, message);
}
inline void Viveport::IAPurchase::Request(::Viveport::IAPurchase_IAPurchaseListener*  listener, ::StringW  pchPrice, ::StringW  pchUserData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"Request", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listener, pchPrice, pchUserData);
}
inline void Viveport::IAPurchase::PurchaseIl2cppCallback(int32_t  errorCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"PurchaseIl2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode, message);
}
inline void Viveport::IAPurchase::Purchase(::Viveport::IAPurchase_IAPurchaseListener*  listener, ::StringW  pchPurchaseId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"Purchase", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listener, pchPurchaseId);
}
inline void Viveport::IAPurchase::Query01Il2cppCallback(int32_t  errorCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"Query01Il2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode, message);
}
inline void Viveport::IAPurchase::Query(::Viveport::IAPurchase_IAPurchaseListener*  listener, ::StringW  pchPurchaseId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"Query", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listener, pchPurchaseId);
}
inline void Viveport::IAPurchase::Query02Il2cppCallback(int32_t  errorCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"Query02Il2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode, message);
}
inline void Viveport::IAPurchase::Query(::Viveport::IAPurchase_IAPurchaseListener*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"Query", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listener);
}
inline void Viveport::IAPurchase::GetBalanceIl2cppCallback(int32_t  errorCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"GetBalanceIl2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode, message);
}
inline void Viveport::IAPurchase::GetBalance(::Viveport::IAPurchase_IAPurchaseListener*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"GetBalance", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listener);
}
inline void Viveport::IAPurchase::RequestSubscriptionIl2cppCallback(int32_t  errorCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"RequestSubscriptionIl2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode, message);
}
inline void Viveport::IAPurchase::RequestSubscription(::Viveport::IAPurchase_IAPurchaseListener*  listener, ::StringW  pchPrice, ::StringW  pchFreeTrialType, int32_t  nFreeTrialValue, ::StringW  pchChargePeriodType, int32_t  nChargePeriodValue, int32_t  nNumberOfChargePeriod, ::StringW  pchPlanId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"RequestSubscription", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listener, pchPrice, pchFreeTrialType, nFreeTrialValue, pchChargePeriodType, nChargePeriodValue, nNumberOfChargePeriod, pchPlanId);
}
inline void Viveport::IAPurchase::RequestSubscriptionWithPlanIDIl2cppCallback(int32_t  errorCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"RequestSubscriptionWithPlanIDIl2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode, message);
}
inline void Viveport::IAPurchase::RequestSubscriptionWithPlanID(::Viveport::IAPurchase_IAPurchaseListener*  listener, ::StringW  pchPlanId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"RequestSubscriptionWithPlanID", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listener, pchPlanId);
}
inline void Viveport::IAPurchase::SubscribeIl2cppCallback(int32_t  errorCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"SubscribeIl2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode, message);
}
inline void Viveport::IAPurchase::Subscribe(::Viveport::IAPurchase_IAPurchaseListener*  listener, ::StringW  pchSubscriptionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"Subscribe", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listener, pchSubscriptionId);
}
inline void Viveport::IAPurchase::QuerySubscriptionIl2cppCallback(int32_t  errorCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"QuerySubscriptionIl2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode, message);
}
inline void Viveport::IAPurchase::QuerySubscription(::Viveport::IAPurchase_IAPurchaseListener*  listener, ::StringW  pchSubscriptionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"QuerySubscription", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listener, pchSubscriptionId);
}
inline void Viveport::IAPurchase::QuerySubscriptionListIl2cppCallback(int32_t  errorCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"QuerySubscriptionListIl2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode, message);
}
inline void Viveport::IAPurchase::QuerySubscriptionList(::Viveport::IAPurchase_IAPurchaseListener*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"QuerySubscriptionList", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listener);
}
inline void Viveport::IAPurchase::CancelSubscriptionIl2cppCallback(int32_t  errorCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"CancelSubscriptionIl2cppCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode, message);
}
inline void Viveport::IAPurchase::CancelSubscription(::Viveport::IAPurchase_IAPurchaseListener*  listener, ::StringW  pchSubscriptionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {"CancelSubscription", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listener, pchSubscriptionId);
}
inline void Viveport::IAPurchase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::IAPurchase* Viveport::IAPurchase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::IAPurchase*>());
}
// Ctor Parameters []
constexpr ::Viveport::IAPurchase::IAPurchase()   {
}
//  Writing Method size for method: ::Viveport::IAPurchase_QuerySubscritionResponse.get_statusCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Viveport::IAPurchase_QuerySubscritionResponse::*)()>(&::Viveport::IAPurchase_QuerySubscritionResponse::get_statusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b575cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QuerySubscritionResponse*>(),
                        {"get_statusCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QuerySubscritionResponse.set_statusCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_QuerySubscritionResponse::*)(int32_t)>(&::Viveport::IAPurchase_QuerySubscritionResponse::set_statusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b575d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QuerySubscritionResponse*>(),
                        {"set_statusCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QuerySubscritionResponse.get_message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Viveport::IAPurchase_QuerySubscritionResponse::*)()>(&::Viveport::IAPurchase_QuerySubscritionResponse::get_message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b575dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QuerySubscritionResponse*>(),
                        {"get_message", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QuerySubscritionResponse.set_message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_QuerySubscritionResponse::*)(::StringW)>(&::Viveport::IAPurchase_QuerySubscritionResponse::set_message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b575e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QuerySubscritionResponse*>(),
                        {"set_message", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QuerySubscritionResponse.get_subscriptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Viveport::IAPurchase_Subscription*>* (::Viveport::IAPurchase_QuerySubscritionResponse::*)()>(&::Viveport::IAPurchase_QuerySubscritionResponse::get_subscriptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b575ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QuerySubscritionResponse*>(),
                        {"get_subscriptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QuerySubscritionResponse.set_subscriptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_QuerySubscritionResponse::*)(::System::Collections::Generic::List_1<::Viveport::IAPurchase_Subscription*>*)>(&::Viveport::IAPurchase_QuerySubscritionResponse::set_subscriptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b575f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QuerySubscritionResponse*>(),
                        {"set_subscriptions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Viveport::IAPurchase_Subscription*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QuerySubscritionResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_QuerySubscritionResponse::*)()>(&::Viveport::IAPurchase_QuerySubscritionResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b575fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QuerySubscritionResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Viveport::IAPurchase_QuerySubscritionResponse::__cordl_internal_get__statusCode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statusCode_k__BackingField;
}
constexpr int32_t const& Viveport::IAPurchase_QuerySubscritionResponse::__cordl_internal_get__statusCode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statusCode_k__BackingField;
}
constexpr void Viveport::IAPurchase_QuerySubscritionResponse::__cordl_internal_set__statusCode_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____statusCode_k__BackingField = value;
}
constexpr ::StringW& Viveport::IAPurchase_QuerySubscritionResponse::__cordl_internal_get__message_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____message_k__BackingField;
}
constexpr ::StringW const& Viveport::IAPurchase_QuerySubscritionResponse::__cordl_internal_get__message_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____message_k__BackingField;
}
constexpr void Viveport::IAPurchase_QuerySubscritionResponse::__cordl_internal_set__message_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____message_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::Viveport::IAPurchase_Subscription*>*& Viveport::IAPurchase_QuerySubscritionResponse::__cordl_internal_get__subscriptions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscriptions_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::Viveport::IAPurchase_Subscription*>* const& Viveport::IAPurchase_QuerySubscritionResponse::__cordl_internal_get__subscriptions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscriptions_k__BackingField;
}
constexpr void Viveport::IAPurchase_QuerySubscritionResponse::__cordl_internal_set__subscriptions_k__BackingField(::System::Collections::Generic::List_1<::Viveport::IAPurchase_Subscription*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____subscriptions_k__BackingField = value;
}
inline int32_t Viveport::IAPurchase_QuerySubscritionResponse::get_statusCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QuerySubscritionResponse*>(),
                        {"get_statusCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Viveport::IAPurchase_QuerySubscritionResponse::set_statusCode(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QuerySubscritionResponse*>(),
                        {"set_statusCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Viveport::IAPurchase_QuerySubscritionResponse::get_message()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QuerySubscritionResponse*>(),
                        {"get_message", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Viveport::IAPurchase_QuerySubscritionResponse::set_message(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QuerySubscritionResponse*>(),
                        {"set_message", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::Viveport::IAPurchase_Subscription*>* Viveport::IAPurchase_QuerySubscritionResponse::get_subscriptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QuerySubscritionResponse*>(),
                        {"get_subscriptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Viveport::IAPurchase_Subscription*>*>(this, ___internal_method);
}
inline void Viveport::IAPurchase_QuerySubscritionResponse::set_subscriptions(::System::Collections::Generic::List_1<::Viveport::IAPurchase_Subscription*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QuerySubscritionResponse*>(),
                        {"set_subscriptions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Viveport::IAPurchase_Subscription*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Viveport::IAPurchase_QuerySubscritionResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QuerySubscritionResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::IAPurchase_QuerySubscritionResponse* Viveport::IAPurchase_QuerySubscritionResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::IAPurchase_QuerySubscritionResponse*>());
}
// Ctor Parameters []
constexpr ::Viveport::IAPurchase_QuerySubscritionResponse::IAPurchase_QuerySubscritionResponse()   {
}
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.get_app_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Viveport::IAPurchase_Subscription::*)()>(&::Viveport::IAPurchase_Subscription::get_app_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b574f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_app_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.set_app_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_Subscription::*)(::StringW)>(&::Viveport::IAPurchase_Subscription::set_app_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b574fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_app_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.get_order_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Viveport::IAPurchase_Subscription::*)()>(&::Viveport::IAPurchase_Subscription::get_order_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_order_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.set_order_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_Subscription::*)(::StringW)>(&::Viveport::IAPurchase_Subscription::set_order_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5750c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_order_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.get_subscription_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Viveport::IAPurchase_Subscription::*)()>(&::Viveport::IAPurchase_Subscription::get_subscription_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_subscription_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.set_subscription_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_Subscription::*)(::StringW)>(&::Viveport::IAPurchase_Subscription::set_subscription_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5751c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_subscription_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.get_price
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Viveport::IAPurchase_Subscription::*)()>(&::Viveport::IAPurchase_Subscription::get_price)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_price", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.set_price
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_Subscription::*)(::StringW)>(&::Viveport::IAPurchase_Subscription::set_price)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5752c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_price", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.get_currency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Viveport::IAPurchase_Subscription::*)()>(&::Viveport::IAPurchase_Subscription::get_currency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_currency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.set_currency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_Subscription::*)(::StringW)>(&::Viveport::IAPurchase_Subscription::set_currency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5753c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_currency", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.get_subscribed_timestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Viveport::IAPurchase_Subscription::*)()>(&::Viveport::IAPurchase_Subscription::get_subscribed_timestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_subscribed_timestamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.set_subscribed_timestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_Subscription::*)(int64_t)>(&::Viveport::IAPurchase_Subscription::set_subscribed_timestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5754c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_subscribed_timestamp", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.get_free_trial_period
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Viveport::IAPurchase_TimePeriod* (::Viveport::IAPurchase_Subscription::*)()>(&::Viveport::IAPurchase_Subscription::get_free_trial_period)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_free_trial_period", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.set_free_trial_period
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_Subscription::*)(::Viveport::IAPurchase_TimePeriod*)>(&::Viveport::IAPurchase_Subscription::set_free_trial_period)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5755c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_free_trial_period", {}, {::i2c::type_of<::Viveport::IAPurchase_TimePeriod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.get_charge_period
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Viveport::IAPurchase_TimePeriod* (::Viveport::IAPurchase_Subscription::*)()>(&::Viveport::IAPurchase_Subscription::get_charge_period)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_charge_period", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.set_charge_period
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_Subscription::*)(::Viveport::IAPurchase_TimePeriod*)>(&::Viveport::IAPurchase_Subscription::set_charge_period)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5756c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_charge_period", {}, {::i2c::type_of<::Viveport::IAPurchase_TimePeriod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.get_number_of_charge_period
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Viveport::IAPurchase_Subscription::*)()>(&::Viveport::IAPurchase_Subscription::get_number_of_charge_period)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_number_of_charge_period", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.set_number_of_charge_period
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_Subscription::*)(int32_t)>(&::Viveport::IAPurchase_Subscription::set_number_of_charge_period)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5757c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_number_of_charge_period", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.get_plan_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Viveport::IAPurchase_Subscription::*)()>(&::Viveport::IAPurchase_Subscription::get_plan_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_plan_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.set_plan_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_Subscription::*)(::StringW)>(&::Viveport::IAPurchase_Subscription::set_plan_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5758c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_plan_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.get_plan_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Viveport::IAPurchase_Subscription::*)()>(&::Viveport::IAPurchase_Subscription::get_plan_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_plan_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.set_plan_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_Subscription::*)(::StringW)>(&::Viveport::IAPurchase_Subscription::set_plan_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5759c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_plan_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.get_status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Viveport::IAPurchase_Subscription::*)()>(&::Viveport::IAPurchase_Subscription::get_status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b575a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.set_status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_Subscription::*)(::StringW)>(&::Viveport::IAPurchase_Subscription::set_status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b575ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_status", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.get_status_detail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Viveport::IAPurchase_StatusDetail* (::Viveport::IAPurchase_Subscription::*)()>(&::Viveport::IAPurchase_Subscription::get_status_detail)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b575b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_status_detail", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription.set_status_detail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_Subscription::*)(::Viveport::IAPurchase_StatusDetail*)>(&::Viveport::IAPurchase_Subscription::set_status_detail)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b575bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_status_detail", {}, {::i2c::type_of<::Viveport::IAPurchase_StatusDetail*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_Subscription._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_Subscription::*)()>(&::Viveport::IAPurchase_Subscription::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b575c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Viveport::IAPurchase_Subscription::__cordl_internal_get__app_id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____app_id_k__BackingField;
}
constexpr ::StringW const& Viveport::IAPurchase_Subscription::__cordl_internal_get__app_id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____app_id_k__BackingField;
}
constexpr void Viveport::IAPurchase_Subscription::__cordl_internal_set__app_id_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____app_id_k__BackingField = value;
}
constexpr ::StringW& Viveport::IAPurchase_Subscription::__cordl_internal_get__order_id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____order_id_k__BackingField;
}
constexpr ::StringW const& Viveport::IAPurchase_Subscription::__cordl_internal_get__order_id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____order_id_k__BackingField;
}
constexpr void Viveport::IAPurchase_Subscription::__cordl_internal_set__order_id_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____order_id_k__BackingField = value;
}
constexpr ::StringW& Viveport::IAPurchase_Subscription::__cordl_internal_get__subscription_id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscription_id_k__BackingField;
}
constexpr ::StringW const& Viveport::IAPurchase_Subscription::__cordl_internal_get__subscription_id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscription_id_k__BackingField;
}
constexpr void Viveport::IAPurchase_Subscription::__cordl_internal_set__subscription_id_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____subscription_id_k__BackingField = value;
}
constexpr ::StringW& Viveport::IAPurchase_Subscription::__cordl_internal_get__price_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____price_k__BackingField;
}
constexpr ::StringW const& Viveport::IAPurchase_Subscription::__cordl_internal_get__price_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____price_k__BackingField;
}
constexpr void Viveport::IAPurchase_Subscription::__cordl_internal_set__price_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____price_k__BackingField = value;
}
constexpr ::StringW& Viveport::IAPurchase_Subscription::__cordl_internal_get__currency_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currency_k__BackingField;
}
constexpr ::StringW const& Viveport::IAPurchase_Subscription::__cordl_internal_get__currency_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currency_k__BackingField;
}
constexpr void Viveport::IAPurchase_Subscription::__cordl_internal_set__currency_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currency_k__BackingField = value;
}
constexpr int64_t& Viveport::IAPurchase_Subscription::__cordl_internal_get__subscribed_timestamp_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscribed_timestamp_k__BackingField;
}
constexpr int64_t const& Viveport::IAPurchase_Subscription::__cordl_internal_get__subscribed_timestamp_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscribed_timestamp_k__BackingField;
}
constexpr void Viveport::IAPurchase_Subscription::__cordl_internal_set__subscribed_timestamp_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____subscribed_timestamp_k__BackingField = value;
}
constexpr ::Viveport::IAPurchase_TimePeriod*& Viveport::IAPurchase_Subscription::__cordl_internal_get__free_trial_period_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____free_trial_period_k__BackingField;
}
constexpr ::Viveport::IAPurchase_TimePeriod* const& Viveport::IAPurchase_Subscription::__cordl_internal_get__free_trial_period_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____free_trial_period_k__BackingField;
}
constexpr void Viveport::IAPurchase_Subscription::__cordl_internal_set__free_trial_period_k__BackingField(::Viveport::IAPurchase_TimePeriod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____free_trial_period_k__BackingField = value;
}
constexpr ::Viveport::IAPurchase_TimePeriod*& Viveport::IAPurchase_Subscription::__cordl_internal_get__charge_period_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charge_period_k__BackingField;
}
constexpr ::Viveport::IAPurchase_TimePeriod* const& Viveport::IAPurchase_Subscription::__cordl_internal_get__charge_period_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charge_period_k__BackingField;
}
constexpr void Viveport::IAPurchase_Subscription::__cordl_internal_set__charge_period_k__BackingField(::Viveport::IAPurchase_TimePeriod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____charge_period_k__BackingField = value;
}
constexpr int32_t& Viveport::IAPurchase_Subscription::__cordl_internal_get__number_of_charge_period_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____number_of_charge_period_k__BackingField;
}
constexpr int32_t const& Viveport::IAPurchase_Subscription::__cordl_internal_get__number_of_charge_period_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____number_of_charge_period_k__BackingField;
}
constexpr void Viveport::IAPurchase_Subscription::__cordl_internal_set__number_of_charge_period_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____number_of_charge_period_k__BackingField = value;
}
constexpr ::StringW& Viveport::IAPurchase_Subscription::__cordl_internal_get__plan_id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____plan_id_k__BackingField;
}
constexpr ::StringW const& Viveport::IAPurchase_Subscription::__cordl_internal_get__plan_id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____plan_id_k__BackingField;
}
constexpr void Viveport::IAPurchase_Subscription::__cordl_internal_set__plan_id_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____plan_id_k__BackingField = value;
}
constexpr ::StringW& Viveport::IAPurchase_Subscription::__cordl_internal_get__plan_name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____plan_name_k__BackingField;
}
constexpr ::StringW const& Viveport::IAPurchase_Subscription::__cordl_internal_get__plan_name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____plan_name_k__BackingField;
}
constexpr void Viveport::IAPurchase_Subscription::__cordl_internal_set__plan_name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____plan_name_k__BackingField = value;
}
constexpr ::StringW& Viveport::IAPurchase_Subscription::__cordl_internal_get__status_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____status_k__BackingField;
}
constexpr ::StringW const& Viveport::IAPurchase_Subscription::__cordl_internal_get__status_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____status_k__BackingField;
}
constexpr void Viveport::IAPurchase_Subscription::__cordl_internal_set__status_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____status_k__BackingField = value;
}
constexpr ::Viveport::IAPurchase_StatusDetail*& Viveport::IAPurchase_Subscription::__cordl_internal_get__status_detail_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____status_detail_k__BackingField;
}
constexpr ::Viveport::IAPurchase_StatusDetail* const& Viveport::IAPurchase_Subscription::__cordl_internal_get__status_detail_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____status_detail_k__BackingField;
}
constexpr void Viveport::IAPurchase_Subscription::__cordl_internal_set__status_detail_k__BackingField(::Viveport::IAPurchase_StatusDetail*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____status_detail_k__BackingField = value;
}
inline ::StringW Viveport::IAPurchase_Subscription::get_app_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_app_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Viveport::IAPurchase_Subscription::set_app_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_app_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Viveport::IAPurchase_Subscription::get_order_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_order_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Viveport::IAPurchase_Subscription::set_order_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_order_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Viveport::IAPurchase_Subscription::get_subscription_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_subscription_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Viveport::IAPurchase_Subscription::set_subscription_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_subscription_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Viveport::IAPurchase_Subscription::get_price()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_price", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Viveport::IAPurchase_Subscription::set_price(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_price", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Viveport::IAPurchase_Subscription::get_currency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_currency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Viveport::IAPurchase_Subscription::set_currency(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_currency", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Viveport::IAPurchase_Subscription::get_subscribed_timestamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_subscribed_timestamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Viveport::IAPurchase_Subscription::set_subscribed_timestamp(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_subscribed_timestamp", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Viveport::IAPurchase_TimePeriod* Viveport::IAPurchase_Subscription::get_free_trial_period()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_free_trial_period", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Viveport::IAPurchase_TimePeriod*>(this, ___internal_method);
}
inline void Viveport::IAPurchase_Subscription::set_free_trial_period(::Viveport::IAPurchase_TimePeriod*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_free_trial_period", {}, {::i2c::type_of<::Viveport::IAPurchase_TimePeriod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Viveport::IAPurchase_TimePeriod* Viveport::IAPurchase_Subscription::get_charge_period()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_charge_period", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Viveport::IAPurchase_TimePeriod*>(this, ___internal_method);
}
inline void Viveport::IAPurchase_Subscription::set_charge_period(::Viveport::IAPurchase_TimePeriod*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_charge_period", {}, {::i2c::type_of<::Viveport::IAPurchase_TimePeriod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Viveport::IAPurchase_Subscription::get_number_of_charge_period()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_number_of_charge_period", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Viveport::IAPurchase_Subscription::set_number_of_charge_period(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_number_of_charge_period", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Viveport::IAPurchase_Subscription::get_plan_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_plan_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Viveport::IAPurchase_Subscription::set_plan_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_plan_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Viveport::IAPurchase_Subscription::get_plan_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_plan_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Viveport::IAPurchase_Subscription::set_plan_name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_plan_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Viveport::IAPurchase_Subscription::get_status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Viveport::IAPurchase_Subscription::set_status(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_status", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Viveport::IAPurchase_StatusDetail* Viveport::IAPurchase_Subscription::get_status_detail()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"get_status_detail", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Viveport::IAPurchase_StatusDetail*>(this, ___internal_method);
}
inline void Viveport::IAPurchase_Subscription::set_status_detail(::Viveport::IAPurchase_StatusDetail*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {"set_status_detail", {}, {::i2c::type_of<::Viveport::IAPurchase_StatusDetail*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Viveport::IAPurchase_Subscription::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_Subscription*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::IAPurchase_Subscription* Viveport::IAPurchase_Subscription::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::IAPurchase_Subscription*>());
}
// Ctor Parameters []
constexpr ::Viveport::IAPurchase_Subscription::IAPurchase_Subscription()   {
}
//  Writing Method size for method: ::Viveport::IAPurchase_TimePeriod.get_time_type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Viveport::IAPurchase_TimePeriod::*)()>(&::Viveport::IAPurchase_TimePeriod::get_time_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b574cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_TimePeriod*>(),
                        {"get_time_type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_TimePeriod.set_time_type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_TimePeriod::*)(::StringW)>(&::Viveport::IAPurchase_TimePeriod::set_time_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b574d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_TimePeriod*>(),
                        {"set_time_type", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_TimePeriod.get_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Viveport::IAPurchase_TimePeriod::*)()>(&::Viveport::IAPurchase_TimePeriod::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b574dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_TimePeriod*>(),
                        {"get_value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_TimePeriod.set_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_TimePeriod::*)(int32_t)>(&::Viveport::IAPurchase_TimePeriod::set_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b574e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_TimePeriod*>(),
                        {"set_value", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_TimePeriod._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_TimePeriod::*)()>(&::Viveport::IAPurchase_TimePeriod::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b574ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_TimePeriod*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Viveport::IAPurchase_TimePeriod::__cordl_internal_get__time_type_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____time_type_k__BackingField;
}
constexpr ::StringW const& Viveport::IAPurchase_TimePeriod::__cordl_internal_get__time_type_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____time_type_k__BackingField;
}
constexpr void Viveport::IAPurchase_TimePeriod::__cordl_internal_set__time_type_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____time_type_k__BackingField = value;
}
constexpr int32_t& Viveport::IAPurchase_TimePeriod::__cordl_internal_get__value_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value_k__BackingField;
}
constexpr int32_t const& Viveport::IAPurchase_TimePeriod::__cordl_internal_get__value_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value_k__BackingField;
}
constexpr void Viveport::IAPurchase_TimePeriod::__cordl_internal_set__value_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____value_k__BackingField = value;
}
inline ::StringW Viveport::IAPurchase_TimePeriod::get_time_type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_TimePeriod*>(),
                        {"get_time_type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Viveport::IAPurchase_TimePeriod::set_time_type(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_TimePeriod*>(),
                        {"set_time_type", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Viveport::IAPurchase_TimePeriod::get_value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_TimePeriod*>(),
                        {"get_value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Viveport::IAPurchase_TimePeriod::set_value(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_TimePeriod*>(),
                        {"set_value", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Viveport::IAPurchase_TimePeriod::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_TimePeriod*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::IAPurchase_TimePeriod* Viveport::IAPurchase_TimePeriod::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::IAPurchase_TimePeriod*>());
}
// Ctor Parameters []
constexpr ::Viveport::IAPurchase_TimePeriod::IAPurchase_TimePeriod()   {
}
//  Writing Method size for method: ::Viveport::IAPurchase_StatusDetail.get_date_next_charge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Viveport::IAPurchase_StatusDetail::*)()>(&::Viveport::IAPurchase_StatusDetail::get_date_next_charge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetail*>(),
                        {"get_date_next_charge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_StatusDetail.set_date_next_charge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_StatusDetail::*)(int64_t)>(&::Viveport::IAPurchase_StatusDetail::set_date_next_charge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5749c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetail*>(),
                        {"set_date_next_charge", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_StatusDetail.get_transactions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Viveport::IAPurchase_StatusDetailTransaction*> (::Viveport::IAPurchase_StatusDetail::*)()>(&::Viveport::IAPurchase_StatusDetail::get_transactions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b574a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetail*>(),
                        {"get_transactions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_StatusDetail.set_transactions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_StatusDetail::*)(::ArrayW<::Viveport::IAPurchase_StatusDetailTransaction*>)>(&::Viveport::IAPurchase_StatusDetail::set_transactions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b574ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetail*>(),
                        {"set_transactions", {}, {::i2c::type_of<::ArrayW<::Viveport::IAPurchase_StatusDetailTransaction*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_StatusDetail.get_cancel_reason
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Viveport::IAPurchase_StatusDetail::*)()>(&::Viveport::IAPurchase_StatusDetail::get_cancel_reason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b574b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetail*>(),
                        {"get_cancel_reason", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_StatusDetail.set_cancel_reason
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_StatusDetail::*)(::StringW)>(&::Viveport::IAPurchase_StatusDetail::set_cancel_reason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b574bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetail*>(),
                        {"set_cancel_reason", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_StatusDetail._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_StatusDetail::*)()>(&::Viveport::IAPurchase_StatusDetail::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b574c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetail*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& Viveport::IAPurchase_StatusDetail::__cordl_internal_get__date_next_charge_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____date_next_charge_k__BackingField;
}
constexpr int64_t const& Viveport::IAPurchase_StatusDetail::__cordl_internal_get__date_next_charge_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____date_next_charge_k__BackingField;
}
constexpr void Viveport::IAPurchase_StatusDetail::__cordl_internal_set__date_next_charge_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____date_next_charge_k__BackingField = value;
}
constexpr ::ArrayW<::Viveport::IAPurchase_StatusDetailTransaction*>& Viveport::IAPurchase_StatusDetail::__cordl_internal_get__transactions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transactions_k__BackingField;
}
constexpr ::ArrayW<::Viveport::IAPurchase_StatusDetailTransaction*> const& Viveport::IAPurchase_StatusDetail::__cordl_internal_get__transactions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transactions_k__BackingField;
}
constexpr void Viveport::IAPurchase_StatusDetail::__cordl_internal_set__transactions_k__BackingField(::ArrayW<::Viveport::IAPurchase_StatusDetailTransaction*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transactions_k__BackingField = value;
}
constexpr ::StringW& Viveport::IAPurchase_StatusDetail::__cordl_internal_get__cancel_reason_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancel_reason_k__BackingField;
}
constexpr ::StringW const& Viveport::IAPurchase_StatusDetail::__cordl_internal_get__cancel_reason_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancel_reason_k__BackingField;
}
constexpr void Viveport::IAPurchase_StatusDetail::__cordl_internal_set__cancel_reason_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cancel_reason_k__BackingField = value;
}
inline int64_t Viveport::IAPurchase_StatusDetail::get_date_next_charge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetail*>(),
                        {"get_date_next_charge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Viveport::IAPurchase_StatusDetail::set_date_next_charge(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetail*>(),
                        {"set_date_next_charge", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::Viveport::IAPurchase_StatusDetailTransaction*> Viveport::IAPurchase_StatusDetail::get_transactions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetail*>(),
                        {"get_transactions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Viveport::IAPurchase_StatusDetailTransaction*>>(this, ___internal_method);
}
inline void Viveport::IAPurchase_StatusDetail::set_transactions(::ArrayW<::Viveport::IAPurchase_StatusDetailTransaction*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetail*>(),
                        {"set_transactions", {}, {::i2c::type_of<::ArrayW<::Viveport::IAPurchase_StatusDetailTransaction*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Viveport::IAPurchase_StatusDetail::get_cancel_reason()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetail*>(),
                        {"get_cancel_reason", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Viveport::IAPurchase_StatusDetail::set_cancel_reason(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetail*>(),
                        {"set_cancel_reason", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Viveport::IAPurchase_StatusDetail::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetail*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::IAPurchase_StatusDetail* Viveport::IAPurchase_StatusDetail::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::IAPurchase_StatusDetail*>());
}
// Ctor Parameters []
constexpr ::Viveport::IAPurchase_StatusDetail::IAPurchase_StatusDetail()   {
}
//  Writing Method size for method: ::Viveport::IAPurchase_StatusDetailTransaction.get_create_time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Viveport::IAPurchase_StatusDetailTransaction::*)()>(&::Viveport::IAPurchase_StatusDetailTransaction::get_create_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5745c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetailTransaction*>(),
                        {"get_create_time", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_StatusDetailTransaction.set_create_time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_StatusDetailTransaction::*)(int64_t)>(&::Viveport::IAPurchase_StatusDetailTransaction::set_create_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetailTransaction*>(),
                        {"set_create_time", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_StatusDetailTransaction.get_payment_method
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Viveport::IAPurchase_StatusDetailTransaction::*)()>(&::Viveport::IAPurchase_StatusDetailTransaction::get_payment_method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5746c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetailTransaction*>(),
                        {"get_payment_method", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_StatusDetailTransaction.set_payment_method
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_StatusDetailTransaction::*)(::StringW)>(&::Viveport::IAPurchase_StatusDetailTransaction::set_payment_method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetailTransaction*>(),
                        {"set_payment_method", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_StatusDetailTransaction.get_status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Viveport::IAPurchase_StatusDetailTransaction::*)()>(&::Viveport::IAPurchase_StatusDetailTransaction::get_status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5747c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetailTransaction*>(),
                        {"get_status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_StatusDetailTransaction.set_status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_StatusDetailTransaction::*)(::StringW)>(&::Viveport::IAPurchase_StatusDetailTransaction::set_status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetailTransaction*>(),
                        {"set_status", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_StatusDetailTransaction._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_StatusDetailTransaction::*)()>(&::Viveport::IAPurchase_StatusDetailTransaction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5748c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetailTransaction*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& Viveport::IAPurchase_StatusDetailTransaction::__cordl_internal_get__create_time_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____create_time_k__BackingField;
}
constexpr int64_t const& Viveport::IAPurchase_StatusDetailTransaction::__cordl_internal_get__create_time_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____create_time_k__BackingField;
}
constexpr void Viveport::IAPurchase_StatusDetailTransaction::__cordl_internal_set__create_time_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____create_time_k__BackingField = value;
}
constexpr ::StringW& Viveport::IAPurchase_StatusDetailTransaction::__cordl_internal_get__payment_method_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____payment_method_k__BackingField;
}
constexpr ::StringW const& Viveport::IAPurchase_StatusDetailTransaction::__cordl_internal_get__payment_method_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____payment_method_k__BackingField;
}
constexpr void Viveport::IAPurchase_StatusDetailTransaction::__cordl_internal_set__payment_method_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____payment_method_k__BackingField = value;
}
constexpr ::StringW& Viveport::IAPurchase_StatusDetailTransaction::__cordl_internal_get__status_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____status_k__BackingField;
}
constexpr ::StringW const& Viveport::IAPurchase_StatusDetailTransaction::__cordl_internal_get__status_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____status_k__BackingField;
}
constexpr void Viveport::IAPurchase_StatusDetailTransaction::__cordl_internal_set__status_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____status_k__BackingField = value;
}
inline int64_t Viveport::IAPurchase_StatusDetailTransaction::get_create_time()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetailTransaction*>(),
                        {"get_create_time", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Viveport::IAPurchase_StatusDetailTransaction::set_create_time(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetailTransaction*>(),
                        {"set_create_time", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Viveport::IAPurchase_StatusDetailTransaction::get_payment_method()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetailTransaction*>(),
                        {"get_payment_method", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Viveport::IAPurchase_StatusDetailTransaction::set_payment_method(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetailTransaction*>(),
                        {"set_payment_method", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Viveport::IAPurchase_StatusDetailTransaction::get_status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetailTransaction*>(),
                        {"get_status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Viveport::IAPurchase_StatusDetailTransaction::set_status(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetailTransaction*>(),
                        {"set_status", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Viveport::IAPurchase_StatusDetailTransaction::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_StatusDetailTransaction*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::IAPurchase_StatusDetailTransaction* Viveport::IAPurchase_StatusDetailTransaction::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::IAPurchase_StatusDetailTransaction*>());
}
// Ctor Parameters []
constexpr ::Viveport::IAPurchase_StatusDetailTransaction::IAPurchase_StatusDetailTransaction()   {
}
//  Writing Method size for method: ::Viveport::IAPurchase_QueryListResponse.get_total
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Viveport::IAPurchase_QueryListResponse::*)()>(&::Viveport::IAPurchase_QueryListResponse::get_total)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5742c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryListResponse*>(),
                        {"get_total", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryListResponse.set_total
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_QueryListResponse::*)(int32_t)>(&::Viveport::IAPurchase_QueryListResponse::set_total)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryListResponse*>(),
                        {"set_total", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryListResponse.get_from
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Viveport::IAPurchase_QueryListResponse::*)()>(&::Viveport::IAPurchase_QueryListResponse::get_from)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5743c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryListResponse*>(),
                        {"get_from", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryListResponse.set_from
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_QueryListResponse::*)(int32_t)>(&::Viveport::IAPurchase_QueryListResponse::set_from)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryListResponse*>(),
                        {"set_from", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryListResponse.get_to
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Viveport::IAPurchase_QueryListResponse::*)()>(&::Viveport::IAPurchase_QueryListResponse::get_to)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5744c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryListResponse*>(),
                        {"get_to", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryListResponse.set_to
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_QueryListResponse::*)(int32_t)>(&::Viveport::IAPurchase_QueryListResponse::set_to)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryListResponse*>(),
                        {"set_to", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryListResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_QueryListResponse::*)()>(&::Viveport::IAPurchase_QueryListResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5514c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryListResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Viveport::IAPurchase_QueryListResponse::__cordl_internal_get__total_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____total_k__BackingField;
}
constexpr int32_t const& Viveport::IAPurchase_QueryListResponse::__cordl_internal_get__total_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____total_k__BackingField;
}
constexpr void Viveport::IAPurchase_QueryListResponse::__cordl_internal_set__total_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____total_k__BackingField = value;
}
constexpr int32_t& Viveport::IAPurchase_QueryListResponse::__cordl_internal_get__from_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____from_k__BackingField;
}
constexpr int32_t const& Viveport::IAPurchase_QueryListResponse::__cordl_internal_get__from_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____from_k__BackingField;
}
constexpr void Viveport::IAPurchase_QueryListResponse::__cordl_internal_set__from_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____from_k__BackingField = value;
}
constexpr int32_t& Viveport::IAPurchase_QueryListResponse::__cordl_internal_get__to_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____to_k__BackingField;
}
constexpr int32_t const& Viveport::IAPurchase_QueryListResponse::__cordl_internal_get__to_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____to_k__BackingField;
}
constexpr void Viveport::IAPurchase_QueryListResponse::__cordl_internal_set__to_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____to_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::Viveport::IAPurchase_QueryResponse2*>*& Viveport::IAPurchase_QueryListResponse::__cordl_internal_get_purchaseList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseList;
}
constexpr ::System::Collections::Generic::List_1<::Viveport::IAPurchase_QueryResponse2*>* const& Viveport::IAPurchase_QueryListResponse::__cordl_internal_get_purchaseList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseList;
}
constexpr void Viveport::IAPurchase_QueryListResponse::__cordl_internal_set_purchaseList(::System::Collections::Generic::List_1<::Viveport::IAPurchase_QueryResponse2*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseList = value;
}
inline int32_t Viveport::IAPurchase_QueryListResponse::get_total()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryListResponse*>(),
                        {"get_total", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Viveport::IAPurchase_QueryListResponse::set_total(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryListResponse*>(),
                        {"set_total", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Viveport::IAPurchase_QueryListResponse::get_from()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryListResponse*>(),
                        {"get_from", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Viveport::IAPurchase_QueryListResponse::set_from(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryListResponse*>(),
                        {"set_from", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Viveport::IAPurchase_QueryListResponse::get_to()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryListResponse*>(),
                        {"get_to", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Viveport::IAPurchase_QueryListResponse::set_to(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryListResponse*>(),
                        {"set_to", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Viveport::IAPurchase_QueryListResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryListResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::IAPurchase_QueryListResponse* Viveport::IAPurchase_QueryListResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::IAPurchase_QueryListResponse*>());
}
// Ctor Parameters []
constexpr ::Viveport::IAPurchase_QueryListResponse::IAPurchase_QueryListResponse()   {
}
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse2.get_order_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Viveport::IAPurchase_QueryResponse2::*)()>(&::Viveport::IAPurchase_QueryResponse2::get_order_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b573bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"get_order_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse2.set_order_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_QueryResponse2::*)(::StringW)>(&::Viveport::IAPurchase_QueryResponse2::set_order_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b573c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"set_order_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse2.get_app_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Viveport::IAPurchase_QueryResponse2::*)()>(&::Viveport::IAPurchase_QueryResponse2::get_app_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b573cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"get_app_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse2.set_app_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_QueryResponse2::*)(::StringW)>(&::Viveport::IAPurchase_QueryResponse2::set_app_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b573d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"set_app_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse2.get_purchase_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Viveport::IAPurchase_QueryResponse2::*)()>(&::Viveport::IAPurchase_QueryResponse2::get_purchase_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b573dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"get_purchase_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse2.set_purchase_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_QueryResponse2::*)(::StringW)>(&::Viveport::IAPurchase_QueryResponse2::set_purchase_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b573e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"set_purchase_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse2.get_user_data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Viveport::IAPurchase_QueryResponse2::*)()>(&::Viveport::IAPurchase_QueryResponse2::get_user_data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b573ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"get_user_data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse2.set_user_data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_QueryResponse2::*)(::StringW)>(&::Viveport::IAPurchase_QueryResponse2::set_user_data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b573f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"set_user_data", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse2.get_price
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Viveport::IAPurchase_QueryResponse2::*)()>(&::Viveport::IAPurchase_QueryResponse2::get_price)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b573fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"get_price", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse2.set_price
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_QueryResponse2::*)(::StringW)>(&::Viveport::IAPurchase_QueryResponse2::set_price)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"set_price", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse2.get_currency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Viveport::IAPurchase_QueryResponse2::*)()>(&::Viveport::IAPurchase_QueryResponse2::get_currency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5740c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"get_currency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse2.set_currency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_QueryResponse2::*)(::StringW)>(&::Viveport::IAPurchase_QueryResponse2::set_currency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"set_currency", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse2.get_paid_timestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Viveport::IAPurchase_QueryResponse2::*)()>(&::Viveport::IAPurchase_QueryResponse2::get_paid_timestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5741c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"get_paid_timestamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse2.set_paid_timestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_QueryResponse2::*)(int64_t)>(&::Viveport::IAPurchase_QueryResponse2::set_paid_timestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"set_paid_timestamp", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_QueryResponse2::*)()>(&::Viveport::IAPurchase_QueryResponse2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b55124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Viveport::IAPurchase_QueryResponse2::__cordl_internal_get__order_id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____order_id_k__BackingField;
}
constexpr ::StringW const& Viveport::IAPurchase_QueryResponse2::__cordl_internal_get__order_id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____order_id_k__BackingField;
}
constexpr void Viveport::IAPurchase_QueryResponse2::__cordl_internal_set__order_id_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____order_id_k__BackingField = value;
}
constexpr ::StringW& Viveport::IAPurchase_QueryResponse2::__cordl_internal_get__app_id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____app_id_k__BackingField;
}
constexpr ::StringW const& Viveport::IAPurchase_QueryResponse2::__cordl_internal_get__app_id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____app_id_k__BackingField;
}
constexpr void Viveport::IAPurchase_QueryResponse2::__cordl_internal_set__app_id_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____app_id_k__BackingField = value;
}
constexpr ::StringW& Viveport::IAPurchase_QueryResponse2::__cordl_internal_get__purchase_id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____purchase_id_k__BackingField;
}
constexpr ::StringW const& Viveport::IAPurchase_QueryResponse2::__cordl_internal_get__purchase_id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____purchase_id_k__BackingField;
}
constexpr void Viveport::IAPurchase_QueryResponse2::__cordl_internal_set__purchase_id_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____purchase_id_k__BackingField = value;
}
constexpr ::StringW& Viveport::IAPurchase_QueryResponse2::__cordl_internal_get__user_data_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____user_data_k__BackingField;
}
constexpr ::StringW const& Viveport::IAPurchase_QueryResponse2::__cordl_internal_get__user_data_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____user_data_k__BackingField;
}
constexpr void Viveport::IAPurchase_QueryResponse2::__cordl_internal_set__user_data_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____user_data_k__BackingField = value;
}
constexpr ::StringW& Viveport::IAPurchase_QueryResponse2::__cordl_internal_get__price_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____price_k__BackingField;
}
constexpr ::StringW const& Viveport::IAPurchase_QueryResponse2::__cordl_internal_get__price_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____price_k__BackingField;
}
constexpr void Viveport::IAPurchase_QueryResponse2::__cordl_internal_set__price_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____price_k__BackingField = value;
}
constexpr ::StringW& Viveport::IAPurchase_QueryResponse2::__cordl_internal_get__currency_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currency_k__BackingField;
}
constexpr ::StringW const& Viveport::IAPurchase_QueryResponse2::__cordl_internal_get__currency_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currency_k__BackingField;
}
constexpr void Viveport::IAPurchase_QueryResponse2::__cordl_internal_set__currency_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currency_k__BackingField = value;
}
constexpr int64_t& Viveport::IAPurchase_QueryResponse2::__cordl_internal_get__paid_timestamp_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____paid_timestamp_k__BackingField;
}
constexpr int64_t const& Viveport::IAPurchase_QueryResponse2::__cordl_internal_get__paid_timestamp_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____paid_timestamp_k__BackingField;
}
constexpr void Viveport::IAPurchase_QueryResponse2::__cordl_internal_set__paid_timestamp_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____paid_timestamp_k__BackingField = value;
}
inline ::StringW Viveport::IAPurchase_QueryResponse2::get_order_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"get_order_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Viveport::IAPurchase_QueryResponse2::set_order_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"set_order_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Viveport::IAPurchase_QueryResponse2::get_app_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"get_app_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Viveport::IAPurchase_QueryResponse2::set_app_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"set_app_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Viveport::IAPurchase_QueryResponse2::get_purchase_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"get_purchase_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Viveport::IAPurchase_QueryResponse2::set_purchase_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"set_purchase_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Viveport::IAPurchase_QueryResponse2::get_user_data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"get_user_data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Viveport::IAPurchase_QueryResponse2::set_user_data(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"set_user_data", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Viveport::IAPurchase_QueryResponse2::get_price()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"get_price", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Viveport::IAPurchase_QueryResponse2::set_price(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"set_price", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Viveport::IAPurchase_QueryResponse2::get_currency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"get_currency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Viveport::IAPurchase_QueryResponse2::set_currency(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"set_currency", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Viveport::IAPurchase_QueryResponse2::get_paid_timestamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"get_paid_timestamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Viveport::IAPurchase_QueryResponse2::set_paid_timestamp(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {"set_paid_timestamp", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Viveport::IAPurchase_QueryResponse2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse2*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::IAPurchase_QueryResponse2* Viveport::IAPurchase_QueryResponse2::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::IAPurchase_QueryResponse2*>());
}
// Ctor Parameters []
constexpr ::Viveport::IAPurchase_QueryResponse2::IAPurchase_QueryResponse2()   {
}
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse.get_order_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Viveport::IAPurchase_QueryResponse::*)()>(&::Viveport::IAPurchase_QueryResponse::get_order_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5735c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {"get_order_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse.set_order_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_QueryResponse::*)(::StringW)>(&::Viveport::IAPurchase_QueryResponse::set_order_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {"set_order_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse.get_purchase_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Viveport::IAPurchase_QueryResponse::*)()>(&::Viveport::IAPurchase_QueryResponse::get_purchase_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5736c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {"get_purchase_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse.set_purchase_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_QueryResponse::*)(::StringW)>(&::Viveport::IAPurchase_QueryResponse::set_purchase_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {"set_purchase_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse.get_status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Viveport::IAPurchase_QueryResponse::*)()>(&::Viveport::IAPurchase_QueryResponse::get_status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5737c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {"get_status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse.set_status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_QueryResponse::*)(::StringW)>(&::Viveport::IAPurchase_QueryResponse::set_status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {"set_status", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse.get_price
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Viveport::IAPurchase_QueryResponse::*)()>(&::Viveport::IAPurchase_QueryResponse::get_price)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5738c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {"get_price", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse.set_price
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_QueryResponse::*)(::StringW)>(&::Viveport::IAPurchase_QueryResponse::set_price)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {"set_price", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse.get_currency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Viveport::IAPurchase_QueryResponse::*)()>(&::Viveport::IAPurchase_QueryResponse::get_currency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5739c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {"get_currency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse.set_currency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_QueryResponse::*)(::StringW)>(&::Viveport::IAPurchase_QueryResponse::set_currency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b573a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {"set_currency", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse.get_paid_timestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Viveport::IAPurchase_QueryResponse::*)()>(&::Viveport::IAPurchase_QueryResponse::get_paid_timestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b573ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {"get_paid_timestamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse.set_paid_timestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_QueryResponse::*)(int64_t)>(&::Viveport::IAPurchase_QueryResponse::set_paid_timestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b573b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {"set_paid_timestamp", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_QueryResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_QueryResponse::*)()>(&::Viveport::IAPurchase_QueryResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b541e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Viveport::IAPurchase_QueryResponse::__cordl_internal_get__order_id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____order_id_k__BackingField;
}
constexpr ::StringW const& Viveport::IAPurchase_QueryResponse::__cordl_internal_get__order_id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____order_id_k__BackingField;
}
constexpr void Viveport::IAPurchase_QueryResponse::__cordl_internal_set__order_id_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____order_id_k__BackingField = value;
}
constexpr ::StringW& Viveport::IAPurchase_QueryResponse::__cordl_internal_get__purchase_id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____purchase_id_k__BackingField;
}
constexpr ::StringW const& Viveport::IAPurchase_QueryResponse::__cordl_internal_get__purchase_id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____purchase_id_k__BackingField;
}
constexpr void Viveport::IAPurchase_QueryResponse::__cordl_internal_set__purchase_id_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____purchase_id_k__BackingField = value;
}
constexpr ::StringW& Viveport::IAPurchase_QueryResponse::__cordl_internal_get__status_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____status_k__BackingField;
}
constexpr ::StringW const& Viveport::IAPurchase_QueryResponse::__cordl_internal_get__status_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____status_k__BackingField;
}
constexpr void Viveport::IAPurchase_QueryResponse::__cordl_internal_set__status_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____status_k__BackingField = value;
}
constexpr ::StringW& Viveport::IAPurchase_QueryResponse::__cordl_internal_get__price_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____price_k__BackingField;
}
constexpr ::StringW const& Viveport::IAPurchase_QueryResponse::__cordl_internal_get__price_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____price_k__BackingField;
}
constexpr void Viveport::IAPurchase_QueryResponse::__cordl_internal_set__price_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____price_k__BackingField = value;
}
constexpr ::StringW& Viveport::IAPurchase_QueryResponse::__cordl_internal_get__currency_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currency_k__BackingField;
}
constexpr ::StringW const& Viveport::IAPurchase_QueryResponse::__cordl_internal_get__currency_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currency_k__BackingField;
}
constexpr void Viveport::IAPurchase_QueryResponse::__cordl_internal_set__currency_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currency_k__BackingField = value;
}
constexpr int64_t& Viveport::IAPurchase_QueryResponse::__cordl_internal_get__paid_timestamp_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____paid_timestamp_k__BackingField;
}
constexpr int64_t const& Viveport::IAPurchase_QueryResponse::__cordl_internal_get__paid_timestamp_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____paid_timestamp_k__BackingField;
}
constexpr void Viveport::IAPurchase_QueryResponse::__cordl_internal_set__paid_timestamp_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____paid_timestamp_k__BackingField = value;
}
inline ::StringW Viveport::IAPurchase_QueryResponse::get_order_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {"get_order_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Viveport::IAPurchase_QueryResponse::set_order_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {"set_order_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Viveport::IAPurchase_QueryResponse::get_purchase_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {"get_purchase_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Viveport::IAPurchase_QueryResponse::set_purchase_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {"set_purchase_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Viveport::IAPurchase_QueryResponse::get_status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {"get_status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Viveport::IAPurchase_QueryResponse::set_status(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {"set_status", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Viveport::IAPurchase_QueryResponse::get_price()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {"get_price", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Viveport::IAPurchase_QueryResponse::set_price(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {"set_price", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Viveport::IAPurchase_QueryResponse::get_currency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {"get_currency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Viveport::IAPurchase_QueryResponse::set_currency(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {"set_currency", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Viveport::IAPurchase_QueryResponse::get_paid_timestamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {"get_paid_timestamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Viveport::IAPurchase_QueryResponse::set_paid_timestamp(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {"set_paid_timestamp", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Viveport::IAPurchase_QueryResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_QueryResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::IAPurchase_QueryResponse* Viveport::IAPurchase_QueryResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::IAPurchase_QueryResponse*>());
}
// Ctor Parameters []
constexpr ::Viveport::IAPurchase_QueryResponse::IAPurchase_QueryResponse()   {
}
//  Writing Method size for method: ::Viveport::IAPurchase_IAPurchaseListener.OnSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPurchaseListener::*)(::StringW)>(&::Viveport::IAPurchase_IAPurchaseListener::OnSuccess)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b57320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPurchaseListener.OnRequestSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPurchaseListener::*)(::StringW)>(&::Viveport::IAPurchase_IAPurchaseListener::OnRequestSuccess)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b57324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPurchaseListener.OnPurchaseSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPurchaseListener::*)(::StringW)>(&::Viveport::IAPurchase_IAPurchaseListener::OnPurchaseSuccess)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b57328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPurchaseListener.OnQuerySuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPurchaseListener::*)(::Viveport::IAPurchase_QueryResponse*)>(&::Viveport::IAPurchase_IAPurchaseListener::OnQuerySuccess)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b5732c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPurchaseListener.OnQuerySuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPurchaseListener::*)(::Viveport::IAPurchase_QueryListResponse*)>(&::Viveport::IAPurchase_IAPurchaseListener::OnQuerySuccess)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b57330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPurchaseListener.OnBalanceSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPurchaseListener::*)(::StringW)>(&::Viveport::IAPurchase_IAPurchaseListener::OnBalanceSuccess)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b57334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPurchaseListener.OnFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPurchaseListener::*)(int32_t, ::StringW)>(&::Viveport::IAPurchase_IAPurchaseListener::OnFailure)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b57338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPurchaseListener.OnRequestSubscriptionSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPurchaseListener::*)(::StringW)>(&::Viveport::IAPurchase_IAPurchaseListener::OnRequestSubscriptionSuccess)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b5733c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPurchaseListener.OnRequestSubscriptionWithPlanIDSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPurchaseListener::*)(::StringW)>(&::Viveport::IAPurchase_IAPurchaseListener::OnRequestSubscriptionWithPlanIDSuccess)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b57340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPurchaseListener.OnSubscribeSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPurchaseListener::*)(::StringW)>(&::Viveport::IAPurchase_IAPurchaseListener::OnSubscribeSuccess)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b57344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPurchaseListener.OnQuerySubscriptionSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPurchaseListener::*)(::ArrayW<::Viveport::IAPurchase_Subscription*>)>(&::Viveport::IAPurchase_IAPurchaseListener::OnQuerySubscriptionSuccess)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b57348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPurchaseListener.OnQuerySubscriptionListSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPurchaseListener::*)(::ArrayW<::Viveport::IAPurchase_Subscription*>)>(&::Viveport::IAPurchase_IAPurchaseListener::OnQuerySubscriptionListSuccess)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b5734c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPurchaseListener.OnCancelSubscriptionSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPurchaseListener::*)(bool)>(&::Viveport::IAPurchase_IAPurchaseListener::OnCancelSubscriptionSuccess)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b57350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPurchaseListener._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPurchaseListener::*)()>(&::Viveport::IAPurchase_IAPurchaseListener::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b57354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Viveport::IAPurchase_IAPurchaseListener::OnSuccess(::StringW  pchCurrencyName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pchCurrencyName);
}
inline void Viveport::IAPurchase_IAPurchaseListener::OnRequestSuccess(::StringW  pchPurchaseId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pchPurchaseId);
}
inline void Viveport::IAPurchase_IAPurchaseListener::OnPurchaseSuccess(::StringW  pchPurchaseId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pchPurchaseId);
}
inline void Viveport::IAPurchase_IAPurchaseListener::OnQuerySuccess(::Viveport::IAPurchase_QueryResponse*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void Viveport::IAPurchase_IAPurchaseListener::OnQuerySuccess(::Viveport::IAPurchase_QueryListResponse*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void Viveport::IAPurchase_IAPurchaseListener::OnBalanceSuccess(::StringW  pchBalance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pchBalance);
}
inline void Viveport::IAPurchase_IAPurchaseListener::OnFailure(int32_t  nCode, ::StringW  pchMessage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nCode, pchMessage);
}
inline void Viveport::IAPurchase_IAPurchaseListener::OnRequestSubscriptionSuccess(::StringW  pchSubscriptionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pchSubscriptionId);
}
inline void Viveport::IAPurchase_IAPurchaseListener::OnRequestSubscriptionWithPlanIDSuccess(::StringW  pchSubscriptionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pchSubscriptionId);
}
inline void Viveport::IAPurchase_IAPurchaseListener::OnSubscribeSuccess(::StringW  pchSubscriptionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pchSubscriptionId);
}
inline void Viveport::IAPurchase_IAPurchaseListener::OnQuerySubscriptionSuccess(::ArrayW<::Viveport::IAPurchase_Subscription*>  subscriptionlist)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subscriptionlist);
}
inline void Viveport::IAPurchase_IAPurchaseListener::OnQuerySubscriptionListSuccess(::ArrayW<::Viveport::IAPurchase_Subscription*>  subscriptionlist)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subscriptionlist);
}
inline void Viveport::IAPurchase_IAPurchaseListener::OnCancelSubscriptionSuccess(bool  bCanceled)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bCanceled);
}
inline void Viveport::IAPurchase_IAPurchaseListener::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPurchaseListener*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::IAPurchase_IAPurchaseListener* Viveport::IAPurchase_IAPurchaseListener::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::IAPurchase_IAPurchaseListener*>());
}
// Ctor Parameters []
constexpr ::Viveport::IAPurchase_IAPurchaseListener::IAPurchase_IAPurchaseListener()   {
}
//  Writing Method size for method: ::Viveport::IAPurchase_IAPHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPHandler::*)(::Viveport::IAPurchase_IAPurchaseListener*)>(&::Viveport::IAPurchase_IAPHandler::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b502a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPHandler.getIsReadyHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Viveport::Internal::IAPurchaseCallback* (::Viveport::IAPurchase_IAPHandler::*)()>(&::Viveport::IAPurchase_IAPHandler::getIsReadyHandler)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b50314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {"getIsReadyHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPHandler.IsReadyHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPHandler::*)(int32_t, ::StringW)>(&::Viveport::IAPurchase_IAPHandler::IsReadyHandler)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x5b527d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPHandler.getRequestHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Viveport::Internal::IAPurchaseCallback* (::Viveport::IAPurchase_IAPHandler::*)()>(&::Viveport::IAPurchase_IAPHandler::getRequestHandler)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b50678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {"getRequestHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPHandler.RequestHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPHandler::*)(int32_t, ::StringW)>(&::Viveport::IAPurchase_IAPHandler::RequestHandler)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x5b52eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPHandler.getPurchaseHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Viveport::Internal::IAPurchaseCallback* (::Viveport::IAPurchase_IAPHandler::*)()>(&::Viveport::IAPurchase_IAPHandler::getPurchaseHandler)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b50be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {"getPurchaseHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPHandler.PurchaseHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPHandler::*)(int32_t, ::StringW)>(&::Viveport::IAPurchase_IAPHandler::PurchaseHandler)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x5b53368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPHandler.getQueryHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Viveport::Internal::IAPurchaseCallback* (::Viveport::IAPurchase_IAPHandler::*)()>(&::Viveport::IAPurchase_IAPHandler::getQueryHandler)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b50ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {"getQueryHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPHandler.QueryHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPHandler::*)(int32_t, ::StringW)>(&::Viveport::IAPurchase_IAPHandler::QueryHandler)> {
  constexpr static std::size_t size = 0x8f0;
  constexpr static std::size_t addrs = 0x5b538f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPHandler.getQueryListHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Viveport::Internal::IAPurchaseCallback* (::Viveport::IAPurchase_IAPHandler::*)()>(&::Viveport::IAPurchase_IAPHandler::getQueryListHandler)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b51160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {"getQueryListHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPHandler.QueryListHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPHandler::*)(int32_t, ::StringW)>(&::Viveport::IAPurchase_IAPHandler::QueryListHandler)> {
  constexpr static std::size_t size = 0xf24;
  constexpr static std::size_t addrs = 0x5b541f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPHandler.getBalanceHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Viveport::Internal::IAPurchaseCallback* (::Viveport::IAPurchase_IAPHandler::*)()>(&::Viveport::IAPurchase_IAPHandler::getBalanceHandler)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b513dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {"getBalanceHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPHandler.BalanceHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPHandler::*)(int32_t, ::StringW)>(&::Viveport::IAPurchase_IAPHandler::BalanceHandler)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x5b55154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPHandler.getRequestSubscriptionHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Viveport::Internal::IAPurchaseCallback* (::Viveport::IAPurchase_IAPHandler::*)()>(&::Viveport::IAPurchase_IAPHandler::getRequestSubscriptionHandler)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b516a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {"getRequestSubscriptionHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPHandler.RequestSubscriptionHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPHandler::*)(int32_t, ::StringW)>(&::Viveport::IAPurchase_IAPHandler::RequestSubscriptionHandler)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x5b55680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPHandler.getRequestSubscriptionWithPlanIDHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Viveport::Internal::IAPurchaseCallback* (::Viveport::IAPurchase_IAPHandler::*)()>(&::Viveport::IAPurchase_IAPHandler::getRequestSubscriptionWithPlanIDHandler)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b51b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {"getRequestSubscriptionWithPlanIDHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPHandler.RequestSubscriptionWithPlanIDHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPHandler::*)(int32_t, ::StringW)>(&::Viveport::IAPurchase_IAPHandler::RequestSubscriptionWithPlanIDHandler)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x5b55b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPHandler.getSubscribeHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Viveport::Internal::IAPurchaseCallback* (::Viveport::IAPurchase_IAPHandler::*)()>(&::Viveport::IAPurchase_IAPHandler::getSubscribeHandler)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b51de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {"getSubscribeHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPHandler.SubscribeHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPHandler::*)(int32_t, ::StringW)>(&::Viveport::IAPurchase_IAPHandler::SubscribeHandler)> {
  constexpr static std::size_t size = 0x634;
  constexpr static std::size_t addrs = 0x5b55fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPHandler.getQuerySubscriptionHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Viveport::Internal::IAPurchaseCallback* (::Viveport::IAPurchase_IAPHandler::*)()>(&::Viveport::IAPurchase_IAPHandler::getQuerySubscriptionHandler)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b520a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {"getQuerySubscriptionHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPHandler.QuerySubscriptionHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPHandler::*)(int32_t, ::StringW)>(&::Viveport::IAPurchase_IAPHandler::QuerySubscriptionHandler)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x5b565dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPHandler.getQuerySubscriptionListHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Viveport::Internal::IAPurchaseCallback* (::Viveport::IAPurchase_IAPHandler::*)()>(&::Viveport::IAPurchase_IAPHandler::getQuerySubscriptionListHandler)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b52364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {"getQuerySubscriptionListHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPHandler.QuerySubscriptionListHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPHandler::*)(int32_t, ::StringW)>(&::Viveport::IAPurchase_IAPHandler::QuerySubscriptionListHandler)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x5b56aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPHandler.getCancelSubscriptionHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Viveport::Internal::IAPurchaseCallback* (::Viveport::IAPurchase_IAPHandler::*)()>(&::Viveport::IAPurchase_IAPHandler::getCancelSubscriptionHandler)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b525e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {"getCancelSubscriptionHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_IAPHandler.CancelSubscriptionHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_IAPHandler::*)(int32_t, ::StringW)>(&::Viveport::IAPurchase_IAPHandler::CancelSubscriptionHandler)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x5b56f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Viveport::IAPurchase_IAPHandler::setStaticF_listener(::Viveport::IAPurchase_IAPurchaseListener*  value)  {
::cordl_internals::setStaticField<::Viveport::IAPurchase_IAPurchaseListener*, "listener", ::Viveport::IAPurchase_IAPHandler*>(std::forward<::Viveport::IAPurchase_IAPurchaseListener*>(value));
}
inline ::Viveport::IAPurchase_IAPurchaseListener* Viveport::IAPurchase_IAPHandler::getStaticF_listener()  {
return ::cordl_internals::getStaticField<::Viveport::IAPurchase_IAPurchaseListener*, "listener", ::Viveport::IAPurchase_IAPHandler*>();
}
inline void Viveport::IAPurchase_IAPHandler::_ctor(::Viveport::IAPurchase_IAPurchaseListener*  cb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::Viveport::IAPurchase_IAPurchaseListener*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cb);
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::IAPurchase_IAPHandler::getIsReadyHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {"getIsReadyHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Viveport::Internal::IAPurchaseCallback*>(this, ___internal_method);
}
inline void Viveport::IAPurchase_IAPHandler::IsReadyHandler(int32_t  code, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::IAPurchase_IAPHandler::getRequestHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {"getRequestHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Viveport::Internal::IAPurchaseCallback*>(this, ___internal_method);
}
inline void Viveport::IAPurchase_IAPHandler::RequestHandler(int32_t  code, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::IAPurchase_IAPHandler::getPurchaseHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {"getPurchaseHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Viveport::Internal::IAPurchaseCallback*>(this, ___internal_method);
}
inline void Viveport::IAPurchase_IAPHandler::PurchaseHandler(int32_t  code, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::IAPurchase_IAPHandler::getQueryHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {"getQueryHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Viveport::Internal::IAPurchaseCallback*>(this, ___internal_method);
}
inline void Viveport::IAPurchase_IAPHandler::QueryHandler(int32_t  code, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::IAPurchase_IAPHandler::getQueryListHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {"getQueryListHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Viveport::Internal::IAPurchaseCallback*>(this, ___internal_method);
}
inline void Viveport::IAPurchase_IAPHandler::QueryListHandler(int32_t  code, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::IAPurchase_IAPHandler::getBalanceHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {"getBalanceHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Viveport::Internal::IAPurchaseCallback*>(this, ___internal_method);
}
inline void Viveport::IAPurchase_IAPHandler::BalanceHandler(int32_t  code, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::IAPurchase_IAPHandler::getRequestSubscriptionHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {"getRequestSubscriptionHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Viveport::Internal::IAPurchaseCallback*>(this, ___internal_method);
}
inline void Viveport::IAPurchase_IAPHandler::RequestSubscriptionHandler(int32_t  code, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::IAPurchase_IAPHandler::getRequestSubscriptionWithPlanIDHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {"getRequestSubscriptionWithPlanIDHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Viveport::Internal::IAPurchaseCallback*>(this, ___internal_method);
}
inline void Viveport::IAPurchase_IAPHandler::RequestSubscriptionWithPlanIDHandler(int32_t  code, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::IAPurchase_IAPHandler::getSubscribeHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {"getSubscribeHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Viveport::Internal::IAPurchaseCallback*>(this, ___internal_method);
}
inline void Viveport::IAPurchase_IAPHandler::SubscribeHandler(int32_t  code, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::IAPurchase_IAPHandler::getQuerySubscriptionHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {"getQuerySubscriptionHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Viveport::Internal::IAPurchaseCallback*>(this, ___internal_method);
}
inline void Viveport::IAPurchase_IAPHandler::QuerySubscriptionHandler(int32_t  code, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::IAPurchase_IAPHandler::getQuerySubscriptionListHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {"getQuerySubscriptionListHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Viveport::Internal::IAPurchaseCallback*>(this, ___internal_method);
}
inline void Viveport::IAPurchase_IAPHandler::QuerySubscriptionListHandler(int32_t  code, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline ::Viveport::Internal::IAPurchaseCallback* Viveport::IAPurchase_IAPHandler::getCancelSubscriptionHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(),
                        {"getCancelSubscriptionHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Viveport::Internal::IAPurchaseCallback*>(this, ___internal_method);
}
inline void Viveport::IAPurchase_IAPHandler::CancelSubscriptionHandler(int32_t  code, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_IAPHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline ::Viveport::IAPurchase_IAPHandler* Viveport::IAPurchase_IAPHandler::New_ctor(::Viveport::IAPurchase_IAPurchaseListener*  cb)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::IAPurchase_IAPHandler*>(cb));
}
// Ctor Parameters []
constexpr ::Viveport::IAPurchase_IAPHandler::IAPurchase_IAPHandler()   {
}
//  Writing Method size for method: ::Viveport::IAPurchase_BaseHandler.IsReadyHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_BaseHandler::*)(int32_t, ::StringW)>(&::Viveport::IAPurchase_BaseHandler::IsReadyHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_BaseHandler.RequestHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_BaseHandler::*)(int32_t, ::StringW)>(&::Viveport::IAPurchase_BaseHandler::RequestHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_BaseHandler.PurchaseHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_BaseHandler::*)(int32_t, ::StringW)>(&::Viveport::IAPurchase_BaseHandler::PurchaseHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_BaseHandler.QueryHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_BaseHandler::*)(int32_t, ::StringW)>(&::Viveport::IAPurchase_BaseHandler::QueryHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_BaseHandler.QueryListHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_BaseHandler::*)(int32_t, ::StringW)>(&::Viveport::IAPurchase_BaseHandler::QueryListHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_BaseHandler.BalanceHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_BaseHandler::*)(int32_t, ::StringW)>(&::Viveport::IAPurchase_BaseHandler::BalanceHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_BaseHandler.RequestSubscriptionHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_BaseHandler::*)(int32_t, ::StringW)>(&::Viveport::IAPurchase_BaseHandler::RequestSubscriptionHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_BaseHandler.RequestSubscriptionWithPlanIDHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_BaseHandler::*)(int32_t, ::StringW)>(&::Viveport::IAPurchase_BaseHandler::RequestSubscriptionWithPlanIDHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_BaseHandler.SubscribeHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_BaseHandler::*)(int32_t, ::StringW)>(&::Viveport::IAPurchase_BaseHandler::SubscribeHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_BaseHandler.QuerySubscriptionHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_BaseHandler::*)(int32_t, ::StringW)>(&::Viveport::IAPurchase_BaseHandler::QuerySubscriptionHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_BaseHandler.QuerySubscriptionListHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_BaseHandler::*)(int32_t, ::StringW)>(&::Viveport::IAPurchase_BaseHandler::QuerySubscriptionListHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_BaseHandler.CancelSubscriptionHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_BaseHandler::*)(int32_t, ::StringW)>(&::Viveport::IAPurchase_BaseHandler::CancelSubscriptionHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(),
                    {::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::IAPurchase_BaseHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::IAPurchase_BaseHandler::*)()>(&::Viveport::IAPurchase_BaseHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b527d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Viveport::IAPurchase_BaseHandler::IsReadyHandler(int32_t  code, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline void Viveport::IAPurchase_BaseHandler::RequestHandler(int32_t  code, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline void Viveport::IAPurchase_BaseHandler::PurchaseHandler(int32_t  code, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline void Viveport::IAPurchase_BaseHandler::QueryHandler(int32_t  code, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline void Viveport::IAPurchase_BaseHandler::QueryListHandler(int32_t  code, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline void Viveport::IAPurchase_BaseHandler::BalanceHandler(int32_t  code, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline void Viveport::IAPurchase_BaseHandler::RequestSubscriptionHandler(int32_t  code, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline void Viveport::IAPurchase_BaseHandler::RequestSubscriptionWithPlanIDHandler(int32_t  code, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline void Viveport::IAPurchase_BaseHandler::SubscribeHandler(int32_t  code, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline void Viveport::IAPurchase_BaseHandler::QuerySubscriptionHandler(int32_t  code, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline void Viveport::IAPurchase_BaseHandler::QuerySubscriptionListHandler(int32_t  code, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline void Viveport::IAPurchase_BaseHandler::CancelSubscriptionHandler(int32_t  code, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message);
}
inline void Viveport::IAPurchase_BaseHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::IAPurchase_BaseHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::IAPurchase_BaseHandler* Viveport::IAPurchase_BaseHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::IAPurchase_BaseHandler*>());
}
// Ctor Parameters []
constexpr ::Viveport::IAPurchase_BaseHandler::IAPurchase_BaseHandler()   {
}
