#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipSteamFinalizeTransactionCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FinalizeSteamPurchaseCompleteDelegateWrapper_def.hpp"
CORDL_MODULE_EXPORT(MothershipSteamFinalizeTransactionCallback)
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
class MothershipSteamFinalizeTransactionCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipSteamFinalizeTransactionCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipSteamFinalizeTransactionCallback*, "", "MothershipSteamFinalizeTransactionCallback");
// Dependencies FinalizeSteamPurchaseCompleteDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipSteamFinalizeTransactionCallback
class CORDL_TYPE MothershipSteamFinalizeTransactionCallback : public ::GlobalNamespace::FinalizeSteamPurchaseCompleteDelegateWrapper {
public:
// Declarations
static inline ::GlobalNamespace::MothershipSteamFinalizeTransactionCallback* New_ctor() ;

/// @brief Method OnCompleteCallback, addr 0x53bf6bc, size 0x18c, virtual true, abstract: false, final false
inline void OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData) ;

/// @brief Method .ctor, addr 0x53bf65c, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipSteamFinalizeTransactionCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipSteamFinalizeTransactionCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipSteamFinalizeTransactionCallback(MothershipSteamFinalizeTransactionCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipSteamFinalizeTransactionCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipSteamFinalizeTransactionCallback(MothershipSteamFinalizeTransactionCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9761};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipSteamFinalizeTransactionCallback) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
