#pragma once
// IWYU pragma private; include "GlobalNamespace/LineRenderVelocityMapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LineRenderVelocityMapper)
namespace GlobalNamespace {
class GorillaVelocityEstimator;
}
namespace UnityEngine {
class LineRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class LineRenderVelocityMapper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LineRenderVelocityMapper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LineRenderVelocityMapper*, "", "LineRenderVelocityMapper");
// [RequireComponent(typeof(UnityEngine.LineRenderer))]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LineRenderVelocityMapper
class CORDL_TYPE LineRenderVelocityMapper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _lr, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__lr, put=__cordl_internal_set__lr)) ::UnityW<::UnityEngine::LineRenderer>  _lr;

/// @brief Field velocityEstimator, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityEstimator, put=__cordl_internal_set_velocityEstimator)) ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  velocityEstimator;

/// @brief Method Awake, addr 0x56d1c58, size 0x70, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x56d1cc8, size 0x224, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::LineRenderVelocityMapper* New_ctor() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get__lr() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get__lr() ;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& __cordl_internal_get_velocityEstimator() const;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& __cordl_internal_get_velocityEstimator() ;

constexpr void __cordl_internal_set__lr(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value) ;

/// @brief Method .ctor, addr 0x56d1eec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LineRenderVelocityMapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LineRenderVelocityMapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LineRenderVelocityMapper(LineRenderVelocityMapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LineRenderVelocityMapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LineRenderVelocityMapper(LineRenderVelocityMapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1057};

/// [SerializeField]
/// @brief Field velocityEstimator, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  ___velocityEstimator;

/// @brief Field _lr, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ____lr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LineRenderVelocityMapper, ___velocityEstimator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LineRenderVelocityMapper, ____lr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LineRenderVelocityMapper) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
