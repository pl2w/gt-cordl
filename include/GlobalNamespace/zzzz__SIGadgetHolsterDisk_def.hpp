#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetHolsterDisk.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIGadgetHolsterDisk_State_def.hpp"
#include "GlobalNamespace/zzzz__SIGadget_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SIGadgetHolsterDisk)
namespace GlobalNamespace {
class I_SIDisruptable;
}
namespace GlobalNamespace {
class SIGadgetGrenade;
}
namespace GlobalNamespace {
struct SIGadgetHolsterDisk_State;
}
namespace GlobalNamespace {
class SIGadget;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetHolsterDisk;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetHolsterDisk*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetHolsterDisk*, "", "SIGadgetHolsterDisk");
// Dependencies SIGadget, SIGadgetHolsterDisk::State
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetHolsterDisk
class CORDL_TYPE SIGadgetHolsterDisk : public ::GlobalNamespace::SIGadget {
public:
// Declarations
using State = ::GlobalNamespace::SIGadgetHolsterDisk_State;

/// @brief Field cachedGadget, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedGadget, put=__cordl_internal_set_cachedGadget)) ::UnityW<::GlobalNamespace::SIGadget>  cachedGadget;

/// @brief Field cooldownTime, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownTime, put=__cordl_internal_set_cooldownTime)) float_t  cooldownTime;

/// @brief Field cooldownTimer, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownTimer, put=__cordl_internal_set_cooldownTimer)) float_t  cooldownTimer;

/// @brief Field gadgetRB, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_gadgetRB, put=__cordl_internal_set_gadgetRB)) ::UnityW<::UnityEngine::Rigidbody>  gadgetRB;

/// @brief Field grenadeGadget, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_grenadeGadget, put=__cordl_internal_set_grenadeGadget)) ::UnityW<::GlobalNamespace::SIGadgetGrenade>  grenadeGadget;

/// @brief Field referenceGadget, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_referenceGadget, put=__cordl_internal_set_referenceGadget)) ::UnityW<::GlobalNamespace::SIGadget>  referenceGadget;

/// @brief Field referenceTransform, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_referenceTransform, put=__cordl_internal_set_referenceTransform)) ::UnityW<::UnityEngine::Transform>  referenceTransform;

/// @brief Field state, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::SIGadgetHolsterDisk_State  state;

/// @brief Convert operator to "::GlobalNamespace::I_SIDisruptable"
constexpr operator  ::GlobalNamespace::I_SIDisruptable*() noexcept;

/// @brief Method Awake, addr 0x58dffe8, size 0x64, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateGadget, addr 0x58e009c, size 0x108, virtual false, abstract: false, final false
inline void CreateGadget() ;

/// @brief Method DiskRemovedFromHolster, addr 0x58e04d4, size 0x48, virtual false, abstract: false, final false
inline void DiskRemovedFromHolster() ;

/// @brief Method DiskSnappedToHolster, addr 0x58e0490, size 0x44, virtual false, abstract: false, final false
inline void DiskSnappedToHolster() ;

/// @brief Method Disrupt, addr 0x58e051c, size 0x20, virtual true, abstract: false, final true
inline void Disrupt(float_t  disruptTime) ;

/// @brief Method GadgetRespawn, addr 0x58e01a4, size 0x100, virtual false, abstract: false, final false
inline void GadgetRespawn() ;

static inline ::GlobalNamespace::SIGadgetHolsterDisk* New_ctor() ;

/// @brief Method OnDisable, addr 0x58e02a4, size 0x120, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnUpdateAuthority, addr 0x58e03c4, size 0xcc, virtual true, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method RegisterGadget, addr 0x58de5f8, size 0x18c, virtual false, abstract: false, final false
inline void RegisterGadget(::GlobalNamespace::SIGadget*  gadget) ;

/// @brief Method SetState, addr 0x58e004c, size 0x4c, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::SIGadgetHolsterDisk_State  newState) ;

/// @brief Method Start, addr 0x58e0098, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::SIGadget> const& __cordl_internal_get_cachedGadget() const;

constexpr ::UnityW<::GlobalNamespace::SIGadget>& __cordl_internal_get_cachedGadget() ;

constexpr float_t const& __cordl_internal_get_cooldownTime() const;

constexpr float_t& __cordl_internal_get_cooldownTime() ;

constexpr float_t const& __cordl_internal_get_cooldownTimer() const;

constexpr float_t& __cordl_internal_get_cooldownTimer() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_gadgetRB() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_gadgetRB() ;

constexpr ::UnityW<::GlobalNamespace::SIGadgetGrenade> const& __cordl_internal_get_grenadeGadget() const;

constexpr ::UnityW<::GlobalNamespace::SIGadgetGrenade>& __cordl_internal_get_grenadeGadget() ;

constexpr ::UnityW<::GlobalNamespace::SIGadget> const& __cordl_internal_get_referenceGadget() const;

constexpr ::UnityW<::GlobalNamespace::SIGadget>& __cordl_internal_get_referenceGadget() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_referenceTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_referenceTransform() ;

constexpr ::GlobalNamespace::SIGadgetHolsterDisk_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::SIGadgetHolsterDisk_State& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_cachedGadget(::UnityW<::GlobalNamespace::SIGadget>  value) ;

constexpr void __cordl_internal_set_cooldownTime(float_t  value) ;

constexpr void __cordl_internal_set_cooldownTimer(float_t  value) ;

constexpr void __cordl_internal_set_gadgetRB(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_grenadeGadget(::UnityW<::GlobalNamespace::SIGadgetGrenade>  value) ;

constexpr void __cordl_internal_set_referenceGadget(::UnityW<::GlobalNamespace::SIGadget>  value) ;

constexpr void __cordl_internal_set_referenceTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::SIGadgetHolsterDisk_State  value) ;

/// @brief Method .ctor, addr 0x58e053c, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::I_SIDisruptable"
constexpr ::GlobalNamespace::I_SIDisruptable* i___GlobalNamespace__I_SIDisruptable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetHolsterDisk() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetHolsterDisk", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetHolsterDisk(SIGadgetHolsterDisk && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetHolsterDisk", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetHolsterDisk(SIGadgetHolsterDisk const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{272};

/// @brief Field referenceGadget, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIGadget>  ___referenceGadget;

/// @brief Field cooldownTime, offset: 0x80, size: 0x4, def value: None
 float_t  ___cooldownTime;

/// @brief Field state, offset: 0x84, size: 0x4, def value: None
 ::GlobalNamespace::SIGadgetHolsterDisk_State  ___state;

/// @brief Field cooldownTimer, offset: 0x88, size: 0x4, def value: None
 float_t  ___cooldownTimer;

/// @brief Field grenadeGadget, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIGadgetGrenade>  ___grenadeGadget;

/// @brief Field gadgetRB, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___gadgetRB;

/// @brief Field cachedGadget, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIGadget>  ___cachedGadget;

/// @brief Field referenceTransform, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___referenceTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetHolsterDisk, ___referenceGadget) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetHolsterDisk, ___cooldownTime) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetHolsterDisk, ___state) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetHolsterDisk, ___cooldownTimer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetHolsterDisk, ___grenadeGadget) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetHolsterDisk, ___gadgetRB) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetHolsterDisk, ___cachedGadget) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetHolsterDisk, ___referenceTransform) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetHolsterDisk) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
