#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipSteamInitTransactionCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__InitSteamPurchaseCompleteDelegateWrapper_def.hpp"
CORDL_MODULE_EXPORT(MothershipSteamInitTransactionCallback)
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
class MothershipSteamInitTransactionCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipSteamInitTransactionCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipSteamInitTransactionCallback*, "", "MothershipSteamInitTransactionCallback");
// Dependencies InitSteamPurchaseCompleteDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipSteamInitTransactionCallback
class CORDL_TYPE MothershipSteamInitTransactionCallback : public ::GlobalNamespace::InitSteamPurchaseCompleteDelegateWrapper {
public:
// Declarations
static inline ::GlobalNamespace::MothershipSteamInitTransactionCallback* New_ctor() ;

/// @brief Method OnCompleteCallback, addr 0x53bf4d0, size 0x18c, virtual true, abstract: false, final false
inline void OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData) ;

/// @brief Method .ctor, addr 0x53bf470, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipSteamInitTransactionCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipSteamInitTransactionCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipSteamInitTransactionCallback(MothershipSteamInitTransactionCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipSteamInitTransactionCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipSteamInitTransactionCallback(MothershipSteamInitTransactionCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9760};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipSteamInitTransactionCallback) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
