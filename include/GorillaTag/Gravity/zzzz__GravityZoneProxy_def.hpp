#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/GravityZoneProxy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Gravity/zzzz__GravityZoneProxy_ProxyBehaviour_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GravityZoneProxy)
namespace GlobalNamespace {
struct GravityZoneProxy_ProxyBehaviour;
}
namespace GorillaTag::Gravity {
class BasicGravityZone;
}
namespace GorillaTag::Gravity {
class MonkeGravityController;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GorillaTag::Gravity {
class GravityZoneProxy;
}
// Write type traits
MARK_REF_T(::GorillaTag::Gravity::GravityZoneProxy*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Gravity::GravityZoneProxy*, "GorillaTag.Gravity", "GravityZoneProxy");
// Dependencies GorillaTag.Gravity.GravityZoneProxy::ProxyBehaviour, UnityEngine.MonoBehaviour
namespace GorillaTag::Gravity {
// Is value type: false
// CS Name: GorillaTag.Gravity.GravityZoneProxy
class CORDL_TYPE GravityZoneProxy : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ProxyBehaviour = ::GlobalNamespace::GravityZoneProxy_ProxyBehaviour;

/// @brief Field OnEnter, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_OnEnter, put=__cordl_internal_set_OnEnter)) ::GlobalNamespace::GravityZoneProxy_ProxyBehaviour  OnEnter;

/// @brief Field OnExit, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_OnExit, put=__cordl_internal_set_OnExit)) ::GlobalNamespace::GravityZoneProxy_ProxyBehaviour  OnExit;

/// @brief Field delay, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay, put=__cordl_internal_set_delay)) float_t  delay;

/// @brief Field zone, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_zone, put=__cordl_internal_set_zone)) ::UnityW<::GorillaTag::Gravity::BasicGravityZone>  zone;

/// @brief Method ApplyBehaviour, addr 0x5d392b8, size 0xcc, virtual false, abstract: false, final false
inline void ApplyBehaviour(::GlobalNamespace::GravityZoneProxy_ProxyBehaviour  behaviour, ::GorillaTag::Gravity::MonkeGravityController*  target) ;

/// @brief Method DoBehaviour, addr 0x5d391e4, size 0xc4, virtual false, abstract: false, final false
inline void DoBehaviour(::GlobalNamespace::GravityZoneProxy_ProxyBehaviour  behaviour, ::UnityEngine::Collider*  other) ;

static inline ::GorillaTag::Gravity::GravityZoneProxy* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5d391d4, size 0x10, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5d392a8, size 0x10, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::GlobalNamespace::GravityZoneProxy_ProxyBehaviour const& __cordl_internal_get_OnEnter() const;

constexpr ::GlobalNamespace::GravityZoneProxy_ProxyBehaviour& __cordl_internal_get_OnEnter() ;

constexpr ::GlobalNamespace::GravityZoneProxy_ProxyBehaviour const& __cordl_internal_get_OnExit() const;

constexpr ::GlobalNamespace::GravityZoneProxy_ProxyBehaviour& __cordl_internal_get_OnExit() ;

constexpr float_t const& __cordl_internal_get_delay() const;

constexpr float_t& __cordl_internal_get_delay() ;

constexpr ::UnityW<::GorillaTag::Gravity::BasicGravityZone> const& __cordl_internal_get_zone() const;

constexpr ::UnityW<::GorillaTag::Gravity::BasicGravityZone>& __cordl_internal_get_zone() ;

constexpr void __cordl_internal_set_OnEnter(::GlobalNamespace::GravityZoneProxy_ProxyBehaviour  value) ;

constexpr void __cordl_internal_set_OnExit(::GlobalNamespace::GravityZoneProxy_ProxyBehaviour  value) ;

constexpr void __cordl_internal_set_delay(float_t  value) ;

constexpr void __cordl_internal_set_zone(::UnityW<::GorillaTag::Gravity::BasicGravityZone>  value) ;

/// @brief Method .ctor, addr 0x5d39384, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GravityZoneProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GravityZoneProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GravityZoneProxy(GravityZoneProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GravityZoneProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GravityZoneProxy(GravityZoneProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4681};

/// [SerializeField]
/// @brief Field zone, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Gravity::BasicGravityZone>  ___zone;

/// [SerializeField]
/// @brief Field OnEnter, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::GravityZoneProxy_ProxyBehaviour  ___OnEnter;

/// [SerializeField]
/// @brief Field OnExit, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::GravityZoneProxy_ProxyBehaviour  ___OnExit;

/// [SerializeField]
/// @brief Field delay, offset: 0x30, size: 0x4, def value: None
 float_t  ___delay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Gravity::GravityZoneProxy, ___zone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::GravityZoneProxy, ___OnEnter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::GravityZoneProxy, ___OnExit) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::GravityZoneProxy, ___delay) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Gravity::GravityZoneProxy) == 0x38, "Size mismatch!");

} // namespace end def GorillaTag::Gravity
