#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipReportData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipReportData)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipReportData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipReportData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipReportData*, "", "MothershipReportData");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipReportData
class CORDL_TYPE MothershipReportData : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_ban_id, put=set_ban_id)) ::StringW  ban_id;

 __declspec(property(get=get_category, put=set_category)) int32_t  category;

 __declspec(property(get=get_created_at, put=set_created_at)) ::StringW  created_at;

 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

 __declspec(property(get=get_metadata, put=set_metadata)) ::StringW  metadata;

 __declspec(property(get=get_modded_client, put=set_modded_client)) bool  modded_client;

 __declspec(property(get=get_platform, put=set_platform)) ::StringW  platform;

 __declspec(property(get=get_report_id, put=set_report_id)) ::StringW  report_id;

 __declspec(property(get=get_reported_user, put=set_reported_user)) ::StringW  reported_user;

 __declspec(property(get=get_reporting_user, put=set_reporting_user)) ::StringW  reporting_user;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

 __declspec(property(get=get_updated_at, put=set_updated_at)) ::StringW  updated_at;

/// @brief Method Dispose, addr 0x52b5af4, size 0x15c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::MothershipReportData* New_ctor() ;

static inline ::GlobalNamespace::MothershipReportData* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromString, addr 0x52b7060, size 0xe4, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52b7144, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52b596c, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52b5a1c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipReportData*  obj) ;

/// @brief Method get_ban_id, addr 0x52b6f8c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_ban_id() ;

/// @brief Method get_category, addr 0x52b68dc, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_category() ;

/// @brief Method get_created_at, addr 0x52b622c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_created_at() ;

/// @brief Method get_env_id, addr 0x52b5ed4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_metadata, addr 0x52b6de0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_metadata() ;

/// @brief Method get_modded_client, addr 0x52b6c34, size 0xd4, virtual false, abstract: false, final false
inline bool get_modded_client() ;

/// @brief Method get_platform, addr 0x52b6a88, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_platform() ;

/// @brief Method get_report_id, addr 0x52b5d28, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_report_id() ;

/// @brief Method get_reported_user, addr 0x52b6730, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_reported_user() ;

/// @brief Method get_reporting_user, addr 0x52b6584, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_reporting_user() ;

/// @brief Method get_title_id, addr 0x52b6080, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method get_updated_at, addr 0x52b63d8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_updated_at() ;

/// @brief Method set_ban_id, addr 0x52b6eb4, size 0xd8, virtual false, abstract: false, final false
inline void set_ban_id(::StringW  value) ;

/// @brief Method set_category, addr 0x52b6804, size 0xd8, virtual false, abstract: false, final false
inline void set_category(int32_t  value) ;

/// @brief Method set_created_at, addr 0x52b6154, size 0xd8, virtual false, abstract: false, final false
inline void set_created_at(::StringW  value) ;

/// @brief Method set_env_id, addr 0x52b5dfc, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_metadata, addr 0x52b6d08, size 0xd8, virtual false, abstract: false, final false
inline void set_metadata(::StringW  value) ;

/// @brief Method set_modded_client, addr 0x52b6b5c, size 0xd8, virtual false, abstract: false, final false
inline void set_modded_client(bool  value) ;

/// @brief Method set_platform, addr 0x52b69b0, size 0xd8, virtual false, abstract: false, final false
inline void set_platform(::StringW  value) ;

/// @brief Method set_report_id, addr 0x52b5c50, size 0xd8, virtual false, abstract: false, final false
inline void set_report_id(::StringW  value) ;

/// @brief Method set_reported_user, addr 0x52b6658, size 0xd8, virtual false, abstract: false, final false
inline void set_reported_user(::StringW  value) ;

/// @brief Method set_reporting_user, addr 0x52b64ac, size 0xd8, virtual false, abstract: false, final false
inline void set_reporting_user(::StringW  value) ;

/// @brief Method set_title_id, addr 0x52b5fa8, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method set_updated_at, addr 0x52b6300, size 0xd8, virtual false, abstract: false, final false
inline void set_updated_at(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52b5a5c, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipReportData*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipReportData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipReportData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipReportData(MothershipReportData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipReportData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipReportData(MothershipReportData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9356};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipReportData, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipReportData) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
