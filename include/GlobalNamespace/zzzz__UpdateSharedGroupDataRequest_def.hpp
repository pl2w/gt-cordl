#pragma once
// IWYU pragma private; include "GlobalNamespace/UpdateSharedGroupDataRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequestShared_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UpdateSharedGroupDataRequest)
namespace GlobalNamespace {
class SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t;
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
class UpdateSharedGroupDataRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UpdateSharedGroupDataRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UpdateSharedGroupDataRequest*, "", "UpdateSharedGroupDataRequest");
// Dependencies MothershipRequestShared, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: UpdateSharedGroupDataRequest
class CORDL_TYPE UpdateSharedGroupDataRequest : public ::GlobalNamespace::MothershipRequestShared {
public:
// Declarations
 __declspec(property(get=get_customTags, put=set_customTags)) ::GlobalNamespace::StringKeyValueMap*  customTags;

 __declspec(property(get=get_data, put=set_data)) ::GlobalNamespace::StringKeyValueMap*  data;

 __declspec(property(get=get_keysToRemove, put=set_keysToRemove)) ::GlobalNamespace::StringVector*  keysToRemove;

 __declspec(property(get=get_permission, put=set_permission)) ::StringW  permission;

 __declspec(property(get=get_sharedGroupId, put=set_sharedGroupId)) ::StringW  sharedGroupId;

/// @brief Field swigCPtr, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x53926bc, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::UpdateSharedGroupDataRequest* New_ctor() ;

static inline ::GlobalNamespace::UpdateSharedGroupDataRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5393174, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5393280, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x539252c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53925e0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::UpdateSharedGroupDataRequest*  obj) ;

/// @brief Method get_customTags, addr 0x5392ac4, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringKeyValueMap* get_customTags() ;

/// @brief Method get_data, addr 0x5392cc0, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringKeyValueMap* get_data() ;

/// @brief Method get_keysToRemove, addr 0x5392ebc, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringVector* get_keysToRemove() ;

/// @brief Method get_permission, addr 0x53930a0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_permission() ;

/// @brief Method get_sharedGroupId, addr 0x5392900, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_sharedGroupId() ;

/// @brief Method set_customTags, addr 0x53929d4, size 0xf0, virtual false, abstract: false, final false
inline void set_customTags(::GlobalNamespace::StringKeyValueMap*  value) ;

/// @brief Method set_data, addr 0x5392bd0, size 0xf0, virtual false, abstract: false, final false
inline void set_data(::GlobalNamespace::StringKeyValueMap*  value) ;

/// @brief Method set_keysToRemove, addr 0x5392dcc, size 0xf0, virtual false, abstract: false, final false
inline void set_keysToRemove(::GlobalNamespace::StringVector*  value) ;

/// @brief Method set_permission, addr 0x5392fc8, size 0xd8, virtual false, abstract: false, final false
inline void set_permission(::StringW  value) ;

/// @brief Method set_sharedGroupId, addr 0x5392828, size 0xd8, virtual false, abstract: false, final false
inline void set_sharedGroupId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5392620, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::UpdateSharedGroupDataRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateSharedGroupDataRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateSharedGroupDataRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateSharedGroupDataRequest(UpdateSharedGroupDataRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateSharedGroupDataRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateSharedGroupDataRequest(UpdateSharedGroupDataRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9693};

/// @brief Field swigCPtr, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UpdateSharedGroupDataRequest, ___swigCPtr) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UpdateSharedGroupDataRequest) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
