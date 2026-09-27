#pragma once
// IWYU pragma private; include "GlobalNamespace/SpeedDrivenAnim.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SpeedDrivenAnim)
namespace GlobalNamespace {
class GorillaVelocityEstimator;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class SpeedDrivenAnim;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SpeedDrivenAnim*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpeedDrivenAnim*, "", "SpeedDrivenAnim");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpeedDrivenAnim
class CORDL_TYPE SpeedDrivenAnim : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field animKey, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_animKey, put=__cordl_internal_set_animKey)) ::StringW  animKey;

/// @brief Field animator, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field currentBlend, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentBlend, put=__cordl_internal_set_currentBlend)) float_t  currentBlend;

/// @brief Field keyHash, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_keyHash, put=__cordl_internal_set_keyHash)) int32_t  keyHash;

/// @brief Field maxChangePerSecond, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxChangePerSecond, put=__cordl_internal_set_maxChangePerSecond)) float_t  maxChangePerSecond;

/// @brief Field speed0, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed0, put=__cordl_internal_set_speed0)) float_t  speed0;

/// @brief Field speed1, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed1, put=__cordl_internal_set_speed1)) float_t  speed1;

/// @brief Field velocityEstimator, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityEstimator, put=__cordl_internal_set_velocityEstimator)) ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  velocityEstimator;

static inline ::GlobalNamespace::SpeedDrivenAnim* New_ctor() ;

/// @brief Method Start, addr 0x565b374, size 0xa4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x565b418, size 0x10c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::StringW const& __cordl_internal_get_animKey() const;

constexpr ::StringW& __cordl_internal_get_animKey() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr float_t const& __cordl_internal_get_currentBlend() const;

constexpr float_t& __cordl_internal_get_currentBlend() ;

constexpr int32_t const& __cordl_internal_get_keyHash() const;

constexpr int32_t& __cordl_internal_get_keyHash() ;

constexpr float_t const& __cordl_internal_get_maxChangePerSecond() const;

constexpr float_t& __cordl_internal_get_maxChangePerSecond() ;

constexpr float_t const& __cordl_internal_get_speed0() const;

constexpr float_t& __cordl_internal_get_speed0() ;

constexpr float_t const& __cordl_internal_get_speed1() const;

constexpr float_t& __cordl_internal_get_speed1() ;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& __cordl_internal_get_velocityEstimator() const;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& __cordl_internal_get_velocityEstimator() ;

constexpr void __cordl_internal_set_animKey(::StringW  value) ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_currentBlend(float_t  value) ;

constexpr void __cordl_internal_set_keyHash(int32_t  value) ;

constexpr void __cordl_internal_set_maxChangePerSecond(float_t  value) ;

constexpr void __cordl_internal_set_speed0(float_t  value) ;

constexpr void __cordl_internal_set_speed1(float_t  value) ;

constexpr void __cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value) ;

/// @brief Method .ctor, addr 0x565b524, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpeedDrivenAnim() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpeedDrivenAnim", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpeedDrivenAnim(SpeedDrivenAnim && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpeedDrivenAnim", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpeedDrivenAnim(SpeedDrivenAnim const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{764};

/// [SerializeField]
/// @brief Field speed0, offset: 0x20, size: 0x4, def value: None
 float_t  ___speed0;

/// [SerializeField]
/// @brief Field speed1, offset: 0x24, size: 0x4, def value: None
 float_t  ___speed1;

/// [SerializeField]
/// @brief Field maxChangePerSecond, offset: 0x28, size: 0x4, def value: None
 float_t  ___maxChangePerSecond;

/// [SerializeField]
/// @brief Field animKey, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___animKey;

/// @brief Field velocityEstimator, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  ___velocityEstimator;

/// @brief Field animator, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

/// @brief Field keyHash, offset: 0x48, size: 0x4, def value: None
 int32_t  ___keyHash;

/// @brief Field currentBlend, offset: 0x4c, size: 0x4, def value: None
 float_t  ___currentBlend;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpeedDrivenAnim, ___speed0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeedDrivenAnim, ___speed1) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeedDrivenAnim, ___maxChangePerSecond) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeedDrivenAnim, ___animKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeedDrivenAnim, ___velocityEstimator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeedDrivenAnim, ___animator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeedDrivenAnim, ___keyHash) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeedDrivenAnim, ___currentBlend) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpeedDrivenAnim) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
