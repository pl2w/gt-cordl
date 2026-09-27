#pragma once
// IWYU pragma private; include "POpusCodec/OpusDecoder_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "POpusCodec/Enums/zzzz__Bandwidth_def.hpp"
#include "Photon/Voice/zzzz__FrameBuffer_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OpusDecoder_1)
namespace POpusCodec::Enums {
struct Bandwidth;
}
namespace POpusCodec::Enums {
struct Channels;
}
namespace POpusCodec::Enums {
struct SamplingRate;
}
namespace Photon::Voice {
struct FrameBuffer;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace POpusCodec {
template<typename T>
class OpusDecoder_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::POpusCodec::OpusDecoder_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::POpusCodec::OpusDecoder_1, "POpusCodec", "OpusDecoder`1");
// Dependencies POpusCodec.Enums.Bandwidth, Photon.Voice.FrameBuffer, System.IntPtr, System.Nullable`1<T>, System.Object
namespace POpusCodec {
// cpp template
template<typename T>
// Is value type: false
// CS Name: POpusCodec.OpusDecoder`1<T>
class CORDL_TYPE OpusDecoder_1 : public ::System::Object {
public:
// Declarations
/// @brief Field EmptyBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EmptyBuffer, put=setStaticF_EmptyBuffer)) ::ArrayW<T>  EmptyBuffer;

 __declspec(property(get=get_PreviousPacketBandwidth)) ::System::Nullable_1<::POpusCodec::Enums::Bandwidth>  PreviousPacketBandwidth;

/// @brief Field TisFloat, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_TisFloat, put=__cordl_internal_set_TisFloat)) bool  TisFloat;

/// @brief Field _channelCount, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__channelCount, put=__cordl_internal_set__channelCount)) int32_t  _channelCount;

/// @brief Field _handle, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__handle, put=__cordl_internal_set__handle)) ::System::IntPtr  _handle;

/// @brief Field _previousPacketBandwidth, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__previousPacketBandwidth, put=__cordl_internal_set__previousPacketBandwidth)) ::System::Nullable_1<::POpusCodec::Enums::Bandwidth>  _previousPacketBandwidth;

/// @brief Field buffer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::ArrayW<T>  buffer;

/// @brief Field prevPacketData, offset 0x40, size 0x38 
 __declspec(property(get=__cordl_internal_get_prevPacketData, put=__cordl_internal_set_prevPacketData)) ::Photon::Voice::FrameBuffer  prevPacketData;

/// @brief Field prevPacketInvalid, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_prevPacketInvalid, put=__cordl_internal_set_prevPacketInvalid)) bool  prevPacketInvalid;

/// @brief Field sizeofT, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_sizeofT, put=__cordl_internal_set_sizeofT)) int32_t  sizeofT;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method DecodeEndOfStream, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<T> DecodeEndOfStream() ;

/// @brief Method DecodePacket, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<T> DecodePacket(::by_ref<::Photon::Voice::FrameBuffer>  packetData) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::POpusCodec::OpusDecoder_1<T>* New_ctor(::POpusCodec::Enums::SamplingRate  outputSamplingRateHz, ::POpusCodec::Enums::Channels  numChannels) ;

constexpr bool const& __cordl_internal_get_TisFloat() const;

constexpr bool& __cordl_internal_get_TisFloat() ;

constexpr int32_t const& __cordl_internal_get__channelCount() const;

constexpr int32_t& __cordl_internal_get__channelCount() ;

constexpr ::System::IntPtr const& __cordl_internal_get__handle() const;

constexpr ::System::IntPtr& __cordl_internal_get__handle() ;

constexpr ::System::Nullable_1<::POpusCodec::Enums::Bandwidth> const& __cordl_internal_get__previousPacketBandwidth() const;

constexpr ::System::Nullable_1<::POpusCodec::Enums::Bandwidth>& __cordl_internal_get__previousPacketBandwidth() ;

constexpr ::ArrayW<T> const& __cordl_internal_get_buffer() const;

constexpr ::ArrayW<T>& __cordl_internal_get_buffer() ;

constexpr ::Photon::Voice::FrameBuffer const& __cordl_internal_get_prevPacketData() const;

constexpr ::Photon::Voice::FrameBuffer& __cordl_internal_get_prevPacketData() ;

constexpr bool const& __cordl_internal_get_prevPacketInvalid() const;

constexpr bool& __cordl_internal_get_prevPacketInvalid() ;

constexpr int32_t const& __cordl_internal_get_sizeofT() const;

constexpr int32_t& __cordl_internal_get_sizeofT() ;

constexpr void __cordl_internal_set_TisFloat(bool  value) ;

constexpr void __cordl_internal_set__channelCount(int32_t  value) ;

constexpr void __cordl_internal_set__handle(::System::IntPtr  value) ;

constexpr void __cordl_internal_set__previousPacketBandwidth(::System::Nullable_1<::POpusCodec::Enums::Bandwidth>  value) ;

constexpr void __cordl_internal_set_buffer(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set_prevPacketData(::Photon::Voice::FrameBuffer  value) ;

constexpr void __cordl_internal_set_prevPacketInvalid(bool  value) ;

constexpr void __cordl_internal_set_sizeofT(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::POpusCodec::Enums::SamplingRate  outputSamplingRateHz, ::POpusCodec::Enums::Channels  numChannels) ;

static inline ::ArrayW<T> getStaticF_EmptyBuffer() ;

/// @brief Method get_PreviousPacketBandwidth, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Nullable_1<::POpusCodec::Enums::Bandwidth> get_PreviousPacketBandwidth() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_EmptyBuffer(::ArrayW<T>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpusDecoder_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpusDecoder_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpusDecoder_1(OpusDecoder_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpusDecoder_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpusDecoder_1(OpusDecoder_1 const& ) = delete;

/// @brief Field MaxFrameSize offset 0xffffffff size 0x4
static constexpr int32_t  MaxFrameSize{static_cast<int32_t>(0x1680)};

/// @brief Field UseInbandFEC offset 0xffffffff size 0x1
static constexpr bool  UseInbandFEC{true};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28362};

/// @brief Field TisFloat, offset: 0x10, size: 0x1, def value: None
 bool  ___TisFloat;

/// @brief Field sizeofT, offset: 0x14, size: 0x4, def value: None
 int32_t  ___sizeofT;

/// @brief Field _handle, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  ____handle;

/// @brief Field _channelCount, offset: 0x20, size: 0x4, def value: None
 int32_t  ____channelCount;

/// @brief Field _previousPacketBandwidth, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::POpusCodec::Enums::Bandwidth>  ____previousPacketBandwidth;

/// @brief Field buffer, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<T>  ___buffer;

/// @brief Field prevPacketData, offset: 0x40, size: 0x38, def value: None
 ::Photon::Voice::FrameBuffer  ___prevPacketData;

/// @brief Field prevPacketInvalid, offset: 0x78, size: 0x1, def value: None
 bool  ___prevPacketInvalid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def POpusCodec
