#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/LckNativeEncodingApi_TrackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Encoding/zzzz__LckNativeEncodingApi_TrackType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckNativeEncodingApi_TrackInfo)
// Forward declare root types
namespace GlobalNamespace {
struct LckNativeEncodingApi_TrackInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckNativeEncodingApi_TrackInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckNativeEncodingApi_TrackInfo, "Liv.Lck.Encoding", "LckNativeEncodingApi/TrackInfo");
// Dependencies Liv.Lck.Encoding.LckNativeEncodingApi::TrackType
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Encoding.LckNativeEncodingApi/TrackInfo
#pragma pack(push, 1)
struct CORDL_TYPE LckNativeEncodingApi_TrackInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LckNativeEncodingApi_TrackInfo() ;

// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::LckNativeEncodingApi_TrackType", modifiers: "", def_value: None, comment: None }, CppParam { name: "bitrate", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "width", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "height", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "framerate", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "samplerate", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "channels", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr LckNativeEncodingApi_TrackInfo(::GlobalNamespace::LckNativeEncodingApi_TrackType  type, uint32_t  bitrate, uint32_t  width, uint32_t  height, uint32_t  framerate, uint32_t  samplerate, uint32_t  channels) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24889};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::LckNativeEncodingApi_TrackType  type;

/// @brief Field bitrate, offset: 0x4, size: 0x4, def value: None
 uint32_t  bitrate;

/// @brief Field width, offset: 0x8, size: 0x4, def value: None
 uint32_t  width;

/// @brief Field height, offset: 0xc, size: 0x4, def value: None
 uint32_t  height;

/// @brief Field framerate, offset: 0x10, size: 0x4, def value: None
 uint32_t  framerate;

/// @brief Field samplerate, offset: 0x14, size: 0x4, def value: None
 uint32_t  samplerate;

/// @brief Field channels, offset: 0x18, size: 0x4, def value: None
 uint32_t  channels;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckNativeEncodingApi_TrackInfo, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckNativeEncodingApi_TrackInfo, bitrate) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckNativeEncodingApi_TrackInfo, width) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckNativeEncodingApi_TrackInfo, height) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckNativeEncodingApi_TrackInfo, framerate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckNativeEncodingApi_TrackInfo, samplerate) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckNativeEncodingApi_TrackInfo, channels) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckNativeEncodingApi_TrackInfo) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
