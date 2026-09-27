#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipTitleData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipTitleData)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipTitleData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipTitleData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipTitleData*, "", "MothershipTitleData");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipTitleData
class CORDL_TYPE MothershipTitleData : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_data, put=set_data)) ::StringW  data;

 __declspec(property(get=get_deployment_id, put=set_deployment_id)) ::StringW  deployment_id;

 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

 __declspec(property(get=get_key, put=set_key)) ::StringW  key;

 __declspec(property(get=get_server_only, put=set_server_only)) bool  server_only;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

 __declspec(property(get=get_updated_at, put=set_updated_at)) ::StringW  updated_at;

/// @brief Method Dispose, addr 0x52c55ec, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::MothershipTitleData* New_ctor() ;

static inline ::GlobalNamespace::MothershipTitleData* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromString, addr 0x52c630c, size 0xe4, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52c63f0, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52c545c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52c5510, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipTitleData*  obj) ;

/// @brief Method get_data, addr 0x52c608c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_data() ;

/// @brief Method get_deployment_id, addr 0x52c59dc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_deployment_id() ;

/// @brief Method get_env_id, addr 0x52c5830, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_key, addr 0x52c5ee0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_key() ;

/// @brief Method get_server_only, addr 0x52c6238, size 0xd4, virtual false, abstract: false, final false
inline bool get_server_only() ;

/// @brief Method get_title_id, addr 0x52c5b88, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method get_updated_at, addr 0x52c5d34, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_updated_at() ;

/// @brief Method set_data, addr 0x52c5fb4, size 0xd8, virtual false, abstract: false, final false
inline void set_data(::StringW  value) ;

/// @brief Method set_deployment_id, addr 0x52c5904, size 0xd8, virtual false, abstract: false, final false
inline void set_deployment_id(::StringW  value) ;

/// @brief Method set_env_id, addr 0x52c5758, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_key, addr 0x52c5e08, size 0xd8, virtual false, abstract: false, final false
inline void set_key(::StringW  value) ;

/// @brief Method set_server_only, addr 0x52c6160, size 0xd8, virtual false, abstract: false, final false
inline void set_server_only(bool  value) ;

/// @brief Method set_title_id, addr 0x52c5ab0, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method set_updated_at, addr 0x52c5c5c, size 0xd8, virtual false, abstract: false, final false
inline void set_updated_at(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52c5550, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipTitleData*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipTitleData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipTitleData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipTitleData(MothershipTitleData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipTitleData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipTitleData(MothershipTitleData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9370};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipTitleData, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipTitleData) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
