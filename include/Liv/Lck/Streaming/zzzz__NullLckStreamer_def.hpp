#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/NullLckStreamer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NullLckStreamer)
namespace GlobalNamespace {
class ILckCaptureStateProvider;
}
namespace GlobalNamespace {
struct LckService_StopReason;
}
namespace Liv::Lck::Streaming {
class ILckStreamer;
}
namespace Liv::Lck {
struct LckCaptureState;
}
namespace Liv::Lck {
template<typename T>
class LckResult_1;
}
namespace Liv::Lck {
class LckResult;
}
namespace Liv::NGFX {
struct LogLevel;
}
namespace System {
class IDisposable;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Liv::Lck::Streaming {
class NullLckStreamer;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Streaming::NullLckStreamer*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Streaming::NullLckStreamer*, "Liv.Lck.Streaming", "NullLckStreamer");
// Dependencies System.Object
namespace Liv::Lck::Streaming {
// Is value type: false
// CS Name: Liv.Lck.Streaming.NullLckStreamer
class CORDL_TYPE NullLckStreamer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CurrentCaptureState)) ::Liv::Lck::LckCaptureState  CurrentCaptureState;

 __declspec(property(get=get_IsStreaming)) bool  IsStreaming;

/// @brief Convert operator to "::GlobalNamespace::ILckCaptureStateProvider"
constexpr operator  ::GlobalNamespace::ILckCaptureStateProvider*() noexcept;

/// @brief Convert operator to "::Liv::Lck::Streaming::ILckStreamer"
constexpr operator  ::Liv::Lck::Streaming::ILckStreamer*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x9d3d704, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetStreamDuration, addr 0x9d3d7a0, size 0x5c, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* GetStreamDuration() ;

/// @brief Method IsPaused, addr 0x9d3d698, size 0x5c, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<bool>* IsPaused() ;

/// @brief [Preserve]
static inline ::Liv::Lck::Streaming::NullLckStreamer* New_ctor() ;

/// @brief Method SetLogLevel, addr 0x9d3d7fc, size 0x4, virtual true, abstract: false, final true
inline void SetLogLevel(::Liv::NGFX::LogLevel  logLevel) ;

/// @brief Method StartStreaming, addr 0x9d3d710, size 0x48, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* StartStreaming() ;

/// @brief Method StopStreaming, addr 0x9d3d758, size 0x48, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* StopStreaming(::GlobalNamespace::LckService_StopReason  stopReason) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9d3d6fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentCaptureState, addr 0x9d3d6f4, size 0x8, virtual true, abstract: false, final true
inline ::Liv::Lck::LckCaptureState get_CurrentCaptureState() ;

/// @brief Method get_IsStreaming, addr 0x9d3d708, size 0x8, virtual true, abstract: false, final true
inline bool get_IsStreaming() ;

/// @brief Convert to "::GlobalNamespace::ILckCaptureStateProvider"
constexpr ::GlobalNamespace::ILckCaptureStateProvider* i___GlobalNamespace__ILckCaptureStateProvider() noexcept;

/// @brief Convert to "::Liv::Lck::Streaming::ILckStreamer"
constexpr ::Liv::Lck::Streaming::ILckStreamer* i___Liv__Lck__Streaming__ILckStreamer() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NullLckStreamer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NullLckStreamer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NullLckStreamer(NullLckStreamer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NullLckStreamer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NullLckStreamer(NullLckStreamer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24843};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Streaming::NullLckStreamer) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Streaming
