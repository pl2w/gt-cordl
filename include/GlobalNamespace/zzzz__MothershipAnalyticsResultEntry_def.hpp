#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipAnalyticsResultEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipAnalyticsResultEntry)
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
class MothershipAnalyticsResultEntry;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipAnalyticsResultEntry*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipAnalyticsResultEntry*, "", "MothershipAnalyticsResultEntry");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipAnalyticsResultEntry
class CORDL_TYPE MothershipAnalyticsResultEntry : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_error_code, put=set_error_code)) int32_t  error_code;

 __declspec(property(get=get_error_message, put=set_error_message)) ::StringW  error_message;

 __declspec(property(get=get_event_id, put=set_event_id)) ::StringW  event_id;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x55882a0, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x558839c, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x558830c, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipAnalyticsResultEntry* New_ctor() ;

static inline ::GlobalNamespace::MothershipAnalyticsResultEntry* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x55889bc, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5588168, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x55881c8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipAnalyticsResultEntry*  obj) ;

/// @brief Method get_error_code, addr 0x5588754, size 0xcc, virtual false, abstract: false, final false
inline int32_t get_error_code() ;

/// @brief Method get_error_message, addr 0x55888f0, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_error_message() ;

/// @brief Method get_event_id, addr 0x55885b8, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_event_id() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_error_code, addr 0x5588684, size 0xd0, virtual false, abstract: false, final false
inline void set_error_code(int32_t  value) ;

/// @brief Method set_error_message, addr 0x5588820, size 0xd0, virtual false, abstract: false, final false
inline void set_error_message(::StringW  value) ;

/// @brief Method set_event_id, addr 0x55884e8, size 0xd0, virtual false, abstract: false, final false
inline void set_event_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5588208, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipAnalyticsResultEntry*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipAnalyticsResultEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipAnalyticsResultEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipAnalyticsResultEntry(MothershipAnalyticsResultEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipAnalyticsResultEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipAnalyticsResultEntry(MothershipAnalyticsResultEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9298};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipAnalyticsResultEntry, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipAnalyticsResultEntry, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipAnalyticsResultEntry) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
