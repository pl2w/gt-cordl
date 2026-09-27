#pragma once
// IWYU pragma private; include "GlobalNamespace/UpdateQuestConfigRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UpdateQuestConfigRequest)
namespace GlobalNamespace {
class SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class UpdateQuestConfigRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UpdateQuestConfigRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UpdateQuestConfigRequest*, "", "UpdateQuestConfigRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: UpdateQuestConfigRequest
class CORDL_TYPE UpdateQuestConfigRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_appId, put=set_appId)) ::StringW  appId;

 __declspec(property(get=get_appSecret, put=set_appSecret)) ::StringW  appSecret;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_envId, put=set_envId)) ::StringW  envId;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_titleId, put=set_titleId)) ::StringW  titleId;

/// @brief Method Dispose, addr 0x538c6f4, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::UpdateQuestConfigRequest* New_ctor() ;

static inline ::GlobalNamespace::UpdateQuestConfigRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x538c860, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x538d1c8, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x538c564, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x538c618, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::UpdateQuestConfigRequest*  obj) ;

/// @brief Method get_appId, addr 0x538cf48, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_appId() ;

/// @brief Method get_appSecret, addr 0x538d0f4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_appSecret() ;

/// @brief Method get_enabled, addr 0x538ca44, size 0xd4, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_envId, addr 0x538cd9c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_envId() ;

/// @brief Method get_titleId, addr 0x538cbf0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_titleId() ;

/// @brief Method set_appId, addr 0x538ce70, size 0xd8, virtual false, abstract: false, final false
inline void set_appId(::StringW  value) ;

/// @brief Method set_appSecret, addr 0x538d01c, size 0xd8, virtual false, abstract: false, final false
inline void set_appSecret(::StringW  value) ;

/// @brief Method set_enabled, addr 0x538c96c, size 0xd8, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_envId, addr 0x538ccc4, size 0xd8, virtual false, abstract: false, final false
inline void set_envId(::StringW  value) ;

/// @brief Method set_titleId, addr 0x538cb18, size 0xd8, virtual false, abstract: false, final false
inline void set_titleId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x538c658, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::UpdateQuestConfigRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateQuestConfigRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateQuestConfigRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateQuestConfigRequest(UpdateQuestConfigRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateQuestConfigRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateQuestConfigRequest(UpdateQuestConfigRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9680};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UpdateQuestConfigRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UpdateQuestConfigRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
