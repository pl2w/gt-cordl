#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerQuestCompleteLoginV2Request.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LoginRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayerQuestCompleteLoginV2Request)
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
class PlayerQuestCompleteLoginV2Request;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerQuestCompleteLoginV2Request*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerQuestCompleteLoginV2Request*, "", "PlayerQuestCompleteLoginV2Request");
// Dependencies LoginRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerQuestCompleteLoginV2Request
class CORDL_TYPE PlayerQuestCompleteLoginV2Request : public ::GlobalNamespace::LoginRequest {
public:
// Declarations
 __declspec(property(get=get_AttestationToken, put=set_AttestationToken)) ::StringW  AttestationToken;

 __declspec(property(get=get_MetaNonce, put=set_MetaNonce)) ::StringW  MetaNonce;

 __declspec(property(get=get_UserId, put=set_UserId)) ::StringW  UserId;

/// @brief Field swigCPtr, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x52f58a8, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::PlayerQuestCompleteLoginV2Request* New_ctor() ;

static inline ::GlobalNamespace::PlayerQuestCompleteLoginV2Request* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x52f5f18, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52f6024, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52f5718, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52f57cc, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::PlayerQuestCompleteLoginV2Request*  obj) ;

/// @brief Method get_AttestationToken, addr 0x52f5e44, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_AttestationToken() ;

/// @brief Method get_MetaNonce, addr 0x52f5aec, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_MetaNonce() ;

/// @brief Method get_UserId, addr 0x52f5c98, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_UserId() ;

/// @brief Method set_AttestationToken, addr 0x52f5d6c, size 0xd8, virtual false, abstract: false, final false
inline void set_AttestationToken(::StringW  value) ;

/// @brief Method set_MetaNonce, addr 0x52f5a14, size 0xd8, virtual false, abstract: false, final false
inline void set_MetaNonce(::StringW  value) ;

/// @brief Method set_UserId, addr 0x52f5bc0, size 0xd8, virtual false, abstract: false, final false
inline void set_UserId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52f580c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::PlayerQuestCompleteLoginV2Request*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerQuestCompleteLoginV2Request() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerQuestCompleteLoginV2Request", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerQuestCompleteLoginV2Request(PlayerQuestCompleteLoginV2Request && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerQuestCompleteLoginV2Request", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerQuestCompleteLoginV2Request(PlayerQuestCompleteLoginV2Request const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9425};

/// @brief Field swigCPtr, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerQuestCompleteLoginV2Request, ___swigCPtr) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerQuestCompleteLoginV2Request) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
