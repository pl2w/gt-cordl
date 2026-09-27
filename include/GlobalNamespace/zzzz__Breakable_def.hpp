#pragma once
// IWYU pragma private; include "GlobalNamespace/Breakable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__UnityLayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Breakable)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
struct PhotonSignalInfo;
}
namespace GlobalNamespace {
template<typename T1>
class PhotonSignal_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
class Breakable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Breakable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Breakable*, "", "Breakable");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Renderer, UnityLayerMask
namespace GlobalNamespace {
// Is value type: false
// CS Name: Breakable
class CORDL_TYPE Breakable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _breakEffect, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__breakEffect, put=__cordl_internal_set__breakEffect)) ::UnityW<::UnityEngine::ParticleSystem>  _breakEffect;

/// @brief Field _breakSignal, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__breakSignal, put=__cordl_internal_set__breakSignal)) ::GlobalNamespace::PhotonSignal_1<int32_t>*  _breakSignal;

/// @brief Field _broken, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__broken, put=__cordl_internal_set__broken)) bool  _broken;

/// @brief Field _collider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__collider, put=__cordl_internal_set__collider)) ::UnityW<::UnityEngine::Collider>  _collider;

/// @brief Field _physicsMask, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__physicsMask, put=__cordl_internal_set__physicsMask)) ::GlobalNamespace::UnityLayerMask  _physicsMask;

/// @brief Field _renderers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderers, put=__cordl_internal_set__renderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>>  _renderers;

/// @brief Field _rigidbody, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbody, put=__cordl_internal_set__rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  _rigidbody;

/// @brief Field canBreakDelay, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_canBreakDelay, put=__cordl_internal_set_canBreakDelay)) float_t  canBreakDelay;

/// @brief Field endTime, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_endTime, put=__cordl_internal_set_endTime)) float_t  endTime;

/// @brief Field m_spamChecker, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_spamChecker, put=__cordl_internal_set_m_spamChecker)) ::GlobalNamespace::CallLimiter*  m_spamChecker;

/// @brief Field m_useGravity, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_useGravity, put=__cordl_internal_set_m_useGravity)) bool  m_useGravity;

/// @brief Field onBreak, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_onBreak, put=__cordl_internal_set_onBreak)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::Breakable>>*  onBreak;

/// @brief Field onReset, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_onReset, put=__cordl_internal_set_onReset)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::Breakable>>*  onReset;

/// @brief Field onSpawn, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSpawn, put=__cordl_internal_set_onSpawn)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::Breakable>>*  onSpawn;

/// @brief Field rendererRoot, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rendererRoot, put=__cordl_internal_set_rendererRoot)) ::UnityW<::UnityEngine::GameObject>  rendererRoot;

/// @brief Field startTime, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_startTime, put=__cordl_internal_set_startTime)) float_t  startTime;

/// @brief Method Awake, addr 0x57b0fd4, size 0xf8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Break, addr 0x57b15f4, size 0x14, virtual false, abstract: false, final false
inline void Break() ;

/// @brief Method BreakRPC, addr 0x57b10cc, size 0x10c, virtual false, abstract: false, final false
inline void BreakRPC(int32_t  owner, ::GlobalNamespace::PhotonSignalInfo  info) ;

static inline ::GlobalNamespace::Breakable* New_ctor() ;

/// @brief Method OnBreak, addr 0x57b18d0, size 0x248, virtual true, abstract: false, final false
inline void OnBreak(bool  callback, bool  signal) ;

/// @brief Method OnCollisionEnter, addr 0x57b1520, size 0x14, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  col) ;

/// @brief Method OnCollisionStay, addr 0x57b1534, size 0x14, virtual false, abstract: false, final false
inline void OnCollisionStay(::UnityEngine::Collision*  col) ;

/// @brief Method OnDisable, addr 0x57b15a8, size 0x4c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57b1570, size 0x38, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnReset, addr 0x57b16ec, size 0xe8, virtual true, abstract: false, final false
inline void OnReset(bool  callback) ;

/// @brief Method OnSpawn, addr 0x57b17d4, size 0xfc, virtual true, abstract: false, final false
inline void OnSpawn(bool  callback) ;

/// @brief Method OnTriggerEnter, addr 0x57b1548, size 0x14, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  col) ;

/// @brief Method OnTriggerStay, addr 0x57b155c, size 0x14, virtual false, abstract: false, final false
inline void OnTriggerStay(::UnityEngine::Collider*  col) ;

/// @brief Method Reset, addr 0x57b1608, size 0x10, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Setup, addr 0x57b11d8, size 0x214, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method ShowRenderers, addr 0x57b1618, size 0xd4, virtual true, abstract: false, final false
inline void ShowRenderers(bool  visible) ;

/// @brief Method UpdatePhysMasks, addr 0x57b13ec, size 0x134, virtual false, abstract: false, final false
inline void UpdatePhysMasks() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__breakEffect() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__breakEffect() ;

constexpr ::GlobalNamespace::PhotonSignal_1<int32_t>* const& __cordl_internal_get__breakSignal() const;

constexpr ::GlobalNamespace::PhotonSignal_1<int32_t>*& __cordl_internal_get__breakSignal() ;

constexpr bool const& __cordl_internal_get__broken() const;

constexpr bool& __cordl_internal_get__broken() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__collider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__collider() ;

constexpr ::GlobalNamespace::UnityLayerMask const& __cordl_internal_get__physicsMask() const;

constexpr ::GlobalNamespace::UnityLayerMask& __cordl_internal_get__physicsMask() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& __cordl_internal_get__renderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& __cordl_internal_get__renderers() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbody() ;

constexpr float_t const& __cordl_internal_get_canBreakDelay() const;

constexpr float_t& __cordl_internal_get_canBreakDelay() ;

constexpr float_t const& __cordl_internal_get_endTime() const;

constexpr float_t& __cordl_internal_get_endTime() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_m_spamChecker() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_m_spamChecker() ;

constexpr bool const& __cordl_internal_get_m_useGravity() const;

constexpr bool& __cordl_internal_get_m_useGravity() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::Breakable>>* const& __cordl_internal_get_onBreak() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::Breakable>>*& __cordl_internal_get_onBreak() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::Breakable>>* const& __cordl_internal_get_onReset() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::Breakable>>*& __cordl_internal_get_onReset() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::Breakable>>* const& __cordl_internal_get_onSpawn() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::Breakable>>*& __cordl_internal_get_onSpawn() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rendererRoot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rendererRoot() ;

constexpr float_t const& __cordl_internal_get_startTime() const;

constexpr float_t& __cordl_internal_get_startTime() ;

constexpr void __cordl_internal_set__breakEffect(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set__breakSignal(::GlobalNamespace::PhotonSignal_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__broken(bool  value) ;

constexpr void __cordl_internal_set__collider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set__physicsMask(::GlobalNamespace::UnityLayerMask  value) ;

constexpr void __cordl_internal_set__renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value) ;

constexpr void __cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_canBreakDelay(float_t  value) ;

constexpr void __cordl_internal_set_endTime(float_t  value) ;

constexpr void __cordl_internal_set_m_spamChecker(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_m_useGravity(bool  value) ;

constexpr void __cordl_internal_set_onBreak(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::Breakable>>*  value) ;

constexpr void __cordl_internal_set_onReset(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::Breakable>>*  value) ;

constexpr void __cordl_internal_set_onSpawn(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::Breakable>>*  value) ;

constexpr void __cordl_internal_set_rendererRoot(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_startTime(float_t  value) ;

/// @brief Method .ctor, addr 0x57b1b18, size 0x13c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Breakable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Breakable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Breakable(Breakable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Breakable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Breakable(Breakable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1561};

/// [SerializeField]
/// @brief Field _collider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ____collider;

/// [SerializeField]
/// @brief Field _rigidbody, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rigidbody;

/// [SerializeField]
/// @brief Field rendererRoot, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rendererRoot;

/// [SerializeField]
/// @brief Field _renderers, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>>  ____renderers;

/// [Space]
/// [SerializeField]
/// @brief Field _breakEffect, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ____breakEffect;

/// [SerializeField]
/// @brief Field _physicsMask, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::UnityLayerMask  ____physicsMask;

/// @brief Field onSpawn, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::Breakable>>*  ___onSpawn;

/// @brief Field onBreak, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::Breakable>>*  ___onBreak;

/// @brief Field onReset, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::Breakable>>*  ___onReset;

/// @brief Field canBreakDelay, offset: 0x68, size: 0x4, def value: None
 float_t  ___canBreakDelay;

/// [SerializeField]
/// @brief Field _breakSignal, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::PhotonSignal_1<int32_t>*  ____breakSignal;

/// [SerializeField]
/// @brief Field m_spamChecker, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___m_spamChecker;

/// [Space]
/// @brief Field _broken, offset: 0x80, size: 0x1, def value: None
 bool  ____broken;

/// @brief Field m_useGravity, offset: 0x81, size: 0x1, def value: None
 bool  ___m_useGravity;

/// @brief Field startTime, offset: 0x84, size: 0x4, def value: None
 float_t  ___startTime;

/// @brief Field endTime, offset: 0x88, size: 0x4, def value: None
 float_t  ___endTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Breakable, ____collider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Breakable, ____rigidbody) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Breakable, ___rendererRoot) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Breakable, ____renderers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Breakable, ____breakEffect) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Breakable, ____physicsMask) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Breakable, ___onSpawn) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Breakable, ___onBreak) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Breakable, ___onReset) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Breakable, ___canBreakDelay) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Breakable, ____breakSignal) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Breakable, ___m_spamChecker) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Breakable, ____broken) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Breakable, ___m_useGravity) == 0x81, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Breakable, ___startTime) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Breakable, ___endTime) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Breakable) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
