#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerLookupEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayerLookupEntry)
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
class PlayerLookupEntry;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerLookupEntry*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerLookupEntry*, "", "PlayerLookupEntry");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerLookupEntry
class CORDL_TYPE PlayerLookupEntry : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ExternalId, put=set_ExternalId)) ::StringW  ExternalId;

 __declspec(property(get=get_ExternalServiceName, put=set_ExternalServiceName)) ::StringW  ExternalServiceName;

 __declspec(property(get=get_IsOrgScoped, put=set_IsOrgScoped)) bool  IsOrgScoped;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x52f182c, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52f1928, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52f1898, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::PlayerLookupEntry* New_ctor() ;

static inline ::GlobalNamespace::PlayerLookupEntry* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52f1f78, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52f16f4, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52f1754, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::PlayerLookupEntry*  obj) ;

/// @brief Method get_ExternalId, addr 0x52f1cf8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_ExternalId() ;

/// @brief Method get_ExternalServiceName, addr 0x52f1b4c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_ExternalServiceName() ;

/// @brief Method get_IsOrgScoped, addr 0x52f1ea4, size 0xd4, virtual false, abstract: false, final false
inline bool get_IsOrgScoped() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_ExternalId, addr 0x52f1c20, size 0xd8, virtual false, abstract: false, final false
inline void set_ExternalId(::StringW  value) ;

/// @brief Method set_ExternalServiceName, addr 0x52f1a74, size 0xd8, virtual false, abstract: false, final false
inline void set_ExternalServiceName(::StringW  value) ;

/// @brief Method set_IsOrgScoped, addr 0x52f1dcc, size 0xd8, virtual false, abstract: false, final false
inline void set_IsOrgScoped(bool  value) ;

/// @brief Method swigRelease, addr 0x52f1794, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::PlayerLookupEntry*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerLookupEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerLookupEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerLookupEntry(PlayerLookupEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerLookupEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerLookupEntry(PlayerLookupEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9420};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerLookupEntry, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLookupEntry, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerLookupEntry) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
