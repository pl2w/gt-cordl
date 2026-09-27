#pragma once
// IWYU pragma private; include "GlobalNamespace/RemoveSharedGroupMembersRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequestShared_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RemoveSharedGroupMembersRequest)
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
class RemoveSharedGroupMembersRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RemoveSharedGroupMembersRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RemoveSharedGroupMembersRequest*, "", "RemoveSharedGroupMembersRequest");
// Dependencies MothershipRequestShared, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: RemoveSharedGroupMembersRequest
class CORDL_TYPE RemoveSharedGroupMembersRequest : public ::GlobalNamespace::MothershipRequestShared {
public:
// Declarations
 __declspec(property(get=get_mothershipIds, put=set_mothershipIds)) ::GlobalNamespace::StringVector*  mothershipIds;

 __declspec(property(get=get_sharedGroupId, put=set_sharedGroupId)) ::StringW  sharedGroupId;

/// @brief Field swigCPtr, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x5315840, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::RemoveSharedGroupMembersRequest* New_ctor() ;

static inline ::GlobalNamespace::RemoveSharedGroupMembersRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5315d54, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5315e60, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53156b0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5315764, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::RemoveSharedGroupMembersRequest*  obj) ;

/// @brief Method get_mothershipIds, addr 0x5315c48, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringVector* get_mothershipIds() ;

/// @brief Method get_sharedGroupId, addr 0x5315a84, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_sharedGroupId() ;

/// @brief Method set_mothershipIds, addr 0x5315b58, size 0xf0, virtual false, abstract: false, final false
inline void set_mothershipIds(::GlobalNamespace::StringVector*  value) ;

/// @brief Method set_sharedGroupId, addr 0x53159ac, size 0xd8, virtual false, abstract: false, final false
inline void set_sharedGroupId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x53157a4, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::RemoveSharedGroupMembersRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoveSharedGroupMembersRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoveSharedGroupMembersRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoveSharedGroupMembersRequest(RemoveSharedGroupMembersRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoveSharedGroupMembersRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoveSharedGroupMembersRequest(RemoveSharedGroupMembersRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9469};

/// @brief Field swigCPtr, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RemoveSharedGroupMembersRequest, ___swigCPtr) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RemoveSharedGroupMembersRequest) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
