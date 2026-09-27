#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/LipSync/BaseVisemeBlendShapeLipSync_VisemeBlendShapeWeight.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(BaseVisemeBlendShapeLipSync_VisemeBlendShapeWeight)
// Forward declare root types
namespace GlobalNamespace {
struct BaseVisemeBlendShapeLipSync_VisemeBlendShapeWeight;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeWeight);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeWeight, "Meta.WitAi.TTS.LipSync", "BaseVisemeBlendShapeLipSync/VisemeBlendShapeWeight");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.WitAi.TTS.LipSync.BaseVisemeBlendShapeLipSync/VisemeBlendShapeWeight
struct CORDL_TYPE BaseVisemeBlendShapeLipSync_VisemeBlendShapeWeight {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BaseVisemeBlendShapeLipSync_VisemeBlendShapeWeight() ;

// Ctor Parameters [CppParam { name: "blendShapeId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "weight", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr BaseVisemeBlendShapeLipSync_VisemeBlendShapeWeight(::StringW  blendShapeId, float_t  weight) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29092};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [DropDown("GetBlendShapeNames", true, false, true, true, null, true)]
/// @brief Field blendShapeId, offset: 0x0, size: 0x8, def value: None
 ::StringW  blendShapeId;

/// @brief Field weight, offset: 0x8, size: 0x4, def value: None
 float_t  weight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeWeight, blendShapeId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeWeight, weight) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BaseVisemeBlendShapeLipSync_VisemeBlendShapeWeight) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
