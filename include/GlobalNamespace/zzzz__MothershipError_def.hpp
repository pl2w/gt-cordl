#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipError)
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
class MothershipError;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipError*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipError*, "", "MothershipError");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipError
class CORDL_TYPE MothershipError : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Message, put=set_Message)) ::StringW  Message;

 __declspec(property(get=get_MothershipErrorCode, put=set_MothershipErrorCode)) ::StringW  MothershipErrorCode;

 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

 __declspec(property(get=get_StatusCode, put=set_StatusCode)) int32_t  StatusCode;

 __declspec(property(get=get_TraceId, put=set_TraceId)) ::StringW  TraceId;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x529f434, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x529f530, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x529f4a0, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipError* New_ctor() ;

static inline ::GlobalNamespace::MothershipError* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

static inline ::GlobalNamespace::MothershipError* New_ctor(::StringW  name) ;

static inline ::GlobalNamespace::MothershipError* New_ctor(::StringW  name, ::StringW  message) ;

static inline ::GlobalNamespace::MothershipError* New_ctor(::StringW  name, ::StringW  message, ::StringW  traceId) ;

static inline ::GlobalNamespace::MothershipError* New_ctor(::StringW  name, ::StringW  message, ::StringW  traceId, ::StringW  mothershipErrorCode) ;

static inline ::GlobalNamespace::MothershipError* New_ctor(::StringW  name, ::StringW  message, ::StringW  traceId, ::StringW  mothershipErrorCode, int32_t  statusCode) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52a0394, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x529f2fc, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method .ctor, addr 0x52a02b8, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method .ctor, addr 0x52a01d4, size 0xe4, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  message) ;

/// @brief Method .ctor, addr 0x52a00e0, size 0xf4, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  message, ::StringW  traceId) ;

/// @brief Method .ctor, addr 0x529ffe4, size 0xfc, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  message, ::StringW  traceId, ::StringW  mothershipErrorCode) ;

/// @brief Method .ctor, addr 0x529fed8, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  message, ::StringW  traceId, ::StringW  mothershipErrorCode, int32_t  statusCode) ;

/// @brief Method getCPtr, addr 0x529f35c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipError*  obj) ;

/// @brief Method get_Message, addr 0x529f900, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_Message() ;

/// @brief Method get_MothershipErrorCode, addr 0x529fc58, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_MothershipErrorCode() ;

/// @brief Method get_Name, addr 0x529f754, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_StatusCode, addr 0x529fe04, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_StatusCode() ;

/// @brief Method get_TraceId, addr 0x529faac, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_TraceId() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_Message, addr 0x529f828, size 0xd8, virtual false, abstract: false, final false
inline void set_Message(::StringW  value) ;

/// @brief Method set_MothershipErrorCode, addr 0x529fb80, size 0xd8, virtual false, abstract: false, final false
inline void set_MothershipErrorCode(::StringW  value) ;

/// @brief Method set_Name, addr 0x529f67c, size 0xd8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

/// @brief Method set_StatusCode, addr 0x529fd2c, size 0xd8, virtual false, abstract: false, final false
inline void set_StatusCode(int32_t  value) ;

/// @brief Method set_TraceId, addr 0x529f9d4, size 0xd8, virtual false, abstract: false, final false
inline void set_TraceId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x529f39c, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipError*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipError() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipError", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipError(MothershipError && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipError", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipError(MothershipError const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9323};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipError, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipError, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipError) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
