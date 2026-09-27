#pragma once
// IWYU pragma private; include "GlobalNamespace/GameSessionConnectionInformation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameSessionConnectionInformation)
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
class GameSessionConnectionInformation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameSessionConnectionInformation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameSessionConnectionInformation*, "", "GameSessionConnectionInformation");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameSessionConnectionInformation
class CORDL_TYPE GameSessionConnectionInformation : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_host, put=set_host)) ::StringW  host;

/// @brief Field host_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_host_name, put=setStaticF_host_name)) ::StringW  host_name;

 __declspec(property(get=get_port, put=set_port)) int32_t  port;

/// @brief Field port_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_port_name, put=setStaticF_port_name)) ::StringW  port_name;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x54008b0, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x54009ac, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x540091c, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::GameSessionConnectionInformation* New_ctor() ;

static inline ::GlobalNamespace::GameSessionConnectionInformation* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5400e50, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5400778, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x54007d8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::GameSessionConnectionInformation*  obj) ;

static inline ::StringW getStaticF_host_name() ;

static inline ::StringW getStaticF_port_name() ;

/// @brief Method get_host, addr 0x5400bd0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_host() ;

/// @brief Method get_port, addr 0x5400d7c, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_port() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_host_name(::StringW  value) ;

static inline void setStaticF_port_name(::StringW  value) ;

/// @brief Method set_host, addr 0x5400af8, size 0xd8, virtual false, abstract: false, final false
inline void set_host(::StringW  value) ;

/// @brief Method set_port, addr 0x5400ca4, size 0xd8, virtual false, abstract: false, final false
inline void set_port(int32_t  value) ;

/// @brief Method swigRelease, addr 0x5400818, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::GameSessionConnectionInformation*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameSessionConnectionInformation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameSessionConnectionInformation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameSessionConnectionInformation(GameSessionConnectionInformation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameSessionConnectionInformation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameSessionConnectionInformation(GameSessionConnectionInformation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9010};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameSessionConnectionInformation, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSessionConnectionInformation, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameSessionConnectionInformation) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
