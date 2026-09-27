#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/EncoderSessionData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EncoderSessionData)
// Forward declare root types
namespace Liv::Lck::Encoding {
struct EncoderSessionData;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::Encoding::EncoderSessionData);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Encoding::EncoderSessionData, "Liv.Lck.Encoding", "EncoderSessionData");
// Dependencies 
namespace Liv::Lck::Encoding {
// Is value type: true
// CS Name: Liv.Lck.Encoding.EncoderSessionData
struct CORDL_TYPE EncoderSessionData {
public:
// Declarations
 __declspec(property(get=get_CaptureTimeSeconds, put=set_CaptureTimeSeconds)) float_t  CaptureTimeSeconds;

 __declspec(property(get=get_EncodedAudioSamplesPerChannel, put=set_EncodedAudioSamplesPerChannel)) uint64_t  EncodedAudioSamplesPerChannel;

 __declspec(property(get=get_EncodedVideoFrames, put=set_EncodedVideoFrames)) uint64_t  EncodedVideoFrames;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_CaptureTimeSeconds, addr 0x9d42d24, size 0x8, virtual false, abstract: false, final false
inline float_t get_CaptureTimeSeconds() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_EncodedAudioSamplesPerChannel, addr 0x9d42d14, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_EncodedAudioSamplesPerChannel() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_EncodedVideoFrames, addr 0x9d42d04, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_EncodedVideoFrames() ;

/// [CompilerGenerated]
/// @brief Method set_CaptureTimeSeconds, addr 0x9d42d2c, size 0x8, virtual false, abstract: false, final false
inline void set_CaptureTimeSeconds(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_EncodedAudioSamplesPerChannel, addr 0x9d42d1c, size 0x8, virtual false, abstract: false, final false
inline void set_EncodedAudioSamplesPerChannel(uint64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_EncodedVideoFrames, addr 0x9d42d0c, size 0x8, virtual false, abstract: false, final false
inline void set_EncodedVideoFrames(uint64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr EncoderSessionData() ;

// Ctor Parameters [CppParam { name: "_EncodedVideoFrames_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EncodedAudioSamplesPerChannel_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_CaptureTimeSeconds_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr EncoderSessionData(uint64_t  _EncodedVideoFrames_k__BackingField, uint64_t  _EncodedAudioSamplesPerChannel_k__BackingField, float_t  _CaptureTimeSeconds_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24878};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [CompilerGenerated]
/// @brief Field <EncodedVideoFrames>k__BackingField, offset: 0x0, size: 0x8, def value: None
 uint64_t  _EncodedVideoFrames_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <EncodedAudioSamplesPerChannel>k__BackingField, offset: 0x8, size: 0x8, def value: None
 uint64_t  _EncodedAudioSamplesPerChannel_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CaptureTimeSeconds>k__BackingField, offset: 0x10, size: 0x4, def value: None
 float_t  _CaptureTimeSeconds_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Encoding::EncoderSessionData, _EncodedVideoFrames_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Encoding::EncoderSessionData, _EncodedAudioSamplesPerChannel_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Encoding::EncoderSessionData, _CaptureTimeSeconds_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Encoding::EncoderSessionData) == 0x18, "Size mismatch!");

} // namespace end def Liv::Lck::Encoding
