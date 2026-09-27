#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipUserDataMetadataShort.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipUserDataMetadataShort)
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
class MothershipUserDataMetadataShort;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipUserDataMetadataShort*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipUserDataMetadataShort*, "", "MothershipUserDataMetadataShort");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipUserDataMetadataShort
class CORDL_TYPE MothershipUserDataMetadataShort : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_created_time, put=set_created_time)) ::StringW  created_time;

 __declspec(property(get=get_id, put=set_id)) ::StringW  id;

 __declspec(property(get=get_key_name, put=set_key_name)) ::StringW  key_name;

 __declspec(property(get=get_key_permissions, put=set_key_permissions)) ::StringW  key_permissions;

 __declspec(property(get=get_last_updated_time, put=set_last_updated_time)) ::StringW  last_updated_time;

 __declspec(property(get=get_privacy_notes, put=set_privacy_notes)) ::StringW  privacy_notes;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x52cca44, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52ccb40, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52ccab0, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipUserDataMetadataShort* New_ctor() ;

static inline ::GlobalNamespace::MothershipUserDataMetadataShort* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52cd694, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52cc90c, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52cc96c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipUserDataMetadataShort*  obj) ;

/// @brief Method get_created_time, addr 0x52cd414, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_created_time() ;

/// @brief Method get_id, addr 0x52ccd64, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_id() ;

/// @brief Method get_key_name, addr 0x52ccf10, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_key_name() ;

/// @brief Method get_key_permissions, addr 0x52cd0bc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_key_permissions() ;

/// @brief Method get_last_updated_time, addr 0x52cd5c0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_last_updated_time() ;

/// @brief Method get_privacy_notes, addr 0x52cd268, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_privacy_notes() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_created_time, addr 0x52cd33c, size 0xd8, virtual false, abstract: false, final false
inline void set_created_time(::StringW  value) ;

/// @brief Method set_id, addr 0x52ccc8c, size 0xd8, virtual false, abstract: false, final false
inline void set_id(::StringW  value) ;

/// @brief Method set_key_name, addr 0x52cce38, size 0xd8, virtual false, abstract: false, final false
inline void set_key_name(::StringW  value) ;

/// @brief Method set_key_permissions, addr 0x52ccfe4, size 0xd8, virtual false, abstract: false, final false
inline void set_key_permissions(::StringW  value) ;

/// @brief Method set_last_updated_time, addr 0x52cd4e8, size 0xd8, virtual false, abstract: false, final false
inline void set_last_updated_time(::StringW  value) ;

/// @brief Method set_privacy_notes, addr 0x52cd190, size 0xd8, virtual false, abstract: false, final false
inline void set_privacy_notes(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52cc9ac, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipUserDataMetadataShort*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipUserDataMetadataShort() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipUserDataMetadataShort", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipUserDataMetadataShort(MothershipUserDataMetadataShort && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipUserDataMetadataShort", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipUserDataMetadataShort(MothershipUserDataMetadataShort const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9377};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipUserDataMetadataShort, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipUserDataMetadataShort, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipUserDataMetadataShort) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
