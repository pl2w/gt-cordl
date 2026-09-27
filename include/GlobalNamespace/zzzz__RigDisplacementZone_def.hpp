#pragma once
// IWYU pragma private; include "GlobalNamespace/RigDisplacementZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RigDisplacementZone)
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class RigDisplacementZone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RigDisplacementZone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RigDisplacementZone*, "", "RigDisplacementZone");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RigDisplacementZone
class CORDL_TYPE RigDisplacementZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field localPlayerInZone, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_localPlayerInZone, put=__cordl_internal_set_localPlayerInZone)) bool  localPlayerInZone;

/// @brief Method GetDisplacementForRig, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 GetDisplacementForRig(::GlobalNamespace::VRRig*  rig, ::UnityEngine::Vector3  undisplacedPosition) ;

/// @brief Method IsDisplacingRig, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsDisplacingRig(::GlobalNamespace::VRRig*  rig) ;

static inline ::GlobalNamespace::RigDisplacementZone* New_ctor() ;

/// @brief Method OnDisable, addr 0x5740e48, size 0x144, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnTriggerEnter, addr 0x5740c04, size 0x124, virtual true, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5740d28, size 0x120, virtual true, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr bool const& __cordl_internal_get_localPlayerInZone() const;

constexpr bool& __cordl_internal_get_localPlayerInZone() ;

constexpr void __cordl_internal_set_localPlayerInZone(bool  value) ;

/// @brief Method .ctor, addr 0x5740934, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigDisplacementZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigDisplacementZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigDisplacementZone(RigDisplacementZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigDisplacementZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigDisplacementZone(RigDisplacementZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1247};

/// @brief Field localPlayerInZone, offset: 0x20, size: 0x1, def value: None
 bool  ___localPlayerInZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RigDisplacementZone, ___localPlayerInZone) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RigDisplacementZone) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
