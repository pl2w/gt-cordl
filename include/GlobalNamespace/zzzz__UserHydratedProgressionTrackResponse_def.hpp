#pragma once
// IWYU pragma private; include "GlobalNamespace/UserHydratedProgressionTrackResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserHydratedProgressionTrackResponse)
namespace GlobalNamespace {
class MothershipResponse;
}
namespace GlobalNamespace {
class ProgressionTrack;
}
namespace GlobalNamespace {
class TrackLevelVector;
}
namespace GlobalNamespace {
class TrackTriggerVector;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class UserHydratedProgressionTrackResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UserHydratedProgressionTrackResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UserHydratedProgressionTrackResponse*, "", "UserHydratedProgressionTrackResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: UserHydratedProgressionTrackResponse
class CORDL_TYPE UserHydratedProgressionTrackResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_CurrentLevelId, put=set_CurrentLevelId)) ::StringW  CurrentLevelId;

 __declspec(property(get=get_CurrentLevelName, put=set_CurrentLevelName)) ::StringW  CurrentLevelName;

 __declspec(property(get=get_InventoryRefreshRequired, put=set_InventoryRefreshRequired)) bool  InventoryRefreshRequired;

 __declspec(property(get=get_LastUpdated, put=set_LastUpdated)) ::StringW  LastUpdated;

 __declspec(property(get=get_Levels, put=set_Levels)) ::GlobalNamespace::TrackLevelVector*  Levels;

 __declspec(property(get=get_PlayerId, put=set_PlayerId)) ::StringW  PlayerId;

 __declspec(property(get=get_Progress, put=set_Progress)) int32_t  Progress;

 __declspec(property(get=get_Track, put=set_Track)) ::GlobalNamespace::ProgressionTrack*  Track;

 __declspec(property(get=get_Triggers, put=set_Triggers)) ::GlobalNamespace::TrackTriggerVector*  Triggers;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x53a6a34, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x53a7b9c, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UserHydratedProgressionTrackResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::UserHydratedProgressionTrackResponse* New_ctor() ;

static inline ::GlobalNamespace::UserHydratedProgressionTrackResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x53a7cb4, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  string_) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53a7d98, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53a68a4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53a6958, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::UserHydratedProgressionTrackResponse*  obj) ;

/// @brief Method get_CurrentLevelId, addr 0x53a75c4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_CurrentLevelId() ;

/// @brief Method get_CurrentLevelName, addr 0x53a7418, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_CurrentLevelName() ;

/// @brief Method get_InventoryRefreshRequired, addr 0x53a7ac8, size 0xd4, virtual false, abstract: false, final false
inline bool get_InventoryRefreshRequired() ;

/// @brief Method get_LastUpdated, addr 0x53a791c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_LastUpdated() ;

/// @brief Method get_Levels, addr 0x53a7088, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::TrackLevelVector* get_Levels() ;

/// @brief Method get_PlayerId, addr 0x53a7770, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_PlayerId() ;

/// @brief Method get_Progress, addr 0x53a726c, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_Progress() ;

/// @brief Method get_Track, addr 0x53a6c90, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ProgressionTrack* get_Track() ;

/// @brief Method get_Triggers, addr 0x53a6e8c, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::TrackTriggerVector* get_Triggers() ;

/// @brief Method set_CurrentLevelId, addr 0x53a74ec, size 0xd8, virtual false, abstract: false, final false
inline void set_CurrentLevelId(::StringW  value) ;

/// @brief Method set_CurrentLevelName, addr 0x53a7340, size 0xd8, virtual false, abstract: false, final false
inline void set_CurrentLevelName(::StringW  value) ;

/// @brief Method set_InventoryRefreshRequired, addr 0x53a79f0, size 0xd8, virtual false, abstract: false, final false
inline void set_InventoryRefreshRequired(bool  value) ;

/// @brief Method set_LastUpdated, addr 0x53a7844, size 0xd8, virtual false, abstract: false, final false
inline void set_LastUpdated(::StringW  value) ;

/// @brief Method set_Levels, addr 0x53a6f98, size 0xf0, virtual false, abstract: false, final false
inline void set_Levels(::GlobalNamespace::TrackLevelVector*  value) ;

/// @brief Method set_PlayerId, addr 0x53a7698, size 0xd8, virtual false, abstract: false, final false
inline void set_PlayerId(::StringW  value) ;

/// @brief Method set_Progress, addr 0x53a7194, size 0xd8, virtual false, abstract: false, final false
inline void set_Progress(int32_t  value) ;

/// @brief Method set_Track, addr 0x53a6ba0, size 0xf0, virtual false, abstract: false, final false
inline void set_Track(::GlobalNamespace::ProgressionTrack*  value) ;

/// @brief Method set_Triggers, addr 0x53a6d9c, size 0xf0, virtual false, abstract: false, final false
inline void set_Triggers(::GlobalNamespace::TrackTriggerVector*  value) ;

/// @brief Method swigRelease, addr 0x53a6998, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::UserHydratedProgressionTrackResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserHydratedProgressionTrackResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserHydratedProgressionTrackResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserHydratedProgressionTrackResponse(UserHydratedProgressionTrackResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserHydratedProgressionTrackResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserHydratedProgressionTrackResponse(UserHydratedProgressionTrackResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9722};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UserHydratedProgressionTrackResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UserHydratedProgressionTrackResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
