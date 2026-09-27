#pragma once
// IWYU pragma private; include "GlobalNamespace/ListGameSessionsServerResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ListGameSessionsServerResponse)
namespace GlobalNamespace {
class GameSessionVector;
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
class ListGameSessionsServerResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ListGameSessionsServerResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ListGameSessionsServerResponse*, "", "ListGameSessionsServerResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: ListGameSessionsServerResponse
class CORDL_TYPE ListGameSessionsServerResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_Results, put=set_Results)) ::GlobalNamespace::GameSessionVector*  Results;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x54660e0, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x5466330, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ListGameSessionsServerResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::ListGameSessionsServerResponse* New_ctor() ;

static inline ::GlobalNamespace::ListGameSessionsServerResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x546624c, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5466644, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5465f50, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5466004, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::ListGameSessionsServerResponse*  obj) ;

/// @brief Method get_Results, addr 0x5466538, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameSessionVector* get_Results() ;

/// @brief Method set_Results, addr 0x5466448, size 0xf0, virtual false, abstract: false, final false
inline void set_Results(::GlobalNamespace::GameSessionVector*  value) ;

/// @brief Method swigRelease, addr 0x5466044, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::ListGameSessionsServerResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListGameSessionsServerResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListGameSessionsServerResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListGameSessionsServerResponse(ListGameSessionsServerResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListGameSessionsServerResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListGameSessionsServerResponse(ListGameSessionsServerResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9198};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ListGameSessionsServerResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ListGameSessionsServerResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
