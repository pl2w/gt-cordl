#pragma once
// IWYU pragma private; include "UnityEngine/Animations/ConstraintSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ConstraintSource)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct ConstraintSource;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::ConstraintSource);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::ConstraintSource, "UnityEngine.Animations", "ConstraintSource");
// [NativeType(CodegenOptions = (UnityEngine.Bindings.CodegenOptions)1, Header = "Modules/Animation/Constraints/ConstraintSource.h", IntermediateScriptingStructName = "MonoConstraintSource")]
// [UsedByNativeCode]
// [NativeHeader("Modules/Animation/Constraints/Constraint.bindings.h")]
// Dependencies 
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.ConstraintSource
struct CORDL_TYPE ConstraintSource {
public:
// Declarations
 __declspec(property(put=set_sourceTransform)) ::UnityW<::UnityEngine::Transform>  sourceTransform;

 __declspec(property(put=set_weight)) float_t  weight;

/// @brief Method set_sourceTransform, addr 0xb54e8f0, size 0x8, virtual false, abstract: false, final false
inline void set_sourceTransform(::UnityEngine::Transform*  value) ;

/// @brief Method set_weight, addr 0xb54e8f8, size 0x8, virtual false, abstract: false, final false
inline void set_weight(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ConstraintSource() ;

// Ctor Parameters [CppParam { name: "m_SourceTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Weight", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr ConstraintSource(::UnityW<::UnityEngine::Transform>  m_SourceTransform, float_t  m_Weight) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29828};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [NativeName("sourceTransform")]
/// @brief Field m_SourceTransform, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  m_SourceTransform;

/// [NativeName("weight")]
/// @brief Field m_Weight, offset: 0x8, size: 0x4, def value: None
 float_t  m_Weight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::ConstraintSource, m_SourceTransform) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::ConstraintSource, m_Weight) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::ConstraintSource) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Animations
