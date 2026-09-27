#pragma once
// IWYU pragma private; include "POpusCodec/Wrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Wrapper)
namespace POpusCodec::Enums {
struct Channels;
}
namespace POpusCodec::Enums {
struct OpusApplicationType;
}
namespace POpusCodec::Enums {
struct OpusCtlGetRequest;
}
namespace POpusCodec::Enums {
struct OpusCtlSetRequest;
}
namespace POpusCodec::Enums {
struct OpusStatusCode;
}
namespace POpusCodec::Enums {
struct SamplingRate;
}
namespace Photon::Voice {
struct FrameBuffer;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace POpusCodec {
class Wrapper;
}
// Write type traits
MARK_REF_T(::POpusCodec::Wrapper*);
DEFINE_IL2CPP_CLASS(::POpusCodec::Wrapper*, "POpusCodec", "Wrapper");
// Dependencies System.Object
namespace POpusCodec {
// Is value type: false
// CS Name: POpusCodec.Wrapper
class CORDL_TYPE Wrapper : public ::System::Object {
public:
// Declarations
/// @brief Method HandleStatusCode, addr 0xa74408c, size 0x148, virtual false, abstract: false, final false
static inline void HandleStatusCode(::POpusCodec::Enums::OpusStatusCode  statusCode, /* [ParamArray] */ ::ArrayW<::System::Object*>  info) ;

static inline ::POpusCodec::Wrapper* New_ctor() ;

/// @brief Method .ctor, addr 0xa744ea8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_opus_decoder_ctl, addr 0xa7441d4, size 0x1ec, virtual false, abstract: false, final false
static inline int32_t get_opus_decoder_ctl(::System::IntPtr  st, ::POpusCodec::Enums::OpusCtlGetRequest  request) ;

/// @brief Method get_opus_encoder_ctl, addr 0xa742454, size 0x190, virtual false, abstract: false, final false
static inline int32_t get_opus_encoder_ctl(::System::IntPtr  st, ::POpusCodec::Enums::OpusCtlGetRequest  request) ;

/// @brief Method opus_decode, addr 0xa744c00, size 0x2a8, virtual false, abstract: false, final false
static inline int32_t opus_decode(::System::IntPtr  st, ::Photon::Voice::FrameBuffer  data, ::ArrayW<float_t>  pcm, int32_t  decode_fec, int32_t  channels) ;

/// @brief Method opus_decode, addr 0xa7448bc, size 0x2a8, virtual false, abstract: false, final false
static inline int32_t opus_decode(::System::IntPtr  st, ::Photon::Voice::FrameBuffer  data, ::ArrayW<int16_t>  pcm, int32_t  decode_fec, int32_t  channels) ;

/// @brief Method opus_decode, addr 0xa743d98, size 0xbc, virtual false, abstract: false, final false
static inline int32_t opus_decode(::System::IntPtr  st, ::System::IntPtr  data, int32_t  len, ::ArrayW<int16_t>  pcm, int32_t  frame_size, int32_t  decode_fec) ;

/// @brief Method opus_decode_float, addr 0xa743e54, size 0xbc, virtual false, abstract: false, final false
static inline int32_t opus_decode_float(::System::IntPtr  st, ::System::IntPtr  data, int32_t  len, ::ArrayW<float_t>  pcm, int32_t  frame_size, int32_t  decode_fec) ;

/// @brief Method opus_decoder_create, addr 0xa7445a0, size 0x2c4, virtual false, abstract: false, final false
static inline ::System::IntPtr opus_decoder_create(::POpusCodec::Enums::SamplingRate  Fs, ::POpusCodec::Enums::Channels  channels) ;

/// @brief Method opus_decoder_ctl_get, addr 0xa743bf4, size 0x94, virtual false, abstract: false, final false
static inline int32_t opus_decoder_ctl_get(::System::IntPtr  st, ::POpusCodec::Enums::OpusCtlGetRequest  request, ::by_ref<int32_t>  value) ;

/// @brief Method opus_decoder_ctl_set, addr 0xa743b64, size 0x90, virtual false, abstract: false, final false
static inline int32_t opus_decoder_ctl_set(::System::IntPtr  st, ::POpusCodec::Enums::OpusCtlSetRequest  request, int32_t  value) ;

/// @brief Method opus_decoder_destroy, addr 0xa744864, size 0x58, virtual false, abstract: false, final false
static inline void opus_decoder_destroy(::System::IntPtr  st) ;

/// @brief Method opus_decoder_get_size, addr 0xa743c88, size 0x7c, virtual false, abstract: false, final false
static inline int32_t opus_decoder_get_size(::POpusCodec::Enums::Channels  channels) ;

/// @brief Method opus_decoder_init, addr 0xa743d04, size 0x94, virtual false, abstract: false, final false
static inline ::POpusCodec::Enums::OpusStatusCode opus_decoder_init(::System::IntPtr  st, ::POpusCodec::Enums::SamplingRate  Fs, ::POpusCodec::Enums::Channels  channels) ;

/// @brief Method opus_encode, addr 0xa7431ec, size 0x1e8, virtual false, abstract: false, final false
static inline int32_t opus_encode(::System::IntPtr  st, ::ArrayW<float_t>  pcm, int32_t  frame_size, ::ArrayW<uint8_t>  data) ;

/// @brief Method opus_encode, addr 0xa743494, size 0x1e8, virtual false, abstract: false, final false
static inline int32_t opus_encode(::System::IntPtr  st, ::ArrayW<int16_t>  pcm, int32_t  frame_size, ::ArrayW<uint8_t>  data) ;

/// @brief Method opus_encode, addr 0xa7438c8, size 0xbc, virtual false, abstract: false, final false
static inline int32_t opus_encode(::System::IntPtr  st, ::ArrayW<int16_t>  pcm, int32_t  frame_size, ::ArrayW<uint8_t>  data, int32_t  max_data_bytes) ;

/// @brief Method opus_encode_float, addr 0xa743984, size 0xbc, virtual false, abstract: false, final false
static inline int32_t opus_encode_float(::System::IntPtr  st, ::ArrayW<float_t>  pcm, int32_t  frame_size, ::ArrayW<uint8_t>  data, int32_t  max_data_bytes) ;

/// @brief Method opus_encoder_create, addr 0xa742cec, size 0x33c, virtual false, abstract: false, final false
static inline ::System::IntPtr opus_encoder_create(::POpusCodec::Enums::SamplingRate  Fs, ::POpusCodec::Enums::Channels  channels, ::POpusCodec::Enums::OpusApplicationType  application) ;

/// @brief Method opus_encoder_ctl_get, addr 0xa743ad0, size 0x94, virtual false, abstract: false, final false
static inline int32_t opus_encoder_ctl_get(::System::IntPtr  st, ::POpusCodec::Enums::OpusCtlGetRequest  request, ::by_ref<int32_t>  value) ;

/// @brief Method opus_encoder_ctl_set, addr 0xa743a40, size 0x90, virtual false, abstract: false, final false
static inline int32_t opus_encoder_ctl_set(::System::IntPtr  st, ::POpusCodec::Enums::OpusCtlSetRequest  request, int32_t  value) ;

/// @brief Method opus_encoder_destroy, addr 0xa74369c, size 0x58, virtual false, abstract: false, final false
static inline void opus_encoder_destroy(::System::IntPtr  st) ;

/// @brief Method opus_encoder_get_size, addr 0xa7437b0, size 0x7c, virtual false, abstract: false, final false
static inline int32_t opus_encoder_get_size(::POpusCodec::Enums::Channels  channels) ;

/// @brief Method opus_encoder_init, addr 0xa74382c, size 0x9c, virtual false, abstract: false, final false
static inline ::POpusCodec::Enums::OpusStatusCode opus_encoder_init(::System::IntPtr  st, ::POpusCodec::Enums::SamplingRate  Fs, ::POpusCodec::Enums::Channels  channels, ::POpusCodec::Enums::OpusApplicationType  application) ;

/// @brief Method opus_get_version_string, addr 0xa7422b4, size 0x60, virtual false, abstract: false, final false
static inline ::System::IntPtr opus_get_version_string() ;

/// @brief Method opus_packet_get_bandwidth, addr 0xa743f10, size 0x7c, virtual false, abstract: false, final false
static inline int32_t opus_packet_get_bandwidth(::System::IntPtr  data) ;

/// @brief Method opus_packet_get_nb_channels, addr 0xa743f8c, size 0x84, virtual false, abstract: false, final false
static inline int32_t opus_packet_get_nb_channels(::ArrayW<uint8_t>  data) ;

/// @brief Method opus_strerror, addr 0xa744010, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr opus_strerror(::POpusCodec::Enums::OpusStatusCode  error) ;

/// @brief Method set_opus_decoder_ctl, addr 0xa7443c0, size 0x1e0, virtual false, abstract: false, final false
static inline void set_opus_decoder_ctl(::System::IntPtr  st, ::POpusCodec::Enums::OpusCtlSetRequest  request, int32_t  value) ;

/// @brief Method set_opus_encoder_ctl, addr 0xa7425f4, size 0x1e0, virtual false, abstract: false, final false
static inline void set_opus_encoder_ctl(::System::IntPtr  st, ::POpusCodec::Enums::OpusCtlSetRequest  request, int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Wrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Wrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Wrapper(Wrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Wrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Wrapper(Wrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28366};

/// @brief Field ctl_entry_point_get offset 0xffffffff size 0x8
static constexpr ::ConstString  ctl_entry_point_get{u""};

/// @brief Field ctl_entry_point_set offset 0xffffffff size 0x8
static constexpr ::ConstString  ctl_entry_point_set{u""};

/// @brief Field lib_name offset 0xffffffff size 0x8
static constexpr ::ConstString  lib_name{u"opus_egpv"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::POpusCodec::Wrapper) == 0x10, "Size mismatch!");

} // namespace end def POpusCodec
