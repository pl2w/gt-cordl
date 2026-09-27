#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceReticles/ReticleDataGhost.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ReticleDataGhost)
namespace Oculus::Interaction::DistanceReticles {
class IReticleData;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::DistanceReticles {
class ReticleDataGhost;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::DistanceReticles::ReticleDataGhost*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DistanceReticles::ReticleDataGhost*, "Oculus.Interaction.DistanceReticles", "ReticleDataGhost");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::DistanceReticles {
// Is value type: false
// CS Name: Oculus.Interaction.DistanceReticles.ReticleDataGhost
class CORDL_TYPE ReticleDataGhost : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _targetPoint, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetPoint, put=__cordl_internal_set__targetPoint)) ::UnityW<::UnityEngine::Transform>  _targetPoint;

/// @brief Convert operator to "::Oculus::Interaction::DistanceReticles::IReticleData"
constexpr operator  ::Oculus::Interaction::DistanceReticles::IReticleData*() noexcept;

static inline ::Oculus::Interaction::DistanceReticles::ReticleDataGhost* New_ctor() ;

/// @brief Method ProcessHitPoint, addr 0xa4f06a4, size 0x88, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 ProcessHitPoint(::UnityEngine::Vector3  hitPoint) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__targetPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__targetPoint() ;

constexpr void __cordl_internal_set__targetPoint(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xa4f072c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::DistanceReticles::IReticleData"
constexpr ::Oculus::Interaction::DistanceReticles::IReticleData* i___Oculus__Interaction__DistanceReticles__IReticleData() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReticleDataGhost() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReticleDataGhost", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReticleDataGhost(ReticleDataGhost && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReticleDataGhost", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReticleDataGhost(ReticleDataGhost const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16371};

/// [Tooltip("The GameObject that the ghost hand can interact with.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _targetPoint, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____targetPoint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleDataGhost, ____targetPoint) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::DistanceReticles::ReticleDataGhost) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::DistanceReticles
