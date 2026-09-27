#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/LipSync/BaseTextureFlipLipSync_VisemeTextureData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/Data/zzzz__Viseme_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BaseTextureFlipLipSync_VisemeTextureData)
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
struct BaseTextureFlipLipSync_VisemeTextureData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BaseTextureFlipLipSync_VisemeTextureData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BaseTextureFlipLipSync_VisemeTextureData, "Meta.WitAi.TTS.LipSync", "BaseTextureFlipLipSync/VisemeTextureData");
// Dependencies Meta.WitAi.TTS.Data.Viseme, UnityEngine.Texture2D
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.WitAi.TTS.LipSync.BaseTextureFlipLipSync/VisemeTextureData
struct CORDL_TYPE BaseTextureFlipLipSync_VisemeTextureData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BaseTextureFlipLipSync_VisemeTextureData() ;

// Ctor Parameters [CppParam { name: "viseme", ty: "::Meta::WitAi::TTS::Data::Viseme", modifiers: "", def_value: None, comment: None }, CppParam { name: "textures", ty: "::ArrayW<::UnityW<::UnityEngine::Texture2D>>", modifiers: "", def_value: None, comment: None }]
constexpr BaseTextureFlipLipSync_VisemeTextureData(::Meta::WitAi::TTS::Data::Viseme  viseme, ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  textures) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29089};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field viseme, offset: 0x0, size: 0x4, def value: None
 ::Meta::WitAi::TTS::Data::Viseme  viseme;

/// @brief Field textures, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  textures;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseTextureFlipLipSync_VisemeTextureData, viseme) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseTextureFlipLipSync_VisemeTextureData, textures) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BaseTextureFlipLipSync_VisemeTextureData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
