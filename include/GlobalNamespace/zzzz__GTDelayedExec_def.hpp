#pragma once
// IWYU pragma private; include "GlobalNamespace/GTDelayedExec.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTDelayedExec_Listener_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GTDelayedExec)
namespace GlobalNamespace {
struct GTDelayedExec_Listener;
}
namespace GlobalNamespace {
class IDelayedExecListener;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
// Forward declare root types
namespace GlobalNamespace {
class GTDelayedExec;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTDelayedExec*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTDelayedExec*, "", "GTDelayedExec");
// Dependencies GTDelayedExec::Listener, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTDelayedExec
class CORDL_TYPE GTDelayedExec : public ::System::Object {
public:
// Declarations
using Listener = ::GlobalNamespace::GTDelayedExec_Listener;

 __declspec(property(get=ITickSystemTick_get_TickRunning, put=ITickSystemTick_set_TickRunning)) bool  ITickSystemTick_TickRunning;

/// @brief Field <ITickSystemTick.TickRunning>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField, put=__cordl_internal_set__ITickSystemTick_TickRunning_k__BackingField)) bool  _ITickSystemTick_TickRunning_k__BackingField;

/// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance_k__BackingField, put=setStaticF__instance_k__BackingField)) ::GlobalNamespace::GTDelayedExec*  _instance_k__BackingField;

/// @brief Field <listenerCount>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__listenerCount_k__BackingField, put=setStaticF__listenerCount_k__BackingField)) int32_t  _listenerCount_k__BackingField;

/// @brief Field _listenerDelays, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__listenerDelays, put=setStaticF__listenerDelays)) ::ArrayW<float_t>  _listenerDelays;

/// @brief Field _listeners, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__listeners, put=setStaticF__listeners)) ::ArrayW<::GlobalNamespace::GTDelayedExec_Listener>  _listeners;

/// @brief Field maxListenersCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_maxListenersCount, put=setStaticF_maxListenersCount)) int32_t  maxListenersCount;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Add, addr 0x5ac6ac0, size 0x408, virtual false, abstract: false, final false
static inline void Add(::GlobalNamespace::IDelayedExecListener*  listener, float_t  delay, int32_t  contextId) ;

/// [OnEnterPlay_Run]
/// @brief Method EdReInit, addr 0x5ac6898, size 0xbc, virtual false, abstract: false, final false
static inline void EdReInit() ;

/// @brief Method ITickSystemTick.Tick, addr 0x5ac6f00, size 0x3c0, virtual true, abstract: false, final true
inline void ITickSystemTick_Tick() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemTick.get_TickRunning, addr 0x5ac6ef0, size 0x8, virtual true, abstract: false, final true
inline bool ITickSystemTick_get_TickRunning() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemTick.set_TickRunning, addr 0x5ac6ef8, size 0x8, virtual true, abstract: false, final true
inline void ITickSystemTick_set_TickRunning(bool  value) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)2)]
/// @brief Method InitializeAfterAssemblies, addr 0x5ac6954, size 0x164, virtual false, abstract: false, final false
static inline void InitializeAfterAssemblies() ;

static inline ::GlobalNamespace::GTDelayedExec* New_ctor() ;

constexpr bool const& __cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField() ;

constexpr void __cordl_internal_set__ITickSystemTick_TickRunning_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x5ac6ab8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::GTDelayedExec* getStaticF__instance_k__BackingField() ;

static inline int32_t getStaticF__listenerCount_k__BackingField() ;

static inline ::ArrayW<float_t> getStaticF__listenerDelays() ;

static inline ::ArrayW<::GlobalNamespace::GTDelayedExec_Listener> getStaticF__listeners() ;

static inline int32_t getStaticF_maxListenersCount() ;

/// [CompilerGenerated]
/// @brief Method get_instance, addr 0x5ac6724, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GTDelayedExec* get_instance() ;

/// [CompilerGenerated]
/// @brief Method get_listenerCount, addr 0x5ac67e4, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_listenerCount() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

static inline void setStaticF__instance_k__BackingField(::GlobalNamespace::GTDelayedExec*  value) ;

static inline void setStaticF__listenerCount_k__BackingField(int32_t  value) ;

static inline void setStaticF__listenerDelays(::ArrayW<float_t>  value) ;

static inline void setStaticF__listeners(::ArrayW<::GlobalNamespace::GTDelayedExec_Listener>  value) ;

static inline void setStaticF_maxListenersCount(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_instance, addr 0x5ac677c, size 0x68, virtual false, abstract: false, final false
static inline void set_instance(::GlobalNamespace::GTDelayedExec*  value) ;

/// [CompilerGenerated]
/// @brief Method set_listenerCount, addr 0x5ac683c, size 0x5c, virtual false, abstract: false, final false
static inline void set_listenerCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTDelayedExec() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTDelayedExec", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTDelayedExec(GTDelayedExec && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTDelayedExec", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTDelayedExec(GTDelayedExec const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3379};

/// @brief Field k_defaultMaxListenersCount offset 0xffffffff size 0x4
static constexpr int32_t  k_defaultMaxListenersCount{static_cast<int32_t>(0x400)};

/// [CompilerGenerated]
/// @brief Field <ITickSystemTick.TickRunning>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____ITickSystemTick_TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTDelayedExec, ____ITickSystemTick_TickRunning_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTDelayedExec) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
