#pragma once
// IWYU pragma private; include "GlobalNamespace/LineRendererUpdateTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourPostTick_def.hpp"
CORDL_MODULE_EXPORT(LineRendererUpdateTarget)
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class LineRendererUpdateTarget;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LineRendererUpdateTarget*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LineRendererUpdateTarget*, "", "LineRendererUpdateTarget");
// Dependencies MonoBehaviourPostTick
namespace GlobalNamespace {
// Is value type: false
// CS Name: LineRendererUpdateTarget
class CORDL_TYPE LineRendererUpdateTarget : public ::GlobalNamespace::MonoBehaviourPostTick {
public:
// Declarations
/// @brief Field lineRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineRenderer, put=__cordl_internal_set_lineRenderer)) ::UnityW<::UnityEngine::LineRenderer>  lineRenderer;

/// @brief Field targetTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetTransform, put=__cordl_internal_set_targetTransform)) ::UnityW<::UnityEngine::Transform>  targetTransform;

/// @brief Method Awake, addr 0x56404a0, size 0x70, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::LineRendererUpdateTarget* New_ctor() ;

/// @brief Method PostTick, addr 0x5640344, size 0x15c, virtual true, abstract: false, final false
inline void PostTick() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_lineRenderer() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_lineRenderer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_targetTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_targetTransform() ;

constexpr void __cordl_internal_set_lineRenderer(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set_targetTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5640510, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LineRendererUpdateTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LineRendererUpdateTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LineRendererUpdateTarget(LineRendererUpdateTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LineRendererUpdateTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LineRendererUpdateTarget(LineRendererUpdateTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{647};

/// @brief Field lineRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ___lineRenderer;

/// @brief Field targetTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___targetTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LineRendererUpdateTarget, ___lineRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LineRendererUpdateTarget, ___targetTransform) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LineRendererUpdateTarget) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
