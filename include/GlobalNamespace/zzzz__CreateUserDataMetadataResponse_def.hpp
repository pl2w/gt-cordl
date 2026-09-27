#pragma once
// IWYU pragma private; include "GlobalNamespace/CreateUserDataMetadataResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CreateUserDataMetadataResponse)
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
class CreateUserDataMetadataResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CreateUserDataMetadataResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreateUserDataMetadataResponse*, "", "CreateUserDataMetadataResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreateUserDataMetadataResponse
class CORDL_TYPE CreateUserDataMetadataResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_id, put=set_id)) ::StringW  id;

 __declspec(property(get=get_keyName, put=set_keyName)) ::StringW  keyName;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x53da750, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x53da9a0, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CreateUserDataMetadataResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::CreateUserDataMetadataResponse* New_ctor() ;

static inline ::GlobalNamespace::CreateUserDataMetadataResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x53da8bc, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53dae10, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53da5c0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53da674, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::CreateUserDataMetadataResponse*  obj) ;

/// @brief Method get_id, addr 0x53dab90, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_id() ;

/// @brief Method get_keyName, addr 0x53dad3c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_keyName() ;

/// @brief Method set_id, addr 0x53daab8, size 0xd8, virtual false, abstract: false, final false
inline void set_id(::StringW  value) ;

/// @brief Method set_keyName, addr 0x53dac64, size 0xd8, virtual false, abstract: false, final false
inline void set_keyName(::StringW  value) ;

/// @brief Method swigRelease, addr 0x53da6b4, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::CreateUserDataMetadataResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateUserDataMetadataResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateUserDataMetadataResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateUserDataMetadataResponse(CreateUserDataMetadataResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateUserDataMetadataResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateUserDataMetadataResponse(CreateUserDataMetadataResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8930};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreateUserDataMetadataResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreateUserDataMetadataResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
