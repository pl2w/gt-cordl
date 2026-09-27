#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerCreateBanResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ServerCreateBanResponse)
namespace GlobalNamespace {
class MothershipBanDataVector;
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
class ServerCreateBanResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ServerCreateBanResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ServerCreateBanResponse*, "", "ServerCreateBanResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: ServerCreateBanResponse
class CORDL_TYPE ServerCreateBanResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_Results, put=set_Results)) ::GlobalNamespace::MothershipBanDataVector*  Results;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x53244a8, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x53248f4, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ServerCreateBanResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::ServerCreateBanResponse* New_ctor() ;

static inline ::GlobalNamespace::ServerCreateBanResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x5324810, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5324a0c, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5324318, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53243cc, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::ServerCreateBanResponse*  obj) ;

/// @brief Method get_Results, addr 0x5324704, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipBanDataVector* get_Results() ;

/// @brief Method set_Results, addr 0x5324614, size 0xf0, virtual false, abstract: false, final false
inline void set_Results(::GlobalNamespace::MothershipBanDataVector*  value) ;

/// @brief Method swigRelease, addr 0x532440c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::ServerCreateBanResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServerCreateBanResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServerCreateBanResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerCreateBanResponse(ServerCreateBanResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerCreateBanResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerCreateBanResponse(ServerCreateBanResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9501};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ServerCreateBanResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ServerCreateBanResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
