#pragma once
// IWYU pragma private; include "GlobalNamespace/UpdateGameSessionAutomationRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateGameSessionAutomationRequest)
namespace GlobalNamespace {
class SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t;
}
namespace GlobalNamespace {
class StringKeyValueMap;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class UpdateGameSessionAutomationRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UpdateGameSessionAutomationRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UpdateGameSessionAutomationRequest*, "", "UpdateGameSessionAutomationRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: UpdateGameSessionAutomationRequest
class CORDL_TYPE UpdateGameSessionAutomationRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_current_player_count, put=set_current_player_count)) int32_t  current_player_count;

 __declspec(property(get=get_envId, put=set_envId)) ::StringW  envId;

 __declspec(property(get=get_extra_properties, put=set_extra_properties)) ::GlobalNamespace::StringKeyValueMap*  extra_properties;

 __declspec(property(get=get_game_session_id, put=set_game_session_id)) ::StringW  game_session_id;

 __declspec(property(get=get_game_session_name, put=set_game_session_name)) ::StringW  game_session_name;

 __declspec(property(get=get_id, put=set_id)) ::StringW  id;

 __declspec(property(get=get_ip, put=set_ip)) ::StringW  ip;

 __declspec(property(get=get_max_player_count, put=set_max_player_count)) int32_t  max_player_count;

 __declspec(property(get=get_port, put=set_port)) int32_t  port;

 __declspec(property(get=get_provider, put=set_provider)) ::StringW  provider;

 __declspec(property(get=get_region, put=set_region)) ::StringW  region;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_titleId, put=set_titleId)) ::StringW  titleId;

/// @brief Method Dispose, addr 0x5378550, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::UpdateGameSessionAutomationRequest* New_ctor() ;

static inline ::GlobalNamespace::UpdateGameSessionAutomationRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5379b1c, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5379c28, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53783c0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5378474, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::UpdateGameSessionAutomationRequest*  obj) ;

/// @brief Method get_current_player_count, addr 0x53794f4, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_current_player_count() ;

/// @brief Method get_envId, addr 0x5378940, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_envId() ;

/// @brief Method get_extra_properties, addr 0x5379a10, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringKeyValueMap* get_extra_properties() ;

/// @brief Method get_game_session_id, addr 0x5378c98, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_game_session_id() ;

/// @brief Method get_game_session_name, addr 0x5378ff0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_game_session_name() ;

/// @brief Method get_id, addr 0x5378aec, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_id() ;

/// @brief Method get_ip, addr 0x537919c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_ip() ;

/// @brief Method get_max_player_count, addr 0x53796a0, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_max_player_count() ;

/// @brief Method get_port, addr 0x5379348, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_port() ;

/// @brief Method get_provider, addr 0x5378e44, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_provider() ;

/// @brief Method get_region, addr 0x537984c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_region() ;

/// @brief Method get_titleId, addr 0x5378794, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_titleId() ;

/// @brief Method set_current_player_count, addr 0x537941c, size 0xd8, virtual false, abstract: false, final false
inline void set_current_player_count(int32_t  value) ;

/// @brief Method set_envId, addr 0x5378868, size 0xd8, virtual false, abstract: false, final false
inline void set_envId(::StringW  value) ;

/// @brief Method set_extra_properties, addr 0x5379920, size 0xf0, virtual false, abstract: false, final false
inline void set_extra_properties(::GlobalNamespace::StringKeyValueMap*  value) ;

/// @brief Method set_game_session_id, addr 0x5378bc0, size 0xd8, virtual false, abstract: false, final false
inline void set_game_session_id(::StringW  value) ;

/// @brief Method set_game_session_name, addr 0x5378f18, size 0xd8, virtual false, abstract: false, final false
inline void set_game_session_name(::StringW  value) ;

/// @brief Method set_id, addr 0x5378a14, size 0xd8, virtual false, abstract: false, final false
inline void set_id(::StringW  value) ;

/// @brief Method set_ip, addr 0x53790c4, size 0xd8, virtual false, abstract: false, final false
inline void set_ip(::StringW  value) ;

/// @brief Method set_max_player_count, addr 0x53795c8, size 0xd8, virtual false, abstract: false, final false
inline void set_max_player_count(int32_t  value) ;

/// @brief Method set_port, addr 0x5379270, size 0xd8, virtual false, abstract: false, final false
inline void set_port(int32_t  value) ;

/// @brief Method set_provider, addr 0x5378d6c, size 0xd8, virtual false, abstract: false, final false
inline void set_provider(::StringW  value) ;

/// @brief Method set_region, addr 0x5379774, size 0xd8, virtual false, abstract: false, final false
inline void set_region(::StringW  value) ;

/// @brief Method set_titleId, addr 0x53786bc, size 0xd8, virtual false, abstract: false, final false
inline void set_titleId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x53784b4, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::UpdateGameSessionAutomationRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateGameSessionAutomationRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateGameSessionAutomationRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateGameSessionAutomationRequest(UpdateGameSessionAutomationRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateGameSessionAutomationRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateGameSessionAutomationRequest(UpdateGameSessionAutomationRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9640};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UpdateGameSessionAutomationRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UpdateGameSessionAutomationRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
