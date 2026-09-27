#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/ILckStreamer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILckStreamer)
namespace GlobalNamespace {
class ILckCaptureStateProvider;
}
namespace GlobalNamespace {
struct LckService_StopReason;
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
class ILckStreamer;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Streaming::ILckStreamer*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Streaming::ILckStreamer*, "Liv.Lck.Streaming", "ILckStreamer");
// Dependencies 
namespace Liv::Lck::Streaming {
// Is value type: false
// CS Name: Liv.Lck.Streaming.ILckStreamer
class CORDL_TYPE ILckStreamer {
public:
// Declarations
 __declspec(property(get=get_IsStreaming)) bool  IsStreaming;

/// @brief Convert operator to "::GlobalNamespace::ILckCaptureStateProvider"
constexpr operator  ::GlobalNamespace::ILckCaptureStateProvider*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method GetStreamDuration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* GetStreamDuration() ;

/// @brief Method SetLogLevel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetLogLevel(::Liv::NGFX::LogLevel  logLevel) ;

/// @brief Method StartStreaming, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* StartStreaming() ;

/// @brief Method StopStreaming, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* StopStreaming(::GlobalNamespace::LckService_StopReason  stopReason) ;

/// @brief Method get_IsStreaming, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsStreaming() ;

/// @brief Convert to "::GlobalNamespace::ILckCaptureStateProvider"
constexpr ::GlobalNamespace::ILckCaptureStateProvider* i___GlobalNamespace__ILckCaptureStateProvider() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ILckStreamer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckStreamer(ILckStreamer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24840};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck::Streaming
