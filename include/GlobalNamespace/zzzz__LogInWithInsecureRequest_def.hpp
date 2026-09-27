#pragma once
// IWYU pragma private; include "GlobalNamespace/LogInWithInsecureRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LoginRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LogInWithInsecureRequest)
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
class LogInWithInsecureRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LogInWithInsecureRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LogInWithInsecureRequest*, "", "LogInWithInsecureRequest");
// Dependencies LoginRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: LogInWithInsecureRequest
class CORDL_TYPE LogInWithInsecureRequest : public ::GlobalNamespace::LoginRequest {
public:
// Declarations
 __declspec(property(get=get_accountId, put=set_accountId)) ::StringW  accountId;

/// @brief Field swigCPtr, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_username, put=set_username)) ::StringW  username;

/// @brief Method Dispose, addr 0x5579b0c, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::LogInWithInsecureRequest* New_ctor() ;

static inline ::GlobalNamespace::LogInWithInsecureRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x557a1c8, size 0x104, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x557a2cc, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x557997c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5579a30, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::LogInWithInsecureRequest*  obj) ;

/// @brief Method get_accountId, addr 0x557a0fc, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_accountId() ;

/// @brief Method get_username, addr 0x5579f60, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_username() ;

/// @brief Method set_accountId, addr 0x557a02c, size 0xd0, virtual false, abstract: false, final false
inline void set_accountId(::StringW  value) ;

/// @brief Method set_username, addr 0x5579c78, size 0xd0, virtual false, abstract: false, final false
inline void set_username(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5579a70, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::LogInWithInsecureRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogInWithInsecureRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogInWithInsecureRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LogInWithInsecureRequest(LogInWithInsecureRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogInWithInsecureRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogInWithInsecureRequest(LogInWithInsecureRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9279};

/// @brief Field swigCPtr, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LogInWithInsecureRequest, ___swigCPtr) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LogInWithInsecureRequest) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
