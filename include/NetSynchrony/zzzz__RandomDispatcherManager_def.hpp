#pragma once
// IWYU pragma private; include "NetSynchrony/RandomDispatcherManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "NetSynchrony/zzzz__RandomDispatcher_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RandomDispatcherManager)
// Forward declare root types
namespace NetSynchrony {
class RandomDispatcherManager;
}
// Write type traits
MARK_REF_T(::NetSynchrony::RandomDispatcherManager*);
DEFINE_IL2CPP_CLASS(::NetSynchrony::RandomDispatcherManager*, "NetSynchrony", "RandomDispatcherManager");
// Dependencies NetSynchrony.RandomDispatcher, UnityEngine.MonoBehaviour
namespace NetSynchrony {
// Is value type: false
// CS Name: NetSynchrony.RandomDispatcherManager
class CORDL_TYPE RandomDispatcherManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field __instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___instance, put=setStaticF___instance)) ::UnityW<::NetSynchrony::RandomDispatcherManager>  __instance;

/// @brief Field randomDispatchers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_randomDispatchers, put=__cordl_internal_set_randomDispatchers)) ::ArrayW<::UnityW<::NetSynchrony::RandomDispatcher>>  randomDispatchers;

/// @brief Field serverTime, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_serverTime, put=__cordl_internal_set_serverTime)) double_t  serverTime;

/// @brief Method AdjustedServerTime, addr 0x5cb7a40, size 0xf8, virtual false, abstract: false, final false
inline void AdjustedServerTime() ;

static inline ::NetSynchrony::RandomDispatcherManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x5cb7834, size 0x1a8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnTimeChanged, addr 0x5cb79dc, size 0x64, virtual false, abstract: false, final false
inline void OnTimeChanged() ;

/// @brief Method Start, addr 0x5cb7b38, size 0x150, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5cb7c88, size 0x80, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::UnityW<::NetSynchrony::RandomDispatcher>> const& __cordl_internal_get_randomDispatchers() const;

constexpr ::ArrayW<::UnityW<::NetSynchrony::RandomDispatcher>>& __cordl_internal_get_randomDispatchers() ;

constexpr double_t const& __cordl_internal_get_serverTime() const;

constexpr double_t& __cordl_internal_get_serverTime() ;

constexpr void __cordl_internal_set_randomDispatchers(::ArrayW<::UnityW<::NetSynchrony::RandomDispatcher>>  value) ;

constexpr void __cordl_internal_set_serverTime(double_t  value) ;

/// @brief Method .ctor, addr 0x5cb7d08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::NetSynchrony::RandomDispatcherManager> getStaticF___instance() ;

static inline void setStaticF___instance(::UnityW<::NetSynchrony::RandomDispatcherManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RandomDispatcherManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RandomDispatcherManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomDispatcherManager(RandomDispatcherManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomDispatcherManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomDispatcherManager(RandomDispatcherManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4456};

/// [SerializeField]
/// @brief Field randomDispatchers, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::NetSynchrony::RandomDispatcher>>  ___randomDispatchers;

/// @brief Field serverTime, offset: 0x28, size: 0x8, def value: None
 double_t  ___serverTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NetSynchrony::RandomDispatcherManager, ___randomDispatchers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::NetSynchrony::RandomDispatcherManager, ___serverTime) == 0x28, "Offset mismatch!");

static_assert(sizeof(::NetSynchrony::RandomDispatcherManager) == 0x30, "Size mismatch!");

} // namespace end def NetSynchrony
