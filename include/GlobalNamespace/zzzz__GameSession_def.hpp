#pragma once
// IWYU pragma private; include "GlobalNamespace/GameSession.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameSession)
namespace GlobalNamespace {
class SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t;
}
namespace GlobalNamespace {
class StringKeyValueMap;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class GameSession;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameSession*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameSession*, "", "GameSession");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameSession
class CORDL_TYPE GameSession : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_created_at, put=set_created_at)) ::StringW  created_at;

/// @brief Field created_at_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_created_at_name, put=setStaticF_created_at_name)) ::StringW  created_at_name;

 __declspec(property(get=get_current_player_count, put=set_current_player_count)) int32_t  current_player_count;

/// @brief Field current_player_count_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_current_player_count_name, put=setStaticF_current_player_count_name)) ::StringW  current_player_count_name;

 __declspec(property(get=get_extra_properties, put=set_extra_properties)) ::GlobalNamespace::StringKeyValueMap*  extra_properties;

/// @brief Field extra_properties_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_extra_properties_name, put=setStaticF_extra_properties_name)) ::StringW  extra_properties_name;

 __declspec(property(get=get_game_session_id, put=set_game_session_id)) ::StringW  game_session_id;

/// @brief Field game_session_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_game_session_id_name, put=setStaticF_game_session_id_name)) ::StringW  game_session_id_name;

 __declspec(property(get=get_game_session_name, put=set_game_session_name)) ::StringW  game_session_name;

/// @brief Field game_session_name_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_game_session_name_name, put=setStaticF_game_session_name_name)) ::StringW  game_session_name_name;

 __declspec(property(get=get_id, put=set_id)) ::StringW  id;

/// @brief Field id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_id_name, put=setStaticF_id_name)) ::StringW  id_name;

 __declspec(property(get=get_ip, put=set_ip)) ::StringW  ip;

/// @brief Field ip_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ip_name, put=setStaticF_ip_name)) ::StringW  ip_name;

 __declspec(property(get=get_max_player_count, put=set_max_player_count)) int32_t  max_player_count;

/// @brief Field max_player_count_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_max_player_count_name, put=setStaticF_max_player_count_name)) ::StringW  max_player_count_name;

 __declspec(property(get=get_partition, put=set_partition)) ::StringW  partition;

/// @brief Field partition_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_partition_name, put=setStaticF_partition_name)) ::StringW  partition_name;

 __declspec(property(get=get_port, put=set_port)) int32_t  port;

/// @brief Field port_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_port_name, put=setStaticF_port_name)) ::StringW  port_name;

 __declspec(property(get=get_provider, put=set_provider)) ::StringW  provider;

/// @brief Field provider_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_provider_name, put=setStaticF_provider_name)) ::StringW  provider_name;

 __declspec(property(get=get_region, put=set_region)) ::StringW  region;

/// @brief Field region_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_region_name, put=setStaticF_region_name)) ::StringW  region_name;

 __declspec(property(get=get_required_tags, put=set_required_tags)) ::StringW  required_tags;

/// @brief Field required_tags_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_required_tags_name, put=setStaticF_required_tags_name)) ::StringW  required_tags_name;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_updated_at, put=set_updated_at)) ::StringW  updated_at;

/// @brief Field updated_at_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_updated_at_name, put=setStaticF_updated_at_name)) ::StringW  updated_at_name;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x53fe990, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x53fea8c, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x53fe9fc, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::GameSession* New_ctor() ;

static inline ::GlobalNamespace::GameSession* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromJson, addr 0x5400390, size 0xfc, virtual false, abstract: false, final false
inline bool ParseFromJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*  object_) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x540048c, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53fe858, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53fe8b8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::GameSession*  obj) ;

static inline ::StringW getStaticF_created_at_name() ;

static inline ::StringW getStaticF_current_player_count_name() ;

static inline ::StringW getStaticF_extra_properties_name() ;

static inline ::StringW getStaticF_game_session_id_name() ;

static inline ::StringW getStaticF_game_session_name_name() ;

static inline ::StringW getStaticF_id_name() ;

static inline ::StringW getStaticF_ip_name() ;

static inline ::StringW getStaticF_max_player_count_name() ;

static inline ::StringW getStaticF_partition_name() ;

static inline ::StringW getStaticF_port_name() ;

static inline ::StringW getStaticF_provider_name() ;

static inline ::StringW getStaticF_region_name() ;

static inline ::StringW getStaticF_required_tags_name() ;

static inline ::StringW getStaticF_updated_at_name() ;

/// @brief Method get_created_at, addr 0x53fff14, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_created_at() ;

/// @brief Method get_current_player_count, addr 0x53ff864, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_current_player_count() ;

/// @brief Method get_extra_properties, addr 0x5400284, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringKeyValueMap* get_extra_properties() ;

/// @brief Method get_game_session_id, addr 0x53fee5c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_game_session_id() ;

/// @brief Method get_game_session_name, addr 0x53ff1b4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_game_session_name() ;

/// @brief Method get_id, addr 0x53fecb0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_id() ;

/// @brief Method get_ip, addr 0x53ff360, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_ip() ;

/// @brief Method get_max_player_count, addr 0x53ffa10, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_max_player_count() ;

/// @brief Method get_partition, addr 0x53ffd68, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_partition() ;

/// @brief Method get_port, addr 0x53ff50c, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_port() ;

/// @brief Method get_provider, addr 0x53ff008, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_provider() ;

/// @brief Method get_region, addr 0x53ffbbc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_region() ;

/// @brief Method get_required_tags, addr 0x53ff6b8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_required_tags() ;

/// @brief Method get_updated_at, addr 0x54000c0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_updated_at() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_created_at_name(::StringW  value) ;

static inline void setStaticF_current_player_count_name(::StringW  value) ;

static inline void setStaticF_extra_properties_name(::StringW  value) ;

static inline void setStaticF_game_session_id_name(::StringW  value) ;

static inline void setStaticF_game_session_name_name(::StringW  value) ;

static inline void setStaticF_id_name(::StringW  value) ;

static inline void setStaticF_ip_name(::StringW  value) ;

static inline void setStaticF_max_player_count_name(::StringW  value) ;

static inline void setStaticF_partition_name(::StringW  value) ;

static inline void setStaticF_port_name(::StringW  value) ;

static inline void setStaticF_provider_name(::StringW  value) ;

static inline void setStaticF_region_name(::StringW  value) ;

static inline void setStaticF_required_tags_name(::StringW  value) ;

static inline void setStaticF_updated_at_name(::StringW  value) ;

/// @brief Method set_created_at, addr 0x53ffe3c, size 0xd8, virtual false, abstract: false, final false
inline void set_created_at(::StringW  value) ;

/// @brief Method set_current_player_count, addr 0x53ff78c, size 0xd8, virtual false, abstract: false, final false
inline void set_current_player_count(int32_t  value) ;

/// @brief Method set_extra_properties, addr 0x5400194, size 0xf0, virtual false, abstract: false, final false
inline void set_extra_properties(::GlobalNamespace::StringKeyValueMap*  value) ;

/// @brief Method set_game_session_id, addr 0x53fed84, size 0xd8, virtual false, abstract: false, final false
inline void set_game_session_id(::StringW  value) ;

/// @brief Method set_game_session_name, addr 0x53ff0dc, size 0xd8, virtual false, abstract: false, final false
inline void set_game_session_name(::StringW  value) ;

/// @brief Method set_id, addr 0x53febd8, size 0xd8, virtual false, abstract: false, final false
inline void set_id(::StringW  value) ;

/// @brief Method set_ip, addr 0x53ff288, size 0xd8, virtual false, abstract: false, final false
inline void set_ip(::StringW  value) ;

/// @brief Method set_max_player_count, addr 0x53ff938, size 0xd8, virtual false, abstract: false, final false
inline void set_max_player_count(int32_t  value) ;

/// @brief Method set_partition, addr 0x53ffc90, size 0xd8, virtual false, abstract: false, final false
inline void set_partition(::StringW  value) ;

/// @brief Method set_port, addr 0x53ff434, size 0xd8, virtual false, abstract: false, final false
inline void set_port(int32_t  value) ;

/// @brief Method set_provider, addr 0x53fef30, size 0xd8, virtual false, abstract: false, final false
inline void set_provider(::StringW  value) ;

/// @brief Method set_region, addr 0x53ffae4, size 0xd8, virtual false, abstract: false, final false
inline void set_region(::StringW  value) ;

/// @brief Method set_required_tags, addr 0x53ff5e0, size 0xd8, virtual false, abstract: false, final false
inline void set_required_tags(::StringW  value) ;

/// @brief Method set_updated_at, addr 0x53fffe8, size 0xd8, virtual false, abstract: false, final false
inline void set_updated_at(::StringW  value) ;

/// @brief Method swigRelease, addr 0x53fe8f8, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::GameSession*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameSession() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameSession", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameSession(GameSession && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameSession", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameSession(GameSession const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9009};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameSession, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSession, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameSession) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
