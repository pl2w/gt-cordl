#pragma once
// IWYU pragma private; include "GlobalNamespace/ReportTargetHit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SRand_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ReportTargetHit)
namespace GlobalNamespace {
class LightningDispatcherEvent;
}
namespace NetSynchrony {
class RandomDispatcher;
}
// Forward declare root types
namespace GlobalNamespace {
class ReportTargetHit;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ReportTargetHit*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ReportTargetHit*, "", "ReportTargetHit");
// Dependencies SRand, UnityEngine.MonoBehaviour, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: false
// CS Name: ReportTargetHit
class CORDL_TYPE ReportTargetHit : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field colliderFound, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliderFound, put=__cordl_internal_set_colliderFound)) ::GlobalNamespace::LightningDispatcherEvent*  colliderFound;

/// @brief Field maxseekFreq, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxseekFreq, put=__cordl_internal_set_maxseekFreq)) float_t  maxseekFreq;

/// @brief Field minseekFreq, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_minseekFreq, put=__cordl_internal_set_minseekFreq)) float_t  minseekFreq;

/// @brief Field nsRand, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_nsRand, put=__cordl_internal_set_nsRand)) ::UnityW<::NetSynchrony::RandomDispatcher>  nsRand;

/// @brief Field rand, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rand, put=setStaticF_rand)) ::GlobalNamespace::SRand  rand;

/// @brief Field seekFreq, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_seekFreq, put=__cordl_internal_set_seekFreq)) float_t  seekFreq;

/// @brief Field targets, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_targets, put=__cordl_internal_set_targets)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  targets;

/// @brief Field timeSinceSeek, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeSinceSeek, put=__cordl_internal_set_timeSinceSeek)) float_t  timeSinceSeek;

static inline ::GlobalNamespace::ReportTargetHit* New_ctor() ;

/// @brief Method NsRand_Dispatch, addr 0x5b2fcec, size 0x4, virtual false, abstract: false, final false
inline void NsRand_Dispatch(::NetSynchrony::RandomDispatcher*  randomDispatcher) ;

/// @brief Method OnDisable, addr 0x5b2fc1c, size 0xd0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5b2fb4c, size 0xd0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x5b2fae4, size 0x68, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5b2fee0, size 0xd8, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::LightningDispatcherEvent* const& __cordl_internal_get_colliderFound() const;

constexpr ::GlobalNamespace::LightningDispatcherEvent*& __cordl_internal_get_colliderFound() ;

constexpr float_t const& __cordl_internal_get_maxseekFreq() const;

constexpr float_t& __cordl_internal_get_maxseekFreq() ;

constexpr float_t const& __cordl_internal_get_minseekFreq() const;

constexpr float_t& __cordl_internal_get_minseekFreq() ;

constexpr ::UnityW<::NetSynchrony::RandomDispatcher> const& __cordl_internal_get_nsRand() const;

constexpr ::UnityW<::NetSynchrony::RandomDispatcher>& __cordl_internal_get_nsRand() ;

constexpr float_t const& __cordl_internal_get_seekFreq() const;

constexpr float_t& __cordl_internal_get_seekFreq() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_targets() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_targets() ;

constexpr float_t const& __cordl_internal_get_timeSinceSeek() const;

constexpr float_t& __cordl_internal_get_timeSinceSeek() ;

constexpr void __cordl_internal_set_colliderFound(::GlobalNamespace::LightningDispatcherEvent*  value) ;

constexpr void __cordl_internal_set_maxseekFreq(float_t  value) ;

constexpr void __cordl_internal_set_minseekFreq(float_t  value) ;

constexpr void __cordl_internal_set_nsRand(::UnityW<::NetSynchrony::RandomDispatcher>  value) ;

constexpr void __cordl_internal_set_seekFreq(float_t  value) ;

constexpr void __cordl_internal_set_targets(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_timeSinceSeek(float_t  value) ;

/// @brief Method .ctor, addr 0x5b2ffb8, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::SRand getStaticF_rand() ;

/// @brief Method seek, addr 0x5b2fcf0, size 0x1f0, virtual false, abstract: false, final false
inline void seek() ;

static inline void setStaticF_rand(::GlobalNamespace::SRand  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReportTargetHit() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReportTargetHit", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReportTargetHit(ReportTargetHit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReportTargetHit", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReportTargetHit(ReportTargetHit const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3654};

/// [SerializeField]
/// @brief Field minseekFreq, offset: 0x20, size: 0x4, def value: None
 float_t  ___minseekFreq;

/// [SerializeField]
/// @brief Field maxseekFreq, offset: 0x24, size: 0x4, def value: None
 float_t  ___maxseekFreq;

/// [SerializeField]
/// @brief Field targets, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___targets;

/// [SerializeField]
/// @brief Field colliderFound, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::LightningDispatcherEvent*  ___colliderFound;

/// @brief Field timeSinceSeek, offset: 0x38, size: 0x4, def value: None
 float_t  ___timeSinceSeek;

/// @brief Field seekFreq, offset: 0x3c, size: 0x4, def value: None
 float_t  ___seekFreq;

/// [SerializeField]
/// @brief Field nsRand, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::NetSynchrony::RandomDispatcher>  ___nsRand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ReportTargetHit, ___minseekFreq) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReportTargetHit, ___maxseekFreq) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReportTargetHit, ___targets) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReportTargetHit, ___colliderFound) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReportTargetHit, ___timeSinceSeek) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReportTargetHit, ___seekFreq) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReportTargetHit, ___nsRand) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ReportTargetHit) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
