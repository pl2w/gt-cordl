#pragma once
// IWYU pragma private; include "Backtrace/Unity/Runtime/Native/Base/NativeClientBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeClientBase)
namespace Backtrace::Unity::Model::Breadcrumbs {
class BacktraceBreadcrumbs;
}
namespace Backtrace::Unity::Model {
class BacktraceConfiguration;
}
namespace System::Threading {
class Thread;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Backtrace::Unity::Runtime::Native::Base {
class NativeClientBase;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Runtime::Native::Base::NativeClientBase*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Runtime::Native::Base::NativeClientBase*, "Backtrace.Unity.Runtime.Native.Base", "NativeClientBase");
// Dependencies System.Object
namespace Backtrace::Unity::Runtime::Native::Base {
// Is value type: false
// CS Name: Backtrace.Unity.Runtime.Native.Base.NativeClientBase
class CORDL_TYPE NativeClientBase : public ::System::Object {
public:
// Declarations
/// @brief Field AnrThread, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_AnrThread, put=__cordl_internal_set_AnrThread)) ::System::Threading::Thread*  AnrThread;

/// @brief Field AnrWatchdogTimeout, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_AnrWatchdogTimeout, put=__cordl_internal_set_AnrWatchdogTimeout)) int32_t  AnrWatchdogTimeout;

/// @brief Field CaptureNativeCrashes, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_CaptureNativeCrashes, put=__cordl_internal_set_CaptureNativeCrashes)) bool  CaptureNativeCrashes;

/// @brief Field HandlerANR, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_HandlerANR, put=__cordl_internal_set_HandlerANR)) bool  HandlerANR;

/// @brief Field LastUpdateTime, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_LastUpdateTime, put=__cordl_internal_set_LastUpdateTime)) float_t  LastUpdateTime;

/// @brief Field LogAnr, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_LogAnr, put=__cordl_internal_set_LogAnr)) bool  LogAnr;

/// @brief Field PreventAnr, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_PreventAnr, put=__cordl_internal_set_PreventAnr)) bool  PreventAnr;

/// @brief Field StopAnr, offset 0x1d, size 0x1 
 __declspec(property(get=__cordl_internal_get_StopAnr, put=__cordl_internal_set_StopAnr)) bool  StopAnr;

/// @brief Field _breadcrumbs, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__breadcrumbs, put=__cordl_internal_set__breadcrumbs)) ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  _breadcrumbs;

/// @brief Field _configuration, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__configuration, put=__cordl_internal_set__configuration)) ::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration>  _configuration;

/// @brief Field _lockObject, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__lockObject, put=__cordl_internal_set__lockObject)) ::System::Object*  _lockObject;

/// @brief Field _shouldLogAnrsInBreadcrumbs, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__shouldLogAnrsInBreadcrumbs, put=__cordl_internal_set__shouldLogAnrsInBreadcrumbs)) bool  _shouldLogAnrsInBreadcrumbs;

/// @brief Method Disable, addr 0x5f0c968, size 0x24, virtual true, abstract: false, final false
inline void Disable() ;

static inline ::Backtrace::Unity::Runtime::Native::Base::NativeClientBase* New_ctor(::Backtrace::Unity::Model::BacktraceConfiguration*  configuration, ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  breadcrumbs) ;

/// @brief Method OnAnrDetection, addr 0x5f0c920, size 0x24, virtual false, abstract: false, final false
inline void OnAnrDetection() ;

/// @brief Method PauseAnrThread, addr 0x5f0c944, size 0x24, virtual true, abstract: false, final true
inline void PauseAnrThread(bool  stopAnr) ;

/// @brief Method ShouldStoreAnrBreadcrumbs, addr 0x5f0c7ac, size 0x24, virtual false, abstract: false, final false
inline bool ShouldStoreAnrBreadcrumbs() ;

/// @brief Method Update, addr 0x5f0c7d0, size 0x150, virtual true, abstract: false, final true
inline void Update(float_t  time) ;

constexpr ::System::Threading::Thread* const& __cordl_internal_get_AnrThread() const;

constexpr ::System::Threading::Thread*& __cordl_internal_get_AnrThread() ;

constexpr int32_t const& __cordl_internal_get_AnrWatchdogTimeout() const;

constexpr int32_t& __cordl_internal_get_AnrWatchdogTimeout() ;

constexpr bool const& __cordl_internal_get_CaptureNativeCrashes() const;

constexpr bool& __cordl_internal_get_CaptureNativeCrashes() ;

constexpr bool const& __cordl_internal_get_HandlerANR() const;

constexpr bool& __cordl_internal_get_HandlerANR() ;

constexpr float_t const& __cordl_internal_get_LastUpdateTime() const;

constexpr float_t& __cordl_internal_get_LastUpdateTime() ;

constexpr bool const& __cordl_internal_get_LogAnr() const;

constexpr bool& __cordl_internal_get_LogAnr() ;

constexpr bool const& __cordl_internal_get_PreventAnr() const;

constexpr bool& __cordl_internal_get_PreventAnr() ;

constexpr bool const& __cordl_internal_get_StopAnr() const;

constexpr bool& __cordl_internal_get_StopAnr() ;

constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs* const& __cordl_internal_get__breadcrumbs() const;

constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*& __cordl_internal_get__breadcrumbs() ;

constexpr ::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration> const& __cordl_internal_get__configuration() const;

constexpr ::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration>& __cordl_internal_get__configuration() ;

constexpr ::System::Object* const& __cordl_internal_get__lockObject() const;

constexpr ::System::Object*& __cordl_internal_get__lockObject() ;

constexpr bool const& __cordl_internal_get__shouldLogAnrsInBreadcrumbs() const;

constexpr bool& __cordl_internal_get__shouldLogAnrsInBreadcrumbs() ;

constexpr void __cordl_internal_set_AnrThread(::System::Threading::Thread*  value) ;

constexpr void __cordl_internal_set_AnrWatchdogTimeout(int32_t  value) ;

constexpr void __cordl_internal_set_CaptureNativeCrashes(bool  value) ;

constexpr void __cordl_internal_set_HandlerANR(bool  value) ;

constexpr void __cordl_internal_set_LastUpdateTime(float_t  value) ;

constexpr void __cordl_internal_set_LogAnr(bool  value) ;

constexpr void __cordl_internal_set_PreventAnr(bool  value) ;

constexpr void __cordl_internal_set_StopAnr(bool  value) ;

constexpr void __cordl_internal_set__breadcrumbs(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  value) ;

constexpr void __cordl_internal_set__configuration(::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration>  value) ;

constexpr void __cordl_internal_set__lockObject(::System::Object*  value) ;

constexpr void __cordl_internal_set__shouldLogAnrsInBreadcrumbs(bool  value) ;

/// @brief Method .ctor, addr 0x5f0c6c0, size 0xec, virtual false, abstract: false, final false
inline void _ctor(::Backtrace::Unity::Model::BacktraceConfiguration*  configuration, ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  breadcrumbs) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeClientBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeClientBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeClientBase(NativeClientBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeClientBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeClientBase(NativeClientBase const& ) = delete;

/// @brief Field AnrMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  AnrMessage{u"ANRException: Blocked thread detected."};

/// @brief Field CrashType offset 0xffffffff size 0x8
static constexpr ::ConstString  CrashType{u"Crash"};

/// @brief Field ErrorTypeAttribute offset 0xffffffff size 0x8
static constexpr ::ConstString  ErrorTypeAttribute{u"error.type"};

/// @brief Field HangType offset 0xffffffff size 0x8
static constexpr ::ConstString  HangType{u"Hang"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27585};

/// @brief Field AnrWatchdogTimeout, offset: 0x10, size: 0x4, def value: None
 int32_t  ___AnrWatchdogTimeout;

/// @brief Field LogAnr, offset: 0x14, size: 0x1, def value: None
 bool  ___LogAnr;

/// @brief Field LastUpdateTime, offset: 0x18, size: 0x4, def value: None
 float_t  ___LastUpdateTime;

/// @brief Field PreventAnr, offset: 0x1c, size: 0x1, def value: None
 bool  ___PreventAnr;

/// @brief Field StopAnr, offset: 0x1d, size: 0x1, def value: None
 bool  ___StopAnr;

/// @brief Field AnrThread, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::Thread*  ___AnrThread;

/// @brief Field CaptureNativeCrashes, offset: 0x28, size: 0x1, def value: None
 bool  ___CaptureNativeCrashes;

/// @brief Field HandlerANR, offset: 0x29, size: 0x1, def value: None
 bool  ___HandlerANR;

/// @brief Field _configuration, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration>  ____configuration;

/// @brief Field _breadcrumbs, offset: 0x38, size: 0x8, def value: None
 ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  ____breadcrumbs;

/// @brief Field _shouldLogAnrsInBreadcrumbs, offset: 0x40, size: 0x1, def value: None
 bool  ____shouldLogAnrsInBreadcrumbs;

/// @brief Field _lockObject, offset: 0x48, size: 0x8, def value: None
 ::System::Object*  ____lockObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Base::NativeClientBase, ___AnrWatchdogTimeout) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Base::NativeClientBase, ___LogAnr) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Base::NativeClientBase, ___LastUpdateTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Base::NativeClientBase, ___PreventAnr) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Base::NativeClientBase, ___StopAnr) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Base::NativeClientBase, ___AnrThread) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Base::NativeClientBase, ___CaptureNativeCrashes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Base::NativeClientBase, ___HandlerANR) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Base::NativeClientBase, ____configuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Base::NativeClientBase, ____breadcrumbs) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Base::NativeClientBase, ____shouldLogAnrsInBreadcrumbs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Base::NativeClientBase, ____lockObject) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Runtime::Native::Base::NativeClientBase) == 0x50, "Size mismatch!");

} // namespace end def Backtrace::Unity::Runtime::Native::Base
