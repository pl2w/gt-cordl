#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/LckNativeEncodingApi_FrameTexture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckNativeEncodingApi_FrameTexture)
// Forward declare root types
namespace GlobalNamespace {
struct LckNativeEncodingApi_FrameTexture;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckNativeEncodingApi_FrameTexture);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckNativeEncodingApi_FrameTexture, "Liv.Lck.Encoding", "LckNativeEncodingApi/FrameTexture");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Encoding.LckNativeEncodingApi/FrameTexture
#pragma pack(push, 1)
struct CORDL_TYPE LckNativeEncodingApi_FrameTexture {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LckNativeEncodingApi_FrameTexture() ;

// Ctor Parameters [CppParam { name: "id", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "trackIndex", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr LckNativeEncodingApi_FrameTexture(uint32_t  id, uint32_t  trackIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24890};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field id, offset: 0x0, size: 0x4, def value: None
 uint32_t  id;

/// @brief Field trackIndex, offset: 0x4, size: 0x4, def value: None
 uint32_t  trackIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckNativeEncodingApi_FrameTexture, id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckNativeEncodingApi_FrameTexture, trackIndex) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckNativeEncodingApi_FrameTexture) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
