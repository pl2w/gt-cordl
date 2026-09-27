#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/WeightedTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(WeightedTransform)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::Animations::Rigging {
struct WeightedTransform;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::Rigging::WeightedTransform);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::WeightedTransform, "UnityEngine.Animations.Rigging", "WeightedTransform");
// Dependencies 
namespace UnityEngine::Animations::Rigging {
// Is value type: true
// CS Name: UnityEngine.Animations.Rigging.WeightedTransform
struct CORDL_TYPE WeightedTransform {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::Rigging::WeightedTransform>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Animations::Rigging::WeightedTransform>*() ;

/// @brief Method Equals, addr 0xae7e284, size 0x94, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Animations::Rigging::WeightedTransform  other) ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::Rigging::WeightedTransform>"
constexpr ::System::IEquatable_1<::UnityEngine::Animations::Rigging::WeightedTransform>* i___System__IEquatable_1___UnityEngine__Animations__Rigging__WeightedTransform_() ;

// Ctor Parameters []
// @brief default ctor
constexpr WeightedTransform() ;

// Ctor Parameters [CppParam { name: "transform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "weight", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr WeightedTransform(::UnityW<::UnityEngine::Transform>  transform, float_t  weight) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32313};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field transform, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  transform;

/// @brief Field weight, offset: 0x8, size: 0x4, def value: None
 float_t  weight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::Rigging::WeightedTransform, transform) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::WeightedTransform, weight) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::Rigging::WeightedTransform) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Animations::Rigging
