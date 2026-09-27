#pragma once
// IWYU pragma private; include "Liv/Lck/LckEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LckEvents)
namespace GlobalNamespace {
struct LckEvents_ActiveCameraChangedEvent;
}
namespace GlobalNamespace {
struct LckEvents_ActiveCameraTrackTextureChangedEvent;
}
namespace GlobalNamespace {
struct LckEvents_CameraFramerateChangedEvent;
}
namespace GlobalNamespace {
struct LckEvents_CameraResolutionChangedEvent;
}
namespace GlobalNamespace {
struct LckEvents_CaptureErrorEvent;
}
namespace GlobalNamespace {
struct LckEvents_EchoDisabledEvent;
}
namespace GlobalNamespace {
struct LckEvents_EchoEnabledEvent;
}
namespace GlobalNamespace {
struct LckEvents_EchoSavedEvent;
}
namespace GlobalNamespace {
struct LckEvents_EncoderStartedEvent;
}
namespace GlobalNamespace {
struct LckEvents_EncoderStoppedEvent;
}
namespace GlobalNamespace {
struct LckEvents_LowStorageSpaceDetectedEvent;
}
namespace GlobalNamespace {
struct LckEvents_PhotoCaptureSavedEvent;
}
namespace GlobalNamespace {
struct LckEvents_RecordingPausedEvent;
}
namespace GlobalNamespace {
struct LckEvents_RecordingResumedEvent;
}
namespace GlobalNamespace {
struct LckEvents_RecordingSavedEvent;
}
namespace GlobalNamespace {
struct LckEvents_RecordingStartedEvent;
}
namespace GlobalNamespace {
struct LckEvents_RecordingStoppedEvent;
}
namespace GlobalNamespace {
struct LckEvents_StreamingStartedEvent;
}
namespace GlobalNamespace {
struct LckEvents_StreamingStoppedEvent;
}
namespace Liv::Lck {
template<typename TResult>
class LckEvents_IEventWithResult_1;
}
// Forward declare root types
namespace Liv::Lck {
class LckEvents;
}
namespace Liv::Lck {
template<typename TResult>
class LckEvents_IEventWithResult_1;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckEvents*);
MARK_GEN_REF_T_PTR(::Liv::Lck::LckEvents_IEventWithResult_1);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckEvents*, "Liv.Lck", "LckEvents");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Liv::Lck::LckEvents_IEventWithResult_1, "Liv.Lck", "LckEvents/IEventWithResult`1");
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckEvents
class CORDL_TYPE LckEvents : public ::System::Object {
public:
// Declarations
using ActiveCameraChangedEvent = ::GlobalNamespace::LckEvents_ActiveCameraChangedEvent;

using ActiveCameraTrackTextureChangedEvent = ::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent;

using CameraFramerateChangedEvent = ::GlobalNamespace::LckEvents_CameraFramerateChangedEvent;

using CameraResolutionChangedEvent = ::GlobalNamespace::LckEvents_CameraResolutionChangedEvent;

using CaptureErrorEvent = ::GlobalNamespace::LckEvents_CaptureErrorEvent;

using EchoDisabledEvent = ::GlobalNamespace::LckEvents_EchoDisabledEvent;

using EchoEnabledEvent = ::GlobalNamespace::LckEvents_EchoEnabledEvent;

using EchoSavedEvent = ::GlobalNamespace::LckEvents_EchoSavedEvent;

using EncoderStartedEvent = ::GlobalNamespace::LckEvents_EncoderStartedEvent;

using EncoderStoppedEvent = ::GlobalNamespace::LckEvents_EncoderStoppedEvent;

using LowStorageSpaceDetectedEvent = ::GlobalNamespace::LckEvents_LowStorageSpaceDetectedEvent;

using PhotoCaptureSavedEvent = ::GlobalNamespace::LckEvents_PhotoCaptureSavedEvent;

using RecordingPausedEvent = ::GlobalNamespace::LckEvents_RecordingPausedEvent;

using RecordingResumedEvent = ::GlobalNamespace::LckEvents_RecordingResumedEvent;

using RecordingSavedEvent = ::GlobalNamespace::LckEvents_RecordingSavedEvent;

using RecordingStartedEvent = ::GlobalNamespace::LckEvents_RecordingStartedEvent;

using RecordingStoppedEvent = ::GlobalNamespace::LckEvents_RecordingStoppedEvent;

using StreamingStartedEvent = ::GlobalNamespace::LckEvents_StreamingStartedEvent;

using StreamingStoppedEvent = ::GlobalNamespace::LckEvents_StreamingStoppedEvent;

template<typename TResult>
using IEventWithResult_1 = ::Liv::Lck::LckEvents_IEventWithResult_1<TResult>;

static inline ::Liv::Lck::LckEvents* New_ctor() ;

/// @brief Method .ctor, addr 0x9ce17d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckEvents(LckEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckEvents(LckEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24729};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::LckEvents) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck
// Dependencies 
namespace Liv::Lck {
// cpp template
template<typename TResult>
// Is value type: false
// CS Name: Liv.Lck.LckEvents/IEventWithResult`1<TResult>
class CORDL_TYPE LckEvents_IEventWithResult_1 {
public:
// Declarations
 __declspec(property(get=get_Result)) TResult  Result;

/// @brief Method get_Result, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline TResult get_Result() ;

// Ctor Parameters [CppParam { name: "", ty: "LckEvents_IEventWithResult_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckEvents_IEventWithResult_1(LckEvents_IEventWithResult_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24709};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck
