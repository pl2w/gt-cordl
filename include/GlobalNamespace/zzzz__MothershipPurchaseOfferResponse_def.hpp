#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipPurchaseOfferResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipPurchaseOfferResponse)
namespace GlobalNamespace {
class MothershipResponse;
}
namespace GlobalNamespace {
class PurchaseChangesMap;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipPurchaseOfferResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipPurchaseOfferResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipPurchaseOfferResponse*, "", "MothershipPurchaseOfferResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipPurchaseOfferResponse
class CORDL_TYPE MothershipPurchaseOfferResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_Changes, put=set_Changes)) ::GlobalNamespace::PurchaseChangesMap*  Changes;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x52b1fe0, size 0x15c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x52b2220, size 0x114, virtual false, abstract: false, final false
static inline ::GlobalNamespace::MothershipPurchaseOfferResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::MothershipPurchaseOfferResponse* New_ctor() ;

static inline ::GlobalNamespace::MothershipPurchaseOfferResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x52b213c, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52b2530, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52b1e58, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52b1f08, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipPurchaseOfferResponse*  obj) ;

/// @brief Method get_Changes, addr 0x52b2424, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::PurchaseChangesMap* get_Changes() ;

/// @brief Method set_Changes, addr 0x52b2334, size 0xf0, virtual false, abstract: false, final false
inline void set_Changes(::GlobalNamespace::PurchaseChangesMap*  value) ;

/// @brief Method swigRelease, addr 0x52b1f48, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipPurchaseOfferResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipPurchaseOfferResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipPurchaseOfferResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipPurchaseOfferResponse(MothershipPurchaseOfferResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipPurchaseOfferResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipPurchaseOfferResponse(MothershipPurchaseOfferResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9350};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipPurchaseOfferResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipPurchaseOfferResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
