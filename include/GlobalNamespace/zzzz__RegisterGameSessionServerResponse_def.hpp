#pragma once
// IWYU pragma private; include "GlobalNamespace/RegisterGameSessionServerResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RegisterGameSessionServerResponse)
namespace GlobalNamespace {
class GameSession;
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
class RegisterGameSessionServerResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RegisterGameSessionServerResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RegisterGameSessionServerResponse*, "", "RegisterGameSessionServerResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: RegisterGameSessionServerResponse
class CORDL_TYPE RegisterGameSessionServerResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_Result, put=set_Result)) ::GlobalNamespace::GameSession*  Result;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x531323c, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x531348c, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::RegisterGameSessionServerResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::RegisterGameSessionServerResponse* New_ctor() ;

static inline ::GlobalNamespace::RegisterGameSessionServerResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x53133a8, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53137c4, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53130ac, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5313160, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::RegisterGameSessionServerResponse*  obj) ;

/// @brief Method get_Result, addr 0x53136b8, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameSession* get_Result() ;

/// @brief Method set_Result, addr 0x53135a4, size 0x114, virtual false, abstract: false, final false
inline void set_Result(::GlobalNamespace::GameSession*  value) ;

/// @brief Method swigRelease, addr 0x53131a0, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::RegisterGameSessionServerResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RegisterGameSessionServerResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RegisterGameSessionServerResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RegisterGameSessionServerResponse(RegisterGameSessionServerResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegisterGameSessionServerResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegisterGameSessionServerResponse(RegisterGameSessionServerResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9463};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RegisterGameSessionServerResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RegisterGameSessionServerResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
