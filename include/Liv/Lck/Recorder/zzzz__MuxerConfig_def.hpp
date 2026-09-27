#pragma once
// IWYU pragma private; include "Liv/Lck/Recorder/MuxerConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MuxerConfig)
// Forward declare root types
namespace Liv::Lck::Recorder {
struct MuxerConfig;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::Recorder::MuxerConfig);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Recorder::MuxerConfig, "Liv.Lck.Recorder", "MuxerConfig");
// Dependencies 
namespace Liv::Lck::Recorder {
// Is value type: true
// CS Name: Liv.Lck.Recorder.MuxerConfig
#pragma pack(push, 1)
struct CORDL_TYPE MuxerConfig {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MuxerConfig() ;

// Ctor Parameters [CppParam { name: "outputPath", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "videoBitrate", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "audioBitrate", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "width", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "height", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "framerate", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "samplerate", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "channels", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "numberOfTracks", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "realtimeOutput", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr MuxerConfig(::StringW  outputPath, uint32_t  videoBitrate, uint32_t  audioBitrate, uint32_t  width, uint32_t  height, uint32_t  framerate, uint32_t  samplerate, uint32_t  channels, uint32_t  numberOfTracks, bool  realtimeOutput) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24973};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field outputPath, offset: 0x0, size: 0x8, def value: None
 ::StringW  outputPath;

/// @brief Field videoBitrate, offset: 0x8, size: 0x4, def value: None
 uint32_t  videoBitrate;

/// @brief Field audioBitrate, offset: 0xc, size: 0x4, def value: None
 uint32_t  audioBitrate;

/// @brief Field width, offset: 0x10, size: 0x4, def value: None
 uint32_t  width;

/// @brief Field height, offset: 0x14, size: 0x4, def value: None
 uint32_t  height;

/// @brief Field framerate, offset: 0x18, size: 0x4, def value: None
 uint32_t  framerate;

/// @brief Field samplerate, offset: 0x1c, size: 0x4, def value: None
 uint32_t  samplerate;

/// @brief Field channels, offset: 0x20, size: 0x4, def value: None
 uint32_t  channels;

/// @brief Field numberOfTracks, offset: 0x24, size: 0x4, def value: None
 uint32_t  numberOfTracks;

/// @brief Field realtimeOutput, offset: 0x28, size: 0x1, def value: None
 bool  realtimeOutput;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Recorder::MuxerConfig, outputPath) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::MuxerConfig, videoBitrate) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::MuxerConfig, audioBitrate) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::MuxerConfig, width) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::MuxerConfig, height) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::MuxerConfig, framerate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::MuxerConfig, samplerate) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::MuxerConfig, channels) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::MuxerConfig, numberOfTracks) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::MuxerConfig, realtimeOutput) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Recorder::MuxerConfig) == 0x30, "Size mismatch!");

} // namespace end def Liv::Lck::Recorder
