#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/LipSync/BaseVisemeBlendShapeLipSync_VisemeBlendShapeData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/Data/zzzz__Viseme_def.hpp"
#include "Meta/WitAi/TTS/LipSync/zzzz__BaseVisemeBlendShapeLipSync_VisemeBlendShapeWeight_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BaseVisemeBlendShapeLipSync_VisemeBlendShapeData)
namespace GlobalNamespace {
struct BaseVisemeBlendShapeLipSync_VisemeBlendShapeWeight;
}
// Forward declare root types
namespace GlobalNamespace {
struct BaseVisemeBlendShapeLipSync_VisemeBlendShapeData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeData, "Meta.WitAi.TTS.LipSync", "BaseVisemeBlendShapeLipSync/VisemeBlendShapeData");
// Dependencies Meta.WitAi.TTS.Data.Viseme, Meta.WitAi.TTS.LipSync.BaseVisemeBlendShapeLipSync::VisemeBlendShapeWeight
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.WitAi.TTS.LipSync.BaseVisemeBlendShapeLipSync/VisemeBlendShapeData
struct CORDL_TYPE BaseVisemeBlendShapeLipSync_VisemeBlendShapeData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BaseVisemeBlendShapeLipSync_VisemeBlendShapeData() ;

// Ctor Parameters [CppParam { name: "viseme", ty: "::Meta::WitAi::TTS::Data::Viseme", modifiers: "", def_value: None, comment: None }, CppParam { name: "weights", ty: "::ArrayW<::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeWeight>", modifiers: "", def_value: None, comment: None }]
constexpr BaseVisemeBlendShapeLipSync_VisemeBlendShapeData(::Meta::WitAi::TTS::Data::Viseme  viseme, ::ArrayW<::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeWeight>  weights) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29091};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field viseme, offset: 0x0, size: 0x4, def value: None
 ::Meta::WitAi::TTS::Data::Viseme  viseme;

/// @brief Field weights, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeWeight>  weights;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeData, viseme) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeData, weights) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
