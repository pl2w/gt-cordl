#pragma once
// IWYU pragma private; include "Viveport/Subscription.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Subscription)
namespace Viveport::Internal {
class StatusCallback2;
}
namespace Viveport {
class StatusCallback2;
}
namespace Viveport {
class SubscriptionStatus;
}
// Forward declare root types
namespace Viveport {
class Subscription;
}
// Write type traits
MARK_REF_T(::Viveport::Subscription*);
DEFINE_IL2CPP_CLASS(::Viveport::Subscription*, "Viveport", "Subscription");
// Dependencies System.Object
namespace Viveport {
// Is value type: false
// CS Name: Viveport.Subscription
class CORDL_TYPE Subscription : public ::System::Object {
public:
// Declarations
/// @brief Field isReadyIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_isReadyIl2cppCallback, put=setStaticF_isReadyIl2cppCallback)) ::Viveport::Internal::StatusCallback2*  isReadyIl2cppCallback;

/// @brief Method GetUserStatus, addr 0x5b57a48, size 0x194, virtual false, abstract: false, final false
static inline ::Viveport::SubscriptionStatus* GetUserStatus() ;

/// @brief Method IsReady, addr 0x5b57680, size 0x1e8, virtual false, abstract: false, final false
static inline void IsReady(::Viveport::StatusCallback2*  callback) ;

/// [MonoPInvokeCallback(typeof(Viveport.Internal.StatusCallback2))]
/// @brief Method IsReadyIl2cppCallback, addr 0x5b5760c, size 0x74, virtual false, abstract: false, final false
static inline void IsReadyIl2cppCallback(int32_t  errorCode, ::StringW  message) ;

static inline ::Viveport::Subscription* New_ctor() ;

/// @brief Method .ctor, addr 0x5b57f0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Viveport::Internal::StatusCallback2* getStaticF_isReadyIl2cppCallback() ;

static inline void setStaticF_isReadyIl2cppCallback(::Viveport::Internal::StatusCallback2*  value) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3785};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::Subscription) == 0x10, "Size mismatch!");

} // namespace end def Viveport
