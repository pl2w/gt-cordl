#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/XRBodyTransformer_OrderedTransformation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRBodyTransformer_OrderedTransformation)
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class IXRBodyTransformation;
}
// Forward declare root types
namespace GlobalNamespace {
struct XRBodyTransformer_OrderedTransformation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRBodyTransformer_OrderedTransformation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRBodyTransformer_OrderedTransformation, "UnityEngine.XR.Interaction.Toolkit.Locomotion", "XRBodyTransformer/OrderedTransformation");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.XRBodyTransformer/OrderedTransformation
struct CORDL_TYPE XRBodyTransformer_OrderedTransformation {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr XRBodyTransformer_OrderedTransformation() ;

// Ctor Parameters [CppParam { name: "transformation", ty: "::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*", modifiers: "", def_value: None, comment: None }, CppParam { name: "priority", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XRBodyTransformer_OrderedTransformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*  transformation, int32_t  priority) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11347};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field transformation, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*  transformation;

/// @brief Field priority, offset: 0x8, size: 0x4, def value: None
 int32_t  priority;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRBodyTransformer_OrderedTransformation, transformation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRBodyTransformer_OrderedTransformation, priority) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRBodyTransformer_OrderedTransformation) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
