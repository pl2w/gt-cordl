#pragma once
// IWYU pragma private; include "Critters/Scripts/CrittersFoodDispenser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
CORDL_MODULE_EXPORT(CrittersFoodDispenser)
namespace GlobalNamespace {
class CrittersActor;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Critters::Scripts {
class CrittersFoodDispenser;
}
// Write type traits
MARK_REF_T(::Critters::Scripts::CrittersFoodDispenser*);
DEFINE_IL2CPP_CLASS(::Critters::Scripts::CrittersFoodDispenser*, "Critters.Scripts", "CrittersFoodDispenser");
// Dependencies CrittersActor
namespace Critters::Scripts {
// Is value type: false
// CS Name: Critters.Scripts.CrittersFoodDispenser
class CORDL_TYPE CrittersFoodDispenser : public ::GlobalNamespace::CrittersActor {
public:
// Declarations
/// @brief Field heldByPlayer, offset 0x188, size 0x1 
 __declspec(property(get=__cordl_internal_get_heldByPlayer, put=__cordl_internal_set_heldByPlayer)) bool  heldByPlayer;

/// @brief Method GrabbedBy, addr 0x5ddd938, size 0x34, virtual true, abstract: false, final false
inline void GrabbedBy(::GlobalNamespace::CrittersActor*  grabbingActor, bool  positionOverride, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Vector3  localOffset, bool  disableGrabbing) ;

/// @brief Method HandleRemoteReleased, addr 0x5ddd9e4, size 0x1c, virtual true, abstract: false, final false
inline void HandleRemoteReleased() ;

/// @brief Method Initialize, addr 0x5ddd91c, size 0x1c, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::Critters::Scripts::CrittersFoodDispenser* New_ctor() ;

/// @brief Method Released, addr 0x5ddd9a0, size 0x44, virtual true, abstract: false, final false
inline void Released(bool  keepWorldPosition, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  impulseVelocity, ::UnityEngine::Vector3  impulseAngularVelocity) ;

/// @brief Method RemoteGrabbedBy, addr 0x5ddd96c, size 0x34, virtual true, abstract: false, final false
inline void RemoteGrabbedBy(::GlobalNamespace::CrittersActor*  grabbingActor) ;

constexpr bool const& __cordl_internal_get_heldByPlayer() const;

constexpr bool& __cordl_internal_get_heldByPlayer() ;

constexpr void __cordl_internal_set_heldByPlayer(bool  value) ;

/// @brief Method .ctor, addr 0x5ddda00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersFoodDispenser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersFoodDispenser", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersFoodDispenser(CrittersFoodDispenser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersFoodDispenser", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersFoodDispenser(CrittersFoodDispenser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5113};

/// [FormerlySerializedAs("isHeldByPlayer")]
/// @brief Field heldByPlayer, offset: 0x188, size: 0x1, def value: None
 bool  ___heldByPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Critters::Scripts::CrittersFoodDispenser, ___heldByPlayer) == 0x188, "Offset mismatch!");

static_assert(sizeof(::Critters::Scripts::CrittersFoodDispenser) == 0x190, "Size mismatch!");

} // namespace end def Critters::Scripts
