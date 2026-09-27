#pragma once
// IWYU pragma private; include "GlobalNamespace/ListMothershipTitleDataRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequestShared_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ListMothershipTitleDataRequest)
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
class ListMothershipTitleDataRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ListMothershipTitleDataRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ListMothershipTitleDataRequest*, "", "ListMothershipTitleDataRequest");
// Dependencies MothershipRequestShared, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: ListMothershipTitleDataRequest
class CORDL_TYPE ListMothershipTitleDataRequest : public ::GlobalNamespace::MothershipRequestShared {
public:
// Declarations
 __declspec(property(get=get_deployment_id, put=set_deployment_id)) ::StringW  deployment_id;

 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

 __declspec(property(get=get_keys, put=set_keys)) ::GlobalNamespace::StringVector*  keys;

/// @brief Field swigCPtr, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Method Dispose, addr 0x5468d18, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::ListMothershipTitleDataRequest* New_ctor() ;

static inline ::GlobalNamespace::ListMothershipTitleDataRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5468e84, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5469690, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5468b88, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5468c3c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::ListMothershipTitleDataRequest*  obj) ;

/// @brief Method get_deployment_id, addr 0x54693c0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_deployment_id() ;

/// @brief Method get_env_id, addr 0x5469214, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_keys, addr 0x5469584, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringVector* get_keys() ;

/// @brief Method get_title_id, addr 0x5469068, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method set_deployment_id, addr 0x54692e8, size 0xd8, virtual false, abstract: false, final false
inline void set_deployment_id(::StringW  value) ;

/// @brief Method set_env_id, addr 0x546913c, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_keys, addr 0x5469494, size 0xf0, virtual false, abstract: false, final false
inline void set_keys(::GlobalNamespace::StringVector*  value) ;

/// @brief Method set_title_id, addr 0x5468f90, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5468c7c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::ListMothershipTitleDataRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListMothershipTitleDataRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListMothershipTitleDataRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListMothershipTitleDataRequest(ListMothershipTitleDataRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListMothershipTitleDataRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListMothershipTitleDataRequest(ListMothershipTitleDataRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9205};

/// @brief Field swigCPtr, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ListMothershipTitleDataRequest, ___swigCPtr) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ListMothershipTitleDataRequest) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
