#pragma once
// IWYU pragma private; include "Modio/Monetization/IModioVirtualCurrencyProviderService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(IModioVirtualCurrencyProviderService)
namespace Modio::Monetization {
struct PortalSku;
}
namespace Modio {
class Error;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Modio::Monetization {
class IModioVirtualCurrencyProviderService;
}
// Write type traits
MARK_REF_T(::Modio::Monetization::IModioVirtualCurrencyProviderService*);
DEFINE_IL2CPP_CLASS(::Modio::Monetization::IModioVirtualCurrencyProviderService*, "Modio.Monetization", "IModioVirtualCurrencyProviderService");
// Dependencies 
namespace Modio::Monetization {
// Is value type: false
// CS Name: Modio.Monetization.IModioVirtualCurrencyProviderService
class CORDL_TYPE IModioVirtualCurrencyProviderService {
public:
// Declarations
/// @brief Method GetCurrencyPackSkus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Monetization::PortalSku>>>* GetCurrencyPackSkus() ;

/// @brief Method OpenCheckoutFlow, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* OpenCheckoutFlow(::Modio::Monetization::PortalSku  sku) ;

// Ctor Parameters [CppParam { name: "", ty: "IModioVirtualCurrencyProviderService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IModioVirtualCurrencyProviderService(IModioVirtualCurrencyProviderService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17563};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Monetization
