#pragma once
// IWYU pragma private; include "GlobalNamespace/ArcingProjectileLauncher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ElfLauncher_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(ArcingProjectileLauncher)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ArcingProjectileLauncher;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ArcingProjectileLauncher*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ArcingProjectileLauncher*, "", "ArcingProjectileLauncher");
// Dependencies ElfLauncher, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: ArcingProjectileLauncher
class CORDL_TYPE ArcingProjectileLauncher : public ::GlobalNamespace::ElfLauncher {
public:
// Declarations
/// @brief Field angleVelocityMultiplier, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_angleVelocityMultiplier, put=__cordl_internal_set_angleVelocityMultiplier)) ::UnityEngine::AnimationCurve*  angleVelocityMultiplier;

/// @brief Field fireAngleLimits, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_fireAngleLimits, put=__cordl_internal_set_fireAngleLimits)) ::UnityEngine::Vector2  fireAngleLimits;

static inline ::GlobalNamespace::ArcingProjectileLauncher* New_ctor() ;

/// @brief Method ShootShared, addr 0x5646f8c, size 0x72c, virtual true, abstract: false, final false
inline void ShootShared(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction) ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_angleVelocityMultiplier() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_angleVelocityMultiplier() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_fireAngleLimits() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_fireAngleLimits() ;

constexpr void __cordl_internal_set_angleVelocityMultiplier(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_fireAngleLimits(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x56476b8, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArcingProjectileLauncher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArcingProjectileLauncher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArcingProjectileLauncher(ArcingProjectileLauncher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArcingProjectileLauncher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArcingProjectileLauncher(ArcingProjectileLauncher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{691};

/// [SerializeField]
/// @brief Field fireAngleLimits, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___fireAngleLimits;

/// [SerializeField]
/// @brief Field angleVelocityMultiplier, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___angleVelocityMultiplier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ArcingProjectileLauncher, ___fireAngleLimits) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcingProjectileLauncher, ___angleVelocityMultiplier) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ArcingProjectileLauncher) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
