#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipPlayerInventorySummary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipPlayerInventorySummary)
namespace GlobalNamespace {
class InventoryItemSummaryVector;
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
class MothershipPlayerInventorySummary;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipPlayerInventorySummary*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipPlayerInventorySummary*, "", "MothershipPlayerInventorySummary");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipPlayerInventorySummary
class CORDL_TYPE MothershipPlayerInventorySummary : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_entitlements, put=set_entitlements)) ::GlobalNamespace::InventoryItemSummaryVector*  entitlements;

 __declspec(property(get=get_isPrimary, put=set_isPrimary)) bool  isPrimary;

 __declspec(property(get=get_platform, put=set_platform)) ::StringW  platform;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x52b0548, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52b0644, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52b05b4, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipPlayerInventorySummary* New_ctor() ;

static inline ::GlobalNamespace::MothershipPlayerInventorySummary* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromString, addr 0x52b0ce4, size 0xe4, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  string_) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52b0dc8, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52b0410, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52b0470, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipPlayerInventorySummary*  obj) ;

/// @brief Method get_entitlements, addr 0x52b0bd8, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InventoryItemSummaryVector* get_entitlements() ;

/// @brief Method get_isPrimary, addr 0x52b0a14, size 0xd4, virtual false, abstract: false, final false
inline bool get_isPrimary() ;

/// @brief Method get_platform, addr 0x52b0868, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_platform() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_entitlements, addr 0x52b0ae8, size 0xf0, virtual false, abstract: false, final false
inline void set_entitlements(::GlobalNamespace::InventoryItemSummaryVector*  value) ;

/// @brief Method set_isPrimary, addr 0x52b093c, size 0xd8, virtual false, abstract: false, final false
inline void set_isPrimary(bool  value) ;

/// @brief Method set_platform, addr 0x52b0790, size 0xd8, virtual false, abstract: false, final false
inline void set_platform(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52b04b0, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipPlayerInventorySummary*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipPlayerInventorySummary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipPlayerInventorySummary", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipPlayerInventorySummary(MothershipPlayerInventorySummary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipPlayerInventorySummary", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipPlayerInventorySummary(MothershipPlayerInventorySummary const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9346};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipPlayerInventorySummary, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipPlayerInventorySummary, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipPlayerInventorySummary) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
