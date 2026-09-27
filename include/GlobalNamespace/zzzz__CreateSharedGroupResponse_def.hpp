#pragma once
// IWYU pragma private; include "GlobalNamespace/CreateSharedGroupResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CreateSharedGroupResponse)
namespace GlobalNamespace {
class MothershipResponse;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class CreateSharedGroupResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CreateSharedGroupResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreateSharedGroupResponse*, "", "CreateSharedGroupResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreateSharedGroupResponse
class CORDL_TYPE CreateSharedGroupResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_SharedGroupId, put=set_SharedGroupId)) ::StringW  SharedGroupId;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x53d045c, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x53d06ac, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CreateSharedGroupResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::CreateSharedGroupResponse* New_ctor() ;

static inline ::GlobalNamespace::CreateSharedGroupResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x53d05c8, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53d0970, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53d02cc, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53d0380, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::CreateSharedGroupResponse*  obj) ;

/// @brief Method get_SharedGroupId, addr 0x53d089c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_SharedGroupId() ;

/// @brief Method set_SharedGroupId, addr 0x53d07c4, size 0xd8, virtual false, abstract: false, final false
inline void set_SharedGroupId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x53d03c0, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::CreateSharedGroupResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateSharedGroupResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateSharedGroupResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateSharedGroupResponse(CreateSharedGroupResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateSharedGroupResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateSharedGroupResponse(CreateSharedGroupResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8910};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreateSharedGroupResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreateSharedGroupResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
