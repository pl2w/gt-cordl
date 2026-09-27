#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Utilities/TimeSpanUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Utilities/zzzz__TimeSpanFormatOptions_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpanUtility)
namespace System {
struct TimeSpan;
}
namespace UnityEngine::Localization::SmartFormat::Utilities {
struct TimeSpanFormatOptions;
}
namespace UnityEngine::Localization::SmartFormat::Utilities {
class TimeTextInfo;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Utilities {
class TimeSpanUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility*, "UnityEngine.Localization.SmartFormat.Utilities", "TimeSpanUtility");
// [Extension]
// Dependencies System.Object, UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptions
namespace UnityEngine::Localization::SmartFormat::Utilities {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Utilities.TimeSpanUtility
class CORDL_TYPE TimeSpanUtility : public ::System::Object {
public:
// Declarations
/// @brief Field <AbsoluteDefaults>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AbsoluteDefaults_k__BackingField, put=setStaticF__AbsoluteDefaults_k__BackingField)) ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  _AbsoluteDefaults_k__BackingField;

/// @brief Field <DefaultFormatOptions>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DefaultFormatOptions_k__BackingField, put=setStaticF__DefaultFormatOptions_k__BackingField)) ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  _DefaultFormatOptions_k__BackingField;

/// [Extension]
/// @brief Method Round, addr 0xb035f9c, size 0x88, virtual false, abstract: false, final false
static inline ::System::TimeSpan Round(::System::TimeSpan  fromTime, int64_t  intervalTicks) ;

/// [Extension]
/// @brief Method ToTimeString, addr 0xb0353b0, size 0x8d8, virtual false, abstract: false, final false
static inline ::StringW ToTimeString(::System::TimeSpan  FromTime, ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  options, ::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo*  timeTextInfo) ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions getStaticF__AbsoluteDefaults_k__BackingField() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions getStaticF__DefaultFormatOptions_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_AbsoluteDefaults, addr 0xb035f44, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions get_AbsoluteDefaults() ;

/// [CompilerGenerated]
/// @brief Method get_DefaultFormatOptions, addr 0xb035e90, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions get_DefaultFormatOptions() ;

static inline void setStaticF__AbsoluteDefaults_k__BackingField(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  value) ;

static inline void setStaticF__DefaultFormatOptions_k__BackingField(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  value) ;

/// [CompilerGenerated]
/// @brief Method set_DefaultFormatOptions, addr 0xb035ee8, size 0x5c, virtual false, abstract: false, final false
static inline void set_DefaultFormatOptions(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeSpanUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeSpanUtility(TimeSpanUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeSpanUtility(TimeSpanUtility const& ) = delete;

/// @brief Field AbbreviateAll value: I32(3)
static ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const AbbreviateAll;

/// @brief Field LessThanAll value: I32(12)
static ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const LessThanAll;

/// @brief Field RangeAll value: I32(16128)
static ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const RangeAll;

/// @brief Field TruncateAll value: I32(240)
static ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const TruncateAll;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25161};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Utilities
