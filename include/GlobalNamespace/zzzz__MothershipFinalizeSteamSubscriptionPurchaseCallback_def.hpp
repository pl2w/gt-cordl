#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipFinalizeSteamSubscriptionPurchaseCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ClientFinalizeSteamSubscriptionPurchaseCompleteDelegateWrapper_def.hpp"
CORDL_MODULE_EXPORT(MothershipFinalizeSteamSubscriptionPurchaseCallback)
namespace GlobalNamespace {
class MothershipError;
}
namespace GlobalNamespace {
class MothershipResponse;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipFinalizeSteamSubscriptionPurchaseCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback*, "", "MothershipFinalizeSteamSubscriptionPurchaseCallback");
// Dependencies ClientFinalizeSteamSubscriptionPurchaseCompleteDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipFinalizeSteamSubscriptionPurchaseCallback
class CORDL_TYPE MothershipFinalizeSteamSubscriptionPurchaseCallback : public ::GlobalNamespace::ClientFinalizeSteamSubscriptionPurchaseCompleteDelegateWrapper {
public:
// Declarations
static inline ::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback* New_ctor() ;

/// @brief Method OnCompleteCallback, addr 0x53bf0f8, size 0x18c, virtual true, abstract: false, final false
inline void OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData) ;

/// @brief Method .ctor, addr 0x53bf098, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipFinalizeSteamSubscriptionPurchaseCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipFinalizeSteamSubscriptionPurchaseCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipFinalizeSteamSubscriptionPurchaseCallback(MothershipFinalizeSteamSubscriptionPurchaseCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipFinalizeSteamSubscriptionPurchaseCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipFinalizeSteamSubscriptionPurchaseCallback(MothershipFinalizeSteamSubscriptionPurchaseCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9758};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
