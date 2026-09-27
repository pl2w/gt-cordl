#pragma once
// IWYU pragma private; include "Viveport/Internal/IAPurchase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IAPurchase)
namespace Viveport::Internal {
class IAPurchaseCallback;
}
// Forward declare root types
namespace Viveport::Internal {
class IAPurchase;
}
// Write type traits
MARK_REF_T(::Viveport::Internal::IAPurchase*);
DEFINE_IL2CPP_CLASS(::Viveport::Internal::IAPurchase*, "Viveport.Internal", "IAPurchase");
// Dependencies System.Object
namespace Viveport::Internal {
// Is value type: false
// CS Name: Viveport.Internal.IAPurchase
class CORDL_TYPE IAPurchase : public ::System::Object {
public:
// Declarations
/// @brief Method CancelSubscription, addr 0x5b52650, size 0x178, virtual false, abstract: false, final false
static inline void CancelSubscription(::Viveport::Internal::IAPurchaseCallback*  callback, ::StringW  pchSubscriptionId) ;

/// @brief Method GetBalance, addr 0x5b51444, size 0x138, virtual false, abstract: false, final false
static inline void GetBalance(::Viveport::Internal::IAPurchaseCallback*  callback) ;

/// @brief Method IsReady, addr 0x5b5041c, size 0x178, virtual false, abstract: false, final false
static inline void IsReady(::Viveport::Internal::IAPurchaseCallback*  callback, ::StringW  pchAppKey) ;

static inline ::Viveport::Internal::IAPurchase* New_ctor() ;

/// @brief Method Purchase, addr 0x5b50c48, size 0x178, virtual false, abstract: false, final false
static inline void Purchase(::Viveport::Internal::IAPurchaseCallback*  callback, ::StringW  pchPurchaseId) ;

/// @brief Method Query, addr 0x5b511c8, size 0x138, virtual false, abstract: false, final false
static inline void Query(::Viveport::Internal::IAPurchaseCallback*  callback) ;

/// @brief Method Query, addr 0x5b50f0c, size 0x178, virtual false, abstract: false, final false
static inline void Query(::Viveport::Internal::IAPurchaseCallback*  callback, ::StringW  pchPurchaseId) ;

/// @brief Method QuerySubscription, addr 0x5b52110, size 0x178, virtual false, abstract: false, final false
static inline void QuerySubscription(::Viveport::Internal::IAPurchaseCallback*  callback, ::StringW  pchSubscriptionId) ;

/// @brief Method QuerySubscriptionList, addr 0x5b523cc, size 0x138, virtual false, abstract: false, final false
static inline void QuerySubscriptionList(::Viveport::Internal::IAPurchaseCallback*  callback) ;

/// @brief Method Request, addr 0x5b506e0, size 0x178, virtual false, abstract: false, final false
static inline void Request(::Viveport::Internal::IAPurchaseCallback*  callback, ::StringW  pchPrice) ;

/// @brief Method Request, addr 0x5b5094c, size 0x1b0, virtual false, abstract: false, final false
static inline void Request(::Viveport::Internal::IAPurchaseCallback*  callback, ::StringW  pchPrice, ::StringW  pchUserData) ;

/// @brief Method RequestSubscription, addr 0x5b51710, size 0x32c, virtual false, abstract: false, final false
static inline void RequestSubscription(::Viveport::Internal::IAPurchaseCallback*  callback, ::StringW  pchPrice, ::StringW  pchFreeTrialType, int32_t  nFreeTrialValue, ::StringW  pchChargePeriodType, int32_t  nChargePeriodValue, int32_t  nNumberOfChargePeriod, ::StringW  pchPlanId) ;

/// @brief Method RequestSubscriptionWithPlanID, addr 0x5b51b88, size 0x178, virtual false, abstract: false, final false
static inline void RequestSubscriptionWithPlanID(::Viveport::Internal::IAPurchaseCallback*  callback, ::StringW  pchPlanId) ;

/// @brief Method Subscribe, addr 0x5b51e4c, size 0x178, virtual false, abstract: false, final false
static inline void Subscribe(::Viveport::Internal::IAPurchaseCallback*  callback, ::StringW  pchSubscriptionId) ;

/// @brief Method .ctor, addr 0x5b5a078, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IAPurchase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IAPurchase(IAPurchase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IAPurchase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAPurchase(IAPurchase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3810};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::Internal::IAPurchase) == 0x10, "Size mismatch!");

} // namespace end def Viveport::Internal
