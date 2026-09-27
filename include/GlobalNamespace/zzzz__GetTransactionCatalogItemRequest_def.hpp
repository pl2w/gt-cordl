#pragma once
// IWYU pragma private; include "GlobalNamespace/GetTransactionCatalogItemRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetTransactionCatalogItemRequest)
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
class GetTransactionCatalogItemRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GetTransactionCatalogItemRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GetTransactionCatalogItemRequest*, "", "GetTransactionCatalogItemRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: GetTransactionCatalogItemRequest
class CORDL_TYPE GetTransactionCatalogItemRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_envId, put=set_envId)) ::StringW  envId;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_titleId, put=set_titleId)) ::StringW  titleId;

 __declspec(property(get=get_transactionId, put=set_transactionId)) ::StringW  transactionId;

/// @brief Method Dispose, addr 0x542a0c4, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::GetTransactionCatalogItemRequest* New_ctor() ;

static inline ::GlobalNamespace::GetTransactionCatalogItemRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x542a230, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x542a840, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5429f34, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5429fe8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::GetTransactionCatalogItemRequest*  obj) ;

/// @brief Method get_envId, addr 0x542a5c0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_envId() ;

/// @brief Method get_titleId, addr 0x542a414, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_titleId() ;

/// @brief Method get_transactionId, addr 0x542a76c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_transactionId() ;

/// @brief Method set_envId, addr 0x542a4e8, size 0xd8, virtual false, abstract: false, final false
inline void set_envId(::StringW  value) ;

/// @brief Method set_titleId, addr 0x542a33c, size 0xd8, virtual false, abstract: false, final false
inline void set_titleId(::StringW  value) ;

/// @brief Method set_transactionId, addr 0x542a694, size 0xd8, virtual false, abstract: false, final false
inline void set_transactionId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x542a028, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::GetTransactionCatalogItemRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetTransactionCatalogItemRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetTransactionCatalogItemRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetTransactionCatalogItemRequest(GetTransactionCatalogItemRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetTransactionCatalogItemRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetTransactionCatalogItemRequest(GetTransactionCatalogItemRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9101};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GetTransactionCatalogItemRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GetTransactionCatalogItemRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
