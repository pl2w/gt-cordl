#pragma once
// IWYU pragma private; include "GlobalNamespace/MatchedPlayerSession.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MatchedPlayerSession)
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
class MatchedPlayerSession;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MatchedPlayerSession*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MatchedPlayerSession*, "", "MatchedPlayerSession");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MatchedPlayerSession
class CORDL_TYPE MatchedPlayerSession : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_player_session_id, put=set_player_session_id)) ::StringW  player_session_id;

/// @brief Field player_session_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_player_session_id_name, put=setStaticF_player_session_id_name)) ::StringW  player_session_id_name;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_team, put=set_team)) ::StringW  team;

/// @brief Field team_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_team_name, put=setStaticF_team_name)) ::StringW  team_name;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x557c180, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x557c27c, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x557c1ec, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MatchedPlayerSession* New_ctor() ;

static inline ::GlobalNamespace::MatchedPlayerSession* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x557c700, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x557c048, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x557c0a8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MatchedPlayerSession*  obj) ;

static inline ::StringW getStaticF_player_session_id_name() ;

static inline ::StringW getStaticF_team_name() ;

/// @brief Method get_player_session_id, addr 0x557c498, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_player_session_id() ;

/// @brief Method get_team, addr 0x557c634, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_team() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_player_session_id_name(::StringW  value) ;

static inline void setStaticF_team_name(::StringW  value) ;

/// @brief Method set_player_session_id, addr 0x557c3c8, size 0xd0, virtual false, abstract: false, final false
inline void set_player_session_id(::StringW  value) ;

/// @brief Method set_team, addr 0x557c564, size 0xd0, virtual false, abstract: false, final false
inline void set_team(::StringW  value) ;

/// @brief Method swigRelease, addr 0x557c0e8, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MatchedPlayerSession*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchedPlayerSession() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchedPlayerSession", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchedPlayerSession(MatchedPlayerSession && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchedPlayerSession", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchedPlayerSession(MatchedPlayerSession const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9284};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MatchedPlayerSession, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MatchedPlayerSession, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MatchedPlayerSession) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
