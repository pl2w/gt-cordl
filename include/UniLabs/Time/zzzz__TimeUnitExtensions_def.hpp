#pragma once
// IWYU pragma private; include "UniLabs/Time/TimeUnitExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TimeUnitExtensions)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace UniLabs::Time {
class TimeUnitExtensions_GetUnitValueDelegate;
}
namespace UniLabs::Time {
class TimeUnitExtensions_WithUnitValueDelegate;
}
namespace UniLabs::Time {
struct TimeUnit;
}
// Forward declare root types
namespace UniLabs::Time {
class TimeUnitExtensions;
}
namespace UniLabs::Time {
class TimeUnitExtensions_GetUnitValueDelegate;
}
namespace UniLabs::Time {
class TimeUnitExtensions_WithUnitValueDelegate;
}
// Write type traits
MARK_REF_T(::UniLabs::Time::TimeUnitExtensions*);
MARK_REF_T(::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate*);
MARK_REF_T(::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate*);
DEFINE_IL2CPP_CLASS(::UniLabs::Time::TimeUnitExtensions*, "UniLabs.Time", "TimeUnitExtensions");
DEFINE_IL2CPP_CLASS(::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate*, "UniLabs.Time", "TimeUnitExtensions/GetUnitValueDelegate");
DEFINE_IL2CPP_CLASS(::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate*, "UniLabs.Time", "TimeUnitExtensions/WithUnitValueDelegate");
// [Extension]
// Dependencies System.Object
namespace UniLabs::Time {
// Is value type: false
// CS Name: UniLabs.Time.TimeUnitExtensions
class CORDL_TYPE TimeUnitExtensions : public ::System::Object {
public:
// Declarations
using GetUnitValueDelegate = ::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate;

using WithUnitValueDelegate = ::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate;

/// [Extension]
/// @brief Method FromSingleUnitValue, addr 0x5b6d270, size 0x214, virtual false, abstract: false, final false
static inline ::System::TimeSpan FromSingleUnitValue(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit, double_t  value) ;

/// [Extension]
/// @brief Method GetHighestUnitValue, addr 0x5b6cafc, size 0x2b4, virtual false, abstract: false, final false
static inline double_t GetHighestUnitValue(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit) ;

/// [Extension]
/// @brief Method GetLowestUnitValue, addr 0x5b6c524, size 0x2c0, virtual false, abstract: false, final false
static inline double_t GetLowestUnitValue(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit) ;

/// [Extension]
/// @brief Method GetSingleUnitValue, addr 0x5b6d0d0, size 0x1a0, virtual false, abstract: false, final false
static inline double_t GetSingleUnitValue(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit) ;

/// [Extension]
/// @brief Method GetUnitValue, addr 0x5b6c158, size 0x1ac, virtual false, abstract: false, final false
static inline double_t GetUnitValue(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit) ;

/// [Extension]
/// @brief Method SnapToUnit, addr 0x5b6d484, size 0x240, virtual false, abstract: false, final false
static inline ::System::TimeSpan SnapToUnit(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit) ;

/// [Extension]
/// @brief Method ToSeparatorString, addr 0x5b6c084, size 0xd4, virtual false, abstract: false, final false
static inline ::StringW ToSeparatorString(::UniLabs::Time::TimeUnit  timeUnit) ;

/// [Extension]
/// @brief Method ToShortString, addr 0x5b6bf8c, size 0xf8, virtual false, abstract: false, final false
static inline ::StringW ToShortString(::UniLabs::Time::TimeUnit  timeUnit) ;

/// [Extension]
/// @brief Method WithHighestUnitValue, addr 0x5b6cdb0, size 0x320, virtual false, abstract: false, final false
static inline ::System::TimeSpan WithHighestUnitValue(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit, double_t  value) ;

/// [Extension]
/// @brief Method WithLowestUnitValue, addr 0x5b6c7e4, size 0x318, virtual false, abstract: false, final false
static inline ::System::TimeSpan WithLowestUnitValue(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit, double_t  value) ;

/// [Extension]
/// @brief Method WithUnitValue, addr 0x5b6c304, size 0x220, virtual false, abstract: false, final false
static inline ::System::TimeSpan WithUnitValue(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit, double_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeUnitExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeUnitExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeUnitExtensions(TimeUnitExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeUnitExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeUnitExtensions(TimeUnitExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3855};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UniLabs::Time::TimeUnitExtensions) == 0x10, "Size mismatch!");

} // namespace end def UniLabs::Time
// Dependencies System.MulticastDelegate
namespace UniLabs::Time {
// Is value type: false
// CS Name: UniLabs.Time.TimeUnitExtensions/GetUnitValueDelegate
class CORDL_TYPE TimeUnitExtensions_GetUnitValueDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5b6d92c, size 0xbc, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5b6d9e8, size 0x28, virtual true, abstract: false, final false
inline double_t EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5b6d918, size 0x14, virtual true, abstract: false, final false
inline double_t Invoke(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit) ;

static inline ::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5b6d878, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeUnitExtensions_GetUnitValueDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeUnitExtensions_GetUnitValueDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeUnitExtensions_GetUnitValueDelegate(TimeUnitExtensions_GetUnitValueDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeUnitExtensions_GetUnitValueDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeUnitExtensions_GetUnitValueDelegate(TimeUnitExtensions_GetUnitValueDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3854};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate) == 0x80, "Size mismatch!");

} // namespace end def UniLabs::Time
// Dependencies System.MulticastDelegate
namespace UniLabs::Time {
// Is value type: false
// CS Name: UniLabs.Time.TimeUnitExtensions/WithUnitValueDelegate
class CORDL_TYPE TimeUnitExtensions_WithUnitValueDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5b6d778, size 0xd8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit, double_t  value, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5b6d850, size 0x28, virtual true, abstract: false, final false
inline ::System::TimeSpan EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5b6d764, size 0x14, virtual true, abstract: false, final false
inline ::System::TimeSpan Invoke(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit, double_t  value) ;

static inline ::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5b6d6c4, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeUnitExtensions_WithUnitValueDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeUnitExtensions_WithUnitValueDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeUnitExtensions_WithUnitValueDelegate(TimeUnitExtensions_WithUnitValueDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeUnitExtensions_WithUnitValueDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeUnitExtensions_WithUnitValueDelegate(TimeUnitExtensions_WithUnitValueDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3853};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate) == 0x80, "Size mismatch!");

} // namespace end def UniLabs::Time
