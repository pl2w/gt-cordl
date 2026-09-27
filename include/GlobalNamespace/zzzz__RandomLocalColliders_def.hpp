#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomLocalColliders.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SRand_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RandomLocalColliders)
namespace GlobalNamespace {
class LightningDispatcherEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class RandomLocalColliders;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RandomLocalColliders*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RandomLocalColliders*, "", "RandomLocalColliders");
// Dependencies SRand, UnityEngine.MonoBehaviour, UnityEngine.RaycastHit
namespace GlobalNamespace {
// Is value type: false
// CS Name: RandomLocalColliders
class CORDL_TYPE RandomLocalColliders : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field colliderFound, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliderFound, put=__cordl_internal_set_colliderFound)) ::GlobalNamespace::LightningDispatcherEvent*  colliderFound;

/// @brief Field maxRadias, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRadias, put=__cordl_internal_set_maxRadias)) float_t  maxRadias;

/// @brief Field maxseekFreq, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxseekFreq, put=__cordl_internal_set_maxseekFreq)) float_t  maxseekFreq;

/// @brief Field minRadias, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_minRadias, put=__cordl_internal_set_minRadias)) float_t  minRadias;

/// @brief Field minseekFreq, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_minseekFreq, put=__cordl_internal_set_minseekFreq)) float_t  minseekFreq;

/// @brief Field rand, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rand, put=setStaticF_rand)) ::GlobalNamespace::SRand  rand;

/// @brief Field raycastHits, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_raycastHits, put=__cordl_internal_set_raycastHits)) ::ArrayW<::UnityEngine::RaycastHit>  raycastHits;

/// @brief Field seekFreq, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_seekFreq, put=__cordl_internal_set_seekFreq)) float_t  seekFreq;

/// @brief Field timeSinceSeek, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeSinceSeek, put=__cordl_internal_set_timeSinceSeek)) float_t  timeSinceSeek;

static inline ::GlobalNamespace::RandomLocalColliders* New_ctor() ;

/// @brief Method Start, addr 0x5b2ef74, size 0x68, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5b2efdc, size 0xa4, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::LightningDispatcherEvent* const& __cordl_internal_get_colliderFound() const;

constexpr ::GlobalNamespace::LightningDispatcherEvent*& __cordl_internal_get_colliderFound() ;

constexpr float_t const& __cordl_internal_get_maxRadias() const;

constexpr float_t& __cordl_internal_get_maxRadias() ;

constexpr float_t const& __cordl_internal_get_maxseekFreq() const;

constexpr float_t& __cordl_internal_get_maxseekFreq() ;

constexpr float_t const& __cordl_internal_get_minRadias() const;

constexpr float_t& __cordl_internal_get_minRadias() ;

constexpr float_t const& __cordl_internal_get_minseekFreq() const;

constexpr float_t& __cordl_internal_get_minseekFreq() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_raycastHits() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_raycastHits() ;

constexpr float_t const& __cordl_internal_get_seekFreq() const;

constexpr float_t& __cordl_internal_get_seekFreq() ;

constexpr float_t const& __cordl_internal_get_timeSinceSeek() const;

constexpr float_t& __cordl_internal_get_timeSinceSeek() ;

constexpr void __cordl_internal_set_colliderFound(::GlobalNamespace::LightningDispatcherEvent*  value) ;

constexpr void __cordl_internal_set_maxRadias(float_t  value) ;

constexpr void __cordl_internal_set_maxseekFreq(float_t  value) ;

constexpr void __cordl_internal_set_minRadias(float_t  value) ;

constexpr void __cordl_internal_set_minseekFreq(float_t  value) ;

constexpr void __cordl_internal_set_raycastHits(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_seekFreq(float_t  value) ;

constexpr void __cordl_internal_set_timeSinceSeek(float_t  value) ;

/// @brief Method .ctor, addr 0x5b2f434, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::SRand getStaticF_rand() ;

/// @brief Method seek, addr 0x5b2f080, size 0x3b4, virtual false, abstract: false, final false
inline void seek() ;

static inline void setStaticF_rand(::GlobalNamespace::SRand  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RandomLocalColliders() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RandomLocalColliders", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomLocalColliders(RandomLocalColliders && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomLocalColliders", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomLocalColliders(RandomLocalColliders const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3652};

/// [SerializeField]
/// @brief Field minseekFreq, offset: 0x20, size: 0x4, def value: None
 float_t  ___minseekFreq;

/// [SerializeField]
/// @brief Field maxseekFreq, offset: 0x24, size: 0x4, def value: None
 float_t  ___maxseekFreq;

/// [SerializeField]
/// @brief Field minRadias, offset: 0x28, size: 0x4, def value: None
 float_t  ___minRadias;

/// [SerializeField]
/// @brief Field maxRadias, offset: 0x2c, size: 0x4, def value: None
 float_t  ___maxRadias;

/// [SerializeField]
/// @brief Field colliderFound, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::LightningDispatcherEvent*  ___colliderFound;

/// @brief Field timeSinceSeek, offset: 0x38, size: 0x4, def value: None
 float_t  ___timeSinceSeek;

/// @brief Field seekFreq, offset: 0x3c, size: 0x4, def value: None
 float_t  ___seekFreq;

/// @brief Field raycastHits, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___raycastHits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RandomLocalColliders, ___minseekFreq) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomLocalColliders, ___maxseekFreq) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomLocalColliders, ___minRadias) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomLocalColliders, ___maxRadias) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomLocalColliders, ___colliderFound) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomLocalColliders, ___timeSinceSeek) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomLocalColliders, ___seekFreq) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomLocalColliders, ___raycastHits) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RandomLocalColliders) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
