#pragma once
// IWYU pragma private; include "GlobalNamespace/LogInWithGoogleRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LoginRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LogInWithGoogleRequest)
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
class LogInWithGoogleRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LogInWithGoogleRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LogInWithGoogleRequest*, "", "LogInWithGoogleRequest");
// Dependencies LoginRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: LogInWithGoogleRequest
class CORDL_TYPE LogInWithGoogleRequest : public ::GlobalNamespace::LoginRequest {
public:
// Declarations
 __declspec(property(get=get_Token, put=set_Token)) ::StringW  Token;

 __declspec(property(get=get_UserId, put=set_UserId)) ::StringW  UserId;

/// @brief Field swigCPtr, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x548dc08, size 0x168, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::LogInWithGoogleRequest* New_ctor() ;

static inline ::GlobalNamespace::LogInWithGoogleRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x548e0c8, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x548e1d4, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x548da7c, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x548db2c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::LogInWithGoogleRequest*  obj) ;

/// @brief Method get_Token, addr 0x548de48, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_Token() ;

/// @brief Method get_UserId, addr 0x548dff4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_UserId() ;

/// @brief Method set_Token, addr 0x548dd70, size 0xd8, virtual false, abstract: false, final false
inline void set_Token(::StringW  value) ;

/// @brief Method set_UserId, addr 0x548df1c, size 0xd8, virtual false, abstract: false, final false
inline void set_UserId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x548db6c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::LogInWithGoogleRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogInWithGoogleRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogInWithGoogleRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LogInWithGoogleRequest(LogInWithGoogleRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogInWithGoogleRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogInWithGoogleRequest(LogInWithGoogleRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9277};

/// @brief Field swigCPtr, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LogInWithGoogleRequest, ___swigCPtr) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LogInWithGoogleRequest) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
