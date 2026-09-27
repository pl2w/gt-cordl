#pragma once
// IWYU pragma private; include "Modio/Monetization/IModioEntitlementService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IModioEntitlementService)
namespace Modio {
class Error;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace Modio::Monetization {
class IModioEntitlementService;
}
// Write type traits
MARK_REF_T(::Modio::Monetization::IModioEntitlementService*);
DEFINE_IL2CPP_CLASS(::Modio::Monetization::IModioEntitlementService*, "Modio.Monetization", "IModioEntitlementService");
// Dependencies 
namespace Modio::Monetization {
// Is value type: false
// CS Name: Modio.Monetization.IModioEntitlementService
class CORDL_TYPE IModioEntitlementService {
public:
// Declarations
/// @brief Method SyncEntitlements, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* SyncEntitlements() ;

// Ctor Parameters [CppParam { name: "", ty: "IModioEntitlementService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IModioEntitlementService(IModioEntitlementService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17561};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Monetization
