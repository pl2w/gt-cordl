#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipGetLastTransactionRunRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequestShared_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipGetLastTransactionRunRequest)
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
class MothershipGetLastTransactionRunRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipGetLastTransactionRunRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipGetLastTransactionRunRequest*, "", "MothershipGetLastTransactionRunRequest");
// Dependencies MothershipRequestShared, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipGetLastTransactionRunRequest
class CORDL_TYPE MothershipGetLastTransactionRunRequest : public ::GlobalNamespace::MothershipRequestShared {
public:
// Declarations
 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

/// @brief Field swigCPtr, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

 __declspec(property(get=get_transaction_id, put=set_transaction_id)) ::StringW  transaction_id;

 __declspec(property(get=get_user_id, put=set_user_id)) ::StringW  user_id;

/// @brief Method Dispose, addr 0x52a20fc, size 0x15c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::MothershipGetLastTransactionRunRequest* New_ctor() ;

static inline ::GlobalNamespace::MothershipGetLastTransactionRunRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x52a2258, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52a2a14, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52a1f74, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52a2024, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipGetLastTransactionRunRequest*  obj) ;

/// @brief Method get_env_id, addr 0x52a2940, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_title_id, addr 0x52a2794, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method get_transaction_id, addr 0x52a243c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_transaction_id() ;

/// @brief Method get_user_id, addr 0x52a25e8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_user_id() ;

/// @brief Method set_env_id, addr 0x52a2868, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_title_id, addr 0x52a26bc, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method set_transaction_id, addr 0x52a2364, size 0xd8, virtual false, abstract: false, final false
inline void set_transaction_id(::StringW  value) ;

/// @brief Method set_user_id, addr 0x52a2510, size 0xd8, virtual false, abstract: false, final false
inline void set_user_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52a2064, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipGetLastTransactionRunRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipGetLastTransactionRunRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipGetLastTransactionRunRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipGetLastTransactionRunRequest(MothershipGetLastTransactionRunRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipGetLastTransactionRunRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipGetLastTransactionRunRequest(MothershipGetLastTransactionRunRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9327};

/// @brief Field swigCPtr, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipGetLastTransactionRunRequest, ___swigCPtr) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipGetLastTransactionRunRequest) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
