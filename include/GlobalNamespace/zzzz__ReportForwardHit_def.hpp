#pragma once
// IWYU pragma private; include "GlobalNamespace/ReportForwardHit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SRand_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ReportForwardHit)
namespace GlobalNamespace {
class LightningDispatcherEvent;
}
namespace NetSynchrony {
class RandomDispatcher;
}
// Forward declare root types
namespace GlobalNamespace {
class ReportForwardHit;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ReportForwardHit*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ReportForwardHit*, "", "ReportForwardHit");
// Dependencies SRand, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ReportForwardHit
class CORDL_TYPE ReportForwardHit : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field colliderFound, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliderFound, put=__cordl_internal_set_colliderFound)) ::GlobalNamespace::LightningDispatcherEvent*  colliderFound;

/// @brief Field maxRadias, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRadias, put=__cordl_internal_set_maxRadias)) float_t  maxRadias;

/// @brief Field maxseekFreq, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxseekFreq, put=__cordl_internal_set_maxseekFreq)) float_t  maxseekFreq;

/// @brief Field minseekFreq, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_minseekFreq, put=__cordl_internal_set_minseekFreq)) float_t  minseekFreq;

/// @brief Field nsRand, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_nsRand, put=__cordl_internal_set_nsRand)) ::UnityW<::NetSynchrony::RandomDispatcher>  nsRand;

/// @brief Field rand, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rand, put=setStaticF_rand)) ::GlobalNamespace::SRand  rand;

/// @brief Field seekFreq, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_seekFreq, put=__cordl_internal_set_seekFreq)) float_t  seekFreq;

/// @brief Field seekOnEnable, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_seekOnEnable, put=__cordl_internal_set_seekOnEnable)) bool  seekOnEnable;

/// @brief Field timeSinceSeek, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeSinceSeek, put=__cordl_internal_set_timeSinceSeek)) float_t  timeSinceSeek;

static inline ::GlobalNamespace::ReportForwardHit* New_ctor() ;

/// @brief Method NsRand_Dispatch, addr 0x5b2f970, size 0x4, virtual false, abstract: false, final false
inline void NsRand_Dispatch(::NetSynchrony::RandomDispatcher*  randomDispatcher) ;

/// @brief Method OnDisable, addr 0x5b2f8a0, size 0xd0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5b2f588, size 0xe0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x5b2f520, size 0x68, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5b2f974, size 0xd8, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::LightningDispatcherEvent* const& __cordl_internal_get_colliderFound() const;

constexpr ::GlobalNamespace::LightningDispatcherEvent*& __cordl_internal_get_colliderFound() ;

constexpr float_t const& __cordl_internal_get_maxRadias() const;

constexpr float_t& __cordl_internal_get_maxRadias() ;

constexpr float_t const& __cordl_internal_get_maxseekFreq() const;

constexpr float_t& __cordl_internal_get_maxseekFreq() ;

constexpr float_t const& __cordl_internal_get_minseekFreq() const;

constexpr float_t& __cordl_internal_get_minseekFreq() ;

constexpr ::UnityW<::NetSynchrony::RandomDispatcher> const& __cordl_internal_get_nsRand() const;

constexpr ::UnityW<::NetSynchrony::RandomDispatcher>& __cordl_internal_get_nsRand() ;

constexpr float_t const& __cordl_internal_get_seekFreq() const;

constexpr float_t& __cordl_internal_get_seekFreq() ;

constexpr bool const& __cordl_internal_get_seekOnEnable() const;

constexpr bool& __cordl_internal_get_seekOnEnable() ;

constexpr float_t const& __cordl_internal_get_timeSinceSeek() const;

constexpr float_t& __cordl_internal_get_timeSinceSeek() ;

constexpr void __cordl_internal_set_colliderFound(::GlobalNamespace::LightningDispatcherEvent*  value) ;

constexpr void __cordl_internal_set_maxRadias(float_t  value) ;

constexpr void __cordl_internal_set_maxseekFreq(float_t  value) ;

constexpr void __cordl_internal_set_minseekFreq(float_t  value) ;

constexpr void __cordl_internal_set_nsRand(::UnityW<::NetSynchrony::RandomDispatcher>  value) ;

constexpr void __cordl_internal_set_seekFreq(float_t  value) ;

constexpr void __cordl_internal_set_seekOnEnable(bool  value) ;

constexpr void __cordl_internal_set_timeSinceSeek(float_t  value) ;

/// @brief Method .ctor, addr 0x5b2fa4c, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::SRand getStaticF_rand() ;

/// @brief Method seek, addr 0x5b2f668, size 0x238, virtual false, abstract: false, final false
inline void seek() ;

static inline void setStaticF_rand(::GlobalNamespace::SRand  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReportForwardHit() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReportForwardHit", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReportForwardHit(ReportForwardHit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReportForwardHit", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReportForwardHit(ReportForwardHit const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3653};

/// [SerializeField]
/// @brief Field minseekFreq, offset: 0x20, size: 0x4, def value: None
 float_t  ___minseekFreq;

/// [SerializeField]
/// @brief Field maxseekFreq, offset: 0x24, size: 0x4, def value: None
 float_t  ___maxseekFreq;

/// [SerializeField]
/// @brief Field maxRadias, offset: 0x28, size: 0x4, def value: None
 float_t  ___maxRadias;

/// [SerializeField]
/// @brief Field colliderFound, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::LightningDispatcherEvent*  ___colliderFound;

/// [SerializeField]
/// @brief Field nsRand, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::NetSynchrony::RandomDispatcher>  ___nsRand;

/// @brief Field timeSinceSeek, offset: 0x40, size: 0x4, def value: None
 float_t  ___timeSinceSeek;

/// @brief Field seekFreq, offset: 0x44, size: 0x4, def value: None
 float_t  ___seekFreq;

/// [SerializeField]
/// @brief Field seekOnEnable, offset: 0x48, size: 0x1, def value: None
 bool  ___seekOnEnable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ReportForwardHit, ___minseekFreq) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReportForwardHit, ___maxseekFreq) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReportForwardHit, ___maxRadias) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReportForwardHit, ___colliderFound) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReportForwardHit, ___nsRand) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReportForwardHit, ___timeSinceSeek) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReportForwardHit, ___seekFreq) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReportForwardHit, ___seekOnEnable) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ReportForwardHit) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
