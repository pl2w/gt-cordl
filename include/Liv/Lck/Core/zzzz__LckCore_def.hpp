#pragma once
// IWYU pragma private; include "Liv/Lck/Core/LckCore.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Core/FFI/zzzz__ReturnCode_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LckCore)
namespace GlobalNamespace {
struct LckCore__CheckLoginCompletedAsync_d__10;
}
namespace GlobalNamespace {
struct LckCore__GetRemainingBackoffTimeSeconds_d__11;
}
namespace GlobalNamespace {
struct LckCore__HasUserConfiguredStreaming_d__6;
}
namespace GlobalNamespace {
struct LckCore__IsUserSubscribed_d__8;
}
namespace GlobalNamespace {
struct LckCore__StartLoginAttemptAsync_d__9;
}
namespace Liv::Lck::Core::FFI {
struct ReturnCode;
}
namespace Liv::Lck::Core {
struct CoreError;
}
namespace Liv::Lck::Core {
struct GameInfo;
}
namespace Liv::Lck::Core {
class LckCore___c;
}
namespace Liv::Lck::Core {
class LckCore___c__DisplayClass10_0;
}
namespace Liv::Lck::Core {
class LckCore___c__DisplayClass11_0;
}
namespace Liv::Lck::Core {
class LckCore___c__DisplayClass6_0;
}
namespace Liv::Lck::Core {
class LckCore___c__DisplayClass8_0;
}
namespace Liv::Lck::Core {
struct LckInfo;
}
namespace Liv::Lck::Core {
struct LevelFilter;
}
namespace Liv::Lck::Core {
struct LogType;
}
namespace Liv::Lck::Core {
template<typename T>
class Result_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Action;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Liv::Lck::Core {
class LckCore;
}
namespace Liv::Lck::Core {
class LckCore___c;
}
namespace Liv::Lck::Core {
class LckCore___c__DisplayClass10_0;
}
namespace Liv::Lck::Core {
class LckCore___c__DisplayClass11_0;
}
namespace Liv::Lck::Core {
class LckCore___c__DisplayClass6_0;
}
namespace Liv::Lck::Core {
class LckCore___c__DisplayClass8_0;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Core::LckCore*);
MARK_REF_T(::Liv::Lck::Core::LckCore___c*);
MARK_REF_T(::Liv::Lck::Core::LckCore___c__DisplayClass10_0*);
MARK_REF_T(::Liv::Lck::Core::LckCore___c__DisplayClass11_0*);
MARK_REF_T(::Liv::Lck::Core::LckCore___c__DisplayClass6_0*);
MARK_REF_T(::Liv::Lck::Core::LckCore___c__DisplayClass8_0*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::LckCore*, "Liv.Lck.Core", "LckCore");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::LckCore___c*, "Liv.Lck.Core", "LckCore/<>c");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::LckCore___c__DisplayClass10_0*, "Liv.Lck.Core", "LckCore/<>c__DisplayClass10_0");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::LckCore___c__DisplayClass11_0*, "Liv.Lck.Core", "LckCore/<>c__DisplayClass11_0");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::LckCore___c__DisplayClass6_0*, "Liv.Lck.Core", "LckCore/<>c__DisplayClass6_0");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::LckCore___c__DisplayClass8_0*, "Liv.Lck.Core", "LckCore/<>c__DisplayClass8_0");
// Dependencies Liv.Lck.Core.FFI.ReturnCode, System.Object
namespace Liv::Lck::Core {
// Is value type: false
// CS Name: Liv.Lck.Core.LckCore
class CORDL_TYPE LckCore : public ::System::Object {
public:
// Declarations
using _CheckLoginCompletedAsync_d__10 = ::GlobalNamespace::LckCore__CheckLoginCompletedAsync_d__10;

using _GetRemainingBackoffTimeSeconds_d__11 = ::GlobalNamespace::LckCore__GetRemainingBackoffTimeSeconds_d__11;

using _HasUserConfiguredStreaming_d__6 = ::GlobalNamespace::LckCore__HasUserConfiguredStreaming_d__6;

using _IsUserSubscribed_d__8 = ::GlobalNamespace::LckCore__IsUserSubscribed_d__8;

using _StartLoginAttemptAsync_d__9 = ::GlobalNamespace::LckCore__StartLoginAttemptAsync_d__9;

using __c = ::Liv::Lck::Core::LckCore___c;

using __c__DisplayClass10_0 = ::Liv::Lck::Core::LckCore___c__DisplayClass10_0;

using __c__DisplayClass11_0 = ::Liv::Lck::Core::LckCore___c__DisplayClass11_0;

using __c__DisplayClass6_0 = ::Liv::Lck::Core::LckCore___c__DisplayClass6_0;

using __c__DisplayClass8_0 = ::Liv::Lck::Core::LckCore___c__DisplayClass8_0;

/// @brief Field _lastReturnCode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__lastReturnCode, put=setStaticF__lastReturnCode)) ::Liv::Lck::Core::FFI::ReturnCode  _lastReturnCode;

/// @brief Field _loginCode, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__loginCode, put=setStaticF__loginCode)) ::StringW  _loginCode;

/// @brief Field _loginLock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__loginLock, put=setStaticF__loginLock)) ::System::Object*  _loginLock;

/// [AsyncStateMachine(typeof(Liv.Lck.Core.LckCore::<CheckLoginCompletedAsync>d__10))]
/// @brief Method CheckLoginCompletedAsync, addr 0x9cfe9ec, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* CheckLoginCompletedAsync() ;

/// @brief Method Dispose, addr 0x9cfed7c, size 0x8c, virtual false, abstract: false, final false
static inline void Dispose() ;

/// [AsyncStateMachine(typeof(Liv.Lck.Core.LckCore::<GetRemainingBackoffTimeSeconds>d__11))]
/// @brief Method GetRemainingBackoffTimeSeconds, addr 0x9cfead8, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<float_t>*>* GetRemainingBackoffTimeSeconds() ;

/// [AsyncStateMachine(typeof(Liv.Lck.Core.LckCore::<HasUserConfiguredStreaming>d__6))]
/// @brief Method HasUserConfiguredStreaming, addr 0x9cfe5cc, size 0xf0, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* HasUserConfiguredStreaming() ;

/// @brief Method Initialize, addr 0x9cfde80, size 0x5bc, virtual false, abstract: false, final false
static inline ::Liv::Lck::Core::Result_1<bool>* Initialize(::StringW  trackingId, ::Liv::Lck::Core::GameInfo  gameInfo, ::Liv::Lck::Core::LckInfo  lckInfo) ;

/// [AsyncStateMachine(typeof(Liv.Lck.Core.LckCore::<IsUserSubscribed>d__8))]
/// @brief Method IsUserSubscribed, addr 0x9cfe810, size 0xf0, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* IsUserSubscribed() ;

/// @brief Method Log, addr 0x9cfebc4, size 0x108, virtual false, abstract: false, final false
static inline void Log(::Liv::Lck::Core::LogType  level, ::StringW  message, ::StringW  memberName, ::StringW  filePath, int32_t  lineNumber) ;

/// @brief Method MapReturnCodeToCoreError, addr 0x9cfe6bc, size 0x154, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<::Liv::Lck::Core::CoreError,::StringW> MapReturnCodeToCoreError(::Liv::Lck::Core::FFI::ReturnCode  returnCode) ;

/// @brief Method SetMaxLogLevel, addr 0x9cfddfc, size 0x4, virtual false, abstract: false, final false
static inline void SetMaxLogLevel(::Liv::Lck::Core::LevelFilter  levelFilter) ;

/// [AsyncStateMachine(typeof(Liv.Lck.Core.LckCore::<StartLoginAttemptAsync>d__9))]
/// @brief Method StartLoginAttemptAsync, addr 0x9cfe900, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<::StringW>*>* StartLoginAttemptAsync() ;

/// [MonoPInvokeCallback(typeof(Liv.Lck.Core.FFI.LckCoreNative::start_login_attempt_callback_delegate))]
/// @brief Method StartLoginAttemptCallback, addr 0x9cfdc9c, size 0x160, virtual false, abstract: false, final false
static inline void StartLoginAttemptCallback(::Liv::Lck::Core::FFI::ReturnCode  returnCode, ::System::IntPtr  loginCodePtr) ;

static inline ::Liv::Lck::Core::FFI::ReturnCode getStaticF__lastReturnCode() ;

static inline ::StringW getStaticF__loginCode() ;

static inline ::System::Object* getStaticF__loginLock() ;

static inline void setStaticF__lastReturnCode(::Liv::Lck::Core::FFI::ReturnCode  value) ;

static inline void setStaticF__loginCode(::StringW  value) ;

static inline void setStaticF__loginLock(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCore() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCore", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCore(LckCore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCore", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCore(LckCore const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31922};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Core::LckCore) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Core
// [CompilerGenerated]
// Dependencies Liv.Lck.Core.FFI.ReturnCode, System.IntPtr, System.Object
namespace Liv::Lck::Core {
// Is value type: false
// CS Name: Liv.Lck.Core.LckCore/<>c__DisplayClass8_0
class CORDL_TYPE LckCore___c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
/// @brief Field isSubscribedPtr, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_isSubscribedPtr, put=__cordl_internal_set_isSubscribedPtr)) ::System::IntPtr  isSubscribedPtr;

/// @brief Field returnCode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_returnCode, put=__cordl_internal_set_returnCode)) ::Liv::Lck::Core::FFI::ReturnCode  returnCode;

static inline ::Liv::Lck::Core::LckCore___c__DisplayClass8_0* New_ctor() ;

/// @brief Method <IsUserSubscribed>b__0, addr 0x9cff588, size 0x1c, virtual false, abstract: false, final false
inline void _IsUserSubscribed_b__0() ;

constexpr ::System::IntPtr const& __cordl_internal_get_isSubscribedPtr() const;

constexpr ::System::IntPtr& __cordl_internal_get_isSubscribedPtr() ;

constexpr ::Liv::Lck::Core::FFI::ReturnCode const& __cordl_internal_get_returnCode() const;

constexpr ::Liv::Lck::Core::FFI::ReturnCode& __cordl_internal_get_returnCode() ;

constexpr void __cordl_internal_set_isSubscribedPtr(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_returnCode(::Liv::Lck::Core::FFI::ReturnCode  value) ;

/// @brief Method .ctor, addr 0x9cff580, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCore___c__DisplayClass8_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCore___c__DisplayClass8_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCore___c__DisplayClass8_0(LckCore___c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCore___c__DisplayClass8_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCore___c__DisplayClass8_0(LckCore___c__DisplayClass8_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31916};

/// @brief Field returnCode, offset: 0x10, size: 0x4, def value: None
 ::Liv::Lck::Core::FFI::ReturnCode  ___returnCode;

/// @brief Field isSubscribedPtr, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  ___isSubscribedPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Core::LckCore___c__DisplayClass8_0, ___returnCode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::LckCore___c__DisplayClass8_0, ___isSubscribedPtr) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Core::LckCore___c__DisplayClass8_0) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck::Core
// [CompilerGenerated]
// Dependencies Liv.Lck.Core.FFI.ReturnCode, System.IntPtr, System.Object
namespace Liv::Lck::Core {
// Is value type: false
// CS Name: Liv.Lck.Core.LckCore/<>c__DisplayClass6_0
class CORDL_TYPE LckCore___c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
/// @brief Field hasConfiguredPtr, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_hasConfiguredPtr, put=__cordl_internal_set_hasConfiguredPtr)) ::System::IntPtr  hasConfiguredPtr;

/// @brief Field returnCode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_returnCode, put=__cordl_internal_set_returnCode)) ::Liv::Lck::Core::FFI::ReturnCode  returnCode;

static inline ::Liv::Lck::Core::LckCore___c__DisplayClass6_0* New_ctor() ;

/// @brief Method <HasUserConfiguredStreaming>b__0, addr 0x9cff4e8, size 0x1c, virtual false, abstract: false, final false
inline void _HasUserConfiguredStreaming_b__0() ;

constexpr ::System::IntPtr const& __cordl_internal_get_hasConfiguredPtr() const;

constexpr ::System::IntPtr& __cordl_internal_get_hasConfiguredPtr() ;

constexpr ::Liv::Lck::Core::FFI::ReturnCode const& __cordl_internal_get_returnCode() const;

constexpr ::Liv::Lck::Core::FFI::ReturnCode& __cordl_internal_get_returnCode() ;

constexpr void __cordl_internal_set_hasConfiguredPtr(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_returnCode(::Liv::Lck::Core::FFI::ReturnCode  value) ;

/// @brief Method .ctor, addr 0x9cff4e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCore___c__DisplayClass6_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCore___c__DisplayClass6_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCore___c__DisplayClass6_0(LckCore___c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCore___c__DisplayClass6_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCore___c__DisplayClass6_0(LckCore___c__DisplayClass6_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31915};

/// @brief Field returnCode, offset: 0x10, size: 0x4, def value: None
 ::Liv::Lck::Core::FFI::ReturnCode  ___returnCode;

/// @brief Field hasConfiguredPtr, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  ___hasConfiguredPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Core::LckCore___c__DisplayClass6_0, ___returnCode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::LckCore___c__DisplayClass6_0, ___hasConfiguredPtr) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Core::LckCore___c__DisplayClass6_0) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck::Core
// [CompilerGenerated]
// Dependencies Liv.Lck.Core.FFI.ReturnCode, System.Object
namespace Liv::Lck::Core {
// Is value type: false
// CS Name: Liv.Lck.Core.LckCore/<>c__DisplayClass11_0
class CORDL_TYPE LckCore___c__DisplayClass11_0 : public ::System::Object {
public:
// Declarations
/// @brief Field remainingTime, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_remainingTime, put=__cordl_internal_set_remainingTime)) float_t  remainingTime;

/// @brief Field returnCode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_returnCode, put=__cordl_internal_set_returnCode)) ::Liv::Lck::Core::FFI::ReturnCode  returnCode;

static inline ::Liv::Lck::Core::LckCore___c__DisplayClass11_0* New_ctor() ;

/// @brief Method <GetRemainingBackoffTimeSeconds>b__0, addr 0x9cff370, size 0xf4, virtual false, abstract: false, final false
inline void _GetRemainingBackoffTimeSeconds_b__0() ;

constexpr float_t const& __cordl_internal_get_remainingTime() const;

constexpr float_t& __cordl_internal_get_remainingTime() ;

constexpr ::Liv::Lck::Core::FFI::ReturnCode const& __cordl_internal_get_returnCode() const;

constexpr ::Liv::Lck::Core::FFI::ReturnCode& __cordl_internal_get_returnCode() ;

constexpr void __cordl_internal_set_remainingTime(float_t  value) ;

constexpr void __cordl_internal_set_returnCode(::Liv::Lck::Core::FFI::ReturnCode  value) ;

/// @brief Method .ctor, addr 0x9cff368, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCore___c__DisplayClass11_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCore___c__DisplayClass11_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCore___c__DisplayClass11_0(LckCore___c__DisplayClass11_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCore___c__DisplayClass11_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCore___c__DisplayClass11_0(LckCore___c__DisplayClass11_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31914};

/// @brief Field returnCode, offset: 0x10, size: 0x4, def value: None
 ::Liv::Lck::Core::FFI::ReturnCode  ___returnCode;

/// @brief Field remainingTime, offset: 0x14, size: 0x4, def value: None
 float_t  ___remainingTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Core::LckCore___c__DisplayClass11_0, ___returnCode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::LckCore___c__DisplayClass11_0, ___remainingTime) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Core::LckCore___c__DisplayClass11_0) == 0x18, "Size mismatch!");

} // namespace end def Liv::Lck::Core
// [CompilerGenerated]
// Dependencies Liv.Lck.Core.FFI.ReturnCode, System.Object
namespace Liv::Lck::Core {
// Is value type: false
// CS Name: Liv.Lck.Core.LckCore/<>c__DisplayClass10_0
class CORDL_TYPE LckCore___c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field isComplete, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_isComplete, put=__cordl_internal_set_isComplete)) bool  isComplete;

/// @brief Field returnCode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_returnCode, put=__cordl_internal_set_returnCode)) ::Liv::Lck::Core::FFI::ReturnCode  returnCode;

static inline ::Liv::Lck::Core::LckCore___c__DisplayClass10_0* New_ctor() ;

/// @brief Method <CheckLoginCompletedAsync>b__0, addr 0x9cff1f4, size 0xf8, virtual false, abstract: false, final false
inline void _CheckLoginCompletedAsync_b__0() ;

constexpr bool const& __cordl_internal_get_isComplete() const;

constexpr bool& __cordl_internal_get_isComplete() ;

constexpr ::Liv::Lck::Core::FFI::ReturnCode const& __cordl_internal_get_returnCode() const;

constexpr ::Liv::Lck::Core::FFI::ReturnCode& __cordl_internal_get_returnCode() ;

constexpr void __cordl_internal_set_isComplete(bool  value) ;

constexpr void __cordl_internal_set_returnCode(::Liv::Lck::Core::FFI::ReturnCode  value) ;

/// @brief Method .ctor, addr 0x9cff1ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCore___c__DisplayClass10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCore___c__DisplayClass10_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCore___c__DisplayClass10_0(LckCore___c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCore___c__DisplayClass10_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCore___c__DisplayClass10_0(LckCore___c__DisplayClass10_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31913};

/// @brief Field returnCode, offset: 0x10, size: 0x4, def value: None
 ::Liv::Lck::Core::FFI::ReturnCode  ___returnCode;

/// @brief Field isComplete, offset: 0x14, size: 0x1, def value: None
 bool  ___isComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Core::LckCore___c__DisplayClass10_0, ___returnCode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::LckCore___c__DisplayClass10_0, ___isComplete) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Core::LckCore___c__DisplayClass10_0) == 0x18, "Size mismatch!");

} // namespace end def Liv::Lck::Core
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Core {
// Is value type: false
// CS Name: Liv.Lck.Core.LckCore/<>c
class CORDL_TYPE LckCore___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Liv::Lck::Core::LckCore___c*  __9;

/// @brief Field <>9__9_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_0, put=setStaticF___9__9_0)) ::System::Action*  __9__9_0;

static inline ::Liv::Lck::Core::LckCore___c* New_ctor() ;

/// @brief Method <StartLoginAttemptAsync>b__9_0, addr 0x9cfef5c, size 0x170, virtual false, abstract: false, final false
inline void _StartLoginAttemptAsync_b__9_0() ;

/// @brief Method .ctor, addr 0x9cfef54, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Liv::Lck::Core::LckCore___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__9_0() ;

static inline void setStaticF___9(::Liv::Lck::Core::LckCore___c*  value) ;

static inline void setStaticF___9__9_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCore___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCore___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCore___c(LckCore___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCore___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCore___c(LckCore___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31912};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Core::LckCore___c) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Core
