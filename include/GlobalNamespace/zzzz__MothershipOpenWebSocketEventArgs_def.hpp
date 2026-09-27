#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipOpenWebSocketEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipOpenWebSocketEventArgs)
namespace GlobalNamespace {
class HeadersVector;
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
class MothershipOpenWebSocketEventArgs;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipOpenWebSocketEventArgs*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipOpenWebSocketEventArgs*, "", "MothershipOpenWebSocketEventArgs");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipOpenWebSocketEventArgs
class CORDL_TYPE MothershipOpenWebSocketEventArgs : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Path, put=set_Path)) ::StringW  Path;

 __declspec(property(get=get_RequestHeaders, put=set_RequestHeaders)) ::GlobalNamespace::HeadersVector*  RequestHeaders;

 __declspec(property(get=get_cbData, put=set_cbData)) ::GlobalNamespace::SWIGTYPE_p_void*  cbData;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_userData, put=set_userData)) ::System::IntPtr  userData;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x52ada8c, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52adb88, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52adaf8, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipOpenWebSocketEventArgs* New_ctor() ;

static inline ::GlobalNamespace::MothershipOpenWebSocketEventArgs* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52ae424, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52ad954, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52ad9b4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipOpenWebSocketEventArgs*  obj) ;

/// @brief Method get_Path, addr 0x52adfa8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_Path() ;

/// @brief Method get_RequestHeaders, addr 0x52addc4, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::HeadersVector* get_RequestHeaders() ;

/// @brief Method get_cbData, addr 0x52ae318, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_void* get_cbData() ;

/// @brief Method get_userData, addr 0x52ae154, size 0xd4, virtual false, abstract: false, final false
inline ::System::IntPtr get_userData() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_Path, addr 0x52aded0, size 0xd8, virtual false, abstract: false, final false
inline void set_Path(::StringW  value) ;

/// @brief Method set_RequestHeaders, addr 0x52adcd4, size 0xf0, virtual false, abstract: false, final false
inline void set_RequestHeaders(::GlobalNamespace::HeadersVector*  value) ;

/// @brief Method set_cbData, addr 0x52ae228, size 0xf0, virtual false, abstract: false, final false
inline void set_cbData(::GlobalNamespace::SWIGTYPE_p_void*  value) ;

/// @brief Method set_userData, addr 0x52ae07c, size 0xd8, virtual false, abstract: false, final false
inline void set_userData(::System::IntPtr  value) ;

/// @brief Method swigRelease, addr 0x52ad9f4, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipOpenWebSocketEventArgs*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipOpenWebSocketEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipOpenWebSocketEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipOpenWebSocketEventArgs(MothershipOpenWebSocketEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipOpenWebSocketEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipOpenWebSocketEventArgs(MothershipOpenWebSocketEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9344};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipOpenWebSocketEventArgs, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipOpenWebSocketEventArgs, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipOpenWebSocketEventArgs) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
