#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipApiClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipApiClient)
namespace GlobalNamespace {
class MothershipApiClient_MothershipActiveWebSocketInfo;
}
namespace GlobalNamespace {
class MothershipApiClient_MothershipInflightRequest;
}
namespace GlobalNamespace {
struct MothershipApiClient_WebSocketStatus;
}
namespace GlobalNamespace {
class MothershipHTTPResponse;
}
namespace GlobalNamespace {
class MothershipLogDelegateWrapper;
}
namespace GlobalNamespace {
struct MothershipLogLevel;
}
namespace GlobalNamespace {
class MothershipSendHTTPRequestDelegateWrapper;
}
namespace GlobalNamespace {
class MothershipWebSocketDelegateWrapper;
}
namespace GlobalNamespace {
class MothershipWebSocketResponse;
}
namespace GlobalNamespace {
class SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t;
}
namespace GlobalNamespace {
class SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipOpenWebSocketEventArgs_t;
}
namespace GlobalNamespace {
class SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipRequestCompleteDelegateWrapper_t;
}
namespace GlobalNamespace {
class SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipRequest_t;
}
namespace GlobalNamespace {
class SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipResponse_t;
}
namespace GlobalNamespace {
class SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipWebSocketMessageDelegateWrapper_t;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipApiClient;
}
namespace GlobalNamespace {
class MothershipApiClient_MothershipActiveWebSocketInfo;
}
namespace GlobalNamespace {
class MothershipApiClient_MothershipInflightRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipApiClient*);
MARK_REF_T(::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*);
MARK_REF_T(::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipApiClient*, "", "MothershipApiClient");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*, "", "MothershipApiClient/MothershipActiveWebSocketInfo");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*, "", "MothershipApiClient/MothershipInflightRequest");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipApiClient
class CORDL_TYPE MothershipApiClient : public ::System::Object {
public:
// Declarations
using MothershipActiveWebSocketInfo = ::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo;

using MothershipInflightRequest = ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest;

using WebSocketStatus = ::GlobalNamespace::MothershipApiClient_WebSocketStatus;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x558a904, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x558aa00, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x558a970, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method Log, addr 0x558b110, size 0xd8, virtual true, abstract: false, final false
inline void Log(::GlobalNamespace::MothershipLogLevel  level, ::StringW  message) ;

static inline ::GlobalNamespace::MothershipApiClient* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ReceiveHttpResponse, addr 0x558ad64, size 0xe8, virtual true, abstract: false, final false
inline void ReceiveHttpResponse(::GlobalNamespace::MothershipHTTPResponse*  response) ;

/// @brief Method ReceiveWebsocketMessage, addr 0x558ae4c, size 0xe8, virtual true, abstract: false, final false
inline void ReceiveWebsocketMessage(::GlobalNamespace::MothershipWebSocketResponse*  response) ;

/// @brief Method SetHttpRequestDelegate, addr 0x558ab4c, size 0x10c, virtual true, abstract: false, final false
inline void SetHttpRequestDelegate(::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper*  inSendRequestDelegate) ;

/// @brief Method SetLogDelegate, addr 0x558b004, size 0x10c, virtual true, abstract: false, final false
inline void SetLogDelegate(::GlobalNamespace::MothershipLogDelegateWrapper*  logDelegate) ;

/// @brief Method SetWebSocketDelegate, addr 0x558ac58, size 0x10c, virtual true, abstract: false, final false
inline void SetWebSocketDelegate(::GlobalNamespace::MothershipWebSocketDelegateWrapper*  inWebsocketDelegate) ;

/// @brief Method Tick, addr 0x558af34, size 0xd0, virtual true, abstract: false, final false
inline void Tick(float_t  deltaTimeInSeconds) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x558a7cc, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x558a82c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipApiClient*  obj) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method swigRelease, addr 0x558a86c, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipApiClient*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipApiClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipApiClient", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipApiClient(MothershipApiClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipApiClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipApiClient(MothershipApiClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9303};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipApiClient, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipApiClient, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipApiClient) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipApiClient/MothershipActiveWebSocketInfo
class CORDL_TYPE MothershipApiClient_MothershipActiveWebSocketInfo : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CallbackWrapper, put=set_CallbackWrapper)) ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipWebSocketMessageDelegateWrapper_t*  CallbackWrapper;

 __declspec(property(get=get_InitialRequest, put=set_InitialRequest)) ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipOpenWebSocketEventArgs_t*  InitialRequest;

 __declspec(property(get=get_Status, put=set_Status)) ::GlobalNamespace::MothershipApiClient_WebSocketStatus  Status;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x558c3ec, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x558c4e8, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x558c458, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo* New_ctor() ;

static inline ::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x558cba8, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x558c2b4, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x558c314, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*  obj) ;

/// @brief Method get_CallbackWrapper, addr 0x558caa4, size 0x104, virtual false, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipWebSocketMessageDelegateWrapper_t* get_CallbackWrapper() ;

/// @brief Method get_InitialRequest, addr 0x558c8b8, size 0x104, virtual false, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipOpenWebSocketEventArgs_t* get_InitialRequest() ;

/// @brief Method get_Status, addr 0x558c704, size 0xcc, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipApiClient_WebSocketStatus get_Status() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_CallbackWrapper, addr 0x558c9bc, size 0xe8, virtual false, abstract: false, final false
inline void set_CallbackWrapper(::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipWebSocketMessageDelegateWrapper_t*  value) ;

/// @brief Method set_InitialRequest, addr 0x558c7d0, size 0xe8, virtual false, abstract: false, final false
inline void set_InitialRequest(::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipOpenWebSocketEventArgs_t*  value) ;

/// @brief Method set_Status, addr 0x558c634, size 0xd0, virtual false, abstract: false, final false
inline void set_Status(::GlobalNamespace::MothershipApiClient_WebSocketStatus  value) ;

/// @brief Method swigRelease, addr 0x558c354, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipApiClient_MothershipActiveWebSocketInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipApiClient_MothershipActiveWebSocketInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipApiClient_MothershipActiveWebSocketInfo(MothershipApiClient_MothershipActiveWebSocketInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipApiClient_MothershipActiveWebSocketInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipApiClient_MothershipActiveWebSocketInfo(MothershipApiClient_MothershipActiveWebSocketInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9301};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipApiClient/MothershipInflightRequest
class CORDL_TYPE MothershipApiClient_MothershipInflightRequest : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CallbackWrapper, put=set_CallbackWrapper)) ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipRequestCompleteDelegateWrapper_t*  CallbackWrapper;

 __declspec(property(get=get_HttpRequest, put=set_HttpRequest)) ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t*  HttpRequest;

 __declspec(property(get=get_InternalRequest, put=set_InternalRequest)) ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipRequest_t*  InternalRequest;

 __declspec(property(get=get_ResponseInstance, put=set_ResponseInstance)) ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipResponse_t*  ResponseInstance;

 __declspec(property(get=get_playerId, put=set_playerId)) ::StringW  playerId;

 __declspec(property(get=get_retryCount, put=set_retryCount)) int32_t  retryCount;

 __declspec(property(get=get_retryTime, put=set_retryTime)) float_t  retryTime;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x558b320, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x558b41c, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x558b38c, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest* New_ctor() ;

static inline ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x558c1f0, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x558b1e8, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x558b248, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*  obj) ;

/// @brief Method get_CallbackWrapper, addr 0x558ba28, size 0x104, virtual false, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipRequestCompleteDelegateWrapper_t* get_CallbackWrapper() ;

/// @brief Method get_HttpRequest, addr 0x558b83c, size 0x104, virtual false, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* get_HttpRequest() ;

/// @brief Method get_InternalRequest, addr 0x558b650, size 0x104, virtual false, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipRequest_t* get_InternalRequest() ;

/// @brief Method get_ResponseInstance, addr 0x558bc14, size 0x104, virtual false, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipResponse_t* get_ResponseInstance() ;

/// @brief Method get_playerId, addr 0x558c124, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_playerId() ;

/// @brief Method get_retryCount, addr 0x558bde8, size 0xcc, virtual false, abstract: false, final false
inline int32_t get_retryCount() ;

/// @brief Method get_retryTime, addr 0x558bf84, size 0xd0, virtual false, abstract: false, final false
inline float_t get_retryTime() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_CallbackWrapper, addr 0x558b940, size 0xe8, virtual false, abstract: false, final false
inline void set_CallbackWrapper(::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipRequestCompleteDelegateWrapper_t*  value) ;

/// @brief Method set_HttpRequest, addr 0x558b754, size 0xe8, virtual false, abstract: false, final false
inline void set_HttpRequest(::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t*  value) ;

/// @brief Method set_InternalRequest, addr 0x558b568, size 0xe8, virtual false, abstract: false, final false
inline void set_InternalRequest(::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipRequest_t*  value) ;

/// @brief Method set_ResponseInstance, addr 0x558bb2c, size 0xe8, virtual false, abstract: false, final false
inline void set_ResponseInstance(::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipResponse_t*  value) ;

/// @brief Method set_playerId, addr 0x558c054, size 0xd0, virtual false, abstract: false, final false
inline void set_playerId(::StringW  value) ;

/// @brief Method set_retryCount, addr 0x558bd18, size 0xd0, virtual false, abstract: false, final false
inline void set_retryCount(int32_t  value) ;

/// @brief Method set_retryTime, addr 0x558beb4, size 0xd0, virtual false, abstract: false, final false
inline void set_retryTime(float_t  value) ;

/// @brief Method swigRelease, addr 0x558b288, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipApiClient_MothershipInflightRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipApiClient_MothershipInflightRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipApiClient_MothershipInflightRequest(MothershipApiClient_MothershipInflightRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipApiClient_MothershipInflightRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipApiClient_MothershipInflightRequest(MothershipApiClient_MothershipInflightRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9300};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipApiClient_MothershipInflightRequest, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipApiClient_MothershipInflightRequest, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipApiClient_MothershipInflightRequest) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
