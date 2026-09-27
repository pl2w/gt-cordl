#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipHTTPResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipHTTPResponse)
namespace GlobalNamespace {
class HeadersVector;
}
namespace GlobalNamespace {
struct MothershipHTTPVerbs;
}
namespace GlobalNamespace {
class SWIGTYPE_p_void;
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
class MothershipHTTPResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipHTTPResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipHTTPResponse*, "", "MothershipHTTPResponse");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipHTTPResponse
class CORDL_TYPE MothershipHTTPResponse : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Body, put=set_Body)) ::StringW  Body;

 __declspec(property(get=get_ResponseHeaders, put=set_ResponseHeaders)) ::GlobalNamespace::HeadersVector*  ResponseHeaders;

 __declspec(property(get=get_Url, put=set_Url)) ::StringW  Url;

 __declspec(property(get=get_Verb, put=set_Verb)) ::GlobalNamespace::MothershipHTTPVerbs  Verb;

 __declspec(property(get=get_cbData, put=set_cbData)) ::GlobalNamespace::SWIGTYPE_p_void*  cbData;

 __declspec(property(get=get_statusCode, put=set_statusCode)) int32_t  statusCode;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x52a60c4, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52a61c0, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52a6130, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipHTTPResponse* New_ctor() ;

static inline ::GlobalNamespace::MothershipHTTPResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52a6db4, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52a5f8c, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52a5fec, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipHTTPResponse*  obj) ;

/// @brief Method get_Body, addr 0x52a65e0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_Body() ;

/// @brief Method get_ResponseHeaders, addr 0x52a63fc, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::HeadersVector* get_ResponseHeaders() ;

/// @brief Method get_Url, addr 0x52a678c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_Url() ;

/// @brief Method get_Verb, addr 0x52a6938, size 0xd4, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipHTTPVerbs get_Verb() ;

/// @brief Method get_cbData, addr 0x52a6ca8, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_void* get_cbData() ;

/// @brief Method get_statusCode, addr 0x52a6ae4, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_statusCode() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_Body, addr 0x52a6508, size 0xd8, virtual false, abstract: false, final false
inline void set_Body(::StringW  value) ;

/// @brief Method set_ResponseHeaders, addr 0x52a630c, size 0xf0, virtual false, abstract: false, final false
inline void set_ResponseHeaders(::GlobalNamespace::HeadersVector*  value) ;

/// @brief Method set_Url, addr 0x52a66b4, size 0xd8, virtual false, abstract: false, final false
inline void set_Url(::StringW  value) ;

/// @brief Method set_Verb, addr 0x52a6860, size 0xd8, virtual false, abstract: false, final false
inline void set_Verb(::GlobalNamespace::MothershipHTTPVerbs  value) ;

/// @brief Method set_cbData, addr 0x52a6bb8, size 0xf0, virtual false, abstract: false, final false
inline void set_cbData(::GlobalNamespace::SWIGTYPE_p_void*  value) ;

/// @brief Method set_statusCode, addr 0x52a6a0c, size 0xd8, virtual false, abstract: false, final false
inline void set_statusCode(int32_t  value) ;

/// @brief Method swigRelease, addr 0x52a602c, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipHTTPResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipHTTPResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipHTTPResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipHTTPResponse(MothershipHTTPResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipHTTPResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipHTTPResponse(MothershipHTTPResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9334};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipHTTPResponse, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipHTTPResponse, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipHTTPResponse) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
