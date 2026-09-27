#pragma once
// IWYU pragma private; include "GlobalNamespace/VerifyTokenRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VerifyTokenRequest)
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
class VerifyTokenRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VerifyTokenRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VerifyTokenRequest*, "", "VerifyTokenRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: VerifyTokenRequest
class CORDL_TYPE VerifyTokenRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_playerId, put=set_playerId)) ::StringW  playerId;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_token, put=set_token)) ::StringW  token;

/// @brief Method Dispose, addr 0x53b5da4, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::VerifyTokenRequest* New_ctor() ;

static inline ::GlobalNamespace::VerifyTokenRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x53b6268, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53b6374, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53b5c14, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53b5cc8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::VerifyTokenRequest*  obj) ;

/// @brief Method get_playerId, addr 0x53b5fe8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_playerId() ;

/// @brief Method get_token, addr 0x53b6194, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_token() ;

/// @brief Method set_playerId, addr 0x53b5f10, size 0xd8, virtual false, abstract: false, final false
inline void set_playerId(::StringW  value) ;

/// @brief Method set_token, addr 0x53b60bc, size 0xd8, virtual false, abstract: false, final false
inline void set_token(::StringW  value) ;

/// @brief Method swigRelease, addr 0x53b5d08, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::VerifyTokenRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VerifyTokenRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VerifyTokenRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VerifyTokenRequest(VerifyTokenRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VerifyTokenRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VerifyTokenRequest(VerifyTokenRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9740};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VerifyTokenRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VerifyTokenRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
