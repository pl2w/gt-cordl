#pragma once
// IWYU pragma private; include "GlobalNamespace/GetSharedGroupDataRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequestShared_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetSharedGroupDataRequest)
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
class GetSharedGroupDataRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GetSharedGroupDataRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GetSharedGroupDataRequest*, "", "GetSharedGroupDataRequest");
// Dependencies MothershipRequestShared, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: GetSharedGroupDataRequest
class CORDL_TYPE GetSharedGroupDataRequest : public ::GlobalNamespace::MothershipRequestShared {
public:
// Declarations
 __declspec(property(get=get_getMembers, put=set_getMembers)) bool  getMembers;

 __declspec(property(get=get_keys, put=set_keys)) ::GlobalNamespace::StringVector*  keys;

 __declspec(property(get=get_sharedGroupId, put=set_sharedGroupId)) ::StringW  sharedGroupId;

/// @brief Field swigCPtr, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x54236dc, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::GetSharedGroupDataRequest* New_ctor() ;

static inline ::GlobalNamespace::GetSharedGroupDataRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5423d9c, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5423ea8, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x542354c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5423600, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::GetSharedGroupDataRequest*  obj) ;

/// @brief Method get_getMembers, addr 0x5423acc, size 0xd4, virtual false, abstract: false, final false
inline bool get_getMembers() ;

/// @brief Method get_keys, addr 0x5423c90, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringVector* get_keys() ;

/// @brief Method get_sharedGroupId, addr 0x5423920, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_sharedGroupId() ;

/// @brief Method set_getMembers, addr 0x54239f4, size 0xd8, virtual false, abstract: false, final false
inline void set_getMembers(bool  value) ;

/// @brief Method set_keys, addr 0x5423ba0, size 0xf0, virtual false, abstract: false, final false
inline void set_keys(::GlobalNamespace::StringVector*  value) ;

/// @brief Method set_sharedGroupId, addr 0x5423848, size 0xd8, virtual false, abstract: false, final false
inline void set_sharedGroupId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5423640, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::GetSharedGroupDataRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetSharedGroupDataRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetSharedGroupDataRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetSharedGroupDataRequest(GetSharedGroupDataRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetSharedGroupDataRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetSharedGroupDataRequest(GetSharedGroupDataRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9086};

/// @brief Field swigCPtr, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GetSharedGroupDataRequest, ___swigCPtr) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GetSharedGroupDataRequest) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
