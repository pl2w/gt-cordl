#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderLaserSight.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BuilderLaserSight)
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderLaserSight;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderLaserSight*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderLaserSight*, "", "BuilderLaserSight");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderLaserSight
class CORDL_TYPE BuilderLaserSight : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field lineRenderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineRenderer, put=__cordl_internal_set_lineRenderer)) ::UnityW<::UnityEngine::LineRenderer>  lineRenderer;

/// @brief Method Awake, addr 0x57be818, size 0xf0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::BuilderLaserSight* New_ctor() ;

/// @brief Method SetPoints, addr 0x57be908, size 0x94, virtual false, abstract: false, final false
inline void SetPoints(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end) ;

/// @brief Method Show, addr 0x57be99c, size 0x98, virtual false, abstract: false, final false
inline void Show(bool  show) ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_lineRenderer() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_lineRenderer() ;

constexpr void __cordl_internal_set_lineRenderer(::UnityW<::UnityEngine::LineRenderer>  value) ;

/// @brief Method .ctor, addr 0x57bea34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderLaserSight() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderLaserSight", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderLaserSight(BuilderLaserSight && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderLaserSight", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderLaserSight(BuilderLaserSight const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1594};

/// @brief Field lineRenderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ___lineRenderer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderLaserSight, ___lineRenderer) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderLaserSight) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
