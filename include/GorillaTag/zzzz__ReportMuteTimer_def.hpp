#pragma once
// IWYU pragma private; include "GorillaTag/ReportMuteTimer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/zzzz__TickSystemTimerAbstract_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReportMuteTimer)
namespace GlobalNamespace {
class NetEventOptions;
}
namespace GorillaTag {
class ObjectPoolEvents;
}
// Forward declare root types
namespace GorillaTag {
class ReportMuteTimer;
}
// Write type traits
MARK_REF_T(::GorillaTag::ReportMuteTimer*);
DEFINE_IL2CPP_CLASS(::GorillaTag::ReportMuteTimer*, "GorillaTag", "ReportMuteTimer");
// Dependencies GorillaTag.TickSystemTimerAbstract, System.Object
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.ReportMuteTimer
class CORDL_TYPE ReportMuteTimer : public ::GorillaTag::TickSystemTimerAbstract {
public:
// Declarations
 __declspec(property(get=get_Muted, put=set_Muted)) int32_t  Muted;

/// @brief Field <Muted>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Muted_k__BackingField, put=__cordl_internal_set__Muted_k__BackingField)) int32_t  _Muted_k__BackingField;

/// @brief Field content, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_content, put=setStaticF_content)) ::ArrayW<::System::Object*>  content;

/// @brief Field m_nickName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_nickName, put=__cordl_internal_set_m_nickName)) ::StringW  m_nickName;

/// @brief Field m_playerID, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_playerID, put=__cordl_internal_set_m_playerID)) ::StringW  m_playerID;

/// @brief Field netEventOptions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_netEventOptions, put=setStaticF_netEventOptions)) ::GlobalNamespace::NetEventOptions*  netEventOptions;

/// @brief Convert operator to "::GorillaTag::ObjectPoolEvents"
constexpr operator  ::GorillaTag::ObjectPoolEvents*() noexcept;

/// @brief Method GorillaTag.ObjectPoolEvents.OnReturned, addr 0x5d34cdc, size 0x6c, virtual true, abstract: false, final true
inline void GorillaTag_ObjectPoolEvents_OnReturned() ;

/// @brief Method GorillaTag.ObjectPoolEvents.OnTaken, addr 0x5d34cd8, size 0x4, virtual true, abstract: false, final true
inline void GorillaTag_ObjectPoolEvents_OnTaken() ;

static inline ::GorillaTag::ReportMuteTimer* New_ctor() ;

/// @brief Method OnTimedEvent, addr 0x5d348e0, size 0x3c4, virtual true, abstract: false, final false
inline void OnTimedEvent() ;

/// @brief Method SetReportData, addr 0x5d34ca4, size 0x34, virtual false, abstract: false, final false
inline void SetReportData(::StringW  id, ::StringW  name, int32_t  muted) ;

constexpr int32_t const& __cordl_internal_get__Muted_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Muted_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_m_nickName() const;

constexpr ::StringW& __cordl_internal_get_m_nickName() ;

constexpr ::StringW const& __cordl_internal_get_m_playerID() const;

constexpr ::StringW& __cordl_internal_get_m_playerID() ;

constexpr void __cordl_internal_set__Muted_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_m_nickName(::StringW  value) ;

constexpr void __cordl_internal_set_m_playerID(::StringW  value) ;

/// @brief Method .ctor, addr 0x5d34d48, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::System::Object*> getStaticF_content() ;

static inline ::GlobalNamespace::NetEventOptions* getStaticF_netEventOptions() ;

/// [CompilerGenerated]
/// @brief Method get_Muted, addr 0x5d348d0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Muted() ;

/// @brief Convert to "::GorillaTag::ObjectPoolEvents"
constexpr ::GorillaTag::ObjectPoolEvents* i___GorillaTag__ObjectPoolEvents() noexcept;

static inline void setStaticF_content(::ArrayW<::System::Object*>  value) ;

static inline void setStaticF_netEventOptions(::GlobalNamespace::NetEventOptions*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Muted, addr 0x5d348d8, size 0x8, virtual false, abstract: false, final false
inline void set_Muted(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReportMuteTimer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReportMuteTimer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReportMuteTimer(ReportMuteTimer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReportMuteTimer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReportMuteTimer(ReportMuteTimer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4648};

/// @brief Field evCode offset 0xffffffff size 0x1
static constexpr uint8_t  evCode{static_cast<uint8_t>(0x33u)};

/// [CompilerGenerated]
/// @brief Field <Muted>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____Muted_k__BackingField;

/// @brief Field m_playerID, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___m_playerID;

/// @brief Field m_nickName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___m_nickName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::ReportMuteTimer, ____Muted_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ReportMuteTimer, ___m_playerID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ReportMuteTimer, ___m_nickName) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::ReportMuteTimer) == 0x30, "Size mismatch!");

} // namespace end def GorillaTag
