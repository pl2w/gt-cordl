#pragma once
// IWYU pragma private; include "GlobalNamespace/MatchmakingPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MatchmakingPlayer)
namespace GlobalNamespace {
class StringIntMap;
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
class MatchmakingPlayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MatchmakingPlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MatchmakingPlayer*, "", "MatchmakingPlayer");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MatchmakingPlayer
class CORDL_TYPE MatchmakingPlayer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_attributes, put=set_attributes)) ::GlobalNamespace::StringKeyValueMap*  attributes;

 __declspec(property(get=get_latency_in_ms, put=set_latency_in_ms)) ::GlobalNamespace::StringIntMap*  latency_in_ms;

 __declspec(property(get=get_player_id, put=set_player_id)) ::StringW  player_id;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_team, put=set_team)) ::StringW  team;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x557ef1c, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x557f018, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x557ef88, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MatchmakingPlayer* New_ctor() ;

static inline ::GlobalNamespace::MatchmakingPlayer* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x557f874, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x557ede4, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x557ee44, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MatchmakingPlayer*  obj) ;

/// @brief Method get_attributes, addr 0x557f3e8, size 0x104, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringKeyValueMap* get_attributes() ;

/// @brief Method get_latency_in_ms, addr 0x557f5d4, size 0x104, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringIntMap* get_latency_in_ms() ;

/// @brief Method get_player_id, addr 0x557f234, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_player_id() ;

/// @brief Method get_team, addr 0x557f7a8, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_team() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_attributes, addr 0x557f300, size 0xe8, virtual false, abstract: false, final false
inline void set_attributes(::GlobalNamespace::StringKeyValueMap*  value) ;

/// @brief Method set_latency_in_ms, addr 0x557f4ec, size 0xe8, virtual false, abstract: false, final false
inline void set_latency_in_ms(::GlobalNamespace::StringIntMap*  value) ;

/// @brief Method set_player_id, addr 0x557f164, size 0xd0, virtual false, abstract: false, final false
inline void set_player_id(::StringW  value) ;

/// @brief Method set_team, addr 0x557f6d8, size 0xd0, virtual false, abstract: false, final false
inline void set_team(::StringW  value) ;

/// @brief Method swigRelease, addr 0x557ee84, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MatchmakingPlayer*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchmakingPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingPlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchmakingPlayer(MatchmakingPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchmakingPlayer(MatchmakingPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9288};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MatchmakingPlayer, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MatchmakingPlayer, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MatchmakingPlayer) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
