#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceReticles/ReticleDataMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ReticleDataMesh)
namespace Oculus::Interaction::DistanceReticles {
class IReticleData;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::DistanceReticles {
class ReticleDataMesh;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::DistanceReticles::ReticleDataMesh*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DistanceReticles::ReticleDataMesh*, "Oculus.Interaction.DistanceReticles", "ReticleDataMesh");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::DistanceReticles {
// Is value type: false
// CS Name: Oculus.Interaction.DistanceReticles.ReticleDataMesh
class CORDL_TYPE ReticleDataMesh : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Filter, put=set_Filter)) ::UnityW<::UnityEngine::MeshFilter>  Filter;

 __declspec(property(get=get_Target)) ::UnityW<::UnityEngine::Transform>  Target;

/// @brief Field _filter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__filter, put=__cordl_internal_set__filter)) ::UnityW<::UnityEngine::MeshFilter>  _filter;

/// @brief Convert operator to "::Oculus::Interaction::DistanceReticles::IReticleData"
constexpr operator  ::Oculus::Interaction::DistanceReticles::IReticleData*() noexcept;

static inline ::Oculus::Interaction::DistanceReticles::ReticleDataMesh* New_ctor() ;

/// @brief Method ProcessHitPoint, addr 0xa4f08c8, size 0x28, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 ProcessHitPoint(::UnityEngine::Vector3  hitPoint) ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__filter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__filter() ;

constexpr void __cordl_internal_set__filter(::UnityW<::UnityEngine::MeshFilter>  value) ;

/// @brief Method .ctor, addr 0xa4f08f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Filter, addr 0xa4f08a0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::MeshFilter> get_Filter() ;

/// @brief Method get_Target, addr 0xa4f08b0, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_Target() ;

/// @brief Convert to "::Oculus::Interaction::DistanceReticles::IReticleData"
constexpr ::Oculus::Interaction::DistanceReticles::IReticleData* i___Oculus__Interaction__DistanceReticles__IReticleData() noexcept;

/// @brief Method set_Filter, addr 0xa4f08a8, size 0x8, virtual false, abstract: false, final false
inline void set_Filter(::UnityEngine::MeshFilter*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReticleDataMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReticleDataMesh", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReticleDataMesh(ReticleDataMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReticleDataMesh", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReticleDataMesh(ReticleDataMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16373};

/// [Tooltip("The mesh of the GameObject to outline.")]
/// [SerializeField]
/// @brief Field _filter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ____filter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleDataMesh, ____filter) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::DistanceReticles::ReticleDataMesh) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::DistanceReticles
