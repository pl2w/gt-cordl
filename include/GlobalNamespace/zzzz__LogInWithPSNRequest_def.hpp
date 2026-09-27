#pragma once
// IWYU pragma private; include "GlobalNamespace/LogInWithPSNRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LoginRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LogInWithPSNRequest)
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
class LogInWithPSNRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LogInWithPSNRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LogInWithPSNRequest*, "", "LogInWithPSNRequest");
// Dependencies LoginRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: LogInWithPSNRequest
class CORDL_TYPE LogInWithPSNRequest : public ::GlobalNamespace::LoginRequest {
public:
// Declarations
 __declspec(property(get=get_AuthorizationCode, put=set_AuthorizationCode)) ::StringW  AuthorizationCode;

/// @brief Field swigCPtr, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x557a520, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::LogInWithPSNRequest* New_ctor() ;

static inline ::GlobalNamespace::LogInWithPSNRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x557a828, size 0x104, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x557a92c, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x557a390, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x557a444, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::LogInWithPSNRequest*  obj) ;

/// @brief Method get_AuthorizationCode, addr 0x557a75c, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_AuthorizationCode() ;

/// @brief Method set_AuthorizationCode, addr 0x557a68c, size 0xd0, virtual false, abstract: false, final false
inline void set_AuthorizationCode(::StringW  value) ;

/// @brief Method swigRelease, addr 0x557a484, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::LogInWithPSNRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogInWithPSNRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogInWithPSNRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LogInWithPSNRequest(LogInWithPSNRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogInWithPSNRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogInWithPSNRequest(LogInWithPSNRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9280};

/// @brief Field swigCPtr, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LogInWithPSNRequest, ___swigCPtr) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LogInWithPSNRequest) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
