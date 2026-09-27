#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/ILckEncoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ILckEncoder)
namespace Liv::Lck::Collections {
class AudioBuffer;
}
namespace Liv::Lck::Encoding {
struct EncoderConsumer;
}
namespace Liv::Lck::Encoding {
struct EncoderSessionData;
}
namespace Liv::Lck::Encoding {
struct LckEncodedPacketHandler;
}
namespace Liv::Lck {
struct CameraTrackDescriptor;
}
namespace Liv::Lck {
class LckResult;
}
namespace Liv::NGFX {
struct LogLevel;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Liv::Lck::Encoding {
class ILckEncoder;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Encoding::ILckEncoder*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Encoding::ILckEncoder*, "Liv.Lck.Encoding", "ILckEncoder");
// Dependencies 
namespace Liv::Lck::Encoding {
// Is value type: false
// CS Name: Liv.Lck.Encoding.ILckEncoder
class CORDL_TYPE ILckEncoder {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AcquireEncoder, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* AcquireEncoder(::Liv::Lck::Encoding::EncoderConsumer  consumer, ::Liv::Lck::CameraTrackDescriptor  descriptor, ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*  handlers) ;

/// @brief Method EncodeFrame, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool EncodeFrame(float_t  videoTimeSeconds, ::Liv::Lck::Collections::AudioBuffer*  audioData, bool  encodeVideo) ;

/// @brief Method GetCurrentSessionData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::Encoding::EncoderSessionData GetCurrentSessionData() ;

/// @brief Method IsActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsActive() ;

/// @brief Method IsPaused, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsPaused() ;

/// @brief Method ReleaseEncoderAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* ReleaseEncoderAsync(::Liv::Lck::Encoding::EncoderConsumer  consumer, ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*  handlers) ;

/// @brief Method SetLogLevel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetLogLevel(::Liv::NGFX::LogLevel  logLevel) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ILckEncoder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckEncoder(ILckEncoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24879};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck::Encoding
