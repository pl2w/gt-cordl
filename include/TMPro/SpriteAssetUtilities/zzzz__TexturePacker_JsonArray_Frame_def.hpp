#pragma once
// IWYU pragma private; include "TMPro/SpriteAssetUtilities/TexturePacker_JsonArray_Frame.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/SpriteAssetUtilities/zzzz__TexturePacker_JsonArray_SpriteFrame_def.hpp"
#include "TMPro/SpriteAssetUtilities/zzzz__TexturePacker_JsonArray_SpriteSize_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TexturePacker_JsonArray_Frame)
// Forward declare root types
namespace GlobalNamespace {
struct TexturePacker_JsonArray_Frame;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TexturePacker_JsonArray_Frame);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TexturePacker_JsonArray_Frame, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/Frame");
// Dependencies TMPro.SpriteAssetUtilities.TexturePacker_JsonArray::SpriteFrame, TMPro.SpriteAssetUtilities.TexturePacker_JsonArray::SpriteSize, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame
struct CORDL_TYPE TexturePacker_JsonArray_Frame {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TexturePacker_JsonArray_Frame() ;

// Ctor Parameters [CppParam { name: "filename", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "frame", ty: "::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotated", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "trimmed", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "spriteSourceSize", ty: "::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame", modifiers: "", def_value: None, comment: None }, CppParam { name: "sourceSize", ty: "::GlobalNamespace::TexturePacker_JsonArray_SpriteSize", modifiers: "", def_value: None, comment: None }, CppParam { name: "pivot", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }]
constexpr TexturePacker_JsonArray_Frame(::StringW  filename, ::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame  frame, bool  rotated, bool  trimmed, ::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame  spriteSourceSize, ::GlobalNamespace::TexturePacker_JsonArray_SpriteSize  sourceSize, ::UnityEngine::Vector2  pivot) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23058};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field filename, offset: 0x0, size: 0x8, def value: None
 ::StringW  filename;

/// @brief Field frame, offset: 0x8, size: 0x10, def value: None
 ::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame  frame;

/// @brief Field rotated, offset: 0x18, size: 0x1, def value: None
 bool  rotated;

/// @brief Field trimmed, offset: 0x19, size: 0x1, def value: None
 bool  trimmed;

/// @brief Field spriteSourceSize, offset: 0x1c, size: 0x10, def value: None
 ::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame  spriteSourceSize;

/// @brief Field sourceSize, offset: 0x2c, size: 0x8, def value: None
 ::GlobalNamespace::TexturePacker_JsonArray_SpriteSize  sourceSize;

/// @brief Field pivot, offset: 0x34, size: 0x8, def value: None
 ::UnityEngine::Vector2  pivot;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TexturePacker_JsonArray_Frame, filename) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TexturePacker_JsonArray_Frame, frame) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TexturePacker_JsonArray_Frame, rotated) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TexturePacker_JsonArray_Frame, trimmed) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TexturePacker_JsonArray_Frame, spriteSourceSize) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TexturePacker_JsonArray_Frame, sourceSize) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TexturePacker_JsonArray_Frame, pivot) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TexturePacker_JsonArray_Frame) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
