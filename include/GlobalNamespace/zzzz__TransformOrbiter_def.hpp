#pragma once
// IWYU pragma private; include "GlobalNamespace/TransformOrbiter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TransformOrbiter)
namespace GlobalNamespace {
struct TransformOrbiter__Start_d__10;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class TransformOrbiter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TransformOrbiter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransformOrbiter*, "", "TransformOrbiter");
// Dependencies System.DateTime, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: TransformOrbiter
class CORDL_TYPE TransformOrbiter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__10 = ::GlobalNamespace::TransformOrbiter__Start_d__10;

/// @brief Field absoluteOrbitX, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get_absoluteOrbitX, put=__cordl_internal_set_absoluteOrbitX)) bool  absoluteOrbitX;

/// @brief Field absoluteOrbitY, offset 0x52, size 0x1 
 __declspec(property(get=__cordl_internal_get_absoluteOrbitY, put=__cordl_internal_set_absoluteOrbitY)) bool  absoluteOrbitY;

/// @brief Field absoluteOrbitZ, offset 0x53, size 0x1 
 __declspec(property(get=__cordl_internal_get_absoluteOrbitZ, put=__cordl_internal_set_absoluteOrbitZ)) bool  absoluteOrbitZ;

/// @brief Field anchor, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_anchor, put=__cordl_internal_set_anchor)) ::System::DateTime  anchor;

/// @brief Field barycenter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_barycenter, put=__cordl_internal_set_barycenter)) ::UnityW<::UnityEngine::Transform>  barycenter;

/// @brief Field faceBarycenter, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_faceBarycenter, put=__cordl_internal_set_faceBarycenter)) bool  faceBarycenter;

/// @brief Field orbit, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_orbit, put=__cordl_internal_set_orbit)) ::UnityEngine::Vector3  orbit;

/// @brief Field orbitTime, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_orbitTime, put=__cordl_internal_set_orbitTime)) double_t  orbitTime;

/// @brief Field speed, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) double_t  speed;

/// @brief Field translation, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_translation, put=__cordl_internal_set_translation)) ::UnityEngine::Vector3  translation;

/// @brief Method GetPositionAtTime, addr 0x5b38d74, size 0x144, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPositionAtTime(double_t  t) ;

/// @brief Method LateUpdate, addr 0x5b38b98, size 0x100, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::TransformOrbiter* New_ctor() ;

/// [AsyncStateMachine(typeof(TransformOrbiter::<Start>d__10))]
/// @brief Method Start, addr 0x5b38af0, size 0xa8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdatePosRot, addr 0x5b38c98, size 0xdc, virtual false, abstract: false, final false
inline void UpdatePosRot(double_t  t) ;

constexpr bool const& __cordl_internal_get_absoluteOrbitX() const;

constexpr bool& __cordl_internal_get_absoluteOrbitX() ;

constexpr bool const& __cordl_internal_get_absoluteOrbitY() const;

constexpr bool& __cordl_internal_get_absoluteOrbitY() ;

constexpr bool const& __cordl_internal_get_absoluteOrbitZ() const;

constexpr bool& __cordl_internal_get_absoluteOrbitZ() ;

constexpr ::System::DateTime const& __cordl_internal_get_anchor() const;

constexpr ::System::DateTime& __cordl_internal_get_anchor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_barycenter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_barycenter() ;

constexpr bool const& __cordl_internal_get_faceBarycenter() const;

constexpr bool& __cordl_internal_get_faceBarycenter() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_orbit() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_orbit() ;

constexpr double_t const& __cordl_internal_get_orbitTime() const;

constexpr double_t& __cordl_internal_get_orbitTime() ;

constexpr double_t const& __cordl_internal_get_speed() const;

constexpr double_t& __cordl_internal_get_speed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_translation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_translation() ;

constexpr void __cordl_internal_set_absoluteOrbitX(bool  value) ;

constexpr void __cordl_internal_set_absoluteOrbitY(bool  value) ;

constexpr void __cordl_internal_set_absoluteOrbitZ(bool  value) ;

constexpr void __cordl_internal_set_anchor(::System::DateTime  value) ;

constexpr void __cordl_internal_set_barycenter(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_faceBarycenter(bool  value) ;

constexpr void __cordl_internal_set_orbit(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_orbitTime(double_t  value) ;

constexpr void __cordl_internal_set_speed(double_t  value) ;

constexpr void __cordl_internal_set_translation(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5b39054, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method validateBarycenter, addr 0x5b38eb8, size 0x20, virtual false, abstract: false, final false
inline bool validateBarycenter() ;

/// @brief Method validateBarycenter, addr 0x5b38ed8, size 0x17c, virtual false, abstract: false, final false
inline bool validateBarycenter(::UnityEngine::Transform*  t) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformOrbiter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformOrbiter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformOrbiter(TransformOrbiter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformOrbiter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformOrbiter(TransformOrbiter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3691};

/// [SerializeField]
/// @brief Field barycenter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___barycenter;

/// [SerializeField]
/// @brief Field orbit, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___orbit;

/// [SerializeField]
/// @brief Field translation, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___translation;

/// [SerializeField]
/// [Range(0.01, 10)]
/// @brief Field speed, offset: 0x40, size: 0x8, def value: None
 double_t  ___speed;

/// @brief Field orbitTime, offset: 0x48, size: 0x8, def value: None
 double_t  ___orbitTime;

/// [SerializeField]
/// @brief Field faceBarycenter, offset: 0x50, size: 0x1, def value: None
 bool  ___faceBarycenter;

/// [SerializeField]
/// @brief Field absoluteOrbitX, offset: 0x51, size: 0x1, def value: None
 bool  ___absoluteOrbitX;

/// [SerializeField]
/// @brief Field absoluteOrbitY, offset: 0x52, size: 0x1, def value: None
 bool  ___absoluteOrbitY;

/// [SerializeField]
/// @brief Field absoluteOrbitZ, offset: 0x53, size: 0x1, def value: None
 bool  ___absoluteOrbitZ;

/// @brief Field anchor, offset: 0x58, size: 0x8, def value: None
 ::System::DateTime  ___anchor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransformOrbiter, ___barycenter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformOrbiter, ___orbit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformOrbiter, ___translation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformOrbiter, ___speed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformOrbiter, ___orbitTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformOrbiter, ___faceBarycenter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformOrbiter, ___absoluteOrbitX) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformOrbiter, ___absoluteOrbitY) == 0x52, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformOrbiter, ___absoluteOrbitZ) == 0x53, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformOrbiter, ___anchor) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransformOrbiter) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
