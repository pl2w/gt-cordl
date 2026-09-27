#pragma once
// IWYU pragma private; include "Modio/Monetization/IModioVirtualCurrencyProviderService.hpp"
#include "Modio/Monetization/zzzz__IModioVirtualCurrencyProviderService_def.hpp"
#include "Modio/Monetization/zzzz__PortalSku_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Modio::Monetization::IModioVirtualCurrencyProviderService.GetCurrencyPackSkus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Monetization::PortalSku>>>* (::Modio::Monetization::IModioVirtualCurrencyProviderService::*)()>(&::Modio::Monetization::IModioVirtualCurrencyProviderService::GetCurrencyPackSkus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Monetization::IModioVirtualCurrencyProviderService*>(),
                    {::i2c::class_of<::Modio::Monetization::IModioVirtualCurrencyProviderService*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Monetization::IModioVirtualCurrencyProviderService.OpenCheckoutFlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Monetization::IModioVirtualCurrencyProviderService::*)(::Modio::Monetization::PortalSku)>(&::Modio::Monetization::IModioVirtualCurrencyProviderService::OpenCheckoutFlow)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Monetization::IModioVirtualCurrencyProviderService*>(),
                    {::i2c::class_of<::Modio::Monetization::IModioVirtualCurrencyProviderService*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Monetization::PortalSku>>>* Modio::Monetization::IModioVirtualCurrencyProviderService::GetCurrencyPackSkus()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Monetization::IModioVirtualCurrencyProviderService*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Monetization::PortalSku>>>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Monetization::IModioVirtualCurrencyProviderService::OpenCheckoutFlow(::Modio::Monetization::PortalSku  sku)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Monetization::IModioVirtualCurrencyProviderService*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, sku);
}
