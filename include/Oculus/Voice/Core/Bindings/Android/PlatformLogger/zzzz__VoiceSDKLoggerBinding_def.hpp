#pragma once
// IWYU pragma private; include "Oculus/Voice/Core/Bindings/Android/PlatformLogger/VoiceSDKLoggerBinding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Voice/Core/Bindings/Android/zzzz__BaseServiceBinding_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VoiceSDKLoggerBinding)
namespace Oculus::Voice::Core::Bindings::Android::PlatformLogger {
class VoiceSDKLoggerBinding___c__DisplayClass8_0;
}
namespace Oculus::Voice::Core::Bindings::Android::PlatformLogger {
template<typename TReturnType>
class VoiceSDKLoggerBinding___c__DisplayClass9_0_1;
}
namespace System::Threading::Tasks {
class TaskScheduler;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AndroidJavaObject;
}
// Forward declare root types
namespace Oculus::Voice::Core::Bindings::Android::PlatformLogger {
class VoiceSDKLoggerBinding;
}
namespace Oculus::Voice::Core::Bindings::Android::PlatformLogger {
class VoiceSDKLoggerBinding___c__DisplayClass8_0;
}
namespace Oculus::Voice::Core::Bindings::Android::PlatformLogger {
template<typename TReturnType>
class VoiceSDKLoggerBinding___c__DisplayClass9_0_1;
}
// Write type traits
MARK_REF_T(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*);
MARK_REF_T(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0*);
MARK_GEN_REF_T_PTR(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass9_0_1);
DEFINE_IL2CPP_CLASS(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*, "Oculus.Voice.Core.Bindings.Android.PlatformLogger", "VoiceSDKLoggerBinding");
DEFINE_IL2CPP_CLASS(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0*, "Oculus.Voice.Core.Bindings.Android.PlatformLogger", "VoiceSDKLoggerBinding/<>c__DisplayClass8_0");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass9_0_1, "Oculus.Voice.Core.Bindings.Android.PlatformLogger", "VoiceSDKLoggerBinding/<>c__DisplayClass9_0`1");
// Dependencies Oculus.Voice.Core.Bindings.Android.BaseServiceBinding
namespace Oculus::Voice::Core::Bindings::Android::PlatformLogger {
// Is value type: false
// CS Name: Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKLoggerBinding
class CORDL_TYPE VoiceSDKLoggerBinding : public ::Oculus::Voice::Core::Bindings::Android::BaseServiceBinding {
public:
// Declarations
using __c__DisplayClass8_0 = ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0;

template<typename TReturnType>
using __c__DisplayClass9_0_1 = ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass9_0_1<TReturnType>;

/// @brief Field _scheduler, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__scheduler, put=__cordl_internal_set__scheduler)) ::System::Threading::Tasks::TaskScheduler*  _scheduler;

/// @brief Method Call, addr 0x5e31578, size 0x12c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* Call(::StringW  methodName, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method Call, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TReturnType>
inline ::System::Threading::Tasks::Task_1<TReturnType>* Call(::StringW  methodName, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method Connect, addr 0x5e313b0, size 0xcc, virtual false, abstract: false, final false
inline void Connect() ;

/// @brief Method LogAnnotation, addr 0x5e31960, size 0xfc, virtual false, abstract: false, final false
inline void LogAnnotation(::StringW  annotationKey, ::StringW  annotationValue) ;

/// @brief Method LogInteractionEndFailure, addr 0x5e31768, size 0xfc, virtual false, abstract: false, final false
inline void LogInteractionEndFailure(::StringW  endTime, ::StringW  errorMessage) ;

/// @brief Method LogInteractionEndSuccess, addr 0x5e316a4, size 0xc4, virtual false, abstract: false, final false
inline void LogInteractionEndSuccess(::StringW  endTime) ;

/// @brief Method LogInteractionPoint, addr 0x5e31864, size 0xfc, virtual false, abstract: false, final false
inline void LogInteractionPoint(::StringW  interactionPoint, ::StringW  time) ;

/// @brief Method LogInteractionStart, addr 0x5e3147c, size 0xfc, virtual false, abstract: false, final false
inline void LogInteractionStart(::StringW  requestId, ::StringW  startTime) ;

/// @brief [Preserve]
static inline ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding* New_ctor(::UnityEngine::AndroidJavaObject*  loggerInstance) ;

constexpr ::System::Threading::Tasks::TaskScheduler* const& __cordl_internal_get__scheduler() const;

constexpr ::System::Threading::Tasks::TaskScheduler*& __cordl_internal_get__scheduler() ;

constexpr void __cordl_internal_set__scheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x5e31324, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::AndroidJavaObject*  loggerInstance) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceSDKLoggerBinding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceSDKLoggerBinding", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceSDKLoggerBinding(VoiceSDKLoggerBinding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceSDKLoggerBinding", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceSDKLoggerBinding(VoiceSDKLoggerBinding const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32943};

/// @brief Field _scheduler, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskScheduler*  ____scheduler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding, ____scheduler) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Voice::Core::Bindings::Android::PlatformLogger
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Voice::Core::Bindings::Android::PlatformLogger {
// cpp template
template<typename TReturnType>
// Is value type: false
// CS Name: Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKLoggerBinding/<>c__DisplayClass9_0`1<TReturnType>
class CORDL_TYPE VoiceSDKLoggerBinding___c__DisplayClass9_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*  __4__this;

/// @brief Field methodName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_methodName, put=__cordl_internal_set_methodName)) ::StringW  methodName;

/// @brief Field parameters, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_parameters, put=__cordl_internal_set_parameters)) ::ArrayW<::System::Object*>  parameters;

static inline ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass9_0_1<TReturnType>* New_ctor() ;

/// @brief Method <Call>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TReturnType _Call_b__0() ;

constexpr ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding* const& __cordl_internal_get___4__this() const;

constexpr ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_methodName() const;

constexpr ::StringW& __cordl_internal_get_methodName() ;

constexpr ::ArrayW<::System::Object*> const& __cordl_internal_get_parameters() const;

constexpr ::ArrayW<::System::Object*>& __cordl_internal_get_parameters() ;

constexpr void __cordl_internal_set___4__this(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*  value) ;

constexpr void __cordl_internal_set_methodName(::StringW  value) ;

constexpr void __cordl_internal_set_parameters(::ArrayW<::System::Object*>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceSDKLoggerBinding___c__DisplayClass9_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceSDKLoggerBinding___c__DisplayClass9_0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceSDKLoggerBinding___c__DisplayClass9_0_1(VoiceSDKLoggerBinding___c__DisplayClass9_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceSDKLoggerBinding___c__DisplayClass9_0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceSDKLoggerBinding___c__DisplayClass9_0_1(VoiceSDKLoggerBinding___c__DisplayClass9_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32942};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*  _____4__this;

/// @brief Field methodName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___methodName;

/// @brief Field parameters, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::System::Object*>  ___parameters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Voice::Core::Bindings::Android::PlatformLogger
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Voice::Core::Bindings::Android::PlatformLogger {
// Is value type: false
// CS Name: Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKLoggerBinding/<>c__DisplayClass8_0
class CORDL_TYPE VoiceSDKLoggerBinding___c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*  __4__this;

/// @brief Field methodName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_methodName, put=__cordl_internal_set_methodName)) ::StringW  methodName;

/// @brief Field parameters, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_parameters, put=__cordl_internal_set_parameters)) ::ArrayW<::System::Object*>  parameters;

static inline ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0* New_ctor() ;

/// @brief Method <Call>b__0, addr 0x5e31a64, size 0x2c, virtual false, abstract: false, final false
inline void _Call_b__0() ;

constexpr ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding* const& __cordl_internal_get___4__this() const;

constexpr ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_methodName() const;

constexpr ::StringW& __cordl_internal_get_methodName() ;

constexpr ::ArrayW<::System::Object*> const& __cordl_internal_get_parameters() const;

constexpr ::ArrayW<::System::Object*>& __cordl_internal_get_parameters() ;

constexpr void __cordl_internal_set___4__this(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*  value) ;

constexpr void __cordl_internal_set_methodName(::StringW  value) ;

constexpr void __cordl_internal_set_parameters(::ArrayW<::System::Object*>  value) ;

/// @brief Method .ctor, addr 0x5e31a5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceSDKLoggerBinding___c__DisplayClass8_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceSDKLoggerBinding___c__DisplayClass8_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceSDKLoggerBinding___c__DisplayClass8_0(VoiceSDKLoggerBinding___c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceSDKLoggerBinding___c__DisplayClass8_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceSDKLoggerBinding___c__DisplayClass8_0(VoiceSDKLoggerBinding___c__DisplayClass8_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32941};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*  _____4__this;

/// @brief Field methodName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___methodName;

/// @brief Field parameters, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::System::Object*>  ___parameters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0, ___methodName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0, ___parameters) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Voice::Core::Bindings::Android::PlatformLogger
