#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipUserDataMetadata.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipUserDataMetadata)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipUserDataMetadata;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipUserDataMetadata*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipUserDataMetadata*, "", "MothershipUserDataMetadata");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipUserDataMetadata
class CORDL_TYPE MothershipUserDataMetadata : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_created_time, put=set_created_time)) ::StringW  created_time;

 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

 __declspec(property(get=get_id, put=set_id)) ::StringW  id;

 __declspec(property(get=get_key_name, put=set_key_name)) ::StringW  key_name;

 __declspec(property(get=get_key_permissions, put=set_key_permissions)) ::StringW  key_permissions;

 __declspec(property(get=get_last_updated_time, put=set_last_updated_time)) ::StringW  last_updated_time;

 __declspec(property(get=get_privacy_notes, put=set_privacy_notes)) ::StringW  privacy_notes;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Method Dispose, addr 0x52cb890, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::MothershipUserDataMetadata* New_ctor() ;

static inline ::GlobalNamespace::MothershipUserDataMetadata* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromString, addr 0x52cc75c, size 0xe4, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52cc840, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52cb700, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52cb7b4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipUserDataMetadata*  obj) ;

/// @brief Method get_created_time, addr 0x52cc4dc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_created_time() ;

/// @brief Method get_env_id, addr 0x52cbe2c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_id, addr 0x52cbad4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_id() ;

/// @brief Method get_key_name, addr 0x52cbfd8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_key_name() ;

/// @brief Method get_key_permissions, addr 0x52cc184, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_key_permissions() ;

/// @brief Method get_last_updated_time, addr 0x52cc688, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_last_updated_time() ;

/// @brief Method get_privacy_notes, addr 0x52cc330, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_privacy_notes() ;

/// @brief Method get_title_id, addr 0x52cbc80, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method set_created_time, addr 0x52cc404, size 0xd8, virtual false, abstract: false, final false
inline void set_created_time(::StringW  value) ;

/// @brief Method set_env_id, addr 0x52cbd54, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_id, addr 0x52cb9fc, size 0xd8, virtual false, abstract: false, final false
inline void set_id(::StringW  value) ;

/// @brief Method set_key_name, addr 0x52cbf00, size 0xd8, virtual false, abstract: false, final false
inline void set_key_name(::StringW  value) ;

/// @brief Method set_key_permissions, addr 0x52cc0ac, size 0xd8, virtual false, abstract: false, final false
inline void set_key_permissions(::StringW  value) ;

/// @brief Method set_last_updated_time, addr 0x52cc5b0, size 0xd8, virtual false, abstract: false, final false
inline void set_last_updated_time(::StringW  value) ;

/// @brief Method set_privacy_notes, addr 0x52cc258, size 0xd8, virtual false, abstract: false, final false
inline void set_privacy_notes(::StringW  value) ;

/// @brief Method set_title_id, addr 0x52cbba8, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52cb7f4, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipUserDataMetadata*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipUserDataMetadata() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipUserDataMetadata", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipUserDataMetadata(MothershipUserDataMetadata && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipUserDataMetadata", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipUserDataMetadata(MothershipUserDataMetadata const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9376};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipUserDataMetadata, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipUserDataMetadata) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
