#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSteamBeginLoginRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LoginRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
CORDL_MODULE_EXPORT(PlayerSteamBeginLoginRequest)
namespace GlobalNamespace {
class SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerSteamBeginLoginRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerSteamBeginLoginRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerSteamBeginLoginRequest*, "", "PlayerSteamBeginLoginRequest");
// Dependencies LoginRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSteamBeginLoginRequest
class CORDL_TYPE PlayerSteamBeginLoginRequest : public ::GlobalNamespace::LoginRequest {
public:
// Declarations
/// @brief Field swigCPtr, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x52f6280, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::PlayerSteamBeginLoginRequest* New_ctor() ;

static inline ::GlobalNamespace::PlayerSteamBeginLoginRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x52f63ec, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52f64f8, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52f60f0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52f61a4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::PlayerSteamBeginLoginRequest*  obj) ;

/// @brief Method swigRelease, addr 0x52f61e4, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::PlayerSteamBeginLoginRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerSteamBeginLoginRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerSteamBeginLoginRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerSteamBeginLoginRequest(PlayerSteamBeginLoginRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSteamBeginLoginRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerSteamBeginLoginRequest(PlayerSteamBeginLoginRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9426};

/// @brief Field swigCPtr, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSteamBeginLoginRequest, ___swigCPtr) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerSteamBeginLoginRequest) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
