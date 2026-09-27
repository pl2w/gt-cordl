#pragma once
// IWYU pragma private; include "Liv/Lck/Recorder/ILckRecorder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILckRecorder)
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
namespace Liv::Lck::Recorder {
class ILckRecorder;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Recorder::ILckRecorder*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Recorder::ILckRecorder*, "Liv.Lck.Recorder", "ILckRecorder");
// Dependencies 
namespace Liv::Lck::Recorder {
// Is value type: false
// CS Name: Liv.Lck.Recorder.ILckRecorder
class CORDL_TYPE ILckRecorder {
public:
// Declarations
/// @brief Convert operator to "::GlobalNamespace::ILckCaptureStateProvider"
constexpr operator  ::GlobalNamespace::ILckCaptureStateProvider*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method GetRecordingDuration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* GetRecordingDuration() ;

/// @brief Method IsRecording, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<bool>* IsRecording() ;

/// @brief Method PauseRecording, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* PauseRecording() ;

/// @brief Method ResumeRecording, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* ResumeRecording() ;

/// @brief Method SetLogLevel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetLogLevel(::Liv::NGFX::LogLevel  logLevel) ;

/// @brief Method StartRecording, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* StartRecording() ;

/// @brief Method StopRecording, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* StopRecording(::GlobalNamespace::LckService_StopReason  stopReason) ;

/// @brief Convert to "::GlobalNamespace::ILckCaptureStateProvider"
constexpr ::GlobalNamespace::ILckCaptureStateProvider* i___GlobalNamespace__ILckCaptureStateProvider() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ILckRecorder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckRecorder(ILckRecorder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24962};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck::Recorder
