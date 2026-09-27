#pragma once
// IWYU pragma private; include "Meta/Voice/NLayer/IMpegFrame.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IMpegFrame)
namespace Meta::Voice::NLayer {
struct MpegChannelMode;
}
namespace Meta::Voice::NLayer {
struct MpegLayer;
}
namespace Meta::Voice::NLayer {
struct MpegVersion;
}
// Forward declare root types
namespace Meta::Voice::NLayer {
class IMpegFrame;
}
// Write type traits
MARK_REF_T(::Meta::Voice::NLayer::IMpegFrame*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::NLayer::IMpegFrame*, "Meta.Voice.NLayer", "IMpegFrame");
// Dependencies 
namespace Meta::Voice::NLayer {
// Is value type: false
// CS Name: Meta.Voice.NLayer.IMpegFrame
class CORDL_TYPE IMpegFrame {
public:
// Declarations
 __declspec(property(get=get_BitRate)) int32_t  BitRate;

 __declspec(property(get=get_ChannelMode)) ::Meta::Voice::NLayer::MpegChannelMode  ChannelMode;

 __declspec(property(get=get_ChannelModeExtension)) int32_t  ChannelModeExtension;

 __declspec(property(get=get_FrameLength)) int32_t  FrameLength;

 __declspec(property(get=get_HasCrc)) bool  HasCrc;

 __declspec(property(get=get_Layer)) ::Meta::Voice::NLayer::MpegLayer  Layer;

 __declspec(property(get=get_SampleCount)) int32_t  SampleCount;

 __declspec(property(get=get_SampleRate)) int32_t  SampleRate;

 __declspec(property(get=get_Version)) ::Meta::Voice::NLayer::MpegVersion  Version;

/// @brief Method ReadBits, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t ReadBits(int32_t  bitCount) ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Reset() ;

/// @brief Method get_BitRate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_BitRate() ;

/// @brief Method get_ChannelMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::Voice::NLayer::MpegChannelMode get_ChannelMode() ;

/// @brief Method get_ChannelModeExtension, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_ChannelModeExtension() ;

/// @brief Method get_FrameLength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_FrameLength() ;

/// @brief Method get_HasCrc, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_HasCrc() ;

/// @brief Method get_Layer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::Voice::NLayer::MpegLayer get_Layer() ;

/// @brief Method get_SampleCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_SampleCount() ;

/// @brief Method get_SampleRate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_SampleRate() ;

/// @brief Method get_Version, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::Voice::NLayer::MpegVersion get_Version() ;

// Ctor Parameters [CppParam { name: "", ty: "IMpegFrame", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMpegFrame(IMpegFrame const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31382};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice::NLayer
