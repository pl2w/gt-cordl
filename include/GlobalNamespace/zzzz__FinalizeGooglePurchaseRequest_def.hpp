#pragma once
// IWYU pragma private; include "GlobalNamespace/FinalizeGooglePurchaseRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FinalizeGooglePurchaseRequest)
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
class FinalizeGooglePurchaseRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FinalizeGooglePurchaseRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FinalizeGooglePurchaseRequest*, "", "FinalizeGooglePurchaseRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: FinalizeGooglePurchaseRequest
class CORDL_TYPE FinalizeGooglePurchaseRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_PurchaseToken, put=set_PurchaseToken)) ::StringW  PurchaseToken;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x53fa604, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::FinalizeGooglePurchaseRequest* New_ctor() ;

static inline ::GlobalNamespace::FinalizeGooglePurchaseRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x53fa770, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53faa28, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53fa474, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53fa528, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::FinalizeGooglePurchaseRequest*  obj) ;

/// @brief Method get_PurchaseToken, addr 0x53fa954, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_PurchaseToken() ;

/// @brief Method set_PurchaseToken, addr 0x53fa87c, size 0xd8, virtual false, abstract: false, final false
inline void set_PurchaseToken(::StringW  value) ;

/// @brief Method swigRelease, addr 0x53fa568, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::FinalizeGooglePurchaseRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FinalizeGooglePurchaseRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FinalizeGooglePurchaseRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FinalizeGooglePurchaseRequest(FinalizeGooglePurchaseRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FinalizeGooglePurchaseRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FinalizeGooglePurchaseRequest(FinalizeGooglePurchaseRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8999};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FinalizeGooglePurchaseRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FinalizeGooglePurchaseRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
