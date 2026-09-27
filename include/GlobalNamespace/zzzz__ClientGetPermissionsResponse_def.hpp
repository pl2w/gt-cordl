#pragma once
// IWYU pragma private; include "GlobalNamespace/ClientGetPermissionsResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ClientGetPermissionsResponse)
namespace GlobalNamespace {
class MothershipResponse;
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
class ClientGetPermissionsResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ClientGetPermissionsResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ClientGetPermissionsResponse*, "", "ClientGetPermissionsResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: ClientGetPermissionsResponse
class CORDL_TYPE ClientGetPermissionsResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_Results, put=set_Results)) ::GlobalNamespace::StringVector*  Results;

 __declspec(property(get=get_Warnings, put=set_Warnings)) ::StringW  Warnings;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x527be5c, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x527c0ac, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ClientGetPermissionsResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::ClientGetPermissionsResponse* New_ctor() ;

static inline ::GlobalNamespace::ClientGetPermissionsResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x527bfc8, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x527c56c, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x527bccc, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x527bd80, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::ClientGetPermissionsResponse*  obj) ;

/// @brief Method get_Results, addr 0x527c2b4, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringVector* get_Results() ;

/// @brief Method get_Warnings, addr 0x527c498, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_Warnings() ;

/// @brief Method set_Results, addr 0x527c1c4, size 0xf0, virtual false, abstract: false, final false
inline void set_Results(::GlobalNamespace::StringVector*  value) ;

/// @brief Method set_Warnings, addr 0x527c3c0, size 0xd8, virtual false, abstract: false, final false
inline void set_Warnings(::StringW  value) ;

/// @brief Method swigRelease, addr 0x527bdc0, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::ClientGetPermissionsResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClientGetPermissionsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClientGetPermissionsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClientGetPermissionsResponse(ClientGetPermissionsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClientGetPermissionsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClientGetPermissionsResponse(ClientGetPermissionsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8833};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ClientGetPermissionsResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ClientGetPermissionsResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
