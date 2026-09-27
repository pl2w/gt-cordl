#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformFeatureConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureConfigBase_1_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeature_def.hpp"
CORDL_MODULE_EXPORT(TransformFeatureConfig)
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureConfig;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::TransformFeatureConfig*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::TransformFeatureConfig*, "Oculus.Interaction.PoseDetection", "TransformFeatureConfig");
// Dependencies Oculus.Interaction.PoseDetection.FeatureConfigBase`1<TFeature>, Oculus.Interaction.PoseDetection.TransformFeature
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.TransformFeatureConfig
class CORDL_TYPE TransformFeatureConfig : public ::Oculus::Interaction::PoseDetection::FeatureConfigBase_1<::Oculus::Interaction::PoseDetection::TransformFeature> {
public:
// Declarations
static inline ::Oculus::Interaction::PoseDetection::TransformFeatureConfig* New_ctor() ;

/// @brief Method .ctor, addr 0xa4a9774, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformFeatureConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformFeatureConfig(TransformFeatureConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformFeatureConfig(TransformFeatureConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16175};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PoseDetection::TransformFeatureConfig) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
