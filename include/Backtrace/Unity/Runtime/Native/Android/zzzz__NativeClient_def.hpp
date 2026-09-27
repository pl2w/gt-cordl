#pragma once
// IWYU pragma private; include "Backtrace/Unity/Runtime/Native/Android/NativeClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Backtrace/Unity/Runtime/Native/Android/zzzz__UnwindingMode_def.hpp"
#include "Backtrace/Unity/Runtime/Native/Base/zzzz__NativeClientBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeClient)
namespace Backtrace::Unity::Model::Attributes {
class IDynamicAttributeProvider;
}
namespace Backtrace::Unity::Model::Breadcrumbs {
class BacktraceBreadcrumbs;
}
namespace Backtrace::Unity::Model {
class BacktraceConfiguration;
}
namespace Backtrace::Unity::Runtime::Native::Android {
class NativeClient___c__DisplayClass34_0;
}
namespace Backtrace::Unity::Runtime::Native {
class INativeClient;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class AndroidJavaObject;
}
// Forward declare root types
namespace Backtrace::Unity::Runtime::Native::Android {
class NativeClient;
}
namespace Backtrace::Unity::Runtime::Native::Android {
class NativeClient___c__DisplayClass34_0;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Runtime::Native::Android::NativeClient*);
MARK_REF_T(::Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Runtime::Native::Android::NativeClient*, "Backtrace.Unity.Runtime.Native.Android", "NativeClient");
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0*, "Backtrace.Unity.Runtime.Native.Android", "NativeClient/<>c__DisplayClass34_0");
// Dependencies Backtrace.Unity.Runtime.Native.Android.UnwindingMode, Backtrace.Unity.Runtime.Native.Base.NativeClientBase
namespace Backtrace::Unity::Runtime::Native::Android {
// Is value type: false
// CS Name: Backtrace.Unity.Runtime.Native.Android.NativeClient
class CORDL_TYPE NativeClient : public ::Backtrace::Unity::Runtime::Native::Base::NativeClientBase {
public:
// Declarations
using __c__DisplayClass34_0 = ::Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0;

 __declspec(property(get=get_GameObjectName, put=set_GameObjectName)) ::StringW  GameObjectName;

/// @brief Field UnwindingMode, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_UnwindingMode, put=__cordl_internal_set_UnwindingMode)) ::Backtrace::Unity::Runtime::Native::Android::UnwindingMode  UnwindingMode;

/// @brief Field <GameObjectName>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__GameObjectName_k__BackingField, put=__cordl_internal_set__GameObjectName_k__BackingField)) ::StringW  _GameObjectName_k__BackingField;

/// @brief Field _anrPath, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__anrPath, put=__cordl_internal_set__anrPath)) ::StringW  _anrPath;

/// @brief Field _anrWatcher, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__anrWatcher, put=__cordl_internal_set__anrWatcher)) ::UnityEngine::AndroidJavaObject*  _anrWatcher;

/// @brief Field _attributeMapping, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__attributeMapping, put=__cordl_internal_set__attributeMapping)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _attributeMapping;

/// @brief Field _crashHandlerPath, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__crashHandlerPath, put=__cordl_internal_set__crashHandlerPath)) ::StringW  _crashHandlerPath;

/// @brief Field _enableClientSideUnwinding, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__enableClientSideUnwinding, put=__cordl_internal_set__enableClientSideUnwinding)) bool  _enableClientSideUnwinding;

/// @brief Field _enabled, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__enabled, put=__cordl_internal_set__enabled)) bool  _enabled;

/// @brief Field _nativeLibraryName, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__nativeLibraryName, put=__cordl_internal_set__nativeLibraryName)) ::StringW  _nativeLibraryName;

/// @brief Field _unhandledExceptionPath, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__unhandledExceptionPath, put=__cordl_internal_set__unhandledExceptionPath)) ::StringW  _unhandledExceptionPath;

/// @brief Field _unhandledExceptionWatcher, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__unhandledExceptionWatcher, put=__cordl_internal_set__unhandledExceptionWatcher)) ::UnityEngine::AndroidJavaObject*  _unhandledExceptionWatcher;

/// @brief Convert operator to "::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider"
constexpr operator  ::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*() noexcept;

/// @brief Convert operator to "::Backtrace::Unity::Runtime::Native::INativeClient"
constexpr operator  ::Backtrace::Unity::Runtime::Native::INativeClient*() noexcept;

/// @brief Method AddAttribute, addr 0x5f0cb2c, size 0x88, virtual false, abstract: false, final false
static inline bool AddAttribute(::System::IntPtr  key, ::System::IntPtr  value) ;

/// @brief Method CanInitializeExecutableCrashHandler, addr 0x5f0e838, size 0x34, virtual false, abstract: false, final false
inline bool CanInitializeExecutableCrashHandler(::StringW  nativeLibraryDirectory, ::StringW  handlerPath) ;

/// @brief Method Disable, addr 0x5f0fa34, size 0x1b4, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method DisableNativeIntegration, addr 0x5f0cc3c, size 0x6c, virtual false, abstract: false, final false
static inline bool DisableNativeIntegration() ;

/// @brief Method FinishUnhandledBackgroundException, addr 0x5f0105c, size 0xcc, virtual false, abstract: false, final false
inline void FinishUnhandledBackgroundException() ;

/// @brief Method GetAttributes, addr 0x5f0f568, size 0x35c, virtual true, abstract: false, final true
inline void GetAttributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  result) ;

/// @brief Method GetLibrarySystemPath, addr 0x5f0f344, size 0x224, virtual false, abstract: false, final false
inline ::StringW GetLibrarySystemPath() ;

/// @brief Method GetNativeDirectoryPath, addr 0x5f0e0e8, size 0x5a8, virtual false, abstract: false, final false
inline ::StringW GetNativeDirectoryPath() ;

/// @brief Method GuessNativeDirectoryPath, addr 0x5f0e690, size 0xfc, virtual false, abstract: false, final false
inline ::StringW GuessNativeDirectoryPath() ;

/// @brief Method HandleAnr, addr 0x5f0db14, size 0x3b0, virtual true, abstract: false, final true
inline void HandleAnr() ;

/// @brief Method HandleNativeCrashes, addr 0x5f0d538, size 0x5dc, virtual false, abstract: false, final false
inline void HandleNativeCrashes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  backtraceAttributes, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments) ;

/// @brief Method HandleUnhandledExceptions, addr 0x5f0dec4, size 0x224, virtual false, abstract: false, final false
inline void HandleUnhandledExceptions() ;

/// @brief Method Initialize, addr 0x5f0c98c, size 0xd4, virtual false, abstract: false, final false
static inline bool Initialize(::System::IntPtr  submissionUrl, ::System::IntPtr  databasePath, ::System::IntPtr  handlerPath, ::System::IntPtr  keys, ::System::IntPtr  values, ::System::IntPtr  attachments, bool  enableClientSideUnwinding, int32_t  unwindingMode) ;

/// @brief Method InitializeExecutableCrashHandler, addr 0x5f0f21c, size 0x128, virtual false, abstract: false, final false
inline bool InitializeExecutableCrashHandler(::StringW  minidumpUrl, ::StringW  databasePath, ::StringW  crashpadHandlerPath, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments) ;

/// @brief Method InitializeJavaCrashHandler, addr 0x5f0e86c, size 0x9b0, virtual false, abstract: false, final false
inline bool InitializeJavaCrashHandler(::StringW  minidumpUrl, ::StringW  databasePath, ::StringW  deviceAbi, ::StringW  nativeDirectory, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments) ;

/// @brief Method InitializeJavaCrashHandler, addr 0x5f0ca60, size 0xcc, virtual false, abstract: false, final false
static inline bool InitializeJavaCrashHandler(::System::IntPtr  submissionUrl, ::System::IntPtr  databasePath, ::System::IntPtr  classPath, ::System::IntPtr  keys, ::System::IntPtr  values, ::System::IntPtr  attachments, ::System::IntPtr  environmentVariables) ;

/// @brief Method NativeReport, addr 0x5f0cbb4, size 0x88, virtual false, abstract: false, final false
static inline bool NativeReport(::System::IntPtr  message, bool  setMainThreadAsFaultingThread) ;

static inline ::Backtrace::Unity::Runtime::Native::Android::NativeClient* New_ctor(::Backtrace::Unity::Model::BacktraceConfiguration*  configuration, ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  breadcrumbs, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  clientAttributes, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, ::StringW  gameObjectName) ;

/// @brief Method OnOOM, addr 0x5f0f948, size 0xec, virtual true, abstract: false, final true
inline bool OnOOM() ;

/// @brief Method SetAttribute, addr 0x5f0f8cc, size 0x7c, virtual true, abstract: false, final true
inline void SetAttribute(::StringW  key, ::StringW  value) ;

/// @brief Method SetDefaultAttributeMaps, addr 0x5f0cca8, size 0x880, virtual false, abstract: false, final false
inline void SetDefaultAttributeMaps() ;

constexpr ::Backtrace::Unity::Runtime::Native::Android::UnwindingMode const& __cordl_internal_get_UnwindingMode() const;

constexpr ::Backtrace::Unity::Runtime::Native::Android::UnwindingMode& __cordl_internal_get_UnwindingMode() ;

constexpr ::StringW const& __cordl_internal_get__GameObjectName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__GameObjectName_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__anrPath() const;

constexpr ::StringW& __cordl_internal_get__anrPath() ;

constexpr ::UnityEngine::AndroidJavaObject* const& __cordl_internal_get__anrWatcher() const;

constexpr ::UnityEngine::AndroidJavaObject*& __cordl_internal_get__anrWatcher() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__attributeMapping() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__attributeMapping() ;

constexpr ::StringW const& __cordl_internal_get__crashHandlerPath() const;

constexpr ::StringW& __cordl_internal_get__crashHandlerPath() ;

constexpr bool const& __cordl_internal_get__enableClientSideUnwinding() const;

constexpr bool& __cordl_internal_get__enableClientSideUnwinding() ;

constexpr bool const& __cordl_internal_get__enabled() const;

constexpr bool& __cordl_internal_get__enabled() ;

constexpr ::StringW const& __cordl_internal_get__nativeLibraryName() const;

constexpr ::StringW& __cordl_internal_get__nativeLibraryName() ;

constexpr ::StringW const& __cordl_internal_get__unhandledExceptionPath() const;

constexpr ::StringW& __cordl_internal_get__unhandledExceptionPath() ;

constexpr ::UnityEngine::AndroidJavaObject* const& __cordl_internal_get__unhandledExceptionWatcher() const;

constexpr ::UnityEngine::AndroidJavaObject*& __cordl_internal_get__unhandledExceptionWatcher() ;

constexpr void __cordl_internal_set_UnwindingMode(::Backtrace::Unity::Runtime::Native::Android::UnwindingMode  value) ;

constexpr void __cordl_internal_set__GameObjectName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__anrPath(::StringW  value) ;

constexpr void __cordl_internal_set__anrWatcher(::UnityEngine::AndroidJavaObject*  value) ;

constexpr void __cordl_internal_set__attributeMapping(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__crashHandlerPath(::StringW  value) ;

constexpr void __cordl_internal_set__enableClientSideUnwinding(bool  value) ;

constexpr void __cordl_internal_set__enabled(bool  value) ;

constexpr void __cordl_internal_set__nativeLibraryName(::StringW  value) ;

constexpr void __cordl_internal_set__unhandledExceptionPath(::StringW  value) ;

constexpr void __cordl_internal_set__unhandledExceptionWatcher(::UnityEngine::AndroidJavaObject*  value) ;

/// @brief Method .ctor, addr 0x5f0c45c, size 0x264, virtual false, abstract: false, final false
inline void _ctor(::Backtrace::Unity::Model::BacktraceConfiguration*  configuration, ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  breadcrumbs, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  clientAttributes, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, ::StringW  gameObjectName) ;

/// [CompilerGenerated]
/// @brief Method get_GameObjectName, addr 0x5f0d528, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_GameObjectName() ;

/// @brief Convert to "::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider"
constexpr ::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider* i___Backtrace__Unity__Model__Attributes__IDynamicAttributeProvider() noexcept;

/// @brief Convert to "::Backtrace::Unity::Runtime::Native::INativeClient"
constexpr ::Backtrace::Unity::Runtime::Native::INativeClient* i___Backtrace__Unity__Runtime__Native__INativeClient() noexcept;

/// [CompilerGenerated]
/// @brief Method set_GameObjectName, addr 0x5f0d530, size 0x8, virtual false, abstract: false, final false
inline void set_GameObjectName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeClient", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeClient(NativeClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeClient(NativeClient const& ) = delete;

/// @brief Field CallbackMethodName offset 0xffffffff size 0x8
static constexpr ::ConstString  CallbackMethodName{u"OnAnrDetected"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27587};

/// @brief Field _baseNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  _baseNamespace{u"backtraceio"};

/// @brief Field _namespace offset 0xffffffff size 0x8
static constexpr ::ConstString  _namespace{u"backtraceio.unity"};

/// @brief Field _attributeMapping, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____attributeMapping;

/// @brief Field UnwindingMode, offset: 0x58, size: 0x4, def value: None
 ::Backtrace::Unity::Runtime::Native::Android::UnwindingMode  ___UnwindingMode;

/// @brief Field _anrPath, offset: 0x60, size: 0x8, def value: None
 ::StringW  ____anrPath;

/// @brief Field _unhandledExceptionPath, offset: 0x68, size: 0x8, def value: None
 ::StringW  ____unhandledExceptionPath;

/// @brief Field _crashHandlerPath, offset: 0x70, size: 0x8, def value: None
 ::StringW  ____crashHandlerPath;

/// @brief Field _nativeLibraryName, offset: 0x78, size: 0x8, def value: None
 ::StringW  ____nativeLibraryName;

/// @brief Field _enabled, offset: 0x80, size: 0x1, def value: None
 bool  ____enabled;

/// @brief Field _anrWatcher, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::AndroidJavaObject*  ____anrWatcher;

/// @brief Field _unhandledExceptionWatcher, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::AndroidJavaObject*  ____unhandledExceptionWatcher;

/// @brief Field _enableClientSideUnwinding, offset: 0x98, size: 0x1, def value: None
 bool  ____enableClientSideUnwinding;

/// [CompilerGenerated]
/// @brief Field <GameObjectName>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ____GameObjectName_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Android::NativeClient, ____attributeMapping) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Android::NativeClient, ___UnwindingMode) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Android::NativeClient, ____anrPath) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Android::NativeClient, ____unhandledExceptionPath) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Android::NativeClient, ____crashHandlerPath) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Android::NativeClient, ____nativeLibraryName) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Android::NativeClient, ____enabled) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Android::NativeClient, ____anrWatcher) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Android::NativeClient, ____unhandledExceptionWatcher) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Android::NativeClient, ____enableClientSideUnwinding) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Android::NativeClient, ____GameObjectName_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Runtime::Native::Android::NativeClient) == 0xa8, "Size mismatch!");

} // namespace end def Backtrace::Unity::Runtime::Native::Android
// [CompilerGenerated]
// Dependencies System.Object
namespace Backtrace::Unity::Runtime::Native::Android {
// Is value type: false
// CS Name: Backtrace.Unity.Runtime.Native.Android.NativeClient/<>c__DisplayClass34_0
class CORDL_TYPE NativeClient___c__DisplayClass34_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Backtrace::Unity::Runtime::Native::Android::NativeClient*  __4__this;

/// @brief Field reported, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_reported, put=__cordl_internal_set_reported)) bool  reported;

static inline ::Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0* New_ctor() ;

/// @brief Method <HandleAnr>b__0, addr 0x5f0fbe8, size 0x1f4, virtual false, abstract: false, final false
inline void _HandleAnr_b__0() ;

constexpr ::Backtrace::Unity::Runtime::Native::Android::NativeClient* const& __cordl_internal_get___4__this() const;

constexpr ::Backtrace::Unity::Runtime::Native::Android::NativeClient*& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get_reported() const;

constexpr bool& __cordl_internal_get_reported() ;

constexpr void __cordl_internal_set___4__this(::Backtrace::Unity::Runtime::Native::Android::NativeClient*  value) ;

constexpr void __cordl_internal_set_reported(bool  value) ;

/// @brief Method .ctor, addr 0x5f0f8c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeClient___c__DisplayClass34_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeClient___c__DisplayClass34_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeClient___c__DisplayClass34_0(NativeClient___c__DisplayClass34_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeClient___c__DisplayClass34_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeClient___c__DisplayClass34_0(NativeClient___c__DisplayClass34_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27586};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Backtrace::Unity::Runtime::Native::Android::NativeClient*  _____4__this;

/// @brief Field reported, offset: 0x18, size: 0x1, def value: None
 bool  ___reported;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0, ___reported) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Runtime::Native::Android::NativeClient___c__DisplayClass34_0) == 0x20, "Size mismatch!");

} // namespace end def Backtrace::Unity::Runtime::Native::Android
