#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/IProjectile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IProjectile)
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class IProjectile;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::IProjectile*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::IProjectile*, "GorillaTag.Cosmetics", "IProjectile");
// Dependencies 
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.IProjectile
class CORDL_TYPE IProjectile {
public:
// Declarations
/// @brief Method Launch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Launch(::UnityEngine::Vector3  startPosition, ::UnityEngine::Quaternion  startRotation, ::UnityEngine::Vector3  velocity, float_t  chargeFrac, ::GlobalNamespace::VRRig*  ownerRig, int32_t  progressStep) ;

// Ctor Parameters [CppParam { name: "", ty: "IProjectile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IProjectile(IProjectile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4948};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTag::Cosmetics
