#pragma once
// IWYU pragma private; include "GlobalNamespace/BasicFireSpawner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/zzzz__HashWrapper_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BasicFireSpawner)
namespace GlobalNamespace {
class SinglePool;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicFireSpawner;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BasicFireSpawner*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BasicFireSpawner*, "", "BasicFireSpawner");
// Dependencies GorillaTag.HashWrapper, UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: BasicFireSpawner
class CORDL_TYPE BasicFireSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field firePool, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_firePool, put=__cordl_internal_set_firePool)) ::GlobalNamespace::SinglePool*  firePool;

/// @brief Field firePrefab, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_firePrefab, put=__cordl_internal_set_firePrefab)) ::GorillaTag::HashWrapper  firePrefab;

/// @brief Field fireScaleMinMax, offset 0x24, size 0x8 
 __declspec(property(get=__cordl_internal_get_fireScaleMinMax, put=__cordl_internal_set_fireScaleMinMax)) ::UnityEngine::Vector2  fireScaleMinMax;

/// @brief Field scale, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) float_t  scale;

/// @brief Method Awake, addr 0x5693ce8, size 0xc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method InterpolateScale, addr 0x5693cf4, size 0x30, virtual false, abstract: false, final false
inline void InterpolateScale(float_t  f) ;

static inline ::GlobalNamespace::BasicFireSpawner* New_ctor() ;

/// @brief Method Spawn, addr 0x5693d24, size 0x1a8, virtual false, abstract: false, final false
inline void Spawn() ;

constexpr ::GlobalNamespace::SinglePool* const& __cordl_internal_get_firePool() const;

constexpr ::GlobalNamespace::SinglePool*& __cordl_internal_get_firePool() ;

constexpr ::GorillaTag::HashWrapper const& __cordl_internal_get_firePrefab() const;

constexpr ::GorillaTag::HashWrapper& __cordl_internal_get_firePrefab() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_fireScaleMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_fireScaleMinMax() ;

constexpr float_t const& __cordl_internal_get_scale() const;

constexpr float_t& __cordl_internal_get_scale() ;

constexpr void __cordl_internal_set_firePool(::GlobalNamespace::SinglePool*  value) ;

constexpr void __cordl_internal_set_firePrefab(::GorillaTag::HashWrapper  value) ;

constexpr void __cordl_internal_set_fireScaleMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_scale(float_t  value) ;

/// @brief Method .ctor, addr 0x5693ecc, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BasicFireSpawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BasicFireSpawner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicFireSpawner(BasicFireSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicFireSpawner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicFireSpawner(BasicFireSpawner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{889};

/// [SerializeField]
/// @brief Field firePrefab, offset: 0x20, size: 0x4, def value: None
 ::GorillaTag::HashWrapper  ___firePrefab;

/// [SerializeField]
/// @brief Field fireScaleMinMax, offset: 0x24, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___fireScaleMinMax;

/// @brief Field firePool, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::SinglePool*  ___firePool;

/// @brief Field scale, offset: 0x38, size: 0x4, def value: None
 float_t  ___scale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BasicFireSpawner, ___firePrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicFireSpawner, ___fireScaleMinMax) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicFireSpawner, ___firePool) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicFireSpawner, ___scale) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BasicFireSpawner) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
