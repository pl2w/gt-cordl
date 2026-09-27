#pragma once
// IWYU pragma private; include "GlobalNamespace/RegisterGameSessionServerRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RegisterGameSessionServerRequest)
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
class RegisterGameSessionServerRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RegisterGameSessionServerRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RegisterGameSessionServerRequest*, "", "RegisterGameSessionServerRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: RegisterGameSessionServerRequest
class CORDL_TYPE RegisterGameSessionServerRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_extra_properties, put=set_extra_properties)) ::GlobalNamespace::StringKeyValueMap*  extra_properties;

 __declspec(property(get=get_game_session_id, put=set_game_session_id)) ::StringW  game_session_id;

 __declspec(property(get=get_game_session_name, put=set_game_session_name)) ::StringW  game_session_name;

 __declspec(property(get=get_ip, put=set_ip)) ::StringW  ip;

 __declspec(property(get=get_max_player_count, put=set_max_player_count)) int32_t  max_player_count;

 __declspec(property(get=get_partition, put=set_partition)) ::StringW  partition;

 __declspec(property(get=get_port, put=set_port)) int32_t  port;

 __declspec(property(get=get_provider, put=set_provider)) ::StringW  provider;

 __declspec(property(get=get_region, put=set_region)) ::StringW  region;

 __declspec(property(get=get_required_tags, put=set_required_tags)) ::StringW  required_tags;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x5311c60, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::RegisterGameSessionServerRequest* New_ctor() ;

static inline ::GlobalNamespace::RegisterGameSessionServerRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5312ed4, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5312fe0, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5311ad0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5311b84, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::RegisterGameSessionServerRequest*  obj) ;

/// @brief Method get_extra_properties, addr 0x5312dc8, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringKeyValueMap* get_extra_properties() ;

/// @brief Method get_game_session_id, addr 0x5311ea4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_game_session_id() ;

/// @brief Method get_game_session_name, addr 0x53121fc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_game_session_name() ;

/// @brief Method get_ip, addr 0x53123a8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_ip() ;

/// @brief Method get_max_player_count, addr 0x53128ac, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_max_player_count() ;

/// @brief Method get_partition, addr 0x5312c04, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_partition() ;

/// @brief Method get_port, addr 0x5312554, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_port() ;

/// @brief Method get_provider, addr 0x5312050, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_provider() ;

/// @brief Method get_region, addr 0x5312a58, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_region() ;

/// @brief Method get_required_tags, addr 0x5312700, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_required_tags() ;

/// @brief Method set_extra_properties, addr 0x5312cd8, size 0xf0, virtual false, abstract: false, final false
inline void set_extra_properties(::GlobalNamespace::StringKeyValueMap*  value) ;

/// @brief Method set_game_session_id, addr 0x5311dcc, size 0xd8, virtual false, abstract: false, final false
inline void set_game_session_id(::StringW  value) ;

/// @brief Method set_game_session_name, addr 0x5312124, size 0xd8, virtual false, abstract: false, final false
inline void set_game_session_name(::StringW  value) ;

/// @brief Method set_ip, addr 0x53122d0, size 0xd8, virtual false, abstract: false, final false
inline void set_ip(::StringW  value) ;

/// @brief Method set_max_player_count, addr 0x53127d4, size 0xd8, virtual false, abstract: false, final false
inline void set_max_player_count(int32_t  value) ;

/// @brief Method set_partition, addr 0x5312b2c, size 0xd8, virtual false, abstract: false, final false
inline void set_partition(::StringW  value) ;

/// @brief Method set_port, addr 0x531247c, size 0xd8, virtual false, abstract: false, final false
inline void set_port(int32_t  value) ;

/// @brief Method set_provider, addr 0x5311f78, size 0xd8, virtual false, abstract: false, final false
inline void set_provider(::StringW  value) ;

/// @brief Method set_region, addr 0x5312980, size 0xd8, virtual false, abstract: false, final false
inline void set_region(::StringW  value) ;

/// @brief Method set_required_tags, addr 0x5312628, size 0xd8, virtual false, abstract: false, final false
inline void set_required_tags(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5311bc4, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::RegisterGameSessionServerRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RegisterGameSessionServerRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RegisterGameSessionServerRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RegisterGameSessionServerRequest(RegisterGameSessionServerRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegisterGameSessionServerRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegisterGameSessionServerRequest(RegisterGameSessionServerRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9462};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RegisterGameSessionServerRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RegisterGameSessionServerRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
