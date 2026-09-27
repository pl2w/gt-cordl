#pragma once
// IWYU pragma private; include "GlobalNamespace/MatchmakingTicketPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MatchmakingTicketPlayer)
namespace GlobalNamespace {
class StringIntMap;
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
class MatchmakingTicketPlayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MatchmakingTicketPlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MatchmakingTicketPlayer*, "", "MatchmakingTicketPlayer");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MatchmakingTicketPlayer
class CORDL_TYPE MatchmakingTicketPlayer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_latency_in_ms, put=set_latency_in_ms)) ::GlobalNamespace::StringIntMap*  latency_in_ms;

/// @brief Field latency_in_ms_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_latency_in_ms_name, put=setStaticF_latency_in_ms_name)) ::StringW  latency_in_ms_name;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_team, put=set_team)) ::StringW  team;

/// @brief Field team_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_team_name, put=setStaticF_team_name)) ::StringW  team_name;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x5583408, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x5583504, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x5583474, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MatchmakingTicketPlayer* New_ctor() ;

static inline ::GlobalNamespace::MatchmakingTicketPlayer* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x55839d8, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x55832d0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5583330, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MatchmakingTicketPlayer*  obj) ;

static inline ::StringW getStaticF_latency_in_ms_name() ;

static inline ::StringW getStaticF_team_name() ;

/// @brief Method get_latency_in_ms, addr 0x5583738, size 0x104, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringIntMap* get_latency_in_ms() ;

/// @brief Method get_team, addr 0x558390c, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_team() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_latency_in_ms_name(::StringW  value) ;

static inline void setStaticF_team_name(::StringW  value) ;

/// @brief Method set_latency_in_ms, addr 0x5583650, size 0xe8, virtual false, abstract: false, final false
inline void set_latency_in_ms(::GlobalNamespace::StringIntMap*  value) ;

/// @brief Method set_team, addr 0x558383c, size 0xd0, virtual false, abstract: false, final false
inline void set_team(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5583370, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MatchmakingTicketPlayer*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchmakingTicketPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingTicketPlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchmakingTicketPlayer(MatchmakingTicketPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingTicketPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchmakingTicketPlayer(MatchmakingTicketPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9292};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MatchmakingTicketPlayer, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MatchmakingTicketPlayer, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MatchmakingTicketPlayer) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
