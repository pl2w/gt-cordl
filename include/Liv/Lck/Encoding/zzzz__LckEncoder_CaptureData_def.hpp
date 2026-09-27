#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/LckEncoder_CaptureData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckEncoder_CaptureData)
namespace Liv::NGFX {
class NativeRenderBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
struct LckEncoder_CaptureData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckEncoder_CaptureData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckEncoder_CaptureData, "Liv.Lck.Encoding", "LckEncoder/CaptureData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Encoding.LckEncoder/CaptureData
struct CORDL_TYPE LckEncoder_CaptureData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LckEncoder_CaptureData() ;

// Ctor Parameters [CppParam { name: "nativeRenderBuffer", ty: "::Liv::NGFX::NativeRenderBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "trackIndex", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr LckEncoder_CaptureData(::Liv::NGFX::NativeRenderBuffer*  nativeRenderBuffer, uint32_t  trackIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24882};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field nativeRenderBuffer, offset: 0x0, size: 0x8, def value: None
 ::Liv::NGFX::NativeRenderBuffer*  nativeRenderBuffer;

/// @brief Field trackIndex, offset: 0x8, size: 0x4, def value: None
 uint32_t  trackIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckEncoder_CaptureData, nativeRenderBuffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEncoder_CaptureData, trackIndex) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckEncoder_CaptureData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
