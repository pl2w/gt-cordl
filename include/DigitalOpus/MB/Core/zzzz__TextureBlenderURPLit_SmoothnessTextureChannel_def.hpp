#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/TextureBlenderURPLit_SmoothnessTextureChannel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureBlenderURPLit_SmoothnessTextureChannel)
// Forward declare root types
namespace GlobalNamespace {
struct TextureBlenderURPLit_SmoothnessTextureChannel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TextureBlenderURPLit_SmoothnessTextureChannel);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextureBlenderURPLit_SmoothnessTextureChannel, "DigitalOpus.MB.Core", "TextureBlenderURPLit/SmoothnessTextureChannel");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.TextureBlenderURPLit/SmoothnessTextureChannel
struct CORDL_TYPE TextureBlenderURPLit_SmoothnessTextureChannel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TextureBlenderURPLit_SmoothnessTextureChannel_Unwrapped
enum struct __TextureBlenderURPLit_SmoothnessTextureChannel_Unwrapped : int32_t {
__E_unknown = static_cast<int32_t>(0x0),
__E_albedo = static_cast<int32_t>(0x1),
__E_metallicSpecular = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextureBlenderURPLit_SmoothnessTextureChannel_Unwrapped () const noexcept {
return static_cast<__TextureBlenderURPLit_SmoothnessTextureChannel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TextureBlenderURPLit_SmoothnessTextureChannel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TextureBlenderURPLit_SmoothnessTextureChannel(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22863};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field albedo value: I32(1)
static ::GlobalNamespace::TextureBlenderURPLit_SmoothnessTextureChannel const albedo;

/// @brief Field metallicSpecular value: I32(2)
static ::GlobalNamespace::TextureBlenderURPLit_SmoothnessTextureChannel const metallicSpecular;

/// @brief Field unknown value: I32(0)
static ::GlobalNamespace::TextureBlenderURPLit_SmoothnessTextureChannel const unknown;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextureBlenderURPLit_SmoothnessTextureChannel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextureBlenderURPLit_SmoothnessTextureChannel) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
