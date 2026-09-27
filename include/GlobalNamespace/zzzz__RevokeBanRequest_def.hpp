#pragma once
// IWYU pragma private; include "GlobalNamespace/RevokeBanRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RevokeBanRequest)
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
class RevokeBanRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RevokeBanRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RevokeBanRequest*, "", "RevokeBanRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: RevokeBanRequest
class CORDL_TYPE RevokeBanRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_ban_id, put=set_ban_id)) ::StringW  ban_id;

 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Method Dispose, addr 0x53195e8, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::RevokeBanRequest* New_ctor() ;

static inline ::GlobalNamespace::RevokeBanRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5319754, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5319d64, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5319458, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x531950c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::RevokeBanRequest*  obj) ;

/// @brief Method get_ban_id, addr 0x5319c90, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_ban_id() ;

/// @brief Method get_env_id, addr 0x5319ae4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_title_id, addr 0x5319938, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method set_ban_id, addr 0x5319bb8, size 0xd8, virtual false, abstract: false, final false
inline void set_ban_id(::StringW  value) ;

/// @brief Method set_env_id, addr 0x5319a0c, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_title_id, addr 0x5319860, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x531954c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::RevokeBanRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RevokeBanRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RevokeBanRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RevokeBanRequest(RevokeBanRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RevokeBanRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RevokeBanRequest(RevokeBanRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9478};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RevokeBanRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RevokeBanRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
