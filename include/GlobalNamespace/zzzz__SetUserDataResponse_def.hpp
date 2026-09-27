#pragma once
// IWYU pragma private; include "GlobalNamespace/SetUserDataResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SetUserDataResponse)
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
class SetUserDataResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SetUserDataResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SetUserDataResponse*, "", "SetUserDataResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetUserDataResponse
class CORDL_TYPE SetUserDataResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_generation, put=set_generation)) int32_t  generation;

 __declspec(property(get=get_id, put=set_id)) ::StringW  id;

 __declspec(property(get=get_key_name, put=set_key_name)) ::StringW  key_name;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_user_id, put=set_user_id)) ::StringW  user_id;

/// @brief Method Dispose, addr 0x53349b4, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x5334c04, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SetUserDataResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::SetUserDataResponse* New_ctor() ;

static inline ::GlobalNamespace::SetUserDataResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x5334b20, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53353cc, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5334824, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53348d8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::SetUserDataResponse*  obj) ;

/// @brief Method get_generation, addr 0x53352f8, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_generation() ;

/// @brief Method get_id, addr 0x5334df4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_id() ;

/// @brief Method get_key_name, addr 0x5334fa0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_key_name() ;

/// @brief Method get_user_id, addr 0x533514c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_user_id() ;

/// @brief Method set_generation, addr 0x5335220, size 0xd8, virtual false, abstract: false, final false
inline void set_generation(int32_t  value) ;

/// @brief Method set_id, addr 0x5334d1c, size 0xd8, virtual false, abstract: false, final false
inline void set_id(::StringW  value) ;

/// @brief Method set_key_name, addr 0x5334ec8, size 0xd8, virtual false, abstract: false, final false
inline void set_key_name(::StringW  value) ;

/// @brief Method set_user_id, addr 0x5335074, size 0xd8, virtual false, abstract: false, final false
inline void set_user_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5334918, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::SetUserDataResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetUserDataResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetUserDataResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetUserDataResponse(SetUserDataResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetUserDataResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetUserDataResponse(SetUserDataResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9535};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SetUserDataResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SetUserDataResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
