#pragma once
// IWYU pragma private; include "GlobalNamespace/MatchmakingTicket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MatchmakingTicket)
namespace GlobalNamespace {
class MatchmakingConnectionInformation;
}
namespace GlobalNamespace {
class MatchmakingTicketPlayerMap;
}
namespace GlobalNamespace {
class SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t;
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
class MatchmakingTicket;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MatchmakingTicket*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MatchmakingTicket*, "", "MatchmakingTicket");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MatchmakingTicket
class CORDL_TYPE MatchmakingTicket : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_connection_information, put=set_connection_information)) ::GlobalNamespace::MatchmakingConnectionInformation*  connection_information;

/// @brief Field connection_information_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_connection_information_name, put=setStaticF_connection_information_name)) ::StringW  connection_information_name;

 __declspec(property(get=get_estimated_wait_time, put=set_estimated_wait_time)) int32_t  estimated_wait_time;

/// @brief Field estimated_wait_time_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_estimated_wait_time_name, put=setStaticF_estimated_wait_time_name)) ::StringW  estimated_wait_time_name;

 __declspec(property(get=get_players, put=set_players)) ::GlobalNamespace::MatchmakingTicketPlayerMap*  players;

/// @brief Field players_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_players_name, put=setStaticF_players_name)) ::StringW  players_name;

 __declspec(property(get=get_start_time, put=set_start_time)) ::StringW  start_time;

/// @brief Field start_time_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_start_time_name, put=setStaticF_start_time_name)) ::StringW  start_time_name;

 __declspec(property(get=get_status, put=set_status)) ::StringW  status;

/// @brief Field status_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_status_name, put=setStaticF_status_name)) ::StringW  status_name;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_ticket_id, put=set_ticket_id)) ::StringW  ticket_id;

/// @brief Field ticket_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ticket_id_name, put=setStaticF_ticket_id_name)) ::StringW  ticket_id_name;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x55822b4, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x55823b0, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x5582320, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MatchmakingTicket* New_ctor() ;

static inline ::GlobalNamespace::MatchmakingTicket* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromJson, addr 0x5582ff8, size 0xf4, virtual false, abstract: false, final false
inline bool ParseFromJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*  object_) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x55830ec, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x558217c, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x55821dc, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MatchmakingTicket*  obj) ;

static inline ::StringW getStaticF_connection_information_name() ;

static inline ::StringW getStaticF_estimated_wait_time_name() ;

static inline ::StringW getStaticF_players_name() ;

static inline ::StringW getStaticF_start_time_name() ;

static inline ::StringW getStaticF_status_name() ;

static inline ::StringW getStaticF_ticket_id_name() ;

/// @brief Method get_connection_information, addr 0x5582c74, size 0x100, virtual false, abstract: false, final false
inline ::GlobalNamespace::MatchmakingConnectionInformation* get_connection_information() ;

/// @brief Method get_estimated_wait_time, addr 0x5582aa0, size 0xcc, virtual false, abstract: false, final false
inline int32_t get_estimated_wait_time() ;

/// @brief Method get_players, addr 0x5582e98, size 0x100, virtual false, abstract: false, final false
inline ::GlobalNamespace::MatchmakingTicketPlayerMap* get_players() ;

/// @brief Method get_start_time, addr 0x5582904, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_start_time() ;

/// @brief Method get_status, addr 0x5582768, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_status() ;

/// @brief Method get_ticket_id, addr 0x55825cc, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_ticket_id() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_connection_information_name(::StringW  value) ;

static inline void setStaticF_estimated_wait_time_name(::StringW  value) ;

static inline void setStaticF_players_name(::StringW  value) ;

static inline void setStaticF_start_time_name(::StringW  value) ;

static inline void setStaticF_status_name(::StringW  value) ;

static inline void setStaticF_ticket_id_name(::StringW  value) ;

/// @brief Method set_connection_information, addr 0x5582b6c, size 0x108, virtual false, abstract: false, final false
inline void set_connection_information(::GlobalNamespace::MatchmakingConnectionInformation*  value) ;

/// @brief Method set_estimated_wait_time, addr 0x55829d0, size 0xd0, virtual false, abstract: false, final false
inline void set_estimated_wait_time(int32_t  value) ;

/// @brief Method set_players, addr 0x5582d74, size 0xe4, virtual false, abstract: false, final false
inline void set_players(::GlobalNamespace::MatchmakingTicketPlayerMap*  value) ;

/// @brief Method set_start_time, addr 0x5582834, size 0xd0, virtual false, abstract: false, final false
inline void set_start_time(::StringW  value) ;

/// @brief Method set_status, addr 0x5582698, size 0xd0, virtual false, abstract: false, final false
inline void set_status(::StringW  value) ;

/// @brief Method set_ticket_id, addr 0x55824fc, size 0xd0, virtual false, abstract: false, final false
inline void set_ticket_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x558221c, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MatchmakingTicket*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchmakingTicket() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingTicket", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchmakingTicket(MatchmakingTicket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingTicket", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchmakingTicket(MatchmakingTicket const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9291};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MatchmakingTicket, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MatchmakingTicket, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MatchmakingTicket) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
