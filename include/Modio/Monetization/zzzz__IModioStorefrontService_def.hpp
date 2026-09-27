#pragma once
// IWYU pragma private; include "Modio/Monetization/IModioStorefrontService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IModioStorefrontService)
namespace Modio {
class Error;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace Modio::Monetization {
class IModioStorefrontService;
}
// Write type traits
MARK_REF_T(::Modio::Monetization::IModioStorefrontService*);
DEFINE_IL2CPP_CLASS(::Modio::Monetization::IModioStorefrontService*, "Modio.Monetization", "IModioStorefrontService");
// Dependencies 
namespace Modio::Monetization {
// Is value type: false
// CS Name: Modio.Monetization.IModioStorefrontService
class CORDL_TYPE IModioStorefrontService {
public:
// Declarations
/// @brief Method OpenPlatformPurchaseFlow, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* OpenPlatformPurchaseFlow() ;

// Ctor Parameters [CppParam { name: "", ty: "IModioStorefrontService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IModioStorefrontService(IModioStorefrontService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17562};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Monetization
