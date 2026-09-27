#pragma once
// IWYU pragma private; include "GlobalNamespace/SharedDownloadableFileResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SharedDownloadableFileResult)
namespace GlobalNamespace {
class MothershipResponse;
}
namespace GlobalNamespace {
class StringKeyValueMap;
}
namespace GlobalNamespace {
class StringVector;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class SharedDownloadableFileResult;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SharedDownloadableFileResult*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SharedDownloadableFileResult*, "", "SharedDownloadableFileResult");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: SharedDownloadableFileResult
class CORDL_TYPE SharedDownloadableFileResult : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_aliases, put=set_aliases)) ::GlobalNamespace::StringVector*  aliases;

 __declspec(property(get=get_file_id, put=set_file_id)) ::StringW  file_id;

 __declspec(property(get=get_file_name, put=set_file_name)) ::StringW  file_name;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_tags, put=set_tags)) ::GlobalNamespace::StringKeyValueMap*  tags;

 __declspec(property(get=get_url, put=set_url)) ::StringW  url;

 __declspec(property(get=get_version, put=set_version)) ::StringW  version;

/// @brief Method Dispose, addr 0x5335628, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x5335878, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SharedDownloadableFileResult* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::SharedDownloadableFileResult* New_ctor() ;

static inline ::GlobalNamespace::SharedDownloadableFileResult* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x5335794, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5336568, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5335498, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x533554c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::SharedDownloadableFileResult*  obj) ;

/// @brief Method get_aliases, addr 0x5335e14, size 0x108, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringVector* get_aliases() ;

/// @brief Method get_file_id, addr 0x5335a68, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_file_id() ;

/// @brief Method get_file_name, addr 0x5335c14, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_file_name() ;

/// @brief Method get_tags, addr 0x5336254, size 0x108, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringKeyValueMap* get_tags() ;

/// @brief Method get_url, addr 0x5336494, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_url() ;

/// @brief Method get_version, addr 0x5336054, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_version() ;

/// @brief Method set_aliases, addr 0x5335ce8, size 0xec, virtual false, abstract: false, final false
inline void set_aliases(::GlobalNamespace::StringVector*  value) ;

/// @brief Method set_file_id, addr 0x5335990, size 0xd8, virtual false, abstract: false, final false
inline void set_file_id(::StringW  value) ;

/// @brief Method set_file_name, addr 0x5335b3c, size 0xd8, virtual false, abstract: false, final false
inline void set_file_name(::StringW  value) ;

/// @brief Method set_tags, addr 0x5336128, size 0xec, virtual false, abstract: false, final false
inline void set_tags(::GlobalNamespace::StringKeyValueMap*  value) ;

/// @brief Method set_url, addr 0x53363bc, size 0xd8, virtual false, abstract: false, final false
inline void set_url(::StringW  value) ;

/// @brief Method set_version, addr 0x5335f7c, size 0xd8, virtual false, abstract: false, final false
inline void set_version(::StringW  value) ;

/// @brief Method swigRelease, addr 0x533558c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::SharedDownloadableFileResult*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedDownloadableFileResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedDownloadableFileResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedDownloadableFileResult(SharedDownloadableFileResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedDownloadableFileResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedDownloadableFileResult(SharedDownloadableFileResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9536};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SharedDownloadableFileResult, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SharedDownloadableFileResult) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
