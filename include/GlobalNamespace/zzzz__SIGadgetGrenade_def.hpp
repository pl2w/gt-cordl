#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetGrenade.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIGadget_def.hpp"
CORDL_MODULE_EXPORT(SIGadgetGrenade)
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class ThrownGadget;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetGrenade;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetGrenade*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetGrenade*, "", "SIGadgetGrenade");
// Dependencies SIGadget
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetGrenade
class CORDL_TYPE SIGadgetGrenade : public ::GlobalNamespace::SIGadget {
public:
// Declarations
/// @brief Field GrenadeFinished, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_GrenadeFinished, put=__cordl_internal_set_GrenadeFinished)) ::System::Action*  GrenadeFinished;

/// @brief Field grenadeRenderer, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_grenadeRenderer, put=__cordl_internal_set_grenadeRenderer)) ::UnityW<::UnityEngine::Renderer>  grenadeRenderer;

/// @brief Field parentEntity, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentEntity, put=__cordl_internal_set_parentEntity)) ::UnityW<::GlobalNamespace::GameEntity>  parentEntity;

/// @brief Field rb, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field thrownGadget, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_thrownGadget, put=__cordl_internal_set_thrownGadget)) ::UnityW<::GlobalNamespace::ThrownGadget>  thrownGadget;

/// @brief Method HandleActivated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void HandleActivated() ;

/// @brief Method HandleHitSurface, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void HandleHitSurface() ;

/// @brief Method HandleThrown, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void HandleThrown() ;

static inline ::GlobalNamespace::SIGadgetGrenade* New_ctor() ;

/// @brief Method OnDisable, addr 0x58de40c, size 0xf0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x58de2e8, size 0x124, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEntityInit, addr 0x58de4fc, size 0xfc, virtual true, abstract: false, final false
inline void OnEntityInit() ;

constexpr ::System::Action* const& __cordl_internal_get_GrenadeFinished() const;

constexpr ::System::Action*& __cordl_internal_get_GrenadeFinished() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_grenadeRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_grenadeRenderer() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_parentEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_parentEntity() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr ::UnityW<::GlobalNamespace::ThrownGadget> const& __cordl_internal_get_thrownGadget() const;

constexpr ::UnityW<::GlobalNamespace::ThrownGadget>& __cordl_internal_get_thrownGadget() ;

constexpr void __cordl_internal_set_GrenadeFinished(::System::Action*  value) ;

constexpr void __cordl_internal_set_grenadeRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_parentEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_thrownGadget(::UnityW<::GlobalNamespace::ThrownGadget>  value) ;

/// @brief Method .ctor, addr 0x58de784, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetGrenade() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetGrenade", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetGrenade(SIGadgetGrenade && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetGrenade", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetGrenade(SIGadgetGrenade const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{258};

/// @brief Field GrenadeFinished, offset: 0x78, size: 0x8, def value: None
 ::System::Action*  ___GrenadeFinished;

/// @brief Field grenadeRenderer, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___grenadeRenderer;

/// [SerializeField]
/// @brief Field thrownGadget, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ThrownGadget>  ___thrownGadget;

/// @brief Field rb, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// @brief Field parentEntity, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___parentEntity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetGrenade, ___GrenadeFinished) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetGrenade, ___grenadeRenderer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetGrenade, ___thrownGadget) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetGrenade, ___rb) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetGrenade, ___parentEntity) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetGrenade) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
