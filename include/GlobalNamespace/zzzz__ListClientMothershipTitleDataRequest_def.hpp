#pragma once
// IWYU pragma private; include "GlobalNamespace/ListClientMothershipTitleDataRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
CORDL_MODULE_EXPORT(ListClientMothershipTitleDataRequest)
namespace GlobalNamespace {
class SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t;
}
namespace GlobalNamespace {
class StringVector;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class ListClientMothershipTitleDataRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ListClientMothershipTitleDataRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ListClientMothershipTitleDataRequest*, "", "ListClientMothershipTitleDataRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: ListClientMothershipTitleDataRequest
class CORDL_TYPE ListClientMothershipTitleDataRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_keys, put=set_keys)) ::GlobalNamespace::StringVector*  keys;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x54504c8, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::ListClientMothershipTitleDataRequest* New_ctor() ;

static inline ::GlobalNamespace::ListClientMothershipTitleDataRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5450634, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x545093c, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5450338, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x54503ec, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::ListClientMothershipTitleDataRequest*  obj) ;

/// @brief Method get_keys, addr 0x5450830, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringVector* get_keys() ;

/// @brief Method set_keys, addr 0x5450740, size 0xf0, virtual false, abstract: false, final false
inline void set_keys(::GlobalNamespace::StringVector*  value) ;

/// @brief Method swigRelease, addr 0x545042c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::ListClientMothershipTitleDataRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListClientMothershipTitleDataRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListClientMothershipTitleDataRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListClientMothershipTitleDataRequest(ListClientMothershipTitleDataRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListClientMothershipTitleDataRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListClientMothershipTitleDataRequest(ListClientMothershipTitleDataRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9163};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ListClientMothershipTitleDataRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ListClientMothershipTitleDataRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
