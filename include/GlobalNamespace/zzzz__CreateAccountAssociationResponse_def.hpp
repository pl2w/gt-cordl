#pragma once
// IWYU pragma private; include "GlobalNamespace/CreateAccountAssociationResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CreateAccountAssociationResponse)
namespace GlobalNamespace {
class AccountAssociationVector;
}
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
class CreateAccountAssociationResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CreateAccountAssociationResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreateAccountAssociationResponse*, "", "CreateAccountAssociationResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreateAccountAssociationResponse
class CORDL_TYPE CreateAccountAssociationResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_Results, put=set_Results)) ::GlobalNamespace::AccountAssociationVector*  Results;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x52826d8, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x5282b24, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CreateAccountAssociationResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::CreateAccountAssociationResponse* New_ctor() ;

static inline ::GlobalNamespace::CreateAccountAssociationResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x5282844, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5282c3c, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5282548, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52825fc, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::CreateAccountAssociationResponse*  obj) ;

/// @brief Method get_Results, addr 0x5282a18, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::AccountAssociationVector* get_Results() ;

/// @brief Method set_Results, addr 0x5282928, size 0xf0, virtual false, abstract: false, final false
inline void set_Results(::GlobalNamespace::AccountAssociationVector*  value) ;

/// @brief Method swigRelease, addr 0x528263c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::CreateAccountAssociationResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateAccountAssociationResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateAccountAssociationResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateAccountAssociationResponse(CreateAccountAssociationResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateAccountAssociationResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateAccountAssociationResponse(CreateAccountAssociationResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8843};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreateAccountAssociationResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreateAccountAssociationResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
