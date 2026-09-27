#pragma once
// IWYU pragma private; include "Fusion/FusionUnityLoggerBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FusionUnityLoggerBase)
namespace Fusion {
class FusionUnityLoggerBase___c;
}
namespace Fusion {
struct LogFlags;
}
namespace Fusion {
struct LogLevel;
}
namespace Fusion {
class LogStream;
}
namespace Fusion {
struct TraceChannels;
}
namespace GlobalNamespace {
struct FusionUnityLoggerBase_LogContext;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Threading {
template<typename T>
class ThreadLocal_1;
}
namespace System::Threading {
class Thread;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Fusion {
class FusionUnityLoggerBase;
}
namespace Fusion {
class FusionUnityLoggerBase___c;
}
// Write type traits
MARK_REF_T(::Fusion::FusionUnityLoggerBase*);
MARK_REF_T(::Fusion::FusionUnityLoggerBase___c*);
DEFINE_IL2CPP_CLASS(::Fusion::FusionUnityLoggerBase*, "Fusion", "FusionUnityLoggerBase");
DEFINE_IL2CPP_CLASS(::Fusion::FusionUnityLoggerBase___c*, "Fusion", "FusionUnityLoggerBase/<>c");
// Dependencies System.Object, UnityEngine.Color32
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionUnityLoggerBase
class CORDL_TYPE FusionUnityLoggerBase : public ::System::Object {
public:
// Declarations
using __c = ::Fusion::FusionUnityLoggerBase___c;

using LogContext = ::GlobalNamespace::FusionUnityLoggerBase_LogContext;

/// @brief Field AddHashCodePrefix, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_AddHashCodePrefix, put=__cordl_internal_set_AddHashCodePrefix)) bool  AddHashCodePrefix;

/// @brief Field DebugPrefix, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_DebugPrefix, put=__cordl_internal_set_DebugPrefix)) ::StringW  DebugPrefix;

/// @brief Field GlobalPrefix, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_GlobalPrefix, put=__cordl_internal_set_GlobalPrefix)) ::StringW  GlobalPrefix;

/// @brief Field GlobalPrefixColor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_GlobalPrefixColor, put=__cordl_internal_set_GlobalPrefixColor)) ::StringW  GlobalPrefixColor;

 __declspec(property(get=get_IsInMainThread)) bool  IsInMainThread;

/// @brief Field MaxRandomColor, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxRandomColor, put=__cordl_internal_set_MaxRandomColor)) ::UnityEngine::Color32  MaxRandomColor;

/// @brief Field MinRandomColor, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinRandomColor, put=__cordl_internal_set_MinRandomColor)) ::UnityEngine::Color32  MinRandomColor;

/// @brief Field NameUnavailableInWorkerThreadLabel, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_NameUnavailableInWorkerThreadLabel, put=__cordl_internal_set_NameUnavailableInWorkerThreadLabel)) ::StringW  NameUnavailableInWorkerThreadLabel;

/// @brief Field NameUnavailableObjectDestroyedLabel, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_NameUnavailableObjectDestroyedLabel, put=__cordl_internal_set_NameUnavailableObjectDestroyedLabel)) ::StringW  NameUnavailableObjectDestroyedLabel;

/// @brief Field TracePrefix, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_TracePrefix, put=__cordl_internal_set_TracePrefix)) ::StringW  TracePrefix;

/// @brief Field UseColorTags, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseColorTags, put=__cordl_internal_set_UseColorTags)) bool  UseColorTags;

/// @brief Field UseGlobalPrefix, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseGlobalPrefix, put=__cordl_internal_set_UseGlobalPrefix)) bool  UseGlobalPrefix;

/// @brief Field _mainThread, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__mainThread, put=__cordl_internal_set__mainThread)) ::System::Threading::Thread*  _mainThread;

/// @brief Field _mainThreadBuilder, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__mainThreadBuilder, put=__cordl_internal_set__mainThreadBuilder)) ::System::Text::StringBuilder*  _mainThreadBuilder;

/// @brief Field _threadedStringBuilder, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__threadedStringBuilder, put=__cordl_internal_set__threadedStringBuilder)) ::System::Threading::ThreadLocal_1<::System::Text::StringBuilder*>*  _threadedStringBuilder;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AppendNameThreadSafe, addr 0x5f45d3c, size 0x23c, virtual false, abstract: false, final false
inline void AppendNameThreadSafe(::System::Text::StringBuilder*  builder, ::UnityEngine::Object*  obj) ;

/// @brief Method AppendPrefix, addr 0x5f45b20, size 0x21c, virtual false, abstract: false, final false
inline void AppendPrefix(::System::Text::StringBuilder*  sb, ::Fusion::LogFlags  flags, ::StringW  prefix) ;

/// @brief Method Color32ToRGB24, addr 0x5f461a0, size 0x14, virtual false, abstract: false, final false
static inline int32_t Color32ToRGB24(::UnityEngine::Color32  c) ;

/// @brief Method Color32ToRGBString, addr 0x5f455c4, size 0x80, virtual false, abstract: false, final false
static inline ::StringW Color32ToRGBString(::UnityEngine::Color32  c) ;

/// @brief Method CreateLogStream, addr 0x5f456b4, size 0x80, virtual false, abstract: false, final false
inline ::Fusion::LogStream* CreateLogStream(::Fusion::LogLevel  logLevel, ::Fusion::LogFlags  flags, ::Fusion::TraceChannels  channel) ;

/// @brief Method CreateMessage, addr 0x5f45818, size 0x308, virtual true, abstract: false, final false
inline ::System::ValueTuple_2<::StringW,::UnityW<::UnityEngine::Object>> CreateMessage(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::FusionUnityLoggerBase_LogContext>  context) ;

/// @brief Method Dispose, addr 0x5f45664, size 0x50, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetColorFromHash, addr 0x5f46008, size 0x7c, virtual false, abstract: false, final false
inline int32_t GetColorFromHash(::StringW  name) ;

/// @brief Method GetRandomColor, addr 0x5f46084, size 0xc4, virtual false, abstract: false, final false
static inline int32_t GetRandomColor(int32_t  seed, ::UnityEngine::Color32  min, ::UnityEngine::Color32  max) ;

/// @brief Method GetThreadSafeStringBuilder, addr 0x5f45f78, size 0x90, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* GetThreadSafeStringBuilder(::by_ref<bool>  isMainThread) ;

static inline ::Fusion::FusionUnityLoggerBase* New_ctor(::System::Threading::Thread*  mainThread, bool  isDarkMode) ;

/// [CompilerGenerated]
/// @brief Method <GetRandomColor>g__NextSplitMix64|22_0, addr 0x5f46148, size 0x58, virtual false, abstract: false, final false
static inline uint64_t _GetRandomColor_g__NextSplitMix64_22_0(::by_ref<uint64_t>  x) ;

constexpr bool const& __cordl_internal_get_AddHashCodePrefix() const;

constexpr bool& __cordl_internal_get_AddHashCodePrefix() ;

constexpr ::StringW const& __cordl_internal_get_DebugPrefix() const;

constexpr ::StringW& __cordl_internal_get_DebugPrefix() ;

constexpr ::StringW const& __cordl_internal_get_GlobalPrefix() const;

constexpr ::StringW& __cordl_internal_get_GlobalPrefix() ;

constexpr ::StringW const& __cordl_internal_get_GlobalPrefixColor() const;

constexpr ::StringW& __cordl_internal_get_GlobalPrefixColor() ;

constexpr ::UnityEngine::Color32 const& __cordl_internal_get_MaxRandomColor() const;

constexpr ::UnityEngine::Color32& __cordl_internal_get_MaxRandomColor() ;

constexpr ::UnityEngine::Color32 const& __cordl_internal_get_MinRandomColor() const;

constexpr ::UnityEngine::Color32& __cordl_internal_get_MinRandomColor() ;

constexpr ::StringW const& __cordl_internal_get_NameUnavailableInWorkerThreadLabel() const;

constexpr ::StringW& __cordl_internal_get_NameUnavailableInWorkerThreadLabel() ;

constexpr ::StringW const& __cordl_internal_get_NameUnavailableObjectDestroyedLabel() const;

constexpr ::StringW& __cordl_internal_get_NameUnavailableObjectDestroyedLabel() ;

constexpr ::StringW const& __cordl_internal_get_TracePrefix() const;

constexpr ::StringW& __cordl_internal_get_TracePrefix() ;

constexpr bool const& __cordl_internal_get_UseColorTags() const;

constexpr bool& __cordl_internal_get_UseColorTags() ;

constexpr bool const& __cordl_internal_get_UseGlobalPrefix() const;

constexpr bool& __cordl_internal_get_UseGlobalPrefix() ;

constexpr ::System::Threading::Thread* const& __cordl_internal_get__mainThread() const;

constexpr ::System::Threading::Thread*& __cordl_internal_get__mainThread() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__mainThreadBuilder() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get__mainThreadBuilder() ;

constexpr ::System::Threading::ThreadLocal_1<::System::Text::StringBuilder*>* const& __cordl_internal_get__threadedStringBuilder() const;

constexpr ::System::Threading::ThreadLocal_1<::System::Text::StringBuilder*>*& __cordl_internal_get__threadedStringBuilder() ;

constexpr void __cordl_internal_set_AddHashCodePrefix(bool  value) ;

constexpr void __cordl_internal_set_DebugPrefix(::StringW  value) ;

constexpr void __cordl_internal_set_GlobalPrefix(::StringW  value) ;

constexpr void __cordl_internal_set_GlobalPrefixColor(::StringW  value) ;

constexpr void __cordl_internal_set_MaxRandomColor(::UnityEngine::Color32  value) ;

constexpr void __cordl_internal_set_MinRandomColor(::UnityEngine::Color32  value) ;

constexpr void __cordl_internal_set_NameUnavailableInWorkerThreadLabel(::StringW  value) ;

constexpr void __cordl_internal_set_NameUnavailableObjectDestroyedLabel(::StringW  value) ;

constexpr void __cordl_internal_set_TracePrefix(::StringW  value) ;

constexpr void __cordl_internal_set_UseColorTags(bool  value) ;

constexpr void __cordl_internal_set_UseGlobalPrefix(bool  value) ;

constexpr void __cordl_internal_set__mainThread(::System::Threading::Thread*  value) ;

constexpr void __cordl_internal_set__mainThreadBuilder(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set__threadedStringBuilder(::System::Threading::ThreadLocal_1<::System::Text::StringBuilder*>*  value) ;

/// @brief Method .ctor, addr 0x5f45280, size 0x304, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::Thread*  mainThread, bool  isDarkMode) ;

/// @brief Method get_DefaultDarkPrefixColor, addr 0x5f455a4, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_DefaultDarkPrefixColor() ;

/// @brief Method get_DefaultLightPrefixColor, addr 0x5f45584, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_DefaultLightPrefixColor() ;

/// @brief Method get_IsInMainThread, addr 0x5f45644, size 0x20, virtual false, abstract: false, final false
inline bool get_IsInMainThread() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionUnityLoggerBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionUnityLoggerBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionUnityLoggerBase(FusionUnityLoggerBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionUnityLoggerBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionUnityLoggerBase(FusionUnityLoggerBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32727};

/// @brief Field _mainThread, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Thread*  ____mainThread;

/// @brief Field _mainThreadBuilder, offset: 0x18, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ____mainThreadBuilder;

/// @brief Field _threadedStringBuilder, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::ThreadLocal_1<::System::Text::StringBuilder*>*  ____threadedStringBuilder;

/// @brief Field AddHashCodePrefix, offset: 0x28, size: 0x1, def value: None
 bool  ___AddHashCodePrefix;

/// @brief Field GlobalPrefix, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___GlobalPrefix;

/// @brief Field GlobalPrefixColor, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___GlobalPrefixColor;

/// @brief Field MaxRandomColor, offset: 0x40, size: 0x4, def value: None
 ::UnityEngine::Color32  ___MaxRandomColor;

/// @brief Field MinRandomColor, offset: 0x44, size: 0x4, def value: None
 ::UnityEngine::Color32  ___MinRandomColor;

/// @brief Field NameUnavailableInWorkerThreadLabel, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___NameUnavailableInWorkerThreadLabel;

/// @brief Field NameUnavailableObjectDestroyedLabel, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___NameUnavailableObjectDestroyedLabel;

/// @brief Field UseColorTags, offset: 0x58, size: 0x1, def value: None
 bool  ___UseColorTags;

/// @brief Field UseGlobalPrefix, offset: 0x59, size: 0x1, def value: None
 bool  ___UseGlobalPrefix;

/// @brief Field DebugPrefix, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___DebugPrefix;

/// @brief Field TracePrefix, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___TracePrefix;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::FusionUnityLoggerBase, ____mainThread) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionUnityLoggerBase, ____mainThreadBuilder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionUnityLoggerBase, ____threadedStringBuilder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionUnityLoggerBase, ___AddHashCodePrefix) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionUnityLoggerBase, ___GlobalPrefix) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionUnityLoggerBase, ___GlobalPrefixColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionUnityLoggerBase, ___MaxRandomColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionUnityLoggerBase, ___MinRandomColor) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionUnityLoggerBase, ___NameUnavailableInWorkerThreadLabel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionUnityLoggerBase, ___NameUnavailableObjectDestroyedLabel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionUnityLoggerBase, ___UseColorTags) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionUnityLoggerBase, ___UseGlobalPrefix) == 0x59, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionUnityLoggerBase, ___DebugPrefix) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionUnityLoggerBase, ___TracePrefix) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Fusion::FusionUnityLoggerBase) == 0x70, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionUnityLoggerBase/<>c
class CORDL_TYPE FusionUnityLoggerBase___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Fusion::FusionUnityLoggerBase___c*  __9;

/// @brief Field <>9__12_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_0, put=setStaticF___9__12_0)) ::System::Func_1<::System::Text::StringBuilder*>*  __9__12_0;

static inline ::Fusion::FusionUnityLoggerBase___c* New_ctor() ;

/// @brief Method <.ctor>b__12_0, addr 0x5f4627c, size 0x54, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* __ctor_b__12_0() ;

/// @brief Method .ctor, addr 0x5f46274, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::FusionUnityLoggerBase___c* getStaticF___9() ;

static inline ::System::Func_1<::System::Text::StringBuilder*>* getStaticF___9__12_0() ;

static inline void setStaticF___9(::Fusion::FusionUnityLoggerBase___c*  value) ;

static inline void setStaticF___9__12_0(::System::Func_1<::System::Text::StringBuilder*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionUnityLoggerBase___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionUnityLoggerBase___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionUnityLoggerBase___c(FusionUnityLoggerBase___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionUnityLoggerBase___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionUnityLoggerBase___c(FusionUnityLoggerBase___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32726};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::FusionUnityLoggerBase___c) == 0x10, "Size mismatch!");

} // namespace end def Fusion
