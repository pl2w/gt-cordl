#pragma once
// IWYU pragma private; include "GorillaTag/GTTime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GTTime)
namespace System {
struct DateTime;
}
namespace System {
struct TimeSpan;
}
namespace System {
class TimeZoneInfo;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GorillaTag {
class GTTime;
}
// Write type traits
MARK_REF_T(::GorillaTag::GTTime*);
DEFINE_IL2CPP_CLASS(::GorillaTag::GTTime*, "GorillaTag", "GTTime");
// Dependencies System.Object
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.GTTime
class CORDL_TYPE GTTime : public ::System::Object {
public:
// Declarations
/// @brief Field _isInitialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__isInitialized, put=setStaticF__isInitialized)) bool  _isInitialized;

/// @brief Field <timeZoneInfoLA>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__timeZoneInfoLA_k__BackingField, put=setStaticF__timeZoneInfoLA_k__BackingField)) ::System::TimeZoneInfo*  _timeZoneInfoLA_k__BackingField;

/// @brief Field <usingServerTime>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__usingServerTime_k__BackingField, put=setStaticF__usingServerTime_k__BackingField)) bool  _usingServerTime_k__BackingField;

/// @brief Method ConvertDateTimeHumanReadableLongToDateTime, addr 0x5d22844, size 0xc8, virtual false, abstract: false, final false
static inline ::System::DateTime ConvertDateTimeHumanReadableLongToDateTime(int64_t  humanReadableLong) ;

/// @brief Method GetAAxiomDateTime, addr 0x5d22560, size 0xf0, virtual false, abstract: false, final false
static inline ::System::DateTime GetAAxiomDateTime() ;

/// @brief Method GetAAxiomDateTimeAsHumanReadableLong, addr 0x5d22798, size 0xac, virtual false, abstract: false, final false
static inline int64_t GetAAxiomDateTimeAsHumanReadableLong() ;

/// @brief Method GetAAxiomDateTimeAsStringForDisplay, addr 0x5d22650, size 0xa4, virtual false, abstract: false, final false
static inline ::StringW GetAAxiomDateTimeAsStringForDisplay() ;

/// @brief Method GetAAxiomDateTimeAsStringForFilename, addr 0x5d226f4, size 0xa4, virtual false, abstract: false, final false
static inline ::StringW GetAAxiomDateTimeAsStringForFilename() ;

/// @brief Method GetDeviceStartupTimeAsMilliseconds, addr 0x5d221e8, size 0xf4, virtual false, abstract: false, final false
static inline int64_t GetDeviceStartupTimeAsMilliseconds() ;

/// @brief Method GetServerStartupTimeAsMilliseconds, addr 0x5d22180, size 0x68, virtual false, abstract: false, final false
static inline int64_t GetServerStartupTimeAsMilliseconds() ;

/// @brief Method GetStartupTimeAsMilliseconds, addr 0x5d222dc, size 0x188, virtual false, abstract: false, final false
static inline int64_t GetStartupTimeAsMilliseconds() ;

/// @brief Method TimeAsDouble, addr 0x5d224ec, size 0x74, virtual false, abstract: false, final false
static inline double_t TimeAsDouble() ;

/// @brief Method TimeAsMilliseconds, addr 0x5d22464, size 0x88, virtual false, abstract: false, final false
static inline int64_t TimeAsMilliseconds() ;

/// @brief Method TryUpdateTimeText, addr 0x5d2290c, size 0x220, virtual false, abstract: false, final false
static inline bool TryUpdateTimeText(::TMPro::TMP_Text*  textComponent, ::System::TimeSpan  timeSpan, ::ArrayW<char16_t>  chars, int32_t  index, ::by_ref<int32_t>  ref_lastUpdateSeconds) ;

/// [RuntimeInitializeOnLoadMethod]
/// @brief Method _Init, addr 0x5d21940, size 0x3dc, virtual false, abstract: false, final false
static inline void _Init() ;

/// @brief Method _TryCreateCustomPST, addr 0x5d21d1c, size 0x3ac, virtual false, abstract: false, final false
static inline bool _TryCreateCustomPST(::by_ref<::System::TimeZoneInfo*>  out_tz) ;

static inline bool getStaticF__isInitialized() ;

static inline ::System::TimeZoneInfo* getStaticF__timeZoneInfoLA_k__BackingField() ;

static inline bool getStaticF__usingServerTime_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_timeZoneInfoLA, addr 0x5d21884, size 0x58, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo* get_timeZoneInfoLA() ;

/// [CompilerGenerated]
/// @brief Method get_usingServerTime, addr 0x5d220c8, size 0x58, virtual false, abstract: false, final false
static inline bool get_usingServerTime() ;

static inline void setStaticF__isInitialized(bool  value) ;

static inline void setStaticF__timeZoneInfoLA_k__BackingField(::System::TimeZoneInfo*  value) ;

static inline void setStaticF__usingServerTime_k__BackingField(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_timeZoneInfoLA, addr 0x5d218dc, size 0x60, virtual false, abstract: false, final false
static inline void set_timeZoneInfoLA(::System::TimeZoneInfo*  value) ;

/// [CompilerGenerated]
/// @brief Method set_usingServerTime, addr 0x5d22120, size 0x60, virtual false, abstract: false, final false
static inline void set_usingServerTime(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTTime() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTTime", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTTime(GTTime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTTime", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTTime(GTTime const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4598};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"[GTTime]  ERROR!!!  "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[GTTime]  "};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::GTTime) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag
