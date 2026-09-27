#pragma once
// IWYU pragma private; include "GlobalNamespace/SIResource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIResource_LimitedDepositType_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SIResource)
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class SIPlayer;
}
namespace GlobalNamespace {
struct SIResource_LimitedDepositType;
}
namespace GlobalNamespace {
struct SIResource_ResourceCategoryCost;
}
namespace GlobalNamespace {
struct SIResource_ResourceCost;
}
namespace GlobalNamespace {
struct SIResource_ResourceType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
class SIResource;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIResource*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIResource*, "", "SIResource");
// Dependencies SIResource::LimitedDepositType, SIResource::ResourceType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIResource
class CORDL_TYPE SIResource : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LimitedDepositType = ::GlobalNamespace::SIResource_LimitedDepositType;

using ResourceCategoryCost = ::GlobalNamespace::SIResource_ResourceCategoryCost;

using ResourceCost = ::GlobalNamespace::SIResource_ResourceCost;

using ResourceType = ::GlobalNamespace::SIResource_ResourceType;

/// @brief Field _rb, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__rb, put=__cordl_internal_set__rb)) ::UnityW<::UnityEngine::Rigidbody>  _rb;

/// @brief Field isSleeping, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSleeping, put=__cordl_internal_set_isSleeping)) bool  isSleeping;

/// @brief Field lastPlayerHeld, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastPlayerHeld, put=__cordl_internal_set_lastPlayerHeld)) ::UnityW<::GlobalNamespace::SIPlayer>  lastPlayerHeld;

/// @brief Field limitedDepositType, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_limitedDepositType, put=__cordl_internal_set_limitedDepositType)) ::GlobalNamespace::SIResource_LimitedDepositType  limitedDepositType;

/// @brief Field localDeposited, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_localDeposited, put=__cordl_internal_set_localDeposited)) bool  localDeposited;

/// @brief Field localEverGrabbed, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_localEverGrabbed, put=__cordl_internal_set_localEverGrabbed)) bool  localEverGrabbed;

/// @brief Field myGameEntity, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_myGameEntity, put=__cordl_internal_set_myGameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  myGameEntity;

/// @brief Field shouldSleep, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_shouldSleep, put=__cordl_internal_set_shouldSleep)) bool  shouldSleep;

/// @brief Field sleepTime, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_sleepTime, put=__cordl_internal_set_sleepTime)) float_t  sleepTime;

/// @brief Field spawnPitchVariance, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnPitchVariance, put=__cordl_internal_set_spawnPitchVariance)) float_t  spawnPitchVariance;

/// @brief Field timeReleased, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeReleased, put=__cordl_internal_set_timeReleased)) float_t  timeReleased;

/// @brief Field type, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::GlobalNamespace::SIResource_ResourceType  type;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x5ae5a64, size 0x208, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CanDeposit, addr 0x5ae62f4, size 0xd8, virtual true, abstract: false, final false
inline bool CanDeposit() ;

/// @brief Method CategoryCostsMatch, addr 0x5ae70cc, size 0x30, virtual false, abstract: false, final false
static inline bool CategoryCostsMatch(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  cost1, ::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  cost2) ;

/// @brief Method CostsAreEqual, addr 0x5ae73c4, size 0x4f8, virtual false, abstract: false, final false
static inline bool CostsAreEqual(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  cost1, ::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  cost2, bool  matchOrder) ;

/// @brief Method GenerateCostsFrom, addr 0x5ae78e4, size 0x234, virtual false, abstract: false, final false
static inline ::ArrayW<::GlobalNamespace::SIResource_ResourceCost> GenerateCostsFrom(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*  costDictionary) ;

/// @brief Method GetMax, addr 0x5ae696c, size 0x370, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>* GetMax(/* [ParamArray] */ ::ArrayW<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>  costs) ;

/// @brief Method GetSum, addr 0x5ae64e0, size 0x350, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>* GetSum(/* [ParamArray] */ ::ArrayW<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>  costs) ;

/// @brief Method GrabInitialization, addr 0x5ae62c8, size 0x8, virtual false, abstract: false, final false
inline void GrabInitialization() ;

/// @brief Method HandleDepositAuth, addr 0x5ae63d8, size 0x4, virtual true, abstract: false, final false
inline void HandleDepositAuth(::GlobalNamespace::SIPlayer*  depositingPlayer) ;

/// @brief Method HandleDepositLocal, addr 0x5ae63cc, size 0xc, virtual true, abstract: false, final false
inline void HandleDepositLocal(::GlobalNamespace::SIPlayer*  depositingPlayer) ;

/// @brief Method HandleOnDestroyed, addr 0x5ae63dc, size 0x104, virtual false, abstract: false, final false
inline void HandleOnDestroyed(::GlobalNamespace::GameEntity*  entity) ;

static inline ::GlobalNamespace::SIResource* New_ctor() ;

/// @brief Method OnDisable, addr 0x5ae6024, size 0x2a4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5ae5da8, size 0x27c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PrintCost, addr 0x5ae7b20, size 0xb0, virtual false, abstract: false, final false
static inline ::StringW PrintCost(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SIResource_ResourceCost>*  costs) ;

/// @brief Method ReleaseInitialization, addr 0x5ae62d0, size 0x24, virtual false, abstract: false, final false
inline void ReleaseInitialization() ;

/// @brief Method SetLastGrabbed, addr 0x5ae5cd4, size 0xd4, virtual false, abstract: false, final false
inline void SetLastGrabbed() ;

/// @brief Method SliceUpdate, addr 0x5ae5c6c, size 0x68, virtual true, abstract: false, final true
inline void SliceUpdate() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rb() ;

constexpr bool const& __cordl_internal_get_isSleeping() const;

constexpr bool& __cordl_internal_get_isSleeping() ;

constexpr ::UnityW<::GlobalNamespace::SIPlayer> const& __cordl_internal_get_lastPlayerHeld() const;

constexpr ::UnityW<::GlobalNamespace::SIPlayer>& __cordl_internal_get_lastPlayerHeld() ;

constexpr ::GlobalNamespace::SIResource_LimitedDepositType const& __cordl_internal_get_limitedDepositType() const;

constexpr ::GlobalNamespace::SIResource_LimitedDepositType& __cordl_internal_get_limitedDepositType() ;

constexpr bool const& __cordl_internal_get_localDeposited() const;

constexpr bool& __cordl_internal_get_localDeposited() ;

constexpr bool const& __cordl_internal_get_localEverGrabbed() const;

constexpr bool& __cordl_internal_get_localEverGrabbed() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_myGameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_myGameEntity() ;

constexpr bool const& __cordl_internal_get_shouldSleep() const;

constexpr bool& __cordl_internal_get_shouldSleep() ;

constexpr float_t const& __cordl_internal_get_sleepTime() const;

constexpr float_t& __cordl_internal_get_sleepTime() ;

constexpr float_t const& __cordl_internal_get_spawnPitchVariance() const;

constexpr float_t& __cordl_internal_get_spawnPitchVariance() ;

constexpr float_t const& __cordl_internal_get_timeReleased() const;

constexpr float_t& __cordl_internal_get_timeReleased() ;

constexpr ::GlobalNamespace::SIResource_ResourceType const& __cordl_internal_get_type() const;

constexpr ::GlobalNamespace::SIResource_ResourceType& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set__rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_isSleeping(bool  value) ;

constexpr void __cordl_internal_set_lastPlayerHeld(::UnityW<::GlobalNamespace::SIPlayer>  value) ;

constexpr void __cordl_internal_set_limitedDepositType(::GlobalNamespace::SIResource_LimitedDepositType  value) ;

constexpr void __cordl_internal_set_localDeposited(bool  value) ;

constexpr void __cordl_internal_set_localEverGrabbed(bool  value) ;

constexpr void __cordl_internal_set_myGameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_shouldSleep(bool  value) ;

constexpr void __cordl_internal_set_sleepTime(float_t  value) ;

constexpr void __cordl_internal_set_spawnPitchVariance(float_t  value) ;

constexpr void __cordl_internal_set_timeReleased(float_t  value) ;

constexpr void __cordl_internal_set_type(::GlobalNamespace::SIResource_ResourceType  value) ;

/// @brief Method .ctor, addr 0x5ae7bd0, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIResource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIResource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIResource(SIResource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIResource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIResource(SIResource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{342};

/// @brief Field lastPlayerHeld, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIPlayer>  ___lastPlayerHeld;

/// @brief Field myGameEntity, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___myGameEntity;

/// @brief Field type, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::SIResource_ResourceType  ___type;

/// @brief Field limitedDepositType, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::SIResource_LimitedDepositType  ___limitedDepositType;

/// @brief Field localDeposited, offset: 0x38, size: 0x1, def value: None
 bool  ___localDeposited;

/// @brief Field localEverGrabbed, offset: 0x39, size: 0x1, def value: None
 bool  ___localEverGrabbed;

/// [Tooltip("The amount of pitch offset allowed during spawn, in degrees.  With this set to 0, item will always spawn aligned with surface.")]
/// @brief Field spawnPitchVariance, offset: 0x3c, size: 0x4, def value: None
 float_t  ___spawnPitchVariance;

/// @brief Field sleepTime, offset: 0x40, size: 0x4, def value: None
 float_t  ___sleepTime;

/// @brief Field shouldSleep, offset: 0x44, size: 0x1, def value: None
 bool  ___shouldSleep;

/// @brief Field isSleeping, offset: 0x45, size: 0x1, def value: None
 bool  ___isSleeping;

/// @brief Field timeReleased, offset: 0x48, size: 0x4, def value: None
 float_t  ___timeReleased;

/// @brief Field _rb, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIResource, ___lastPlayerHeld) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResource, ___myGameEntity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResource, ___type) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResource, ___limitedDepositType) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResource, ___localDeposited) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResource, ___localEverGrabbed) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResource, ___spawnPitchVariance) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResource, ___sleepTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResource, ___shouldSleep) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResource, ___isSleeping) == 0x45, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResource, ___timeReleased) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResource, ____rb) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIResource) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
