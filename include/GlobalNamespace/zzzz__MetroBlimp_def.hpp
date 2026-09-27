#pragma once
// IWYU pragma private; include "GlobalNamespace/MetroBlimp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MetroBlimp)
namespace GlobalNamespace {
class MetroSpotlight;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class MetroBlimp;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MetroBlimp*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetroBlimp*, "", "MetroBlimp");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetroBlimp
class CORDL_TYPE MetroBlimp : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _lowering, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get__lowering, put=__cordl_internal_set__lowering)) bool  _lowering;

/// @brief Field _numHandsOnBlimp, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__numHandsOnBlimp, put=__cordl_internal_set__numHandsOnBlimp)) float_t  _numHandsOnBlimp;

/// @brief Field _startLocalHeight, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__startLocalHeight, put=__cordl_internal_set__startLocalHeight)) float_t  _startLocalHeight;

/// @brief Field _topStayTime, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__topStayTime, put=__cordl_internal_set__topStayTime)) float_t  _topStayTime;

/// @brief Field ascendSpeed, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_ascendSpeed, put=__cordl_internal_set_ascendSpeed)) float_t  ascendSpeed;

/// @brief Field blimpMaterial, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_blimpMaterial, put=__cordl_internal_set_blimpMaterial)) ::UnityW<::UnityEngine::Material>  blimpMaterial;

/// @brief Field blimpRenderer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_blimpRenderer, put=__cordl_internal_set_blimpRenderer)) ::UnityW<::UnityEngine::Renderer>  blimpRenderer;

/// @brief Field descendOffset, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_descendOffset, put=__cordl_internal_set_descendOffset)) float_t  descendOffset;

/// @brief Field descendReactionTime, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_descendReactionTime, put=__cordl_internal_set_descendReactionTime)) float_t  descendReactionTime;

/// @brief Field descendSpeed, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_descendSpeed, put=__cordl_internal_set_descendSpeed)) float_t  descendSpeed;

/// @brief Field spotLightLeft, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_spotLightLeft, put=__cordl_internal_set_spotLightLeft)) ::UnityW<::GlobalNamespace::MetroSpotlight>  spotLightLeft;

/// @brief Field spotLightRight, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_spotLightRight, put=__cordl_internal_set_spotLightRight)) ::UnityW<::GlobalNamespace::MetroSpotlight>  spotLightRight;

/// @brief Field topCollider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_topCollider, put=__cordl_internal_set_topCollider)) ::UnityW<::UnityEngine::BoxCollider>  topCollider;

/// @brief Method Awake, addr 0x5d08c18, size 0x2c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method IsPlayerHand, addr 0x5d08f08, size 0x24, virtual false, abstract: false, final false
static inline bool IsPlayerHand(::UnityEngine::Collider*  c) ;

static inline ::GlobalNamespace::MetroBlimp* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5d08f2c, size 0x2c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5d08f58, size 0x2c, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method Tick, addr 0x5d08c44, size 0x2c4, virtual false, abstract: false, final false
inline void Tick() ;

constexpr bool const& __cordl_internal_get__lowering() const;

constexpr bool& __cordl_internal_get__lowering() ;

constexpr float_t const& __cordl_internal_get__numHandsOnBlimp() const;

constexpr float_t& __cordl_internal_get__numHandsOnBlimp() ;

constexpr float_t const& __cordl_internal_get__startLocalHeight() const;

constexpr float_t& __cordl_internal_get__startLocalHeight() ;

constexpr float_t const& __cordl_internal_get__topStayTime() const;

constexpr float_t& __cordl_internal_get__topStayTime() ;

constexpr float_t const& __cordl_internal_get_ascendSpeed() const;

constexpr float_t& __cordl_internal_get_ascendSpeed() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_blimpMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_blimpMaterial() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_blimpRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_blimpRenderer() ;

constexpr float_t const& __cordl_internal_get_descendOffset() const;

constexpr float_t& __cordl_internal_get_descendOffset() ;

constexpr float_t const& __cordl_internal_get_descendReactionTime() const;

constexpr float_t& __cordl_internal_get_descendReactionTime() ;

constexpr float_t const& __cordl_internal_get_descendSpeed() const;

constexpr float_t& __cordl_internal_get_descendSpeed() ;

constexpr ::UnityW<::GlobalNamespace::MetroSpotlight> const& __cordl_internal_get_spotLightLeft() const;

constexpr ::UnityW<::GlobalNamespace::MetroSpotlight>& __cordl_internal_get_spotLightLeft() ;

constexpr ::UnityW<::GlobalNamespace::MetroSpotlight> const& __cordl_internal_get_spotLightRight() const;

constexpr ::UnityW<::GlobalNamespace::MetroSpotlight>& __cordl_internal_get_spotLightRight() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_topCollider() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_topCollider() ;

constexpr void __cordl_internal_set__lowering(bool  value) ;

constexpr void __cordl_internal_set__numHandsOnBlimp(float_t  value) ;

constexpr void __cordl_internal_set__startLocalHeight(float_t  value) ;

constexpr void __cordl_internal_set__topStayTime(float_t  value) ;

constexpr void __cordl_internal_set_ascendSpeed(float_t  value) ;

constexpr void __cordl_internal_set_blimpMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_blimpRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_descendOffset(float_t  value) ;

constexpr void __cordl_internal_set_descendReactionTime(float_t  value) ;

constexpr void __cordl_internal_set_descendSpeed(float_t  value) ;

constexpr void __cordl_internal_set_spotLightLeft(::UnityW<::GlobalNamespace::MetroSpotlight>  value) ;

constexpr void __cordl_internal_set_spotLightRight(::UnityW<::GlobalNamespace::MetroSpotlight>  value) ;

constexpr void __cordl_internal_set_topCollider(::UnityW<::UnityEngine::BoxCollider>  value) ;

/// @brief Method .ctor, addr 0x5d08f84, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetroBlimp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetroBlimp", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetroBlimp(MetroBlimp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetroBlimp", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetroBlimp(MetroBlimp const& ) = delete;

/// @brief Field _INNER_GLOW offset 0xffffffff size 0x8
static constexpr ::ConstString  _INNER_GLOW{u"_INNER_GLOW"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{446};

/// @brief Field spotLightLeft, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MetroSpotlight>  ___spotLightLeft;

/// @brief Field spotLightRight, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MetroSpotlight>  ___spotLightRight;

/// [Space]
/// @brief Field topCollider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___topCollider;

/// @brief Field blimpMaterial, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___blimpMaterial;

/// @brief Field blimpRenderer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___blimpRenderer;

/// [Space]
/// @brief Field ascendSpeed, offset: 0x48, size: 0x4, def value: None
 float_t  ___ascendSpeed;

/// @brief Field descendSpeed, offset: 0x4c, size: 0x4, def value: None
 float_t  ___descendSpeed;

/// @brief Field descendOffset, offset: 0x50, size: 0x4, def value: None
 float_t  ___descendOffset;

/// @brief Field descendReactionTime, offset: 0x54, size: 0x4, def value: None
 float_t  ___descendReactionTime;

/// [Space]
/// @brief Field _startLocalHeight, offset: 0x58, size: 0x4, def value: None
 float_t  ____startLocalHeight;

/// @brief Field _topStayTime, offset: 0x5c, size: 0x4, def value: None
 float_t  ____topStayTime;

/// @brief Field _numHandsOnBlimp, offset: 0x60, size: 0x4, def value: None
 float_t  ____numHandsOnBlimp;

/// @brief Field _lowering, offset: 0x64, size: 0x1, def value: None
 bool  ____lowering;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetroBlimp, ___spotLightLeft) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetroBlimp, ___spotLightRight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetroBlimp, ___topCollider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetroBlimp, ___blimpMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetroBlimp, ___blimpRenderer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetroBlimp, ___ascendSpeed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetroBlimp, ___descendSpeed) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetroBlimp, ___descendOffset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetroBlimp, ___descendReactionTime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetroBlimp, ____startLocalHeight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetroBlimp, ____topStayTime) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetroBlimp, ____numHandsOnBlimp) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetroBlimp, ____lowering) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetroBlimp) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
