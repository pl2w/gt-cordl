#pragma once
// IWYU pragma private; include "POpusCodec/OpusEncoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "POpusCodec/Enums/zzzz__Channels_def.hpp"
#include "POpusCodec/Enums/zzzz__Delay_def.hpp"
#include "POpusCodec/Enums/zzzz__SamplingRate_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OpusEncoder)
namespace POpusCodec::Enums {
struct Bandwidth;
}
namespace POpusCodec::Enums {
struct Channels;
}
namespace POpusCodec::Enums {
struct Complexity;
}
namespace POpusCodec::Enums {
struct Delay;
}
namespace POpusCodec::Enums {
struct ForceChannels;
}
namespace POpusCodec::Enums {
struct OpusApplicationType;
}
namespace POpusCodec::Enums {
struct SamplingRate;
}
namespace POpusCodec::Enums {
struct SignalHint;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace POpusCodec {
class OpusEncoder;
}
// Write type traits
MARK_REF_T(::POpusCodec::OpusEncoder*);
DEFINE_IL2CPP_CLASS(::POpusCodec::OpusEncoder*, "POpusCodec", "OpusEncoder");
// Dependencies POpusCodec.Enums.Channels, POpusCodec.Enums.Delay, POpusCodec.Enums.SamplingRate, System.ArraySegment`1<T>, System.IntPtr, System.Object
namespace POpusCodec {
// Is value type: false
// CS Name: POpusCodec.OpusEncoder
class CORDL_TYPE OpusEncoder : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Bitrate, put=set_Bitrate)) int32_t  Bitrate;

 __declspec(property(get=get_Complexity, put=set_Complexity)) ::POpusCodec::Enums::Complexity  Complexity;

 __declspec(property(get=get_DtxEnabled, put=set_DtxEnabled)) bool  DtxEnabled;

/// @brief Field EmptyBuffer, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_EmptyBuffer, put=setStaticF_EmptyBuffer)) ::System::ArraySegment_1<uint8_t>  EmptyBuffer;

 __declspec(property(get=get_EncoderDelay, put=set_EncoderDelay)) ::POpusCodec::Enums::Delay  EncoderDelay;

 __declspec(property(get=get_ExpectedPacketLossPercentage, put=set_ExpectedPacketLossPercentage)) int32_t  ExpectedPacketLossPercentage;

 __declspec(property(get=get_ForceChannels, put=set_ForceChannels)) ::POpusCodec::Enums::ForceChannels  ForceChannels;

 __declspec(property(get=get_FrameSizePerChannel)) int32_t  FrameSizePerChannel;

 __declspec(property(get=get_InputChannels)) ::POpusCodec::Enums::Channels  InputChannels;

 __declspec(property(get=get_InputSamplingRate)) ::POpusCodec::Enums::SamplingRate  InputSamplingRate;

 __declspec(property(get=get_MaxBandwidth, put=set_MaxBandwidth)) ::POpusCodec::Enums::Bandwidth  MaxBandwidth;

 __declspec(property(get=get_PacketLossPercentage, put=set_PacketLossPercentage)) int32_t  PacketLossPercentage;

 __declspec(property(get=get_SignalHint, put=set_SignalHint)) ::POpusCodec::Enums::SignalHint  SignalHint;

 __declspec(property(get=get_UseInbandFEC, put=set_UseInbandFEC)) bool  UseInbandFEC;

 __declspec(property(get=get_UseUnconstrainedVBR, put=set_UseUnconstrainedVBR)) bool  UseUnconstrainedVBR;

/// @brief Field _encoderDelay, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__encoderDelay, put=__cordl_internal_set__encoderDelay)) ::POpusCodec::Enums::Delay  _encoderDelay;

/// @brief Field _frameSizePerChannel, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__frameSizePerChannel, put=__cordl_internal_set__frameSizePerChannel)) int32_t  _frameSizePerChannel;

/// @brief Field _handle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__handle, put=__cordl_internal_set__handle)) ::System::IntPtr  _handle;

/// @brief Field _inputChannels, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__inputChannels, put=__cordl_internal_set__inputChannels)) ::POpusCodec::Enums::Channels  _inputChannels;

/// @brief Field _inputSamplingRate, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__inputSamplingRate, put=__cordl_internal_set__inputSamplingRate)) ::POpusCodec::Enums::SamplingRate  _inputSamplingRate;

/// @brief Field writePacket, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_writePacket, put=__cordl_internal_set_writePacket)) ::ArrayW<uint8_t>  writePacket;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xa74367c, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Encode, addr 0xa74312c, size 0xc0, virtual false, abstract: false, final false
inline ::System::ArraySegment_1<uint8_t> Encode(::ArrayW<float_t>  pcmSamples) ;

/// @brief Method Encode, addr 0xa7433d4, size 0xc0, virtual false, abstract: false, final false
inline ::System::ArraySegment_1<uint8_t> Encode(::ArrayW<int16_t>  pcmSamples) ;

static inline ::POpusCodec::OpusEncoder* New_ctor(::POpusCodec::Enums::SamplingRate  inputSamplingRateHz, ::POpusCodec::Enums::Channels  numChannels, int32_t  bitrate, ::POpusCodec::Enums::OpusApplicationType  applicationType, ::POpusCodec::Enums::Delay  encoderDelay) ;

constexpr ::POpusCodec::Enums::Delay const& __cordl_internal_get__encoderDelay() const;

constexpr ::POpusCodec::Enums::Delay& __cordl_internal_get__encoderDelay() ;

constexpr int32_t const& __cordl_internal_get__frameSizePerChannel() const;

constexpr int32_t& __cordl_internal_get__frameSizePerChannel() ;

constexpr ::System::IntPtr const& __cordl_internal_get__handle() const;

constexpr ::System::IntPtr& __cordl_internal_get__handle() ;

constexpr ::POpusCodec::Enums::Channels const& __cordl_internal_get__inputChannels() const;

constexpr ::POpusCodec::Enums::Channels& __cordl_internal_get__inputChannels() ;

constexpr ::POpusCodec::Enums::SamplingRate const& __cordl_internal_get__inputSamplingRate() const;

constexpr ::POpusCodec::Enums::SamplingRate& __cordl_internal_get__inputSamplingRate() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_writePacket() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_writePacket() ;

constexpr void __cordl_internal_set__encoderDelay(::POpusCodec::Enums::Delay  value) ;

constexpr void __cordl_internal_set__frameSizePerChannel(int32_t  value) ;

constexpr void __cordl_internal_set__handle(::System::IntPtr  value) ;

constexpr void __cordl_internal_set__inputChannels(::POpusCodec::Enums::Channels  value) ;

constexpr void __cordl_internal_set__inputSamplingRate(::POpusCodec::Enums::SamplingRate  value) ;

constexpr void __cordl_internal_set_writePacket(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0xa742910, size 0x3dc, virtual false, abstract: false, final false
inline void _ctor(::POpusCodec::Enums::SamplingRate  inputSamplingRateHz, ::POpusCodec::Enums::Channels  numChannels, int32_t  bitrate, ::POpusCodec::Enums::OpusApplicationType  applicationType, ::POpusCodec::Enums::Delay  encoderDelay) ;

static inline ::System::ArraySegment_1<uint8_t> getStaticF_EmptyBuffer() ;

/// @brief Method get_Bitrate, addr 0xa742448, size 0xc, virtual false, abstract: false, final false
inline int32_t get_Bitrate() ;

/// @brief Method get_Complexity, addr 0xa7427f0, size 0xc, virtual false, abstract: false, final false
inline ::POpusCodec::Enums::Complexity get_Complexity() ;

/// @brief Method get_DtxEnabled, addr 0xa7428e0, size 0x20, virtual false, abstract: false, final false
inline bool get_DtxEnabled() ;

/// @brief Method get_EncoderDelay, addr 0xa742438, size 0x8, virtual false, abstract: false, final false
inline ::POpusCodec::Enums::Delay get_EncoderDelay() ;

/// @brief Method get_ExpectedPacketLossPercentage, addr 0xa74280c, size 0xc, virtual false, abstract: false, final false
inline int32_t get_ExpectedPacketLossPercentage() ;

/// @brief Method get_ForceChannels, addr 0xa742844, size 0xc, virtual false, abstract: false, final false
inline ::POpusCodec::Enums::ForceChannels get_ForceChannels() ;

/// @brief Method get_FrameSizePerChannel, addr 0xa742440, size 0x8, virtual false, abstract: false, final false
inline int32_t get_FrameSizePerChannel() ;

/// @brief Method get_InputChannels, addr 0xa74231c, size 0x8, virtual false, abstract: false, final false
inline ::POpusCodec::Enums::Channels get_InputChannels() ;

/// @brief Method get_InputSamplingRate, addr 0xa742314, size 0x8, virtual false, abstract: false, final false
inline ::POpusCodec::Enums::SamplingRate get_InputSamplingRate() ;

/// @brief Method get_MaxBandwidth, addr 0xa7427d4, size 0xc, virtual false, abstract: false, final false
inline ::POpusCodec::Enums::Bandwidth get_MaxBandwidth() ;

/// @brief Method get_PacketLossPercentage, addr 0xa742890, size 0xc, virtual false, abstract: false, final false
inline int32_t get_PacketLossPercentage() ;

/// @brief Method get_SignalHint, addr 0xa742828, size 0xc, virtual false, abstract: false, final false
inline ::POpusCodec::Enums::SignalHint get_SignalHint() ;

/// @brief Method get_UseInbandFEC, addr 0xa742860, size 0x20, virtual false, abstract: false, final false
inline bool get_UseInbandFEC() ;

/// @brief Method get_UseUnconstrainedVBR, addr 0xa7428ac, size 0x20, virtual false, abstract: false, final false
inline bool get_UseUnconstrainedVBR() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_EmptyBuffer(::System::ArraySegment_1<uint8_t>  value) ;

/// @brief Method set_Bitrate, addr 0xa7425e4, size 0x10, virtual false, abstract: false, final false
inline void set_Bitrate(int32_t  value) ;

/// @brief Method set_Complexity, addr 0xa7427fc, size 0x10, virtual false, abstract: false, final false
inline void set_Complexity(::POpusCodec::Enums::Complexity  value) ;

/// @brief Method set_DtxEnabled, addr 0xa742900, size 0x10, virtual false, abstract: false, final false
inline void set_DtxEnabled(bool  value) ;

/// @brief Method set_EncoderDelay, addr 0xa742324, size 0x114, virtual false, abstract: false, final false
inline void set_EncoderDelay(::POpusCodec::Enums::Delay  value) ;

/// @brief Method set_ExpectedPacketLossPercentage, addr 0xa742818, size 0x10, virtual false, abstract: false, final false
inline void set_ExpectedPacketLossPercentage(int32_t  value) ;

/// @brief Method set_ForceChannels, addr 0xa742850, size 0x10, virtual false, abstract: false, final false
inline void set_ForceChannels(::POpusCodec::Enums::ForceChannels  value) ;

/// @brief Method set_MaxBandwidth, addr 0xa7427e0, size 0x10, virtual false, abstract: false, final false
inline void set_MaxBandwidth(::POpusCodec::Enums::Bandwidth  value) ;

/// @brief Method set_PacketLossPercentage, addr 0xa74289c, size 0x10, virtual false, abstract: false, final false
inline void set_PacketLossPercentage(int32_t  value) ;

/// @brief Method set_SignalHint, addr 0xa742834, size 0x10, virtual false, abstract: false, final false
inline void set_SignalHint(::POpusCodec::Enums::SignalHint  value) ;

/// @brief Method set_UseInbandFEC, addr 0xa742880, size 0x10, virtual false, abstract: false, final false
inline void set_UseInbandFEC(bool  value) ;

/// @brief Method set_UseUnconstrainedVBR, addr 0xa7428cc, size 0x14, virtual false, abstract: false, final false
inline void set_UseUnconstrainedVBR(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpusEncoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpusEncoder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpusEncoder(OpusEncoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpusEncoder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpusEncoder(OpusEncoder const& ) = delete;

/// @brief Field BitrateMax offset 0xffffffff size 0x4
static constexpr int32_t  BitrateMax{static_cast<int32_t>(0xffffffff)};

/// @brief Field RecommendedMaxPacketSize offset 0xffffffff size 0x4
static constexpr int32_t  RecommendedMaxPacketSize{static_cast<int32_t>(0xfa0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28364};

/// @brief Field _handle, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ____handle;

/// @brief Field _frameSizePerChannel, offset: 0x18, size: 0x4, def value: None
 int32_t  ____frameSizePerChannel;

/// @brief Field _inputSamplingRate, offset: 0x1c, size: 0x4, def value: None
 ::POpusCodec::Enums::SamplingRate  ____inputSamplingRate;

/// @brief Field _inputChannels, offset: 0x20, size: 0x4, def value: None
 ::POpusCodec::Enums::Channels  ____inputChannels;

/// @brief Field writePacket, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___writePacket;

/// @brief Field _encoderDelay, offset: 0x30, size: 0x4, def value: None
 ::POpusCodec::Enums::Delay  ____encoderDelay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::POpusCodec::OpusEncoder, ____handle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::POpusCodec::OpusEncoder, ____frameSizePerChannel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::POpusCodec::OpusEncoder, ____inputSamplingRate) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::POpusCodec::OpusEncoder, ____inputChannels) == 0x20, "Offset mismatch!");

static_assert(offsetof(::POpusCodec::OpusEncoder, ___writePacket) == 0x28, "Offset mismatch!");

static_assert(offsetof(::POpusCodec::OpusEncoder, ____encoderDelay) == 0x30, "Offset mismatch!");

static_assert(sizeof(::POpusCodec::OpusEncoder) == 0x38, "Size mismatch!");

} // namespace end def POpusCodec
