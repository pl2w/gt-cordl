#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipInitSteamSubscriptionPurchaseCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ClientInitSteamSubscriptionPurchaseCompleteDelegateWrapper_def.hpp"
CORDL_MODULE_EXPORT(MothershipInitSteamSubscriptionPurchaseCallback)
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
class MothershipInitSteamSubscriptionPurchaseCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback*, "", "MothershipInitSteamSubscriptionPurchaseCallback");
// Dependencies ClientInitSteamSubscriptionPurchaseCompleteDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipInitSteamSubscriptionPurchaseCallback
class CORDL_TYPE MothershipInitSteamSubscriptionPurchaseCallback : public ::GlobalNamespace::ClientInitSteamSubscriptionPurchaseCompleteDelegateWrapper {
public:
// Declarations
static inline ::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback* New_ctor() ;

/// @brief Method OnCompleteCallback, addr 0x53bef0c, size 0x18c, virtual true, abstract: false, final false
inline void OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData) ;

/// @brief Method .ctor, addr 0x53beeac, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipInitSteamSubscriptionPurchaseCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipInitSteamSubscriptionPurchaseCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipInitSteamSubscriptionPurchaseCallback(MothershipInitSteamSubscriptionPurchaseCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipInitSteamSubscriptionPurchaseCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipInitSteamSubscriptionPurchaseCallback(MothershipInitSteamSubscriptionPurchaseCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9757};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
