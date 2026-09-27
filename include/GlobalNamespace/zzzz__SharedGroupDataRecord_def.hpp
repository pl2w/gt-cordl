#pragma once
// IWYU pragma private; include "GlobalNamespace/SharedGroupDataRecord.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SharedGroupDataRecord)
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
class SharedGroupDataRecord;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SharedGroupDataRecord*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SharedGroupDataRecord*, "", "SharedGroupDataRecord");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: SharedGroupDataRecord
class CORDL_TYPE SharedGroupDataRecord : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_LastUpdated, put=set_LastUpdated)) ::StringW  LastUpdated;

 __declspec(property(get=get_LastUpdatedBy, put=set_LastUpdatedBy)) ::StringW  LastUpdatedBy;

 __declspec(property(get=get_Permission, put=set_Permission)) ::StringW  Permission;

 __declspec(property(get=get_Value, put=set_Value)) ::StringW  Value;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x5338020, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x533811c, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x533808c, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::SharedGroupDataRecord* New_ctor() ;

static inline ::GlobalNamespace::SharedGroupDataRecord* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5338268, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5337ee8, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5337f48, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::SharedGroupDataRecord*  obj) ;

/// @brief Method get_LastUpdated, addr 0x533840c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_LastUpdated() ;

/// @brief Method get_LastUpdatedBy, addr 0x53385b8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_LastUpdatedBy() ;

/// @brief Method get_Permission, addr 0x5338764, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_Permission() ;

/// @brief Method get_Value, addr 0x5338910, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_LastUpdated, addr 0x5338334, size 0xd8, virtual false, abstract: false, final false
inline void set_LastUpdated(::StringW  value) ;

/// @brief Method set_LastUpdatedBy, addr 0x53384e0, size 0xd8, virtual false, abstract: false, final false
inline void set_LastUpdatedBy(::StringW  value) ;

/// @brief Method set_Permission, addr 0x533868c, size 0xd8, virtual false, abstract: false, final false
inline void set_Permission(::StringW  value) ;

/// @brief Method set_Value, addr 0x5338838, size 0xd8, virtual false, abstract: false, final false
inline void set_Value(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5337f88, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::SharedGroupDataRecord*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedGroupDataRecord() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedGroupDataRecord", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedGroupDataRecord(SharedGroupDataRecord && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedGroupDataRecord", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedGroupDataRecord(SharedGroupDataRecord const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9539};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SharedGroupDataRecord, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedGroupDataRecord, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SharedGroupDataRecord) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
