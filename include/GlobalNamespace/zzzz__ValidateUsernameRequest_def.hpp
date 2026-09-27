#pragma once
// IWYU pragma private; include "GlobalNamespace/ValidateUsernameRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequestShared_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ValidateUsernameRequest)
namespace GlobalNamespace {
class SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class ValidateUsernameRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ValidateUsernameRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ValidateUsernameRequest*, "", "ValidateUsernameRequest");
// Dependencies MothershipRequestShared, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: ValidateUsernameRequest
class CORDL_TYPE ValidateUsernameRequest : public ::GlobalNamespace::MothershipRequestShared {
public:
// Declarations
/// @brief Field swigCPtr, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_username, put=set_username)) ::StringW  username;

/// @brief Method Dispose, addr 0x53b3a14, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::ValidateUsernameRequest* New_ctor() ;

static inline ::GlobalNamespace::ValidateUsernameRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x53b3b80, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53b3e38, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53b3884, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53b3938, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::ValidateUsernameRequest*  obj) ;

/// @brief Method get_username, addr 0x53b3d64, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_username() ;

/// @brief Method set_username, addr 0x53b3c8c, size 0xd8, virtual false, abstract: false, final false
inline void set_username(::StringW  value) ;

/// @brief Method swigRelease, addr 0x53b3978, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::ValidateUsernameRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValidateUsernameRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValidateUsernameRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValidateUsernameRequest(ValidateUsernameRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValidateUsernameRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValidateUsernameRequest(ValidateUsernameRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9735};

/// @brief Field swigCPtr, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ValidateUsernameRequest, ___swigCPtr) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ValidateUsernameRequest) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
