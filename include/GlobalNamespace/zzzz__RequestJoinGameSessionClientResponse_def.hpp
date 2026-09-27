#pragma once
// IWYU pragma private; include "GlobalNamespace/RequestJoinGameSessionClientResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RequestJoinGameSessionClientResponse)
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
class RequestJoinGameSessionClientResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RequestJoinGameSessionClientResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RequestJoinGameSessionClientResponse*, "", "RequestJoinGameSessionClientResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: RequestJoinGameSessionClientResponse
class CORDL_TYPE RequestJoinGameSessionClientResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_Id, put=set_Id)) ::StringW  Id;

 __declspec(property(get=get_Ip, put=set_Ip)) ::StringW  Ip;

 __declspec(property(get=get_Port, put=set_Port)) int32_t  Port;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x5316d00, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x5316f50, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::RequestJoinGameSessionClientResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::RequestJoinGameSessionClientResponse* New_ctor() ;

static inline ::GlobalNamespace::RequestJoinGameSessionClientResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x5316e6c, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x531756c, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5316b70, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5316c24, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::RequestJoinGameSessionClientResponse*  obj) ;

/// @brief Method get_Id, addr 0x5317140, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_Id() ;

/// @brief Method get_Ip, addr 0x53172ec, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_Ip() ;

/// @brief Method get_Port, addr 0x5317498, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_Port() ;

/// @brief Method set_Id, addr 0x5317068, size 0xd8, virtual false, abstract: false, final false
inline void set_Id(::StringW  value) ;

/// @brief Method set_Ip, addr 0x5317214, size 0xd8, virtual false, abstract: false, final false
inline void set_Ip(::StringW  value) ;

/// @brief Method set_Port, addr 0x53173c0, size 0xd8, virtual false, abstract: false, final false
inline void set_Port(int32_t  value) ;

/// @brief Method swigRelease, addr 0x5316c64, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::RequestJoinGameSessionClientResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RequestJoinGameSessionClientResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RequestJoinGameSessionClientResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RequestJoinGameSessionClientResponse(RequestJoinGameSessionClientResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RequestJoinGameSessionClientResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RequestJoinGameSessionClientResponse(RequestJoinGameSessionClientResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9472};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RequestJoinGameSessionClientResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RequestJoinGameSessionClientResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
