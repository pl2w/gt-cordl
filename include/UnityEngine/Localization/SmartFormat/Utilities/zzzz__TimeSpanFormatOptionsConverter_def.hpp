#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Utilities/TimeSpanFormatOptionsConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Utilities/zzzz__TimeSpanFormatOptions_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpanFormatOptionsConverter)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Localization::SmartFormat::Utilities {
class TimeSpanFormatOptionsConverter__AllFlags_d__3;
}
namespace UnityEngine::Localization::SmartFormat::Utilities {
struct TimeSpanFormatOptions;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Utilities {
class TimeSpanFormatOptionsConverter;
}
namespace UnityEngine::Localization::SmartFormat::Utilities {
class TimeSpanFormatOptionsConverter__AllFlags_d__3;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter*, "UnityEngine.Localization.SmartFormat.Utilities", "TimeSpanFormatOptionsConverter");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3*, "UnityEngine.Localization.SmartFormat.Utilities", "TimeSpanFormatOptionsConverter/<AllFlags>d__3");
// [Extension]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Utilities {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptionsConverter
class CORDL_TYPE TimeSpanFormatOptionsConverter : public ::System::Object {
public:
// Declarations
using _AllFlags_d__3 = ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3;

/// @brief Field parser, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_parser, put=setStaticF_parser)) ::System::Text::RegularExpressions::Regex*  parser;

/// [IteratorStateMachine(typeof(UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptionsConverter::<AllFlags>d__3))]
/// [Extension]
/// @brief Method AllFlags, addr 0xb035d58, size 0x74, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>* AllFlags(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  timeSpanFormatOptions) ;

/// [Extension]
/// @brief Method Mask, addr 0xb035d50, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions Mask(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  timeSpanFormatOptions, ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  mask) ;

/// [Extension]
/// @brief Method Merge, addr 0xb035c88, size 0xc8, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions Merge(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  left, ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  right) ;

/// @brief Method Parse, addr 0xb036058, size 0x9f0, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions Parse(::StringW  formatOptionsString) ;

static inline ::System::Text::RegularExpressions::Regex* getStaticF_parser() ;

static inline void setStaticF_parser(::System::Text::RegularExpressions::Regex*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeSpanFormatOptionsConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanFormatOptionsConverter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeSpanFormatOptionsConverter(TimeSpanFormatOptionsConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanFormatOptionsConverter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeSpanFormatOptionsConverter(TimeSpanFormatOptionsConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25164};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Utilities
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptions
namespace UnityEngine::Localization::SmartFormat::Utilities {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptionsConverter/<AllFlags>d__3
class CORDL_TYPE TimeSpanFormatOptionsConverter__AllFlags_d__3 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_Localization_SmartFormat_Utilities_TimeSpanFormatOptions__get_Current)) ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  System_Collections_Generic_IEnumerator_UnityEngine_Localization_SmartFormat_Utilities_TimeSpanFormatOptions__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  __2__current;

/// @brief Field <>3__timeSpanFormatOptions, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___3__timeSpanFormatOptions, put=__cordl_internal_set___3__timeSpanFormatOptions)) ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  __3__timeSpanFormatOptions;

/// @brief Field <>l__initialThreadId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <value>5__2, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__value_5__2, put=__cordl_internal_set__value_5__2)) uint32_t  _value_5__2;

/// @brief Field timeSpanFormatOptions, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeSpanFormatOptions, put=__cordl_internal_set_timeSpanFormatOptions)) ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  timeSpanFormatOptions;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb036aec, size 0x64, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptions>.GetEnumerator, addr 0xb036bec, size 0x9c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>* System_Collections_Generic_IEnumerable_UnityEngine_Localization_SmartFormat_Utilities_TimeSpanFormatOptions__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptions>.get_Current, addr 0xb036b50, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions System_Collections_Generic_IEnumerator_UnityEngine_Localization_SmartFormat_Utilities_TimeSpanFormatOptions__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb036c88, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb036b58, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb036b90, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb036ae8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const& __cordl_internal_get___2__current() const;

constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions& __cordl_internal_get___2__current() ;

constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const& __cordl_internal_get___3__timeSpanFormatOptions() const;

constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions& __cordl_internal_get___3__timeSpanFormatOptions() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr uint32_t const& __cordl_internal_get__value_5__2() const;

constexpr uint32_t& __cordl_internal_get__value_5__2() ;

constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const& __cordl_internal_get_timeSpanFormatOptions() const;

constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions& __cordl_internal_get_timeSpanFormatOptions() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  value) ;

constexpr void __cordl_internal_set___3__timeSpanFormatOptions(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__value_5__2(uint32_t  value) ;

constexpr void __cordl_internal_set_timeSpanFormatOptions(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb036024, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__Localization__SmartFormat__Utilities__TimeSpanFormatOptions_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>* i___System__Collections__Generic__IEnumerator_1___UnityEngine__Localization__SmartFormat__Utilities__TimeSpanFormatOptions_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeSpanFormatOptionsConverter__AllFlags_d__3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanFormatOptionsConverter__AllFlags_d__3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeSpanFormatOptionsConverter__AllFlags_d__3(TimeSpanFormatOptionsConverter__AllFlags_d__3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanFormatOptionsConverter__AllFlags_d__3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeSpanFormatOptionsConverter__AllFlags_d__3(TimeSpanFormatOptionsConverter__AllFlags_d__3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25163};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x14, size: 0x4, def value: None
 ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x18, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field timeSpanFormatOptions, offset: 0x1c, size: 0x4, def value: None
 ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  ___timeSpanFormatOptions;

/// @brief Field <>3__timeSpanFormatOptions, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  _____3__timeSpanFormatOptions;

/// @brief Field <value>5__2, offset: 0x24, size: 0x4, def value: None
 uint32_t  ____value_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3, _____l__initialThreadId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3, ___timeSpanFormatOptions) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3, _____3__timeSpanFormatOptions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3, ____value_5__2) == 0x24, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptionsConverter__AllFlags_d__3) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Utilities
