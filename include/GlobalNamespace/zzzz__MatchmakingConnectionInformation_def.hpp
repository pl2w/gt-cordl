#pragma once
// IWYU pragma private; include "GlobalNamespace/MatchmakingConnectionInformation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameSessionConnectionInformation_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MatchmakingConnectionInformation)
namespace GlobalNamespace {
class MatchedPlayerSessionMap;
}
namespace GlobalNamespace {
class SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MatchmakingConnectionInformation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MatchmakingConnectionInformation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MatchmakingConnectionInformation*, "", "MatchmakingConnectionInformation");
// Dependencies GameSessionConnectionInformation, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MatchmakingConnectionInformation
class CORDL_TYPE MatchmakingConnectionInformation : public ::GlobalNamespace::GameSessionConnectionInformation {
public:
// Declarations
 __declspec(property(get=get_matched_player_sessions, put=set_matched_player_sessions)) ::GlobalNamespace::MatchedPlayerSessionMap*  matched_player_sessions;

/// @brief Field matched_player_sessions_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_matched_player_sessions_name, put=setStaticF_matched_player_sessions_name)) ::StringW  matched_player_sessions_name;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x557e85c, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::MatchmakingConnectionInformation* New_ctor() ;

static inline ::GlobalNamespace::MatchmakingConnectionInformation* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromJson, addr 0x557ebac, size 0xf4, virtual false, abstract: false, final false
inline bool ParseFromJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*  object_) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x557eca0, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x557e6a0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x557e780, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MatchmakingConnectionInformation*  obj) ;

static inline ::StringW getStaticF_matched_player_sessions_name() ;

/// @brief Method get_matched_player_sessions, addr 0x557eaac, size 0x100, virtual false, abstract: false, final false
inline ::GlobalNamespace::MatchedPlayerSessionMap* get_matched_player_sessions() ;

static inline void setStaticF_matched_player_sessions_name(::StringW  value) ;

/// @brief Method set_matched_player_sessions, addr 0x557e9c8, size 0xe4, virtual false, abstract: false, final false
inline void set_matched_player_sessions(::GlobalNamespace::MatchedPlayerSessionMap*  value) ;

/// @brief Method swigRelease, addr 0x557e7c0, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MatchmakingConnectionInformation*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchmakingConnectionInformation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingConnectionInformation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchmakingConnectionInformation(MatchmakingConnectionInformation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingConnectionInformation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchmakingConnectionInformation(MatchmakingConnectionInformation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9287};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MatchmakingConnectionInformation, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MatchmakingConnectionInformation) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
