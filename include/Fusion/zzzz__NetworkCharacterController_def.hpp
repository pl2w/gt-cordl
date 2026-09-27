#pragma once
// IWYU pragma private; include "Fusion/NetworkCharacterController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkTRSP_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkCharacterController)
namespace Fusion {
class IAfterAllTicks;
}
namespace Fusion {
class IBeforeAllTicks;
}
namespace Fusion {
class IBeforeCopyPreviousState;
}
namespace Fusion {
class INetworkTRSPTeleport;
}
namespace Fusion {
class IPublicFacingInterface;
}
namespace Fusion {
struct NetworkCCData;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
class CharacterController;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Fusion {
class NetworkCharacterController;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkCharacterController*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkCharacterController*, "Fusion", "NetworkCharacterController");
// [DisallowMultipleComponent]
// [RequireComponent(typeof(UnityEngine.CharacterController))]
// [NetworkBehaviourWeaved(18)]
// Dependencies Fusion.NetworkTRSP, Fusion.Tick
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkCharacterController
class CORDL_TYPE NetworkCharacterController : public ::Fusion::NetworkTRSP {
public:
// Declarations
 __declspec(property(get=get_Data)) ::Fusion::NetworkCCData  Data;

 __declspec(property(get=get_Grounded, put=set_Grounded)) bool  Grounded;

 __declspec(property(get=get_Velocity, put=set_Velocity)) ::UnityEngine::Vector3  Velocity;

/// @brief Field _controller, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::UnityW<::UnityEngine::CharacterController>  _controller;

/// @brief Field _initial, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get__initial, put=__cordl_internal_set__initial)) ::Fusion::Tick  _initial;

/// @brief Field acceleration, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_acceleration, put=__cordl_internal_set_acceleration)) float_t  acceleration;

/// @brief Field braking, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_braking, put=__cordl_internal_set_braking)) float_t  braking;

/// @brief Field gravity, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravity, put=__cordl_internal_set_gravity)) float_t  gravity;

/// @brief Field jumpImpulse, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_jumpImpulse, put=__cordl_internal_set_jumpImpulse)) float_t  jumpImpulse;

/// @brief Field maxSpeed, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpeed, put=__cordl_internal_set_maxSpeed)) float_t  maxSpeed;

/// @brief Field rotationSpeed, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationSpeed, put=__cordl_internal_set_rotationSpeed)) float_t  rotationSpeed;

/// @brief Convert operator to "::Fusion::IAfterAllTicks"
constexpr operator  ::Fusion::IAfterAllTicks*() noexcept;

/// @brief Convert operator to "::Fusion::IBeforeAllTicks"
constexpr operator  ::Fusion::IBeforeAllTicks*() noexcept;

/// @brief Convert operator to "::Fusion::IBeforeCopyPreviousState"
constexpr operator  ::Fusion::IBeforeCopyPreviousState*() noexcept;

/// @brief Convert operator to "::Fusion::INetworkTRSPTeleport"
constexpr operator  ::Fusion::INetworkTRSPTeleport*() noexcept;

/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Method Awake, addr 0x60ee8d4, size 0x4c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CopyToBuffer, addr 0x60ee788, size 0x70, virtual false, abstract: false, final false
inline void CopyToBuffer() ;

/// @brief Method CopyToEngine, addr 0x60ee830, size 0x9c, virtual false, abstract: false, final false
inline void CopyToEngine() ;

/// @brief Method Fusion.IAfterAllTicks.AfterAllTicks, addr 0x60ee8cc, size 0x4, virtual true, abstract: false, final true
inline void Fusion_IAfterAllTicks_AfterAllTicks(bool  resimulation, int32_t  tickCount) ;

/// @brief Method Fusion.IBeforeAllTicks.BeforeAllTicks, addr 0x60ee82c, size 0x4, virtual true, abstract: false, final true
inline void Fusion_IBeforeAllTicks_BeforeAllTicks(bool  resimulation, int32_t  tickCount) ;

/// @brief Method Fusion.IBeforeCopyPreviousState.BeforeCopyPreviousState, addr 0x60ee8d0, size 0x4, virtual true, abstract: false, final true
inline void Fusion_IBeforeCopyPreviousState_BeforeCopyPreviousState() ;

/// @brief Method Jump, addr 0x60ee1fc, size 0xe4, virtual false, abstract: false, final false
inline void Jump(bool  ignoreGrounded, ::System::Nullable_1<float_t>  overrideImpulse) ;

/// @brief Method Move, addr 0x60ee2e0, size 0x424, virtual false, abstract: false, final false
inline void Move(::UnityEngine::Vector3  direction) ;

static inline ::Fusion::NetworkCharacterController* New_ctor() ;

/// @brief Method Render, addr 0x60ee7f8, size 0x34, virtual true, abstract: false, final false
inline void Render() ;

/// @brief Method Spawned, addr 0x60ee704, size 0x84, virtual true, abstract: false, final false
inline void Spawned() ;

/// @brief Method Teleport, addr 0x60ee164, size 0x98, virtual true, abstract: false, final true
inline void Teleport(::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation) ;

constexpr ::UnityW<::UnityEngine::CharacterController> const& __cordl_internal_get__controller() const;

constexpr ::UnityW<::UnityEngine::CharacterController>& __cordl_internal_get__controller() ;

constexpr ::Fusion::Tick const& __cordl_internal_get__initial() const;

constexpr ::Fusion::Tick& __cordl_internal_get__initial() ;

constexpr float_t const& __cordl_internal_get_acceleration() const;

constexpr float_t& __cordl_internal_get_acceleration() ;

constexpr float_t const& __cordl_internal_get_braking() const;

constexpr float_t& __cordl_internal_get_braking() ;

constexpr float_t const& __cordl_internal_get_gravity() const;

constexpr float_t& __cordl_internal_get_gravity() ;

constexpr float_t const& __cordl_internal_get_jumpImpulse() const;

constexpr float_t& __cordl_internal_get_jumpImpulse() ;

constexpr float_t const& __cordl_internal_get_maxSpeed() const;

constexpr float_t& __cordl_internal_get_maxSpeed() ;

constexpr float_t const& __cordl_internal_get_rotationSpeed() const;

constexpr float_t& __cordl_internal_get_rotationSpeed() ;

constexpr void __cordl_internal_set__controller(::UnityW<::UnityEngine::CharacterController>  value) ;

constexpr void __cordl_internal_set__initial(::Fusion::Tick  value) ;

constexpr void __cordl_internal_set_acceleration(float_t  value) ;

constexpr void __cordl_internal_set_braking(float_t  value) ;

constexpr void __cordl_internal_set_gravity(float_t  value) ;

constexpr void __cordl_internal_set_jumpImpulse(float_t  value) ;

constexpr void __cordl_internal_set_maxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_rotationSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x60ee920, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x60ee074, size 0x4c, virtual false, abstract: false, final false
inline ::by_ref<::Fusion::NetworkCCData> get_Data() ;

/// @brief Method get_Grounded, addr 0x60ee12c, size 0x1c, virtual false, abstract: false, final false
inline bool get_Grounded() ;

/// @brief Method get_Velocity, addr 0x60ee0c0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Velocity() ;

/// @brief Convert to "::Fusion::IAfterAllTicks"
constexpr ::Fusion::IAfterAllTicks* i___Fusion__IAfterAllTicks() noexcept;

/// @brief Convert to "::Fusion::IBeforeAllTicks"
constexpr ::Fusion::IBeforeAllTicks* i___Fusion__IBeforeAllTicks() noexcept;

/// @brief Convert to "::Fusion::IBeforeCopyPreviousState"
constexpr ::Fusion::IBeforeCopyPreviousState* i___Fusion__IBeforeCopyPreviousState() noexcept;

/// @brief Convert to "::Fusion::INetworkTRSPTeleport"
constexpr ::Fusion::INetworkTRSPTeleport* i___Fusion__INetworkTRSPTeleport() noexcept;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

/// @brief Method set_Grounded, addr 0x60ee148, size 0x1c, virtual false, abstract: false, final false
inline void set_Grounded(bool  value) ;

/// @brief Method set_Velocity, addr 0x60ee0e0, size 0x4c, virtual false, abstract: false, final false
inline void set_Velocity(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkCharacterController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkCharacterController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkCharacterController(NetworkCharacterController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkCharacterController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkCharacterController(NetworkCharacterController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23468};

/// [Header("Character Controller Settings")]
/// @brief Field gravity, offset: 0xb0, size: 0x4, def value: None
 float_t  ___gravity;

/// @brief Field jumpImpulse, offset: 0xb4, size: 0x4, def value: None
 float_t  ___jumpImpulse;

/// @brief Field acceleration, offset: 0xb8, size: 0x4, def value: None
 float_t  ___acceleration;

/// @brief Field braking, offset: 0xbc, size: 0x4, def value: None
 float_t  ___braking;

/// @brief Field maxSpeed, offset: 0xc0, size: 0x4, def value: None
 float_t  ___maxSpeed;

/// @brief Field rotationSpeed, offset: 0xc4, size: 0x4, def value: None
 float_t  ___rotationSpeed;

/// @brief Field _initial, offset: 0xc8, size: 0x4, def value: None
 ::Fusion::Tick  ____initial;

/// @brief Field _controller, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CharacterController>  ____controller;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkCharacterController, ___gravity) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkCharacterController, ___jumpImpulse) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkCharacterController, ___acceleration) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkCharacterController, ___braking) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkCharacterController, ___maxSpeed) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkCharacterController, ___rotationSpeed) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkCharacterController, ____initial) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkCharacterController, ____controller) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkCharacterController) == 0xd8, "Size mismatch!");

} // namespace end def Fusion
