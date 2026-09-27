#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipUserData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipUserData)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipUserData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipUserData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipUserData*, "", "MothershipUserData");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipUserData
class CORDL_TYPE MothershipUserData : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_created_by, put=set_created_by)) ::StringW  created_by;

 __declspec(property(get=get_created_time, put=set_created_time)) ::StringW  created_time;

 __declspec(property(get=get_generation, put=set_generation)) int32_t  generation;

 __declspec(property(get=get_id, put=set_id)) ::StringW  id;

 __declspec(property(get=get_key_name, put=set_key_name)) ::StringW  key_name;

 __declspec(property(get=get_last_updated_time, put=set_last_updated_time)) ::StringW  last_updated_time;

 __declspec(property(get=get_last_written_by, put=set_last_written_by)) ::StringW  last_written_by;

 __declspec(property(get=get_metadata_id, put=set_metadata_id)) ::StringW  metadata_id;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_user_id, put=set_user_id)) ::StringW  user_id;

 __declspec(property(get=get_value, put=set_value)) ::StringW  value;

/// @brief Method Dispose, addr 0x52ca32c, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::MothershipUserData* New_ctor() ;

static inline ::GlobalNamespace::MothershipUserData* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromString, addr 0x52cb550, size 0xe4, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52cb634, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52ca19c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52ca250, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipUserData*  obj) ;

/// @brief Method get_created_by, addr 0x52caf78, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_created_by() ;

/// @brief Method get_created_time, addr 0x52cb2d0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_created_time() ;

/// @brief Method get_generation, addr 0x52cadcc, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_generation() ;

/// @brief Method get_id, addr 0x52ca570, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_id() ;

/// @brief Method get_key_name, addr 0x52ca8c8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_key_name() ;

/// @brief Method get_last_updated_time, addr 0x52cb47c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_last_updated_time() ;

/// @brief Method get_last_written_by, addr 0x52cb124, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_last_written_by() ;

/// @brief Method get_metadata_id, addr 0x52ca71c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_metadata_id() ;

/// @brief Method get_user_id, addr 0x52caa74, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_user_id() ;

/// @brief Method get_value, addr 0x52cac20, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_value() ;

/// @brief Method set_created_by, addr 0x52caea0, size 0xd8, virtual false, abstract: false, final false
inline void set_created_by(::StringW  value) ;

/// @brief Method set_created_time, addr 0x52cb1f8, size 0xd8, virtual false, abstract: false, final false
inline void set_created_time(::StringW  value) ;

/// @brief Method set_generation, addr 0x52cacf4, size 0xd8, virtual false, abstract: false, final false
inline void set_generation(int32_t  value) ;

/// @brief Method set_id, addr 0x52ca498, size 0xd8, virtual false, abstract: false, final false
inline void set_id(::StringW  value) ;

/// @brief Method set_key_name, addr 0x52ca7f0, size 0xd8, virtual false, abstract: false, final false
inline void set_key_name(::StringW  value) ;

/// @brief Method set_last_updated_time, addr 0x52cb3a4, size 0xd8, virtual false, abstract: false, final false
inline void set_last_updated_time(::StringW  value) ;

/// @brief Method set_last_written_by, addr 0x52cb04c, size 0xd8, virtual false, abstract: false, final false
inline void set_last_written_by(::StringW  value) ;

/// @brief Method set_metadata_id, addr 0x52ca644, size 0xd8, virtual false, abstract: false, final false
inline void set_metadata_id(::StringW  value) ;

/// @brief Method set_user_id, addr 0x52ca99c, size 0xd8, virtual false, abstract: false, final false
inline void set_user_id(::StringW  value) ;

/// @brief Method set_value, addr 0x52cab48, size 0xd8, virtual false, abstract: false, final false
inline void set_value(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52ca290, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipUserData*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipUserData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipUserData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipUserData(MothershipUserData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipUserData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipUserData(MothershipUserData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9375};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipUserData, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipUserData) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
