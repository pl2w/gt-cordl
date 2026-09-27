#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Net/Utilities/SystemTime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SystemTime)
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::Localization::SmartFormat::Net::Utilities {
class SystemTime___c;
}
namespace UnityEngine::Localization::SmartFormat::Net::Utilities {
class SystemTime___c__DisplayClass1_0;
}
namespace UnityEngine::Localization::SmartFormat::Net::Utilities {
class SystemTime___c__DisplayClass3_0;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Net::Utilities {
class SystemTime;
}
namespace UnityEngine::Localization::SmartFormat::Net::Utilities {
class SystemTime___c;
}
namespace UnityEngine::Localization::SmartFormat::Net::Utilities {
class SystemTime___c__DisplayClass1_0;
}
namespace UnityEngine::Localization::SmartFormat::Net::Utilities {
class SystemTime___c__DisplayClass3_0;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass1_0*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass3_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime*, "UnityEngine.Localization.SmartFormat.Net.Utilities", "SystemTime");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c*, "UnityEngine.Localization.SmartFormat.Net.Utilities", "SystemTime/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass1_0*, "UnityEngine.Localization.SmartFormat.Net.Utilities", "SystemTime/<>c__DisplayClass1_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass3_0*, "UnityEngine.Localization.SmartFormat.Net.Utilities", "SystemTime/<>c__DisplayClass3_0");
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Net::Utilities {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime
class CORDL_TYPE SystemTime : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c;

using __c__DisplayClass1_0 = ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass1_0;

using __c__DisplayClass3_0 = ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass3_0;

/// @brief Field Now, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Now, put=setStaticF_Now)) ::System::Func_1<::System::DateTime>*  Now;

/// @brief Field OffsetNow, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OffsetNow, put=setStaticF_OffsetNow)) ::System::Func_1<::System::DateTimeOffset>*  OffsetNow;

/// @brief Method ResetDateTime, addr 0xb02f998, size 0x1c4, virtual false, abstract: false, final false
static inline void ResetDateTime() ;

/// @brief Method SetDateTime, addr 0xb02f7bc, size 0xe8, virtual false, abstract: false, final false
static inline void SetDateTime(::System::DateTime  dateTimeNow) ;

/// @brief Method SetDateTimeOffset, addr 0xb02f8ac, size 0xe4, virtual false, abstract: false, final false
static inline void SetDateTimeOffset(::System::DateTimeOffset  dateTimeOffset) ;

static inline ::System::Func_1<::System::DateTime>* getStaticF_Now() ;

static inline ::System::Func_1<::System::DateTimeOffset>* getStaticF_OffsetNow() ;

static inline void setStaticF_Now(::System::Func_1<::System::DateTime>*  value) ;

static inline void setStaticF_OffsetNow(::System::Func_1<::System::DateTimeOffset>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemTime() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemTime", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemTime(SystemTime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemTime", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemTime(SystemTime const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25156};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Net::Utilities
// [CompilerGenerated]
// Dependencies System.DateTimeOffset, System.Object
namespace UnityEngine::Localization::SmartFormat::Net::Utilities {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c__DisplayClass3_0
class CORDL_TYPE SystemTime___c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field dateTimeOffset, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_dateTimeOffset, put=__cordl_internal_set_dateTimeOffset)) ::System::DateTimeOffset  dateTimeOffset;

static inline ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass3_0* New_ctor() ;

/// @brief Method <SetDateTimeOffset>b__0, addr 0xb02fe50, size 0xc, virtual false, abstract: false, final false
inline ::System::DateTimeOffset _SetDateTimeOffset_b__0() ;

constexpr ::System::DateTimeOffset const& __cordl_internal_get_dateTimeOffset() const;

constexpr ::System::DateTimeOffset& __cordl_internal_get_dateTimeOffset() ;

constexpr void __cordl_internal_set_dateTimeOffset(::System::DateTimeOffset  value) ;

/// @brief Method .ctor, addr 0xb02f990, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemTime___c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemTime___c__DisplayClass3_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemTime___c__DisplayClass3_0(SystemTime___c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemTime___c__DisplayClass3_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemTime___c__DisplayClass3_0(SystemTime___c__DisplayClass3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25155};

/// @brief Field dateTimeOffset, offset: 0x10, size: 0x10, def value: None
 ::System::DateTimeOffset  ___dateTimeOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass3_0, ___dateTimeOffset) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass3_0) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Net::Utilities
// [CompilerGenerated]
// Dependencies System.DateTime, System.Object
namespace UnityEngine::Localization::SmartFormat::Net::Utilities {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c__DisplayClass1_0
class CORDL_TYPE SystemTime___c__DisplayClass1_0 : public ::System::Object {
public:
// Declarations
/// @brief Field dateTimeNow, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_dateTimeNow, put=__cordl_internal_set_dateTimeNow)) ::System::DateTime  dateTimeNow;

static inline ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass1_0* New_ctor() ;

/// @brief Method <SetDateTime>b__0, addr 0xb02fe48, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime _SetDateTime_b__0() ;

constexpr ::System::DateTime const& __cordl_internal_get_dateTimeNow() const;

constexpr ::System::DateTime& __cordl_internal_get_dateTimeNow() ;

constexpr void __cordl_internal_set_dateTimeNow(::System::DateTime  value) ;

/// @brief Method .ctor, addr 0xb02f8a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemTime___c__DisplayClass1_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemTime___c__DisplayClass1_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemTime___c__DisplayClass1_0(SystemTime___c__DisplayClass1_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemTime___c__DisplayClass1_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemTime___c__DisplayClass1_0(SystemTime___c__DisplayClass1_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25154};

/// @brief Field dateTimeNow, offset: 0x10, size: 0x8, def value: None
 ::System::DateTime  ___dateTimeNow;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass1_0, ___dateTimeNow) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass1_0) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Net::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Net::Utilities {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Net.Utilities.SystemTime/<>c
class CORDL_TYPE SystemTime___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c*  __9;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::System::Func_1<::System::DateTime>*  __9__4_0;

/// @brief Field <>9__4_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_1, put=setStaticF___9__4_1)) ::System::Func_1<::System::DateTimeOffset>*  __9__4_1;

static inline ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c* New_ctor() ;

/// @brief Method <ResetDateTime>b__4_0, addr 0xb02fd08, size 0x50, virtual false, abstract: false, final false
inline ::System::DateTime _ResetDateTime_b__4_0() ;

/// @brief Method <ResetDateTime>b__4_1, addr 0xb02fd58, size 0x50, virtual false, abstract: false, final false
inline ::System::DateTimeOffset _ResetDateTime_b__4_1() ;

/// @brief Method <.cctor>b__5_0, addr 0xb02fda8, size 0x50, virtual false, abstract: false, final false
inline ::System::DateTime __cctor_b__5_0() ;

/// @brief Method <.cctor>b__5_1, addr 0xb02fdf8, size 0x50, virtual false, abstract: false, final false
inline ::System::DateTimeOffset __cctor_b__5_1() ;

/// @brief Method .ctor, addr 0xb02fd00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c* getStaticF___9() ;

static inline ::System::Func_1<::System::DateTime>* getStaticF___9__4_0() ;

static inline ::System::Func_1<::System::DateTimeOffset>* getStaticF___9__4_1() ;

static inline void setStaticF___9(::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c*  value) ;

static inline void setStaticF___9__4_0(::System::Func_1<::System::DateTime>*  value) ;

static inline void setStaticF___9__4_1(::System::Func_1<::System::DateTimeOffset>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemTime___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemTime___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemTime___c(SystemTime___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemTime___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemTime___c(SystemTime___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25153};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Net::Utilities
