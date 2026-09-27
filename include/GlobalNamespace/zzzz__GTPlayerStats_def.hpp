#pragma once
// IWYU pragma private; include "GlobalNamespace/GTPlayerStats.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourPostTick_def.hpp"
#include "GlobalNamespace/zzzz__SystemProperties_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GTPlayerStats)
namespace GlobalNamespace {
struct PlayerStatsReadonly;
}
namespace GlobalNamespace {
struct SystemProperties;
}
namespace GorillaTag {
class TickSystemTimer;
}
namespace Utilities {
class FloatAverages;
}
namespace Utilities {
class IntAverages;
}
// Forward declare root types
namespace GlobalNamespace {
class GTPlayerStats;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTPlayerStats*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTPlayerStats*, "", "GTPlayerStats");
// Dependencies MonoBehaviourPostTick, SystemProperties
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTPlayerStats
class CORDL_TYPE GTPlayerStats : public ::GlobalNamespace::MonoBehaviourPostTick {
public:
// Declarations
/// @brief Field <FPS>k__BackingField, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF__FPS_k__BackingField, put=setStaticF__FPS_k__BackingField)) int16_t  _FPS_k__BackingField;

/// @brief Field <Ping>k__BackingField, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF__Ping_k__BackingField, put=setStaticF__Ping_k__BackingField)) int16_t  _Ping_k__BackingField;

/// @brief Field <TargetFPS>k__BackingField, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF__TargetFPS_k__BackingField, put=setStaticF__TargetFPS_k__BackingField)) int16_t  _TargetFPS_k__BackingField;

/// @brief Field m_fps, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_fps, put=__cordl_internal_set_m_fps)) ::Utilities::FloatAverages*  m_fps;

/// @brief Field m_periodicUpdate, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_periodicUpdate, put=__cordl_internal_set_m_periodicUpdate)) ::GorillaTag::TickSystemTimer*  m_periodicUpdate;

/// @brief Field m_ping, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ping, put=__cordl_internal_set_m_ping)) ::Utilities::IntAverages*  m_ping;

/// @brief Field s_systemPropertiesFlags, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_systemPropertiesFlags, put=setStaticF_s_systemPropertiesFlags)) ::GlobalNamespace::SystemProperties  s_systemPropertiesFlags;

/// @brief Method Awake, addr 0x5948750, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DelayedUpdate, addr 0x594880c, size 0x390, virtual false, abstract: false, final false
inline void DelayedUpdate() ;

/// @brief Method GetPackedValues, addr 0x594869c, size 0xa8, virtual false, abstract: false, final false
static inline int64_t GetPackedValues() ;

static inline ::GlobalNamespace::GTPlayerStats* New_ctor() ;

/// @brief Method OnDisable, addr 0x5948b9c, size 0x1c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x59487e0, size 0x2c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PostTick, addr 0x5948bb8, size 0x4, virtual true, abstract: false, final false
inline void PostTick() ;

/// @brief Method UnPackValues, addr 0x5948744, size 0xc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PlayerStatsReadonly UnPackValues(int64_t  values, int32_t  flags) ;

constexpr ::Utilities::FloatAverages* const& __cordl_internal_get_m_fps() const;

constexpr ::Utilities::FloatAverages*& __cordl_internal_get_m_fps() ;

constexpr ::GorillaTag::TickSystemTimer* const& __cordl_internal_get_m_periodicUpdate() const;

constexpr ::GorillaTag::TickSystemTimer*& __cordl_internal_get_m_periodicUpdate() ;

constexpr ::Utilities::IntAverages* const& __cordl_internal_get_m_ping() const;

constexpr ::Utilities::IntAverages*& __cordl_internal_get_m_ping() ;

constexpr void __cordl_internal_set_m_fps(::Utilities::FloatAverages*  value) ;

constexpr void __cordl_internal_set_m_periodicUpdate(::GorillaTag::TickSystemTimer*  value) ;

constexpr void __cordl_internal_set_m_ping(::Utilities::IntAverages*  value) ;

/// @brief Method .ctor, addr 0x5948bbc, size 0xf4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int16_t getStaticF__FPS_k__BackingField() ;

static inline int16_t getStaticF__Ping_k__BackingField() ;

static inline int16_t getStaticF__TargetFPS_k__BackingField() ;

static inline ::GlobalNamespace::SystemProperties getStaticF_s_systemPropertiesFlags() ;

/// [CompilerGenerated]
/// @brief Method get_FPS, addr 0x59484e0, size 0x48, virtual false, abstract: false, final false
static inline int16_t get_FPS() ;

/// [CompilerGenerated]
/// @brief Method get_Ping, addr 0x594844c, size 0x48, virtual false, abstract: false, final false
static inline int16_t get_Ping() ;

/// @brief Method get_SystemPropertiesFlags, addr 0x5948608, size 0x48, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SystemProperties get_SystemPropertiesFlags() ;

/// [CompilerGenerated]
/// @brief Method get_TargetFPS, addr 0x5948574, size 0x48, virtual false, abstract: false, final false
static inline int16_t get_TargetFPS() ;

static inline void setStaticF__FPS_k__BackingField(int16_t  value) ;

static inline void setStaticF__Ping_k__BackingField(int16_t  value) ;

static inline void setStaticF__TargetFPS_k__BackingField(int16_t  value) ;

static inline void setStaticF_s_systemPropertiesFlags(::GlobalNamespace::SystemProperties  value) ;

/// [CompilerGenerated]
/// @brief Method set_FPS, addr 0x5948528, size 0x4c, virtual false, abstract: false, final false
static inline void set_FPS(int16_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Ping, addr 0x5948494, size 0x4c, virtual false, abstract: false, final false
static inline void set_Ping(int16_t  value) ;

/// @brief Method set_SystemPropertiesFlags, addr 0x5948650, size 0x4c, virtual false, abstract: false, final false
static inline void set_SystemPropertiesFlags(::GlobalNamespace::SystemProperties  value) ;

/// [CompilerGenerated]
/// @brief Method set_TargetFPS, addr 0x59485bc, size 0x4c, virtual false, abstract: false, final false
static inline void set_TargetFPS(int16_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTPlayerStats() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTPlayerStats", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTPlayerStats(GTPlayerStats && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTPlayerStats", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTPlayerStats(GTPlayerStats const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2286};

/// @brief Field m_fps, offset: 0x28, size: 0x8, def value: None
 ::Utilities::FloatAverages*  ___m_fps;

/// @brief Field m_ping, offset: 0x30, size: 0x8, def value: None
 ::Utilities::IntAverages*  ___m_ping;

/// @brief Field m_periodicUpdate, offset: 0x38, size: 0x8, def value: None
 ::GorillaTag::TickSystemTimer*  ___m_periodicUpdate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTPlayerStats, ___m_fps) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayerStats, ___m_ping) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayerStats, ___m_periodicUpdate) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTPlayerStats) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
