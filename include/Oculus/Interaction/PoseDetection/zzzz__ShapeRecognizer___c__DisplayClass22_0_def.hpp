#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/ShapeRecognizer___c__DisplayClass22_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ShapeRecognizer___c__DisplayClass22_0)
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::PoseDetection {
class ShapeRecognizer_FingerFeatureConfig;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct ShapeRecognizer___c__DisplayClass22_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ShapeRecognizer___c__DisplayClass22_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ShapeRecognizer___c__DisplayClass22_0, "Oculus.Interaction.PoseDetection", "ShapeRecognizer/<>c__DisplayClass22_0");
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.PoseDetection.ShapeRecognizer/<>c__DisplayClass22_0
struct CORDL_TYPE ShapeRecognizer___c__DisplayClass22_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ShapeRecognizer___c__DisplayClass22_0() ;

// Ctor Parameters [CppParam { name: "fingerFeatureConfigs", ty: "::System::Collections::Generic::IDictionary_2<::Oculus::Interaction::Input::HandFinger,::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>>*", modifiers: "", def_value: None, comment: None }]
constexpr ShapeRecognizer___c__DisplayClass22_0(::System::Collections::Generic::IDictionary_2<::Oculus::Interaction::Input::HandFinger,::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>>*  fingerFeatureConfigs) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16152};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field fingerFeatureConfigs, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<::Oculus::Interaction::Input::HandFinger,::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>>*  fingerFeatureConfigs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ShapeRecognizer___c__DisplayClass22_0, fingerFeatureConfigs) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ShapeRecognizer___c__DisplayClass22_0) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
