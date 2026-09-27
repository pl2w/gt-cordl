#pragma once
// IWYU pragma private; include "GlobalNamespace/FinalizeApplePurchaseRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FinalizeApplePurchaseRequest)
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
class FinalizeApplePurchaseRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FinalizeApplePurchaseRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FinalizeApplePurchaseRequest*, "", "FinalizeApplePurchaseRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: FinalizeApplePurchaseRequest
class CORDL_TYPE FinalizeApplePurchaseRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_AppleTransactionId, put=set_AppleTransactionId)) ::StringW  AppleTransactionId;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x53f85cc, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::FinalizeApplePurchaseRequest* New_ctor() ;

static inline ::GlobalNamespace::FinalizeApplePurchaseRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x53f8738, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53f89f0, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53f843c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53f84f0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::FinalizeApplePurchaseRequest*  obj) ;

/// @brief Method get_AppleTransactionId, addr 0x53f891c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_AppleTransactionId() ;

/// @brief Method set_AppleTransactionId, addr 0x53f8844, size 0xd8, virtual false, abstract: false, final false
inline void set_AppleTransactionId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x53f8530, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::FinalizeApplePurchaseRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FinalizeApplePurchaseRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FinalizeApplePurchaseRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FinalizeApplePurchaseRequest(FinalizeApplePurchaseRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FinalizeApplePurchaseRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FinalizeApplePurchaseRequest(FinalizeApplePurchaseRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8994};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FinalizeApplePurchaseRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FinalizeApplePurchaseRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
