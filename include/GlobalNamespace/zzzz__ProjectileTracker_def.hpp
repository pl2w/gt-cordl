#pragma once
// IWYU pragma private; include "GlobalNamespace/ProjectileTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProjectileTracker)
namespace GlobalNamespace {
template<typename T>
class LoopingArray_1_Pool;
}
namespace GlobalNamespace {
template<typename T>
class LoopingArray_1;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct ProjectileTracker_ProjectileInfo;
}
namespace GlobalNamespace {
class SlingshotProjectile;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ProjectileTracker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ProjectileTracker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProjectileTracker*, "", "ProjectileTracker");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProjectileTracker
class CORDL_TYPE ProjectileTracker : public ::System::Object {
public:
// Declarations
using ProjectileInfo = ::GlobalNamespace::ProjectileTracker_ProjectileInfo;

/// @brief Field m_localProjectiles, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_localProjectiles, put=setStaticF_m_localProjectiles)) ::GlobalNamespace::LoopingArray_1<::GlobalNamespace::ProjectileTracker_ProjectileInfo>*  m_localProjectiles;

/// @brief Field m_playerProjectiles, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_playerProjectiles, put=setStaticF_m_playerProjectiles)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::LoopingArray_1<::GlobalNamespace::ProjectileTracker_ProjectileInfo>*>*  m_playerProjectiles;

/// @brief Field m_projectileInfoPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_projectileInfoPool, put=setStaticF_m_projectileInfoPool)) ::GlobalNamespace::LoopingArray_1_Pool<::GlobalNamespace::ProjectileTracker_ProjectileInfo>*  m_projectileInfoPool;

/// @brief Method AddAndIncrementLocalProjectile, addr 0x5ad90f8, size 0x268, virtual false, abstract: false, final false
static inline int32_t AddAndIncrementLocalProjectile(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Vector3  intialVelocity, ::UnityEngine::Vector3  initialPosition, float_t  scale) ;

/// @brief Method AddRemotePlayerProjectile, addr 0x5ad8680, size 0x380, virtual false, abstract: false, final false
static inline void AddRemotePlayerProjectile(::GlobalNamespace::NetPlayer*  player, ::GlobalNamespace::SlingshotProjectile*  projectile, int32_t  projectileIndex, double_t  timeShot, ::UnityEngine::Vector3  intialVelocity, ::UnityEngine::Vector3  initialPosition, float_t  scale) ;

/// @brief Method ClearProjectiles, addr 0x5ad8efc, size 0x1fc, virtual false, abstract: false, final false
static inline void ClearProjectiles() ;

/// @brief Method GetAndRemoveRemotePlayerProjectile, addr 0x5ad7cf4, size 0x214, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<bool,::GlobalNamespace::ProjectileTracker_ProjectileInfo> GetAndRemoveRemotePlayerProjectile(::GlobalNamespace::NetPlayer*  player, int32_t  index) ;

/// @brief Method GetLocalProjectile, addr 0x5ad7c40, size 0xb4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ProjectileTracker_ProjectileInfo GetLocalProjectile(int32_t  index) ;

/// @brief Method RemovePlayerProjectiles, addr 0x5ad8c9c, size 0x114, virtual false, abstract: false, final false
static inline void RemovePlayerProjectiles(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method ResetPlayerProjectiles, addr 0x5ad8db0, size 0x14c, virtual false, abstract: false, final false
static inline void ResetPlayerProjectiles(::GlobalNamespace::LoopingArray_1<::GlobalNamespace::ProjectileTracker_ProjectileInfo>*  projectiles) ;

static inline ::GlobalNamespace::LoopingArray_1<::GlobalNamespace::ProjectileTracker_ProjectileInfo>* getStaticF_m_localProjectiles() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::LoopingArray_1<::GlobalNamespace::ProjectileTracker_ProjectileInfo>*>* getStaticF_m_playerProjectiles() ;

static inline ::GlobalNamespace::LoopingArray_1_Pool<::GlobalNamespace::ProjectileTracker_ProjectileInfo>* getStaticF_m_projectileInfoPool() ;

static inline void setStaticF_m_localProjectiles(::GlobalNamespace::LoopingArray_1<::GlobalNamespace::ProjectileTracker_ProjectileInfo>*  value) ;

static inline void setStaticF_m_playerProjectiles(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::LoopingArray_1<::GlobalNamespace::ProjectileTracker_ProjectileInfo>*>*  value) ;

static inline void setStaticF_m_projectileInfoPool(::GlobalNamespace::LoopingArray_1_Pool<::GlobalNamespace::ProjectileTracker_ProjectileInfo>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProjectileTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProjectileTracker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProjectileTracker(ProjectileTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProjectileTracker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProjectileTracker(ProjectileTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3398};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ProjectileTracker) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
