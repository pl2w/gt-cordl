#pragma once
// IWYU pragma private; include "GlobalNamespace/TriggerOnJump.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TriggerOnJump)
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class RubberDuckEvents;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class TriggerOnJump;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TriggerOnJump*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TriggerOnJump*, "", "TriggerOnJump");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TriggerOnJump
class CORDL_TYPE TriggerOnJump : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field _events, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::UnityW<::GlobalNamespace::RubberDuckEvents>  _events;

/// @brief Field cooldownTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownTime, put=__cordl_internal_set_cooldownTime)) float_t  cooldownTime;

/// @brief Field jumpStartTime, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_jumpStartTime, put=__cordl_internal_set_jumpStartTime)) float_t  jumpStartTime;

/// @brief Field lastActivationTime, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastActivationTime, put=__cordl_internal_set_lastActivationTime)) float_t  lastActivationTime;

/// @brief Field minJumpStrength, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_minJumpStrength, put=__cordl_internal_set_minJumpStrength)) float_t  minJumpStrength;

/// @brief Field minJumpTime, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_minJumpTime, put=__cordl_internal_set_minJumpTime)) float_t  minJumpTime;

/// @brief Field minJumpVertical, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_minJumpVertical, put=__cordl_internal_set_minJumpVertical)) float_t  minJumpVertical;

/// @brief Field myRig, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field onJumping, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onJumping, put=__cordl_internal_set_onJumping)) ::UnityEngine::Events::UnityEvent*  onJumping;

/// @brief Field playerOnGround, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_playerOnGround, put=__cordl_internal_set_playerOnGround)) bool  playerOnGround;

/// @brief Field waitingForGrounding, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_waitingForGrounding, put=__cordl_internal_set_waitingForGrounding)) bool  waitingForGrounding;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

static inline ::GlobalNamespace::TriggerOnJump* New_ctor() ;

/// @brief Method OnActivate, addr 0x565d94c, size 0x100, virtual false, abstract: false, final false
inline void OnActivate(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method OnDisable, addr 0x565d7a8, size 0x1a4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x565d324, size 0x484, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Tick, addr 0x565da4c, size 0x27c, virtual true, abstract: false, final true
inline void Tick() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& __cordl_internal_get__events() const;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& __cordl_internal_get__events() ;

constexpr float_t const& __cordl_internal_get_cooldownTime() const;

constexpr float_t& __cordl_internal_get_cooldownTime() ;

constexpr float_t const& __cordl_internal_get_jumpStartTime() const;

constexpr float_t& __cordl_internal_get_jumpStartTime() ;

constexpr float_t const& __cordl_internal_get_lastActivationTime() const;

constexpr float_t& __cordl_internal_get_lastActivationTime() ;

constexpr float_t const& __cordl_internal_get_minJumpStrength() const;

constexpr float_t& __cordl_internal_get_minJumpStrength() ;

constexpr float_t const& __cordl_internal_get_minJumpTime() const;

constexpr float_t& __cordl_internal_get_minJumpTime() ;

constexpr float_t const& __cordl_internal_get_minJumpVertical() const;

constexpr float_t& __cordl_internal_get_minJumpVertical() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onJumping() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onJumping() ;

constexpr bool const& __cordl_internal_get_playerOnGround() const;

constexpr bool& __cordl_internal_get_playerOnGround() ;

constexpr bool const& __cordl_internal_get_waitingForGrounding() const;

constexpr bool& __cordl_internal_get_waitingForGrounding() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value) ;

constexpr void __cordl_internal_set_cooldownTime(float_t  value) ;

constexpr void __cordl_internal_set_jumpStartTime(float_t  value) ;

constexpr void __cordl_internal_set_lastActivationTime(float_t  value) ;

constexpr void __cordl_internal_set_minJumpStrength(float_t  value) ;

constexpr void __cordl_internal_set_minJumpTime(float_t  value) ;

constexpr void __cordl_internal_set_minJumpVertical(float_t  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_onJumping(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_playerOnGround(bool  value) ;

constexpr void __cordl_internal_set_waitingForGrounding(bool  value) ;

/// @brief Method .ctor, addr 0x565dcd8, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x565dcc8, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x565dcd0, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TriggerOnJump() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TriggerOnJump", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TriggerOnJump(TriggerOnJump && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TriggerOnJump", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TriggerOnJump(TriggerOnJump const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{771};

/// [SerializeField]
/// @brief Field minJumpStrength, offset: 0x20, size: 0x4, def value: None
 float_t  ___minJumpStrength;

/// [SerializeField]
/// @brief Field minJumpVertical, offset: 0x24, size: 0x4, def value: None
 float_t  ___minJumpVertical;

/// [SerializeField]
/// @brief Field cooldownTime, offset: 0x28, size: 0x4, def value: None
 float_t  ___cooldownTime;

/// [SerializeField]
/// @brief Field onJumping, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onJumping;

/// @brief Field _events, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RubberDuckEvents>  ____events;

/// @brief Field playerOnGround, offset: 0x40, size: 0x1, def value: None
 bool  ___playerOnGround;

/// @brief Field minJumpTime, offset: 0x44, size: 0x4, def value: None
 float_t  ___minJumpTime;

/// @brief Field waitingForGrounding, offset: 0x48, size: 0x1, def value: None
 bool  ___waitingForGrounding;

/// @brief Field jumpStartTime, offset: 0x4c, size: 0x4, def value: None
 float_t  ___jumpStartTime;

/// @brief Field lastActivationTime, offset: 0x50, size: 0x4, def value: None
 float_t  ___lastActivationTime;

/// @brief Field myRig, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x60, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TriggerOnJump, ___minJumpStrength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerOnJump, ___minJumpVertical) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerOnJump, ___cooldownTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerOnJump, ___onJumping) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerOnJump, ____events) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerOnJump, ___playerOnGround) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerOnJump, ___minJumpTime) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerOnJump, ___waitingForGrounding) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerOnJump, ___jumpStartTime) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerOnJump, ___lastActivationTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerOnJump, ___myRig) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerOnJump, ____TickRunning_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TriggerOnJump) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
