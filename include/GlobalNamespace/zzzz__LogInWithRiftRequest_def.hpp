#pragma once
// IWYU pragma private; include "GlobalNamespace/LogInWithRiftRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LoginRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LogInWithRiftRequest)
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
class LogInWithRiftRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LogInWithRiftRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LogInWithRiftRequest*, "", "LogInWithRiftRequest");
// Dependencies LoginRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: LogInWithRiftRequest
class CORDL_TYPE LogInWithRiftRequest : public ::GlobalNamespace::LoginRequest {
public:
// Declarations
 __declspec(property(get=get_nonce, put=set_nonce)) ::StringW  nonce;

/// @brief Field swigCPtr, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_userId, put=set_userId)) ::StringW  userId;

/// @brief Method Dispose, addr 0x557b37c, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::LogInWithRiftRequest* New_ctor() ;

static inline ::GlobalNamespace::LogInWithRiftRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x557b820, size 0x104, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x557b924, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x557b1ec, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x557b2a0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::LogInWithRiftRequest*  obj) ;

/// @brief Method get_nonce, addr 0x557b5b8, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_nonce() ;

/// @brief Method get_userId, addr 0x557b754, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_userId() ;

/// @brief Method set_nonce, addr 0x557b4e8, size 0xd0, virtual false, abstract: false, final false
inline void set_nonce(::StringW  value) ;

/// @brief Method set_userId, addr 0x557b684, size 0xd0, virtual false, abstract: false, final false
inline void set_userId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x557b2e0, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::LogInWithRiftRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogInWithRiftRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogInWithRiftRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LogInWithRiftRequest(LogInWithRiftRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogInWithRiftRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogInWithRiftRequest(LogInWithRiftRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9282};

/// @brief Field swigCPtr, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LogInWithRiftRequest, ___swigCPtr) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LogInWithRiftRequest) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
