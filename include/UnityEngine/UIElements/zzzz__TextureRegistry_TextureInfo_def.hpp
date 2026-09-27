#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextureRegistry_TextureInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureRegistry_TextureInfo)
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace GlobalNamespace {
struct TextureRegistry_TextureInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TextureRegistry_TextureInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextureRegistry_TextureInfo, "UnityEngine.UIElements", "TextureRegistry/TextureInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.TextureRegistry/TextureInfo
struct CORDL_TYPE TextureRegistry_TextureInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TextureRegistry_TextureInfo() ;

// Ctor Parameters [CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "dynamic", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TextureRegistry_TextureInfo(::UnityW<::UnityEngine::Texture>  texture, bool  dynamic, int32_t  refCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7877};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field texture, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  texture;

/// @brief Field dynamic, offset: 0x8, size: 0x1, def value: None
 bool  dynamic;

/// @brief Field refCount, offset: 0xc, size: 0x4, def value: None
 int32_t  refCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextureRegistry_TextureInfo, texture) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureRegistry_TextureInfo, dynamic) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureRegistry_TextureInfo, refCount) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextureRegistry_TextureInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
