#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipRunTransactionRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequestShared_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipRunTransactionRequest)
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
class MothershipRunTransactionRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipRunTransactionRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipRunTransactionRequest*, "", "MothershipRunTransactionRequest");
// Dependencies MothershipRequestShared, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipRunTransactionRequest
class CORDL_TYPE MothershipRunTransactionRequest : public ::GlobalNamespace::MothershipRequestShared {
public:
// Declarations
 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

 __declspec(property(get=get_external_service_name, put=set_external_service_name)) ::StringW  external_service_name;

 __declspec(property(get=get_ref_id, put=set_ref_id)) ::StringW  ref_id;

/// @brief Field swigCPtr, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

 __declspec(property(get=get_transaction_id, put=set_transaction_id)) ::StringW  transaction_id;

 __declspec(property(get=get_user_id, put=set_user_id)) ::StringW  user_id;

/// @brief Method Dispose, addr 0x52bc5d0, size 0x15c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::MothershipRunTransactionRequest* New_ctor() ;

static inline ::GlobalNamespace::MothershipRunTransactionRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x52bc72c, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52bd240, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52bc448, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52bc4f8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipRunTransactionRequest*  obj) ;

/// @brief Method get_env_id, addr 0x52bcabc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_external_service_name, addr 0x52bd16c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_external_service_name() ;

/// @brief Method get_ref_id, addr 0x52bcfc0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_ref_id() ;

/// @brief Method get_title_id, addr 0x52bc910, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method get_transaction_id, addr 0x52bcc68, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_transaction_id() ;

/// @brief Method get_user_id, addr 0x52bce14, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_user_id() ;

/// @brief Method set_env_id, addr 0x52bc9e4, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_external_service_name, addr 0x52bd094, size 0xd8, virtual false, abstract: false, final false
inline void set_external_service_name(::StringW  value) ;

/// @brief Method set_ref_id, addr 0x52bcee8, size 0xd8, virtual false, abstract: false, final false
inline void set_ref_id(::StringW  value) ;

/// @brief Method set_title_id, addr 0x52bc838, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method set_transaction_id, addr 0x52bcb90, size 0xd8, virtual false, abstract: false, final false
inline void set_transaction_id(::StringW  value) ;

/// @brief Method set_user_id, addr 0x52bcd3c, size 0xd8, virtual false, abstract: false, final false
inline void set_user_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52bc538, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipRunTransactionRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipRunTransactionRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipRunTransactionRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipRunTransactionRequest(MothershipRunTransactionRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipRunTransactionRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipRunTransactionRequest(MothershipRunTransactionRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9364};

/// @brief Field swigCPtr, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipRunTransactionRequest, ___swigCPtr) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipRunTransactionRequest) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
