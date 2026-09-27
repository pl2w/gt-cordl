#pragma once
// IWYU pragma private; include "GlobalNamespace/HandEffectsTriggerRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HandEffectsTriggerRegistry_HandEffectsJob_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HandEffectsTriggerRegistry)
namespace GlobalNamespace {
struct HandEffectsTriggerRegistry_HandEffectsJob;
}
namespace GlobalNamespace {
class ITickSystemPost;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GorillaTag::Shared::Scripts::Utilities {
class GTBitArray;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TagEffects {
class IHandEffectsTrigger;
}
// Forward declare root types
namespace GlobalNamespace {
class HandEffectsTriggerRegistry;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HandEffectsTriggerRegistry*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandEffectsTriggerRegistry*, "", "HandEffectsTriggerRegistry");
// [DefaultExecutionOrder(10000)]
// Dependencies HandEffectsTriggerRegistry::HandEffectsJob, Unity.Jobs.JobHandle, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HandEffectsTriggerRegistry
class CORDL_TYPE HandEffectsTriggerRegistry : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using HandEffectsJob = ::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob;

 __declspec(property(get=get_PostTickRunning, put=set_PostTickRunning)) bool  PostTickRunning;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <HasInstance>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__HasInstance_k__BackingField, put=setStaticF__HasInstance_k__BackingField)) bool  _HasInstance_k__BackingField;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GlobalNamespace::HandEffectsTriggerRegistry>  _Instance_k__BackingField;

/// @brief Field <PostTickRunning>k__BackingField, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get__PostTickRunning_k__BackingField, put=__cordl_internal_set__PostTickRunning_k__BackingField)) bool  _PostTickRunning_k__BackingField;

/// @brief Field <TickRunning>k__BackingField, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field actualListSz, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_actualListSz, put=__cordl_internal_set_actualListSz)) int32_t  actualListSz;

/// @brief Field existingCollisionBits, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_existingCollisionBits, put=__cordl_internal_set_existingCollisionBits)) ::GorillaTag::Shared::Scripts::Utilities::GTBitArray*  existingCollisionBits;

/// @brief Field job, offset 0x58, size 0x28 
 __declspec(property(get=__cordl_internal_get_job, put=__cordl_internal_set_job)) ::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob  job;

/// @brief Field jobHandle, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_jobHandle, put=__cordl_internal_set_jobHandle)) ::Unity::Jobs::JobHandle  jobHandle;

/// @brief Field newCollisionBits, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_newCollisionBits, put=__cordl_internal_set_newCollisionBits)) ::GorillaTag::Shared::Scripts::Utilities::GTBitArray*  newCollisionBits;

/// @brief Field triggerTimes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerTimes, put=__cordl_internal_set_triggerTimes)) ::ArrayW<float_t>  triggerTimes;

/// @brief Field triggers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggers, put=__cordl_internal_set_triggers)) ::System::Collections::Generic::List_1<::TagEffects::IHandEffectsTrigger*>*  triggers;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr operator  ::GlobalNamespace::ITickSystemPost*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Awake, addr 0x56beb18, size 0x13c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckForHandEffectOnProcessedOutput, addr 0x56befe4, size 0x3a4, virtual false, abstract: false, final false
inline void CheckForHandEffectOnProcessedOutput() ;

/// @brief Method CopyInput, addr 0x56bee90, size 0x134, virtual false, abstract: false, final false
inline void CopyInput() ;

/// @brief Method FindInstance, addr 0x56bda74, size 0xe0, virtual false, abstract: false, final false
static inline void FindInstance() ;

static inline ::GlobalNamespace::HandEffectsTriggerRegistry* New_ctor() ;

/// @brief Method OnDestroy, addr 0x56bed6c, size 0x30, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x56bece0, size 0x8c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56bec54, size 0x8c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PostTick, addr 0x56befc4, size 0x20, virtual true, abstract: false, final true
inline void PostTick() ;

/// @brief Method Register, addr 0x56bdb54, size 0xd8, virtual false, abstract: false, final false
inline void Register(::TagEffects::IHandEffectsTrigger*  trigger) ;

/// @brief Method Tick, addr 0x56bee0c, size 0x84, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method Unregister, addr 0x56bdc84, size 0x9c, virtual false, abstract: false, final false
inline void Unregister(::TagEffects::IHandEffectsTrigger*  trigger) ;

constexpr bool const& __cordl_internal_get__PostTickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__PostTickRunning_k__BackingField() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_actualListSz() const;

constexpr int32_t& __cordl_internal_get_actualListSz() ;

constexpr ::GorillaTag::Shared::Scripts::Utilities::GTBitArray* const& __cordl_internal_get_existingCollisionBits() const;

constexpr ::GorillaTag::Shared::Scripts::Utilities::GTBitArray*& __cordl_internal_get_existingCollisionBits() ;

constexpr ::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob const& __cordl_internal_get_job() const;

constexpr ::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob& __cordl_internal_get_job() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get_jobHandle() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get_jobHandle() ;

constexpr ::GorillaTag::Shared::Scripts::Utilities::GTBitArray* const& __cordl_internal_get_newCollisionBits() const;

constexpr ::GorillaTag::Shared::Scripts::Utilities::GTBitArray*& __cordl_internal_get_newCollisionBits() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_triggerTimes() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_triggerTimes() ;

constexpr ::System::Collections::Generic::List_1<::TagEffects::IHandEffectsTrigger*>* const& __cordl_internal_get_triggers() const;

constexpr ::System::Collections::Generic::List_1<::TagEffects::IHandEffectsTrigger*>*& __cordl_internal_get_triggers() ;

constexpr void __cordl_internal_set__PostTickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_actualListSz(int32_t  value) ;

constexpr void __cordl_internal_set_existingCollisionBits(::GorillaTag::Shared::Scripts::Utilities::GTBitArray*  value) ;

constexpr void __cordl_internal_set_job(::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob  value) ;

constexpr void __cordl_internal_set_jobHandle(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set_newCollisionBits(::GorillaTag::Shared::Scripts::Utilities::GTBitArray*  value) ;

constexpr void __cordl_internal_set_triggerTimes(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_triggers(::System::Collections::Generic::List_1<::TagEffects::IHandEffectsTrigger*>*  value) ;

/// @brief Method .ctor, addr 0x56bf388, size 0x124, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF__HasInstance_k__BackingField() ;

static inline ::UnityW<::GlobalNamespace::HandEffectsTriggerRegistry> getStaticF__Instance_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_HasInstance, addr 0x56bea80, size 0x48, virtual false, abstract: false, final false
static inline bool get_HasInstance() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x56be9e0, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::HandEffectsTriggerRegistry> get_Instance() ;

/// [CompilerGenerated]
/// @brief Method get_PostTickRunning, addr 0x56be9d0, size 0x8, virtual true, abstract: false, final true
inline bool get_PostTickRunning() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x56be9c0, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* i___GlobalNamespace__ITickSystemPost() noexcept;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

static inline void setStaticF__HasInstance_k__BackingField(bool  value) ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::HandEffectsTriggerRegistry>  value) ;

/// [CompilerGenerated]
/// @brief Method set_HasInstance, addr 0x56beac8, size 0x50, virtual false, abstract: false, final false
static inline void set_HasInstance(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Instance, addr 0x56bea28, size 0x58, virtual false, abstract: false, final false
static inline void set_Instance(::GlobalNamespace::HandEffectsTriggerRegistry*  value) ;

/// [CompilerGenerated]
/// @brief Method set_PostTickRunning, addr 0x56be9d8, size 0x8, virtual true, abstract: false, final true
inline void set_PostTickRunning(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x56be9c8, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandEffectsTriggerRegistry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandEffectsTriggerRegistry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandEffectsTriggerRegistry(HandEffectsTriggerRegistry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandEffectsTriggerRegistry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandEffectsTriggerRegistry(HandEffectsTriggerRegistry const& ) = delete;

/// @brief Field BIT_ARRAY_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  BIT_ARRAY_SIZE{static_cast<int32_t>(0x9c4)};

/// @brief Field COOLDOWN_TIME offset 0xffffffff size 0x4
static constexpr float_t  COOLDOWN_TIME{static_cast<float_t>(0.5f)};

/// @brief Field DEFAULT_RADIUS offset 0xffffffff size 0x4
static constexpr float_t  DEFAULT_RADIUS{static_cast<float_t>(0.5f)};

/// @brief Field MAX_TRIGGERS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_TRIGGERS{static_cast<int32_t>(0x32)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{993};

/// @brief Field triggers, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::TagEffects::IHandEffectsTrigger*>*  ___triggers;

/// @brief Field triggerTimes, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<float_t>  ___triggerTimes;

/// @brief Field existingCollisionBits, offset: 0x30, size: 0x8, def value: None
 ::GorillaTag::Shared::Scripts::Utilities::GTBitArray*  ___existingCollisionBits;

/// @brief Field newCollisionBits, offset: 0x38, size: 0x8, def value: None
 ::GorillaTag::Shared::Scripts::Utilities::GTBitArray*  ___newCollisionBits;

/// @brief Field actualListSz, offset: 0x40, size: 0x4, def value: None
 int32_t  ___actualListSz;

/// @brief Field jobHandle, offset: 0x48, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ___jobHandle;

/// @brief Field job, offset: 0x58, size: 0x28, def value: None
 ::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob  ___job;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x80, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PostTickRunning>k__BackingField, offset: 0x81, size: 0x1, def value: None
 bool  ____PostTickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandEffectsTriggerRegistry, ___triggers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsTriggerRegistry, ___triggerTimes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsTriggerRegistry, ___existingCollisionBits) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsTriggerRegistry, ___newCollisionBits) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsTriggerRegistry, ___actualListSz) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsTriggerRegistry, ___jobHandle) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsTriggerRegistry, ___job) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsTriggerRegistry, ____TickRunning_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsTriggerRegistry, ____PostTickRunning_k__BackingField) == 0x81, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandEffectsTriggerRegistry) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
