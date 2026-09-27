#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaFireball.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaThrowable_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaFireball)
namespace Photon::Pun {
class IPunInstantiateMagicCallback;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace UnityEngine {
class Collision;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaFireball;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaFireball*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaFireball*, "", "GorillaFireball");
// Dependencies GorillaThrowable
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaFireball
class CORDL_TYPE GorillaFireball : public ::GlobalNamespace::GorillaThrowable {
public:
// Declarations
/// @brief Field canExplode, offset 0x198, size 0x1 
 __declspec(property(get=__cordl_internal_get_canExplode, put=__cordl_internal_set_canExplode)) bool  canExplode;

/// @brief Field explosionStartTime, offset 0x19c, size 0x4 
 __declspec(property(get=__cordl_internal_get_explosionStartTime, put=__cordl_internal_set_explosionStartTime)) float_t  explosionStartTime;

/// @brief Field gravityStrength, offset 0x194, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravityStrength, put=__cordl_internal_set_gravityStrength)) float_t  gravityStrength;

/// @brief Field maxExplosionScale, offset 0x18c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxExplosionScale, put=__cordl_internal_set_maxExplosionScale)) float_t  maxExplosionScale;

/// @brief Field totalExplosionTime, offset 0x190, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalExplosionTime, put=__cordl_internal_set_totalExplosionTime)) float_t  totalExplosionTime;

/// @brief Convert operator to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr operator  ::Photon::Pun::IPunInstantiateMagicCallback*() noexcept;

/// @brief Method Explode, addr 0x59a50f8, size 0x4, virtual false, abstract: false, final false
inline void Explode() ;

/// @brief Method LateUpdate, addr 0x59a4538, size 0xe8, virtual true, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method LocalExplode, addr 0x59a4f80, size 0x38, virtual false, abstract: false, final false
inline void LocalExplode() ;

static inline ::GlobalNamespace::GorillaFireball* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x59a4ef0, size 0x90, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method OnPhotonInstantiate, addr 0x59a4fb8, size 0x140, virtual true, abstract: false, final true
inline void OnPhotonInstantiate(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Start, addr 0x59a4058, size 0x1c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method ThrowThisThingo, addr 0x59a4a14, size 0x1c, virtual true, abstract: false, final false
inline void ThrowThisThingo() ;

/// @brief Method Update, addr 0x59a4404, size 0x134, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_canExplode() const;

constexpr bool& __cordl_internal_get_canExplode() ;

constexpr float_t const& __cordl_internal_get_explosionStartTime() const;

constexpr float_t& __cordl_internal_get_explosionStartTime() ;

constexpr float_t const& __cordl_internal_get_gravityStrength() const;

constexpr float_t& __cordl_internal_get_gravityStrength() ;

constexpr float_t const& __cordl_internal_get_maxExplosionScale() const;

constexpr float_t& __cordl_internal_get_maxExplosionScale() ;

constexpr float_t const& __cordl_internal_get_totalExplosionTime() const;

constexpr float_t& __cordl_internal_get_totalExplosionTime() ;

constexpr void __cordl_internal_set_canExplode(bool  value) ;

constexpr void __cordl_internal_set_explosionStartTime(float_t  value) ;

constexpr void __cordl_internal_set_gravityStrength(float_t  value) ;

constexpr void __cordl_internal_set_maxExplosionScale(float_t  value) ;

constexpr void __cordl_internal_set_totalExplosionTime(float_t  value) ;

/// @brief Method .ctor, addr 0x59a50fc, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr ::Photon::Pun::IPunInstantiateMagicCallback* i___Photon__Pun__IPunInstantiateMagicCallback() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaFireball() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaFireball", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaFireball(GorillaFireball && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaFireball", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaFireball(GorillaFireball const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2630};

/// @brief Field maxExplosionScale, offset: 0x18c, size: 0x4, def value: None
 float_t  ___maxExplosionScale;

/// @brief Field totalExplosionTime, offset: 0x190, size: 0x4, def value: None
 float_t  ___totalExplosionTime;

/// @brief Field gravityStrength, offset: 0x194, size: 0x4, def value: None
 float_t  ___gravityStrength;

/// @brief Field canExplode, offset: 0x198, size: 0x1, def value: None
 bool  ___canExplode;

/// @brief Field explosionStartTime, offset: 0x19c, size: 0x4, def value: None
 float_t  ___explosionStartTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaFireball, ___maxExplosionScale) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFireball, ___totalExplosionTime) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFireball, ___gravityStrength) == 0x194, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFireball, ___canExplode) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFireball, ___explosionStartTime) == 0x19c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaFireball) == 0x1a0, "Size mismatch!");

} // namespace end def GlobalNamespace
