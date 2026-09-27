#pragma once
// IWYU pragma private; include "GlobalNamespace/NotificationsMessageResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipWebSocketMessage_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NotificationsMessageResponse)
namespace GlobalNamespace {
class MothershipWebSocketMessage;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class NotificationsMessageResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NotificationsMessageResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NotificationsMessageResponse*, "", "NotificationsMessageResponse");
// Dependencies MothershipWebSocketMessage, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: NotificationsMessageResponse
class CORDL_TYPE NotificationsMessageResponse : public ::GlobalNamespace::MothershipWebSocketMessage {
public:
// Declarations
 __declspec(property(get=get_Body, put=set_Body)) ::StringW  Body;

 __declspec(property(get=get_RecipientId, put=set_RecipientId)) ::StringW  RecipientId;

 __declspec(property(get=get_Title, put=set_Title)) ::StringW  Title;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x52db9d0, size 0x15c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromWebSocketMessage, addr 0x52dc114, size 0x114, virtual false, abstract: false, final false
static inline ::GlobalNamespace::NotificationsMessageResponse* FromWebSocketMessage(::GlobalNamespace::MothershipWebSocketMessage*  response) ;

static inline ::GlobalNamespace::NotificationsMessageResponse* New_ctor() ;

static inline ::GlobalNamespace::NotificationsMessageResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromMessageString, addr 0x52dc030, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromMessageString(::StringW  message) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52dc228, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52db848, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52db8f8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::NotificationsMessageResponse*  obj) ;

/// @brief Method get_Body, addr 0x52dbdb0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_Body() ;

/// @brief Method get_RecipientId, addr 0x52dbf5c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_RecipientId() ;

/// @brief Method get_Title, addr 0x52dbc04, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_Title() ;

/// @brief Method set_Body, addr 0x52dbcd8, size 0xd8, virtual false, abstract: false, final false
inline void set_Body(::StringW  value) ;

/// @brief Method set_RecipientId, addr 0x52dbe84, size 0xd8, virtual false, abstract: false, final false
inline void set_RecipientId(::StringW  value) ;

/// @brief Method set_Title, addr 0x52dbb2c, size 0xd8, virtual false, abstract: false, final false
inline void set_Title(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52db938, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::NotificationsMessageResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NotificationsMessageResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NotificationsMessageResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NotificationsMessageResponse(NotificationsMessageResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotificationsMessageResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotificationsMessageResponse(NotificationsMessageResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9401};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NotificationsMessageResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NotificationsMessageResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
