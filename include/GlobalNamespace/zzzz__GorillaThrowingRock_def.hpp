#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaThrowingRock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaThrowable_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaThrowingRock)
namespace GlobalNamespace {
class VRRig;
}
namespace Photon::Pun {
class IPunInstantiateMagicCallback;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaThrowingRock;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaThrowingRock*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaThrowingRock*, "", "GorillaThrowingRock");
// Dependencies GorillaThrowable
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaThrowingRock
class CORDL_TYPE GorillaThrowingRock : public ::GlobalNamespace::GorillaThrowable {
public:
// Declarations
/// @brief Field bonkSpeedMax, offset 0x190, size 0x4 
 __declspec(property(get=__cordl_internal_get_bonkSpeedMax, put=__cordl_internal_set_bonkSpeedMax)) float_t  bonkSpeedMax;

/// @brief Field bonkSpeedMin, offset 0x18c, size 0x4 
 __declspec(property(get=__cordl_internal_get_bonkSpeedMin, put=__cordl_internal_set_bonkSpeedMin)) float_t  bonkSpeedMin;

/// @brief Field hitRig, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_hitRig, put=__cordl_internal_set_hitRig)) ::UnityW<::GlobalNamespace::VRRig>  hitRig;

/// @brief Convert operator to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr operator  ::Photon::Pun::IPunInstantiateMagicCallback*() noexcept;

static inline ::GlobalNamespace::GorillaThrowingRock* New_ctor() ;

/// @brief Method OnPhotonInstantiate, addr 0x59a6768, size 0x4, virtual true, abstract: false, final true
inline void OnPhotonInstantiate(::Photon::Pun::PhotonMessageInfo  info) ;

constexpr float_t const& __cordl_internal_get_bonkSpeedMax() const;

constexpr float_t& __cordl_internal_get_bonkSpeedMax() ;

constexpr float_t const& __cordl_internal_get_bonkSpeedMin() const;

constexpr float_t& __cordl_internal_get_bonkSpeedMin() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_hitRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_hitRig() ;

constexpr void __cordl_internal_set_bonkSpeedMax(float_t  value) ;

constexpr void __cordl_internal_set_bonkSpeedMin(float_t  value) ;

constexpr void __cordl_internal_set_hitRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x59a676c, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr ::Photon::Pun::IPunInstantiateMagicCallback* i___Photon__Pun__IPunInstantiateMagicCallback() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaThrowingRock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaThrowingRock", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaThrowingRock(GorillaThrowingRock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaThrowingRock", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaThrowingRock(GorillaThrowingRock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2633};

/// @brief Field bonkSpeedMin, offset: 0x18c, size: 0x4, def value: None
 float_t  ___bonkSpeedMin;

/// @brief Field bonkSpeedMax, offset: 0x190, size: 0x4, def value: None
 float_t  ___bonkSpeedMax;

/// @brief Field hitRig, offset: 0x198, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___hitRig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaThrowingRock, ___bonkSpeedMin) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowingRock, ___bonkSpeedMax) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowingRock, ___hitRig) == 0x198, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaThrowingRock) == 0x1a0, "Size mismatch!");

} // namespace end def GlobalNamespace
