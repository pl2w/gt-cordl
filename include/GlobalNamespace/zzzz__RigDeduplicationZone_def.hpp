#pragma once
// IWYU pragma private; include "GlobalNamespace/RigDeduplicationZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RigDisplacementZone_def.hpp"
CORDL_MODULE_EXPORT(RigDeduplicationZone)
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class RigDeduplicationZone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RigDeduplicationZone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RigDeduplicationZone*, "", "RigDeduplicationZone");
// Dependencies RigDisplacementZone
namespace GlobalNamespace {
// Is value type: false
// CS Name: RigDeduplicationZone
class CORDL_TYPE RigDeduplicationZone : public ::GlobalNamespace::RigDisplacementZone {
public:
// Declarations
/// @brief Method GetDisplacementForRig, addr 0x57408ac, size 0x80, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetDisplacementForRig(::GlobalNamespace::VRRig*  rig, ::UnityEngine::Vector3  undisplacedPosition) ;

/// @brief Method IsDisplacingRig, addr 0x5740804, size 0xa8, virtual true, abstract: false, final false
inline bool IsDisplacingRig(::GlobalNamespace::VRRig*  rig) ;

static inline ::GlobalNamespace::RigDeduplicationZone* New_ctor() ;

/// @brief Method .ctor, addr 0x574092c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigDeduplicationZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigDeduplicationZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigDeduplicationZone(RigDeduplicationZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigDeduplicationZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigDeduplicationZone(RigDeduplicationZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1245};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RigDeduplicationZone) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
