#pragma once
// IWYU pragma private; include "Liv/Lck/Recorder/ILckNativeRecordingService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILckNativeRecordingService)
namespace Liv::Lck::Encoding {
struct LckEncodedPacketCallback;
}
namespace Liv::Lck::Recorder {
struct MuxerConfig;
}
namespace Liv::NGFX {
struct LogLevel;
}
// Forward declare root types
namespace Liv::Lck::Recorder {
class ILckNativeRecordingService;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Recorder::ILckNativeRecordingService*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Recorder::ILckNativeRecordingService*, "Liv.Lck.Recorder", "ILckNativeRecordingService");
// Dependencies 
namespace Liv::Lck::Recorder {
// Is value type: false
// CS Name: Liv.Lck.Recorder.ILckNativeRecordingService
class CORDL_TYPE ILckNativeRecordingService {
public:
// Declarations
/// @brief Method CreateNativeMuxer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool CreateNativeMuxer() ;

/// @brief Method DestroyNativeMuxer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DestroyNativeMuxer() ;

/// @brief Method GetMuxPacketCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::Encoding::LckEncodedPacketCallback GetMuxPacketCallback() ;

/// @brief Method HasNativeMuxer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool HasNativeMuxer() ;

/// @brief Method SetNativeMuxerLogLevel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetNativeMuxerLogLevel(::Liv::NGFX::LogLevel  logLevel) ;

/// @brief Method StartNativeMuxer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool StartNativeMuxer(::by_ref<::Liv::Lck::Recorder::MuxerConfig>  config) ;

/// @brief Method StopNativeMuxer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool StopNativeMuxer() ;

// Ctor Parameters [CppParam { name: "", ty: "ILckNativeRecordingService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckNativeRecordingService(ILckNativeRecordingService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24971};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck::Recorder
