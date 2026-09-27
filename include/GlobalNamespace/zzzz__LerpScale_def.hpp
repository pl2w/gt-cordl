#pragma once
// IWYU pragma private; include "GlobalNamespace/LerpScale.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LerpComponent_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LerpScale)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class LerpScale;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LerpScale*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LerpScale*, "", "LerpScale");
// Dependencies LerpComponent, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: LerpScale
class CORDL_TYPE LerpScale : public ::GlobalNamespace::LerpComponent {
public:
// Declarations
/// @brief Field current, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get_current, put=__cordl_internal_set_current)) ::UnityEngine::Vector3  current;

/// @brief Field end, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get_end, put=__cordl_internal_set_end)) ::UnityEngine::Vector3  end;

/// @brief Field scaleCurve, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_scaleCurve, put=__cordl_internal_set_scaleCurve)) ::UnityEngine::AnimationCurve*  scaleCurve;

/// @brief Field start, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_start, put=__cordl_internal_set_start)) ::UnityEngine::Vector3  start;

/// @brief Field target, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

static inline ::GlobalNamespace::LerpScale* New_ctor() ;

/// @brief Method OnLerp, addr 0x5a1d5b4, size 0x10c, virtual true, abstract: false, final false
inline void OnLerp(float_t  t) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_current() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_current() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_end() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_end() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_scaleCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_scaleCurve() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_start() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_start() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_current(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_end(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_scaleCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_start(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5a1d6c0, size 0xd4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LerpScale() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LerpScale", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LerpScale(LerpScale && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LerpScale", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LerpScale(LerpScale const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2822};

/// [Space]
/// @brief Field target, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// [Space]
/// @brief Field start, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___start;

/// @brief Field end, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___end;

/// @brief Field current, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___current;

/// [SerializeField]
/// @brief Field scaleCurve, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___scaleCurve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LerpScale, ___target) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LerpScale, ___start) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LerpScale, ___end) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LerpScale, ___current) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LerpScale, ___scaleCurve) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LerpScale) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
