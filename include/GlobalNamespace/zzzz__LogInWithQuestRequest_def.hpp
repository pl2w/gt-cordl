#pragma once
// IWYU pragma private; include "GlobalNamespace/LogInWithQuestRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LoginRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LogInWithQuestRequest)
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
class LogInWithQuestRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LogInWithQuestRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LogInWithQuestRequest*, "", "LogInWithQuestRequest");
// Dependencies LoginRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: LogInWithQuestRequest
class CORDL_TYPE LogInWithQuestRequest : public ::GlobalNamespace::LoginRequest {
public:
// Declarations
 __declspec(property(get=get_nonce, put=set_nonce)) ::StringW  nonce;

/// @brief Field swigCPtr, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_userId, put=set_userId)) ::StringW  userId;

/// @brief Method Dispose, addr 0x557ab80, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::LogInWithQuestRequest* New_ctor() ;

static inline ::GlobalNamespace::LogInWithQuestRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x557b024, size 0x104, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x557b128, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x557a9f0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x557aaa4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::LogInWithQuestRequest*  obj) ;

/// @brief Method get_nonce, addr 0x557adbc, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_nonce() ;

/// @brief Method get_userId, addr 0x557af58, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_userId() ;

/// @brief Method set_nonce, addr 0x557acec, size 0xd0, virtual false, abstract: false, final false
inline void set_nonce(::StringW  value) ;

/// @brief Method set_userId, addr 0x557ae88, size 0xd0, virtual false, abstract: false, final false
inline void set_userId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x557aae4, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::LogInWithQuestRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogInWithQuestRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogInWithQuestRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LogInWithQuestRequest(LogInWithQuestRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogInWithQuestRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogInWithQuestRequest(LogInWithQuestRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9281};

/// @brief Field swigCPtr, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LogInWithQuestRequest, ___swigCPtr) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LogInWithQuestRequest) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
