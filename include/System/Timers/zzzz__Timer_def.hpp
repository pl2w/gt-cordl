#pragma once
// IWYU pragma private; include "System/Timers/Timer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__Component_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Timer)
namespace System::ComponentModel {
class ISite;
}
namespace System::ComponentModel {
class ISupportInitialize;
}
namespace System::ComponentModel {
class ISynchronizeInvoke;
}
namespace System::Threading {
class TimerCallback;
}
namespace System::Threading {
class Timer;
}
namespace System::Timers {
class ElapsedEventHandler;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Timers {
class Timer;
}
// Write type traits
MARK_REF_T(::System::Timers::Timer*);
DEFINE_IL2CPP_CLASS(::System::Timers::Timer*, "System.Timers", "Timer");
// [DefaultEvent("Elapsed")]
// [DefaultProperty("Interval")]
// Dependencies System.ComponentModel.Component
namespace System::Timers {
// Is value type: false
// CS Name: System.Timers.Timer
class CORDL_TYPE Timer : public ::System::ComponentModel::Component {
public:
// Declarations
/// [Category("Behavior")]
/// [TimersDescription("Indicates whether the timer will be restarted when it is enabled.")]
/// @brief [DefaultValue(true)]
 __declspec(property(put=set_AutoReset)) bool  AutoReset;

/// [TimersDescription("Indicates whether the timer is enabled to fire events at a defined interval.")]
/// [Category("Behavior")]
/// @brief [DefaultValue(false)]
 __declspec(property(put=set_Enabled)) bool  Enabled;

/// [Category("Behavior")]
/// [SettingsBindable(true)]
/// [DefaultValue(100)]
/// @brief [TimersDescription("The number of milliseconds between timer events.")]
 __declspec(property(put=set_Interval)) double_t  Interval;

 __declspec(property(get=get_Site, put=set_Site)) ::System::ComponentModel::ISite*  Site;

/// [Browsable(false)]
/// [TimersDescription("The object used to marshal the event handler calls issued when an interval has elapsed.")]
/// @brief [DefaultValue(null)]
 __declspec(property(get=get_SynchronizingObject)) ::System::ComponentModel::ISynchronizeInvoke*  SynchronizingObject;

/// @brief Field autoReset, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoReset, put=__cordl_internal_set_autoReset)) bool  autoReset;

/// @brief Field callback, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Threading::TimerCallback*  callback;

/// @brief Field cookie, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_cookie, put=__cordl_internal_set_cookie)) ::System::Object*  cookie;

/// @brief Field delayedEnable, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get_delayedEnable, put=__cordl_internal_set_delayedEnable)) bool  delayedEnable;

/// @brief Field disposed, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_disposed, put=__cordl_internal_set_disposed)) bool  disposed;

/// @brief Field enabled, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_enabled, put=__cordl_internal_set_enabled)) bool  enabled;

/// @brief Field initializing, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_initializing, put=__cordl_internal_set_initializing)) bool  initializing;

/// @brief Field interval, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_interval, put=__cordl_internal_set_interval)) double_t  interval;

/// @brief Field onIntervalElapsed, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onIntervalElapsed, put=__cordl_internal_set_onIntervalElapsed)) ::System::Timers::ElapsedEventHandler*  onIntervalElapsed;

/// @brief Field synchronizingObject, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_synchronizingObject, put=__cordl_internal_set_synchronizingObject)) ::System::ComponentModel::ISynchronizeInvoke*  synchronizingObject;

/// @brief Field timer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_timer, put=__cordl_internal_set_timer)) ::System::Threading::Timer*  timer;

/// @brief Convert operator to "::System::ComponentModel::ISupportInitialize"
constexpr operator  ::System::ComponentModel::ISupportInitialize*() noexcept;

/// @brief Method BeginInit, addr 0xad08f50, size 0x1c, virtual true, abstract: false, final true
inline void BeginInit() ;

/// @brief Method CalculateRoundedInterval, addr 0xad086bc, size 0x1e4, virtual false, abstract: false, final false
static inline int32_t CalculateRoundedInterval(double_t  interval, bool  argumentCheck) ;

/// @brief Method Close, addr 0xad08f6c, size 0x3c, virtual false, abstract: false, final false
inline void Close() ;

/// @brief Method Dispose, addr 0xad08fa8, size 0x34, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method EndInit, addr 0xad08fdc, size 0xc, virtual true, abstract: false, final true
inline void EndInit() ;

/// @brief Method MyTimerCallback, addr 0xad08ff8, size 0x32c, virtual false, abstract: false, final false
inline void MyTimerCallback(::System::Object*  state) ;

static inline ::System::Timers::Timer* New_ctor() ;

static inline ::System::Timers::Timer* New_ctor(double_t  interval) ;

/// @brief Method Start, addr 0xad08fe8, size 0x8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Stop, addr 0xad08ff0, size 0x8, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method UpdateTimer, addr 0xad088f8, size 0x40, virtual false, abstract: false, final false
inline void UpdateTimer() ;

constexpr bool const& __cordl_internal_get_autoReset() const;

constexpr bool& __cordl_internal_get_autoReset() ;

constexpr ::System::Threading::TimerCallback* const& __cordl_internal_get_callback() const;

constexpr ::System::Threading::TimerCallback*& __cordl_internal_get_callback() ;

constexpr ::System::Object* const& __cordl_internal_get_cookie() const;

constexpr ::System::Object*& __cordl_internal_get_cookie() ;

constexpr bool const& __cordl_internal_get_delayedEnable() const;

constexpr bool& __cordl_internal_get_delayedEnable() ;

constexpr bool const& __cordl_internal_get_disposed() const;

constexpr bool& __cordl_internal_get_disposed() ;

constexpr bool const& __cordl_internal_get_enabled() const;

constexpr bool& __cordl_internal_get_enabled() ;

constexpr bool const& __cordl_internal_get_initializing() const;

constexpr bool& __cordl_internal_get_initializing() ;

constexpr double_t const& __cordl_internal_get_interval() const;

constexpr double_t& __cordl_internal_get_interval() ;

constexpr ::System::Timers::ElapsedEventHandler* const& __cordl_internal_get_onIntervalElapsed() const;

constexpr ::System::Timers::ElapsedEventHandler*& __cordl_internal_get_onIntervalElapsed() ;

constexpr ::System::ComponentModel::ISynchronizeInvoke* const& __cordl_internal_get_synchronizingObject() const;

constexpr ::System::ComponentModel::ISynchronizeInvoke*& __cordl_internal_get_synchronizingObject() ;

constexpr ::System::Threading::Timer* const& __cordl_internal_get_timer() const;

constexpr ::System::Threading::Timer*& __cordl_internal_get_timer() ;

constexpr void __cordl_internal_set_autoReset(bool  value) ;

constexpr void __cordl_internal_set_callback(::System::Threading::TimerCallback*  value) ;

constexpr void __cordl_internal_set_cookie(::System::Object*  value) ;

constexpr void __cordl_internal_set_delayedEnable(bool  value) ;

constexpr void __cordl_internal_set_disposed(bool  value) ;

constexpr void __cordl_internal_set_enabled(bool  value) ;

constexpr void __cordl_internal_set_initializing(bool  value) ;

constexpr void __cordl_internal_set_interval(double_t  value) ;

constexpr void __cordl_internal_set_onIntervalElapsed(::System::Timers::ElapsedEventHandler*  value) ;

constexpr void __cordl_internal_set_synchronizingObject(::System::ComponentModel::ISynchronizeInvoke*  value) ;

constexpr void __cordl_internal_set_timer(::System::Threading::Timer*  value) ;

/// @brief Method .ctor, addr 0xad084d0, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xad08594, size 0x128, virtual false, abstract: false, final false
inline void _ctor(double_t  interval) ;

/// @brief Method add_Elapsed, addr 0xad08c50, size 0x90, virtual false, abstract: false, final false
inline void add_Elapsed(::System::Timers::ElapsedEventHandler*  value) ;

/// @brief Method get_Site, addr 0xad08da0, size 0x8, virtual true, abstract: false, final false
inline ::System::ComponentModel::ISite* get_Site() ;

/// @brief Method get_SynchronizingObject, addr 0xad08da8, size 0x1a8, virtual false, abstract: false, final false
inline ::System::ComponentModel::ISynchronizeInvoke* get_SynchronizingObject() ;

/// @brief Convert to "::System::ComponentModel::ISupportInitialize"
constexpr ::System::ComponentModel::ISupportInitialize* i___System__ComponentModel__ISupportInitialize() noexcept;

/// @brief Method remove_Elapsed, addr 0xad08ce0, size 0x90, virtual false, abstract: false, final false
inline void remove_Elapsed(::System::Timers::ElapsedEventHandler*  value) ;

/// @brief Method set_AutoReset, addr 0xad088a0, size 0x58, virtual false, abstract: false, final false
inline void set_AutoReset(bool  value) ;

/// @brief Method set_Enabled, addr 0xad08938, size 0x20c, virtual false, abstract: false, final false
inline void set_Enabled(bool  value) ;

/// @brief Method set_Interval, addr 0xad08b44, size 0x10c, virtual false, abstract: false, final false
inline void set_Interval(double_t  value) ;

/// @brief Method set_Site, addr 0xad08d70, size 0x30, virtual true, abstract: false, final false
inline void set_Site(::System::ComponentModel::ISite*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Timer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Timer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Timer(Timer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Timer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Timer(Timer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9960};

/// @brief Field interval, offset: 0x28, size: 0x8, def value: None
 double_t  ___interval;

/// @brief Field enabled, offset: 0x30, size: 0x1, def value: None
 bool  ___enabled;

/// @brief Field initializing, offset: 0x31, size: 0x1, def value: None
 bool  ___initializing;

/// @brief Field delayedEnable, offset: 0x32, size: 0x1, def value: None
 bool  ___delayedEnable;

/// @brief Field onIntervalElapsed, offset: 0x38, size: 0x8, def value: None
 ::System::Timers::ElapsedEventHandler*  ___onIntervalElapsed;

/// @brief Field autoReset, offset: 0x40, size: 0x1, def value: None
 bool  ___autoReset;

/// @brief Field synchronizingObject, offset: 0x48, size: 0x8, def value: None
 ::System::ComponentModel::ISynchronizeInvoke*  ___synchronizingObject;

/// @brief Field disposed, offset: 0x50, size: 0x1, def value: None
 bool  ___disposed;

/// @brief Field timer, offset: 0x58, size: 0x8, def value: None
 ::System::Threading::Timer*  ___timer;

/// @brief Field callback, offset: 0x60, size: 0x8, def value: None
 ::System::Threading::TimerCallback*  ___callback;

/// @brief Field cookie, offset: 0x68, size: 0x8, def value: None
 ::System::Object*  ___cookie;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Timers::Timer, ___interval) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Timers::Timer, ___enabled) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Timers::Timer, ___initializing) == 0x31, "Offset mismatch!");

static_assert(offsetof(::System::Timers::Timer, ___delayedEnable) == 0x32, "Offset mismatch!");

static_assert(offsetof(::System::Timers::Timer, ___onIntervalElapsed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Timers::Timer, ___autoReset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Timers::Timer, ___synchronizingObject) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Timers::Timer, ___disposed) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Timers::Timer, ___timer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Timers::Timer, ___callback) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Timers::Timer, ___cookie) == 0x68, "Offset mismatch!");

static_assert(sizeof(::System::Timers::Timer) == 0x70, "Size mismatch!");

} // namespace end def System::Timers
