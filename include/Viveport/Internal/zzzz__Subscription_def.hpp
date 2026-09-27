#pragma once
// IWYU pragma private; include "Viveport/Internal/Subscription.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Subscription)
namespace Viveport::Internal {
struct ESubscriptionTransactionType;
}
namespace Viveport::Internal {
class StatusCallback2;
}
// Forward declare root types
namespace Viveport::Internal {
class Subscription;
}
// Write type traits
MARK_REF_T(::Viveport::Internal::Subscription*);
DEFINE_IL2CPP_CLASS(::Viveport::Internal::Subscription*, "Viveport.Internal", "Subscription");
// Dependencies System.Object
namespace Viveport::Internal {
// Is value type: false
// CS Name: Viveport.Internal.Subscription
class CORDL_TYPE Subscription : public ::System::Object {
public:
// Declarations
/// @brief Method GetTransactionType, addr 0x5b57d8c, size 0x180, virtual false, abstract: false, final false
static inline ::Viveport::Internal::ESubscriptionTransactionType GetTransactionType() ;

/// @brief Method IsAndroidSubscriber, addr 0x5b57cb4, size 0xd8, virtual false, abstract: false, final false
static inline bool IsAndroidSubscriber() ;

/// @brief Method IsReady, addr 0x5b57908, size 0x140, virtual false, abstract: false, final false
static inline int32_t IsReady(::Viveport::Internal::StatusCallback2*  callback) ;

/// @brief Method IsWindowsSubscriber, addr 0x5b57bdc, size 0xd8, virtual false, abstract: false, final false
static inline bool IsWindowsSubscriber() ;

static inline ::Viveport::Internal::Subscription* New_ctor() ;

/// @brief Method .ctor, addr 0x5b5a228, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Subscription() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Subscription", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Subscription(Subscription && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Subscription", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Subscription(Subscription const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3811};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::Internal::Subscription) == 0x10, "Size mismatch!");

} // namespace end def Viveport::Internal
