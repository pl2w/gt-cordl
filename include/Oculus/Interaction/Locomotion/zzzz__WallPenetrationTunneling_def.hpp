#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/WallPenetrationTunneling.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WallPenetrationTunneling)
namespace Oculus::Interaction {
class TunnelingEffect;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class WallPenetrationTunneling;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::WallPenetrationTunneling*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::WallPenetrationTunneling*, "Oculus.Interaction.Locomotion", "WallPenetrationTunneling");
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.RaycastHit
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.WallPenetrationTunneling
class CORDL_TYPE WallPenetrationTunneling : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ExtraDistance, put=set_ExtraDistance)) float_t  ExtraDistance;

 __declspec(property(get=get_IgnoreTag, put=set_IgnoreTag)) ::StringW  IgnoreTag;

 __declspec(property(get=get_LayerMask, put=set_LayerMask)) ::UnityEngine::LayerMask  LayerMask;

 __declspec(property(get=get_PenetrationFov, put=set_PenetrationFov)) ::UnityEngine::AnimationCurve*  PenetrationFov;

/// @brief Field _extraDistance, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__extraDistance, put=__cordl_internal_set__extraDistance)) float_t  _extraDistance;

/// @brief Field _hits, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__hits, put=__cordl_internal_set__hits)) ::ArrayW<::UnityEngine::RaycastHit>  _hits;

/// @brief Field _ignoreTag, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__ignoreTag, put=__cordl_internal_set__ignoreTag)) ::StringW  _ignoreTag;

/// @brief Field _layerMask, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__layerMask, put=__cordl_internal_set__layerMask)) ::UnityEngine::LayerMask  _layerMask;

/// @brief Field _logicalPosition, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__logicalPosition, put=__cordl_internal_set__logicalPosition)) ::UnityW<::UnityEngine::Transform>  _logicalPosition;

/// @brief Field _maxCollidersCheck, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxCollidersCheck, put=__cordl_internal_set__maxCollidersCheck)) int32_t  _maxCollidersCheck;

/// @brief Field _penetrationFov, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__penetrationFov, put=__cordl_internal_set__penetrationFov)) ::UnityEngine::AnimationCurve*  _penetrationFov;

/// @brief Field _started, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _trackedPosition, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__trackedPosition, put=__cordl_internal_set__trackedPosition)) ::UnityW<::UnityEngine::Transform>  _trackedPosition;

/// @brief Field _tunneling, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__tunneling, put=__cordl_internal_set__tunneling)) ::UnityW<::Oculus::Interaction::TunnelingEffect>  _tunneling;

/// @brief Method Awake, addr 0xa4d17e4, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculatePenetration, addr 0xa4d1898, size 0x368, virtual false, abstract: false, final false
inline bool CalculatePenetration(::by_ref<float_t>  distance) ;

/// @brief Method InjectAllWallPenetrationTunneling, addr 0xa4d1db4, size 0x58, virtual false, abstract: false, final false
inline void InjectAllWallPenetrationTunneling(::UnityEngine::Transform*  trackedPosition, ::UnityEngine::Transform*  logicalPosition, ::Oculus::Interaction::TunnelingEffect*  tunneling, int32_t  maxCollidersCheck) ;

/// @brief Method InjectLogicalPosition, addr 0xa4d1e14, size 0x8, virtual false, abstract: false, final false
inline void InjectLogicalPosition(::UnityEngine::Transform*  logicalPosition) ;

/// @brief Method InjectMaxCollidersCheck, addr 0xa4d1e24, size 0x8, virtual false, abstract: false, final false
inline void InjectMaxCollidersCheck(int32_t  maxCollidersCheck) ;

/// @brief Method InjectTrackedPosition, addr 0xa4d1e0c, size 0x8, virtual false, abstract: false, final false
inline void InjectTrackedPosition(::UnityEngine::Transform*  trackedPosition) ;

/// @brief Method InjectTunneling, addr 0xa4d1e1c, size 0x8, virtual false, abstract: false, final false
inline void InjectTunneling(::Oculus::Interaction::TunnelingEffect*  tunneling) ;

/// @brief Method LateUpdate, addr 0xa4d1868, size 0x30, virtual true, abstract: false, final false
inline void LateUpdate() ;

static inline ::Oculus::Interaction::Locomotion::WallPenetrationTunneling* New_ctor() ;

/// @brief Method Start, addr 0xa4d183c, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateTunneling, addr 0xa4d1c00, size 0x1b4, virtual false, abstract: false, final false
inline void UpdateTunneling(bool  headBlocked, float_t  penetrationDistance) ;

constexpr float_t const& __cordl_internal_get__extraDistance() const;

constexpr float_t& __cordl_internal_get__extraDistance() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get__hits() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get__hits() ;

constexpr ::StringW const& __cordl_internal_get__ignoreTag() const;

constexpr ::StringW& __cordl_internal_get__ignoreTag() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__layerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__layerMask() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__logicalPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__logicalPosition() ;

constexpr int32_t const& __cordl_internal_get__maxCollidersCheck() const;

constexpr int32_t& __cordl_internal_get__maxCollidersCheck() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__penetrationFov() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__penetrationFov() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__trackedPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__trackedPosition() ;

constexpr ::UnityW<::Oculus::Interaction::TunnelingEffect> const& __cordl_internal_get__tunneling() const;

constexpr ::UnityW<::Oculus::Interaction::TunnelingEffect>& __cordl_internal_get__tunneling() ;

constexpr void __cordl_internal_set__extraDistance(float_t  value) ;

constexpr void __cordl_internal_set__hits(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set__ignoreTag(::StringW  value) ;

constexpr void __cordl_internal_set__layerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set__logicalPosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__maxCollidersCheck(int32_t  value) ;

constexpr void __cordl_internal_set__penetrationFov(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__trackedPosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__tunneling(::UnityW<::Oculus::Interaction::TunnelingEffect>  value) ;

/// @brief Method .ctor, addr 0xa4d1e2c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ExtraDistance, addr 0xa4d17b4, size 0x8, virtual false, abstract: false, final false
inline float_t get_ExtraDistance() ;

/// @brief Method get_IgnoreTag, addr 0xa4d17c4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_IgnoreTag() ;

/// @brief Method get_LayerMask, addr 0xa4d17d4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_LayerMask() ;

/// @brief Method get_PenetrationFov, addr 0xa4d17a4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_PenetrationFov() ;

/// @brief Method set_ExtraDistance, addr 0xa4d17bc, size 0x8, virtual false, abstract: false, final false
inline void set_ExtraDistance(float_t  value) ;

/// @brief Method set_IgnoreTag, addr 0xa4d17cc, size 0x8, virtual false, abstract: false, final false
inline void set_IgnoreTag(::StringW  value) ;

/// @brief Method set_LayerMask, addr 0xa4d17dc, size 0x8, virtual false, abstract: false, final false
inline void set_LayerMask(::UnityEngine::LayerMask  value) ;

/// @brief Method set_PenetrationFov, addr 0xa4d17ac, size 0x8, virtual false, abstract: false, final false
inline void set_PenetrationFov(::UnityEngine::AnimationCurve*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WallPenetrationTunneling() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WallPenetrationTunneling", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WallPenetrationTunneling(WallPenetrationTunneling && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WallPenetrationTunneling", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WallPenetrationTunneling(WallPenetrationTunneling const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16291};

/// [SerializeField]
/// @brief Field _trackedPosition, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____trackedPosition;

/// [SerializeField]
/// @brief Field _logicalPosition, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____logicalPosition;

/// [SerializeField]
/// @brief Field _tunneling, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::TunnelingEffect>  ____tunneling;

/// [SerializeField]
/// @brief Field _penetrationFov, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____penetrationFov;

/// [SerializeField]
/// @brief Field _extraDistance, offset: 0x40, size: 0x4, def value: None
 float_t  ____extraDistance;

/// [SerializeField]
/// [Min(1)]
/// @brief Field _maxCollidersCheck, offset: 0x44, size: 0x4, def value: None
 int32_t  ____maxCollidersCheck;

/// [SerializeField]
/// [Optional]
/// @brief Field _ignoreTag, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____ignoreTag;

/// [SerializeField]
/// @brief Field _layerMask, offset: 0x50, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____layerMask;

/// @brief Field _hits, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ____hits;

/// @brief Field _started, offset: 0x60, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::WallPenetrationTunneling, ____trackedPosition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::WallPenetrationTunneling, ____logicalPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::WallPenetrationTunneling, ____tunneling) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::WallPenetrationTunneling, ____penetrationFov) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::WallPenetrationTunneling, ____extraDistance) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::WallPenetrationTunneling, ____maxCollidersCheck) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::WallPenetrationTunneling, ____ignoreTag) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::WallPenetrationTunneling, ____layerMask) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::WallPenetrationTunneling, ____hits) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::WallPenetrationTunneling, ____started) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::WallPenetrationTunneling) == 0x68, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
