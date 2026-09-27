#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerQuestBeginLoginV2Request.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LoginRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayerQuestBeginLoginV2Request)
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
class PlayerQuestBeginLoginV2Request;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerQuestBeginLoginV2Request*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerQuestBeginLoginV2Request*, "", "PlayerQuestBeginLoginV2Request");
// Dependencies LoginRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerQuestBeginLoginV2Request
class CORDL_TYPE PlayerQuestBeginLoginV2Request : public ::GlobalNamespace::LoginRequest {
public:
// Declarations
 __declspec(property(get=get_UserId, put=set_UserId)) ::StringW  UserId;

/// @brief Field swigCPtr, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x52f4ab8, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::PlayerQuestBeginLoginV2Request* New_ctor() ;

static inline ::GlobalNamespace::PlayerQuestBeginLoginV2Request* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x52f4dd0, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52f4edc, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52f4928, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52f49dc, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::PlayerQuestBeginLoginV2Request*  obj) ;

/// @brief Method get_UserId, addr 0x52f4cfc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_UserId() ;

/// @brief Method set_UserId, addr 0x52f4c24, size 0xd8, virtual false, abstract: false, final false
inline void set_UserId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52f4a1c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::PlayerQuestBeginLoginV2Request*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerQuestBeginLoginV2Request() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerQuestBeginLoginV2Request", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerQuestBeginLoginV2Request(PlayerQuestBeginLoginV2Request && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerQuestBeginLoginV2Request", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerQuestBeginLoginV2Request(PlayerQuestBeginLoginV2Request const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9423};

/// @brief Field swigCPtr, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerQuestBeginLoginV2Request, ___swigCPtr) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerQuestBeginLoginV2Request) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
