#pragma once
// IWYU pragma private; include "GlobalNamespace/CreateServerKeyResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CreateServerKeyResponse)
namespace GlobalNamespace {
class MothershipResponse;
}
namespace GlobalNamespace {
class MothershipServerKey;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class CreateServerKeyResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CreateServerKeyResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreateServerKeyResponse*, "", "CreateServerKeyResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreateServerKeyResponse
class CORDL_TYPE CreateServerKeyResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_serverKey, put=set_serverKey)) ::GlobalNamespace::MothershipServerKey*  serverKey;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x53cd7fc, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x53cda4c, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CreateServerKeyResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::CreateServerKeyResponse* New_ctor() ;

static inline ::GlobalNamespace::CreateServerKeyResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x53cd968, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53cdd60, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53cd66c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53cd720, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::CreateServerKeyResponse*  obj) ;

/// @brief Method get_serverKey, addr 0x53cdc54, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipServerKey* get_serverKey() ;

/// @brief Method set_serverKey, addr 0x53cdb64, size 0xf0, virtual false, abstract: false, final false
inline void set_serverKey(::GlobalNamespace::MothershipServerKey*  value) ;

/// @brief Method swigRelease, addr 0x53cd760, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::CreateServerKeyResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateServerKeyResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateServerKeyResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateServerKeyResponse(CreateServerKeyResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateServerKeyResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateServerKeyResponse(CreateServerKeyResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8903};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreateServerKeyResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreateServerKeyResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
