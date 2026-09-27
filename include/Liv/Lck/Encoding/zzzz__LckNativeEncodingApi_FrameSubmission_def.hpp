#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/LckNativeEncodingApi_FrameSubmission.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckNativeEncodingApi_FrameSubmission)
// Forward declare root types
namespace GlobalNamespace {
struct LckNativeEncodingApi_FrameSubmission;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckNativeEncodingApi_FrameSubmission);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckNativeEncodingApi_FrameSubmission, "Liv.Lck.Encoding", "LckNativeEncodingApi/FrameSubmission");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Encoding.LckNativeEncodingApi/FrameSubmission
#pragma pack(push, 1)
struct CORDL_TYPE LckNativeEncodingApi_FrameSubmission {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LckNativeEncodingApi_FrameSubmission() ;

// Ctor Parameters [CppParam { name: "encoderContext", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "textureIDs", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "textureIDsSize", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "videoTimestampMilli", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "audioTracksSize", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "audioTracks", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "readyFramesSize", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "readyFrames", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr LckNativeEncodingApi_FrameSubmission(::System::IntPtr  encoderContext, ::System::IntPtr  textureIDs, uint32_t  textureIDsSize, uint64_t  videoTimestampMilli, uint32_t  audioTracksSize, ::System::IntPtr  audioTracks, uint32_t  readyFramesSize, ::System::IntPtr  readyFrames) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24892};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x34};

/// @brief Field encoderContext, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  encoderContext;

/// @brief Field textureIDs, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  textureIDs;

/// @brief Field textureIDsSize, offset: 0x10, size: 0x4, def value: None
 uint32_t  textureIDsSize;

/// @brief Field videoTimestampMilli, offset: 0x14, size: 0x8, def value: None
 uint64_t  videoTimestampMilli;

/// @brief Field audioTracksSize, offset: 0x1c, size: 0x4, def value: None
 uint32_t  audioTracksSize;

/// @brief Field audioTracks, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  audioTracks;

/// @brief Field readyFramesSize, offset: 0x28, size: 0x4, def value: None
 uint32_t  readyFramesSize;

/// @brief Field readyFrames, offset: 0x2c, size: 0x8, def value: None
 ::System::IntPtr  readyFrames;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckNativeEncodingApi_FrameSubmission, encoderContext) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckNativeEncodingApi_FrameSubmission, textureIDs) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckNativeEncodingApi_FrameSubmission, textureIDsSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckNativeEncodingApi_FrameSubmission, videoTimestampMilli) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckNativeEncodingApi_FrameSubmission, audioTracksSize) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckNativeEncodingApi_FrameSubmission, audioTracks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckNativeEncodingApi_FrameSubmission, readyFramesSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckNativeEncodingApi_FrameSubmission, readyFrames) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckNativeEncodingApi_FrameSubmission) == 0x34, "Size mismatch!");

} // namespace end def GlobalNamespace
