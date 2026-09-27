#pragma once
// IWYU pragma private; include "GlobalNamespace/HydratedProgressionTrackResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HydratedProgressionTrackResponse)
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
class HydratedProgressionTrackResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HydratedProgressionTrackResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HydratedProgressionTrackResponse*, "", "HydratedProgressionTrackResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: HydratedProgressionTrackResponse
class CORDL_TYPE HydratedProgressionTrackResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_Levels, put=set_Levels)) ::GlobalNamespace::TrackLevelVector*  Levels;

 __declspec(property(get=get_Track, put=set_Track)) ::GlobalNamespace::ProgressionTrack*  Track;

 __declspec(property(get=get_Triggers, put=set_Triggers)) ::GlobalNamespace::TrackTriggerVector*  Triggers;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x54385bc, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x543880c, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::HydratedProgressionTrackResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::HydratedProgressionTrackResponse* New_ctor() ;

static inline ::GlobalNamespace::HydratedProgressionTrackResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x5438728, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5438f18, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x543842c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x54384e0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::HydratedProgressionTrackResponse*  obj) ;

/// @brief Method get_Levels, addr 0x5438e0c, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::TrackLevelVector* get_Levels() ;

/// @brief Method get_Track, addr 0x5438a14, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ProgressionTrack* get_Track() ;

/// @brief Method get_Triggers, addr 0x5438c10, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::TrackTriggerVector* get_Triggers() ;

/// @brief Method set_Levels, addr 0x5438d1c, size 0xf0, virtual false, abstract: false, final false
inline void set_Levels(::GlobalNamespace::TrackLevelVector*  value) ;

/// @brief Method set_Track, addr 0x5438924, size 0xf0, virtual false, abstract: false, final false
inline void set_Track(::GlobalNamespace::ProgressionTrack*  value) ;

/// @brief Method set_Triggers, addr 0x5438b20, size 0xf0, virtual false, abstract: false, final false
inline void set_Triggers(::GlobalNamespace::TrackTriggerVector*  value) ;

/// @brief Method swigRelease, addr 0x5438520, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::HydratedProgressionTrackResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HydratedProgressionTrackResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HydratedProgressionTrackResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HydratedProgressionTrackResponse(HydratedProgressionTrackResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HydratedProgressionTrackResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HydratedProgressionTrackResponse(HydratedProgressionTrackResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9127};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HydratedProgressionTrackResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HydratedProgressionTrackResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
