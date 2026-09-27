#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/ILckNativeStreamingService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ILckNativeStreamingService)
namespace Liv::Lck::Encoding {
struct LckEncodedPacketCallback;
}
namespace Liv::NGFX {
struct LogLevel;
}
// Forward declare root types
namespace Liv::Lck::Streaming {
class ILckNativeStreamingService;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Streaming::ILckNativeStreamingService*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Streaming::ILckNativeStreamingService*, "Liv.Lck.Streaming", "ILckNativeStreamingService");
// Dependencies 
namespace Liv::Lck::Streaming {
// Is value type: false
// CS Name: Liv.Lck.Streaming.ILckNativeStreamingService
class CORDL_TYPE ILckNativeStreamingService {
public:
// Declarations
/// @brief Method CreateNativeStreamer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool CreateNativeStreamer() ;

/// @brief Method DestroyNativeStreamer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DestroyNativeStreamer() ;

/// @brief Method GetStreamPacketCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::Encoding::LckEncodedPacketCallback GetStreamPacketCallback() ;

/// @brief Method HasNativeStreamer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool HasNativeStreamer() ;

/// @brief Method SetNativeStreamerLogLevel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetNativeStreamerLogLevel(::Liv::NGFX::LogLevel  logLevel) ;

/// @brief Method StartNativeStreamer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool StartNativeStreamer(int32_t  width, int32_t  height) ;

/// @brief Method StopNativeStreamer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool StopNativeStreamer() ;

// Ctor Parameters [CppParam { name: "", ty: "ILckNativeStreamingService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckNativeStreamingService(ILckNativeStreamingService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32671};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck::Streaming
