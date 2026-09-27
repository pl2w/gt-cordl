#pragma once
// IWYU pragma private; include "GlobalNamespace/ScalerUpper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ScalerUpper)
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class ScalerUpper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ScalerUpper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScalerUpper*, "", "ScalerUpper");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScalerUpper
class CORDL_TYPE ScalerUpper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field scaleCurve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_scaleCurve, put=__cordl_internal_set_scaleCurve)) ::UnityEngine::AnimationCurve*  scaleCurve;

/// @brief Field t, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_t, put=__cordl_internal_set_t)) float_t  t;

/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  target;

static inline ::GlobalNamespace::ScalerUpper* New_ctor() ;

/// @brief Method OnDisable, addr 0x5744b6c, size 0xb4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5744b64, size 0x8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x5744a6c, size 0xf8, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_scaleCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_scaleCurve() ;

constexpr float_t const& __cordl_internal_get_t() const;

constexpr float_t& __cordl_internal_get_t() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_target() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_scaleCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_t(float_t  value) ;

constexpr void __cordl_internal_set_target(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

/// @brief Method .ctor, addr 0x5744c20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScalerUpper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScalerUpper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScalerUpper(ScalerUpper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScalerUpper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScalerUpper(ScalerUpper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1259};

/// [SerializeField]
/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___target;

/// [SerializeField]
/// @brief Field scaleCurve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___scaleCurve;

/// @brief Field t, offset: 0x30, size: 0x4, def value: None
 float_t  ___t;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScalerUpper, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScalerUpper, ___scaleCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScalerUpper, ___t) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScalerUpper) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
