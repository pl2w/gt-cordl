#pragma once
// IWYU pragma private; include "GlobalNamespace/SetUserDataRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequestShared_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SetUserDataRequest)
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
class SetUserDataRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SetUserDataRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SetUserDataRequest*, "", "SetUserDataRequest");
// Dependencies MothershipRequestShared, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetUserDataRequest
class CORDL_TYPE SetUserDataRequest : public ::GlobalNamespace::MothershipRequestShared {
public:
// Declarations
 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

 __declspec(property(get=get_generation, put=set_generation)) int32_t  generation;

 __declspec(property(get=get_key_name, put=set_key_name)) ::StringW  key_name;

/// @brief Field swigCPtr, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

 __declspec(property(get=get_user_id, put=set_user_id)) ::StringW  user_id;

 __declspec(property(get=get_value, put=set_value)) ::StringW  value;

/// @brief Method Dispose, addr 0x5333ad8, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::SetUserDataRequest* New_ctor() ;

static inline ::GlobalNamespace::SetUserDataRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5333c44, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5334758, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5333948, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53339fc, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::SetUserDataRequest*  obj) ;

/// @brief Method get_env_id, addr 0x5333fd4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_generation, addr 0x5334684, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_generation() ;

/// @brief Method get_key_name, addr 0x533432c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_key_name() ;

/// @brief Method get_title_id, addr 0x5333e28, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method get_user_id, addr 0x5334180, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_user_id() ;

/// @brief Method get_value, addr 0x53344d8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_value() ;

/// @brief Method set_env_id, addr 0x5333efc, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_generation, addr 0x53345ac, size 0xd8, virtual false, abstract: false, final false
inline void set_generation(int32_t  value) ;

/// @brief Method set_key_name, addr 0x5334254, size 0xd8, virtual false, abstract: false, final false
inline void set_key_name(::StringW  value) ;

/// @brief Method set_title_id, addr 0x5333d50, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method set_user_id, addr 0x53340a8, size 0xd8, virtual false, abstract: false, final false
inline void set_user_id(::StringW  value) ;

/// @brief Method set_value, addr 0x5334400, size 0xd8, virtual false, abstract: false, final false
inline void set_value(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5333a3c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::SetUserDataRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetUserDataRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetUserDataRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetUserDataRequest(SetUserDataRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetUserDataRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetUserDataRequest(SetUserDataRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9534};

/// @brief Field swigCPtr, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SetUserDataRequest, ___swigCPtr) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SetUserDataRequest) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
