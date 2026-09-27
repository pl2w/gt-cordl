#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceReticles/IReticleData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IReticleData)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::DistanceReticles {
class IReticleData;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::DistanceReticles::IReticleData*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DistanceReticles::IReticleData*, "Oculus.Interaction.DistanceReticles", "IReticleData");
// Dependencies 
namespace Oculus::Interaction::DistanceReticles {
// Is value type: false
// CS Name: Oculus.Interaction.DistanceReticles.IReticleData
class CORDL_TYPE IReticleData {
public:
// Declarations
/// @brief Method ProcessHitPoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 ProcessHitPoint(::UnityEngine::Vector3  hitPoint) ;

// Ctor Parameters [CppParam { name: "", ty: "IReticleData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IReticleData(IReticleData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16370};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::DistanceReticles
