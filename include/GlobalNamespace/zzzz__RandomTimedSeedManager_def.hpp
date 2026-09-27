#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomTimedSeedManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "GlobalNamespace/zzzz__RandomTimedSeedManager_RandomTimedSeedManagerData_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RandomTimedSeedManager)
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
struct RandomTimedSeedManager_RandomTimedSeedManagerData;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class RandomTimedSeedManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RandomTimedSeedManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RandomTimedSeedManager*, "", "RandomTimedSeedManager");
// [NetworkBehaviourWeaved(2)]
// Dependencies NetworkComponent, RandomTimedSeedManager::RandomTimedSeedManagerData
namespace GlobalNamespace {
// Is value type: false
// CS Name: RandomTimedSeedManager
class CORDL_TYPE RandomTimedSeedManager : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using RandomTimedSeedManagerData = ::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData;

/// [Networked]
/// @brief [NetworkedWeaved(0, 2)]
 __declspec(property(get=get_Data, put=set_Data)) ::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData  Data;

 __declspec(property(get=ITickSystemTick_get_TickRunning, put=ITickSystemTick_set_TickRunning)) bool  ITickSystemTick_TickRunning;

/// @brief Field _Data, offset 0xbc, size 0x8 
 __declspec(property(get=__cordl_internal_get__Data, put=__cordl_internal_set__Data)) ::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData  _Data;

/// @brief Field <ITickSystemTick.TickRunning>k__BackingField, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField, put=__cordl_internal_set__ITickSystemTick_TickRunning_k__BackingField)) bool  _ITickSystemTick_TickRunning_k__BackingField;

/// @brief Field <currentSyncTime>k__BackingField, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentSyncTime_k__BackingField, put=__cordl_internal_set__currentSyncTime_k__BackingField)) float_t  _currentSyncTime_k__BackingField;

/// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance_k__BackingField, put=setStaticF__instance_k__BackingField)) ::UnityW<::GlobalNamespace::RandomTimedSeedManager>  _instance_k__BackingField;

/// @brief Field <seed>k__BackingField, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__seed_k__BackingField, put=__cordl_internal_set__seed_k__BackingField)) int32_t  _seed_k__BackingField;

/// @brief Field cachedSeed, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_cachedSeed, put=__cordl_internal_set_cachedSeed)) int32_t  cachedSeed;

/// @brief Field callbacksOnSeedChanged, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_callbacksOnSeedChanged, put=__cordl_internal_set_callbacksOnSeedChanged)) ::System::Collections::Generic::List_1<::System::Action*>*  callbacksOnSeedChanged;

 __declspec(property(get=get_currentSyncTime, put=set_currentSyncTime)) float_t  currentSyncTime;

/// @brief Field idealSyncTime, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_idealSyncTime, put=__cordl_internal_set_idealSyncTime)) float_t  idealSyncTime;

 __declspec(property(get=get_seed, put=set_seed)) int32_t  seed;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method AddCallbackOnSeedChanged, addr 0x56933f8, size 0xac, virtual false, abstract: false, final false
inline void AddCallbackOnSeedChanged(::System::Action*  callback) ;

/// @brief Method Awake, addr 0x5693318, size 0xe0, virtual true, abstract: false, final false
inline void Awake() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5693c1c, size 0x20, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5693c3c, size 0x24, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method ITickSystemTick.Tick, addr 0x569350c, size 0x98, virtual true, abstract: false, final true
inline void ITickSystemTick_Tick() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemTick.get_TickRunning, addr 0x56934fc, size 0x8, virtual true, abstract: false, final true
inline bool ITickSystemTick_get_TickRunning() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemTick.set_TickRunning, addr 0x5693504, size 0x8, virtual true, abstract: false, final true
inline void ITickSystemTick_set_TickRunning(bool  value) ;

static inline ::GlobalNamespace::RandomTimedSeedManager* New_ctor() ;

/// @brief Method ReadDataFusion, addr 0x5693700, size 0x84, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x5693a94, size 0x100, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ReadDataShared, addr 0x56937fc, size 0x1c4, virtual false, abstract: false, final false
inline void ReadDataShared(int32_t  seedVal, float_t  testTime) ;

/// @brief Method RemoveCallbackOnSeedChanged, addr 0x56934a4, size 0x58, virtual false, abstract: false, final false
inline void RemoveCallbackOnSeedChanged(::System::Action*  callback) ;

/// @brief Method WriteDataFusion, addr 0x569365c, size 0x34, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x56939c0, size 0xd4, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData const& __cordl_internal_get__Data() const;

constexpr ::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData& __cordl_internal_get__Data() ;

constexpr bool const& __cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__currentSyncTime_k__BackingField() const;

constexpr float_t& __cordl_internal_get__currentSyncTime_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__seed_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__seed_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_cachedSeed() const;

constexpr int32_t& __cordl_internal_get_cachedSeed() ;

constexpr ::System::Collections::Generic::List_1<::System::Action*>* const& __cordl_internal_get_callbacksOnSeedChanged() const;

constexpr ::System::Collections::Generic::List_1<::System::Action*>*& __cordl_internal_get_callbacksOnSeedChanged() ;

constexpr float_t const& __cordl_internal_get_idealSyncTime() const;

constexpr float_t& __cordl_internal_get_idealSyncTime() ;

constexpr void __cordl_internal_set__Data(::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData  value) ;

constexpr void __cordl_internal_set__ITickSystemTick_TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__currentSyncTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__seed_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_cachedSeed(int32_t  value) ;

constexpr void __cordl_internal_set_callbacksOnSeedChanged(::System::Collections::Generic::List_1<::System::Action*>*  value) ;

constexpr void __cordl_internal_set_idealSyncTime(float_t  value) ;

/// @brief Method .ctor, addr 0x5693b94, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::RandomTimedSeedManager> getStaticF__instance_k__BackingField() ;

/// @brief Method get_Data, addr 0x56935a4, size 0x5c, virtual false, abstract: false, final false
inline ::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData get_Data() ;

/// [CompilerGenerated]
/// @brief Method get_currentSyncTime, addr 0x5693308, size 0x8, virtual false, abstract: false, final false
inline float_t get_currentSyncTime() ;

/// [CompilerGenerated]
/// @brief Method get_instance, addr 0x5693258, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::RandomTimedSeedManager> get_instance() ;

/// [CompilerGenerated]
/// @brief Method get_seed, addr 0x56932f8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_seed() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

static inline void setStaticF__instance_k__BackingField(::UnityW<::GlobalNamespace::RandomTimedSeedManager>  value) ;

/// @brief Method set_Data, addr 0x5693600, size 0x5c, virtual false, abstract: false, final false
inline void set_Data(::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData  value) ;

/// [CompilerGenerated]
/// @brief Method set_currentSyncTime, addr 0x5693310, size 0x8, virtual false, abstract: false, final false
inline void set_currentSyncTime(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_instance, addr 0x56932a0, size 0x58, virtual false, abstract: false, final false
static inline void set_instance(::GlobalNamespace::RandomTimedSeedManager*  value) ;

/// [CompilerGenerated]
/// @brief Method set_seed, addr 0x5693300, size 0x8, virtual false, abstract: false, final false
inline void set_seed(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RandomTimedSeedManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RandomTimedSeedManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomTimedSeedManager(RandomTimedSeedManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomTimedSeedManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomTimedSeedManager(RandomTimedSeedManager const& ) = delete;

/// @brief Field MaxSyncTime offset 0xffffffff size 0x4
static constexpr float_t  MaxSyncTime{static_cast<float_t>(1000000000.0f)};

/// @brief Field SeedMax offset 0xffffffff size 0x4
static constexpr int32_t  SeedMax{static_cast<int32_t>(0xfff0bdc0)};

/// @brief Field SeedMin offset 0xffffffff size 0x4
static constexpr int32_t  SeedMin{static_cast<int32_t>(0xfff0bdc0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{888};

/// @brief Field callbacksOnSeedChanged, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Action*>*  ___callbacksOnSeedChanged;

/// [CompilerGenerated]
/// @brief Field <seed>k__BackingField, offset: 0xa8, size: 0x4, def value: None
 int32_t  ____seed_k__BackingField;

/// @brief Field idealSyncTime, offset: 0xac, size: 0x4, def value: None
 float_t  ___idealSyncTime;

/// [CompilerGenerated]
/// @brief Field <currentSyncTime>k__BackingField, offset: 0xb0, size: 0x4, def value: None
 float_t  ____currentSyncTime_k__BackingField;

/// @brief Field cachedSeed, offset: 0xb4, size: 0x4, def value: None
 int32_t  ___cachedSeed;

/// [CompilerGenerated]
/// @brief Field <ITickSystemTick.TickRunning>k__BackingField, offset: 0xb8, size: 0x1, def value: None
 bool  ____ITickSystemTick_TickRunning_k__BackingField;

/// [WeaverGenerated]
/// [DefaultForProperty("Data", 0, 2)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _Data, offset: 0xbc, size: 0x8, def value: None
 ::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData  ____Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RandomTimedSeedManager, ___callbacksOnSeedChanged) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomTimedSeedManager, ____seed_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomTimedSeedManager, ___idealSyncTime) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomTimedSeedManager, ____currentSyncTime_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomTimedSeedManager, ___cachedSeed) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomTimedSeedManager, ____ITickSystemTick_TickRunning_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomTimedSeedManager, ____Data) == 0xbc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RandomTimedSeedManager) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
