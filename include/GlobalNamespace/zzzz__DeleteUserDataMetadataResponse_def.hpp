#pragma once
// IWYU pragma private; include "GlobalNamespace/DeleteUserDataMetadataResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DeleteUserDataMetadataResponse)
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
class DeleteUserDataMetadataResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DeleteUserDataMetadataResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DeleteUserDataMetadataResponse*, "", "DeleteUserDataMetadataResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeleteUserDataMetadataResponse
class CORDL_TYPE DeleteUserDataMetadataResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_success, put=set_success)) bool  success;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x53f2d84, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x53f2fd4, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::DeleteUserDataMetadataResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::DeleteUserDataMetadataResponse* New_ctor() ;

static inline ::GlobalNamespace::DeleteUserDataMetadataResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x53f2ef0, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53f3298, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53f2bf4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53f2ca8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::DeleteUserDataMetadataResponse*  obj) ;

/// @brief Method get_success, addr 0x53f31c4, size 0xd4, virtual false, abstract: false, final false
inline bool get_success() ;

/// @brief Method set_success, addr 0x53f30ec, size 0xd8, virtual false, abstract: false, final false
inline void set_success(bool  value) ;

/// @brief Method swigRelease, addr 0x53f2ce8, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::DeleteUserDataMetadataResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeleteUserDataMetadataResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeleteUserDataMetadataResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeleteUserDataMetadataResponse(DeleteUserDataMetadataResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeleteUserDataMetadataResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeleteUserDataMetadataResponse(DeleteUserDataMetadataResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8983};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeleteUserDataMetadataResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DeleteUserDataMetadataResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
