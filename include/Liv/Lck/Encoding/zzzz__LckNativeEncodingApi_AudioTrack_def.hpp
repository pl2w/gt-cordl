#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/LckNativeEncodingApi_AudioTrack.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckNativeEncodingApi_AudioTrack)
// Forward declare root types
namespace GlobalNamespace {
struct LckNativeEncodingApi_AudioTrack;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckNativeEncodingApi_AudioTrack);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckNativeEncodingApi_AudioTrack, "Liv.Lck.Encoding", "LckNativeEncodingApi/AudioTrack");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Encoding.LckNativeEncodingApi/AudioTrack
#pragma pack(push, 1)
struct CORDL_TYPE LckNativeEncodingApi_AudioTrack {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LckNativeEncodingApi_AudioTrack() ;

// Ctor Parameters [CppParam { name: "trackIndex", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "timestampSamples", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "dataSize", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "data", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr LckNativeEncodingApi_AudioTrack(uint32_t  trackIndex, uint64_t  timestampSamples, uint32_t  dataSize, ::System::IntPtr  data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24891};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field trackIndex, offset: 0x0, size: 0x4, def value: None
 uint32_t  trackIndex;

/// @brief Field timestampSamples, offset: 0x4, size: 0x8, def value: None
 uint64_t  timestampSamples;

/// @brief Field dataSize, offset: 0xc, size: 0x4, def value: None
 uint32_t  dataSize;

/// @brief Field data, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckNativeEncodingApi_AudioTrack, trackIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckNativeEncodingApi_AudioTrack, timestampSamples) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckNativeEncodingApi_AudioTrack, dataSize) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckNativeEncodingApi_AudioTrack, data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckNativeEncodingApi_AudioTrack) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
