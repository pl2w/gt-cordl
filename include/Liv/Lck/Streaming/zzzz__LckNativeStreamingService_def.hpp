#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckNativeStreamingService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/NGFX/zzzz__LogLevel_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckNativeStreamingService)
namespace Liv::Lck::Encoding {
struct LckEncodedPacketCallback;
}
namespace Liv::Lck::Streaming {
class ILckNativeStreamingService;
}
namespace Liv::NGFX {
struct LogLevel;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Liv::Lck::Streaming {
class LckNativeStreamingService;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Streaming::LckNativeStreamingService*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Streaming::LckNativeStreamingService*, "Liv.Lck.Streaming", "LckNativeStreamingService");
// Dependencies Liv.NGFX.LogLevel, System.IntPtr, System.Object
namespace Liv::Lck::Streaming {
// Is value type: false
// CS Name: Liv.Lck.Streaming.LckNativeStreamingService
class CORDL_TYPE LckNativeStreamingService : public ::System::Object {
public:
// Declarations
/// @brief Field _logLevel, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__logLevel, put=__cordl_internal_set__logLevel)) ::Liv::NGFX::LogLevel  _logLevel;

/// @brief Field _streamerContext, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__streamerContext, put=__cordl_internal_set__streamerContext)) ::System::IntPtr  _streamerContext;

/// @brief Convert operator to "::Liv::Lck::Streaming::ILckNativeStreamingService"
constexpr operator  ::Liv::Lck::Streaming::ILckNativeStreamingService*() noexcept;

/// @brief Method CreateNativeStreamer, addr 0x9cf9644, size 0x3c, virtual true, abstract: false, final true
inline bool CreateNativeStreamer() ;

/// @brief Method CreateStreamer, addr 0x9cf92e4, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateStreamer() ;

/// @brief Method DestroyNativeStreamer, addr 0x9cf96a0, size 0x20, virtual true, abstract: false, final true
inline void DestroyNativeStreamer() ;

/// @brief Method DestroyStreamer, addr 0x9cf9348, size 0x7c, virtual false, abstract: false, final false
static inline void DestroyStreamer(::System::IntPtr  streamerContext) ;

/// @brief Method GetStreamPacketCallback, addr 0x9cf96f8, size 0x38, virtual true, abstract: false, final true
inline ::Liv::Lck::Encoding::LckEncodedPacketCallback GetStreamPacketCallback() ;

/// @brief Method GetStreamerCallbackFunction, addr 0x9cf955c, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr GetStreamerCallbackFunction() ;

/// @brief Method HasNativeStreamer, addr 0x9cf9680, size 0x10, virtual true, abstract: false, final true
inline bool HasNativeStreamer() ;

static inline ::Liv::Lck::Streaming::LckNativeStreamingService* New_ctor() ;

/// @brief Method SetNativeStreamerLogLevel, addr 0x9cf96e0, size 0x18, virtual true, abstract: false, final true
inline void SetNativeStreamerLogLevel(::Liv::NGFX::LogLevel  logLevel) ;

/// @brief Method SetPacketInterleaverEnabled, addr 0x9cf95c0, size 0x84, virtual false, abstract: false, final false
static inline void SetPacketInterleaverEnabled(::System::IntPtr  streamerContext, bool  enabled) ;

/// @brief Method SetStreamerLogLevel, addr 0x9cf94d8, size 0x84, virtual false, abstract: false, final false
static inline void SetStreamerLogLevel(::System::IntPtr  streamerContext, uint32_t  level) ;

/// @brief Method StartNativeStreamer, addr 0x9cf96c0, size 0x8, virtual true, abstract: false, final true
inline bool StartNativeStreamer(int32_t  width, int32_t  height) ;

/// @brief Method StartStreamer, addr 0x9cf93c4, size 0x98, virtual false, abstract: false, final false
static inline bool StartStreamer(::System::IntPtr  streamerContext, int32_t  width, int32_t  height) ;

/// @brief Method StopNativeStreamer, addr 0x9cf96c8, size 0x18, virtual true, abstract: false, final true
inline bool StopNativeStreamer() ;

/// @brief Method StopStreamer, addr 0x9cf945c, size 0x7c, virtual false, abstract: false, final false
static inline void StopStreamer(::System::IntPtr  streamerContext) ;

/// @brief Method UpdateNativeStreamerLogLevel, addr 0x9cf9690, size 0x10, virtual false, abstract: false, final false
inline void UpdateNativeStreamerLogLevel() ;

constexpr ::Liv::NGFX::LogLevel const& __cordl_internal_get__logLevel() const;

constexpr ::Liv::NGFX::LogLevel& __cordl_internal_get__logLevel() ;

constexpr ::System::IntPtr const& __cordl_internal_get__streamerContext() const;

constexpr ::System::IntPtr& __cordl_internal_get__streamerContext() ;

constexpr void __cordl_internal_set__logLevel(::Liv::NGFX::LogLevel  value) ;

constexpr void __cordl_internal_set__streamerContext(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x9cf9730, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Liv::Lck::Streaming::ILckNativeStreamingService"
constexpr ::Liv::Lck::Streaming::ILckNativeStreamingService* i___Liv__Lck__Streaming__ILckNativeStreamingService() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckNativeStreamingService() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckNativeStreamingService", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckNativeStreamingService(LckNativeStreamingService && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckNativeStreamingService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckNativeStreamingService(LckNativeStreamingService const& ) = delete;

/// @brief Field StreamingLib offset 0xffffffff size 0x8
static constexpr ::ConstString  StreamingLib{u"lck_streaming_rs"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32672};

/// @brief Field _streamerContext, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ____streamerContext;

/// @brief Field _logLevel, offset: 0x18, size: 0x4, def value: None
 ::Liv::NGFX::LogLevel  ____logLevel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Streaming::LckNativeStreamingService, ____streamerContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckNativeStreamingService, ____logLevel) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Streaming::LckNativeStreamingService) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck::Streaming
