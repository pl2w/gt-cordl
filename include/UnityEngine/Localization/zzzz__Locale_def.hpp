#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Locale.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
#include "UnityEngine/Pool/zzzz__PooledObject_1_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Locale)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Localization::Metadata {
class IMetadata;
}
namespace UnityEngine::Localization::Metadata {
class MetadataCollection;
}
namespace UnityEngine::Localization {
struct LocaleIdentifier;
}
namespace UnityEngine::Localization {
class Locale__GetFallbacks_d__20;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
struct SystemLanguage;
}
// Forward declare root types
namespace UnityEngine::Localization {
class Locale;
}
namespace UnityEngine::Localization {
class Locale__GetFallbacks_d__20;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Locale*);
MARK_REF_T(::UnityEngine::Localization::Locale__GetFallbacks_d__20*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Locale*, "UnityEngine.Localization", "Locale");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Locale__GetFallbacks_d__20*, "UnityEngine.Localization", "Locale/<GetFallbacks>d__20");
// Dependencies UnityEngine.Localization.LocaleIdentifier, UnityEngine.ScriptableObject
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.Locale
class CORDL_TYPE Locale : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using _GetFallbacks_d__20 = ::UnityEngine::Localization::Locale__GetFallbacks_d__20;

 __declspec(property(get=get_CustomFormatterCode, put=set_CustomFormatterCode)) ::StringW  CustomFormatterCode;

 __declspec(property(get=get_Formatter, put=set_Formatter)) ::System::IFormatProvider*  Formatter;

 __declspec(property(get=get_Identifier, put=set_Identifier)) ::UnityEngine::Localization::LocaleIdentifier  Identifier;

 __declspec(property(get=get_LocaleName, put=set_LocaleName)) ::StringW  LocaleName;

 __declspec(property(get=get_Metadata, put=set_Metadata)) ::UnityEngine::Localization::Metadata::MetadataCollection*  Metadata;

 __declspec(property(get=get_SortOrder, put=set_SortOrder)) uint16_t  SortOrder;

 __declspec(property(get=get_UseCustomFormatter, put=set_UseCustomFormatter)) bool  UseCustomFormatter;

/// @brief Field m_CustomFormatCultureCode, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CustomFormatCultureCode, put=__cordl_internal_set_m_CustomFormatCultureCode)) ::StringW  m_CustomFormatCultureCode;

/// @brief Field m_Formatter, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Formatter, put=__cordl_internal_set_m_Formatter)) ::System::IFormatProvider*  m_Formatter;

/// @brief Field m_Identifier, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_Identifier, put=__cordl_internal_set_m_Identifier)) ::UnityEngine::Localization::LocaleIdentifier  m_Identifier;

/// @brief Field m_LocaleName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LocaleName, put=__cordl_internal_set_m_LocaleName)) ::StringW  m_LocaleName;

/// @brief Field m_Metadata, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Metadata, put=__cordl_internal_set_m_Metadata)) ::UnityEngine::Localization::Metadata::MetadataCollection*  m_Metadata;

/// @brief Field m_SortOrder, offset 0x42, size 0x2 
 __declspec(property(get=__cordl_internal_get_m_SortOrder, put=__cordl_internal_set_m_SortOrder)) uint16_t  m_SortOrder;

/// @brief Field m_UseCustomFormatter, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseCustomFormatter, put=__cordl_internal_set_m_UseCustomFormatter)) bool  m_UseCustomFormatter;

/// @brief Convert operator to "::System::IComparable_1<::UnityW<::UnityEngine::Localization::Locale>>"
constexpr operator  ::System::IComparable_1<::UnityW<::UnityEngine::Localization::Locale>>*() noexcept;

/// @brief Convert operator to "::System::IEquatable_1<::UnityW<::UnityEngine::Localization::Locale>>"
constexpr operator  ::System::IEquatable_1<::UnityW<::UnityEngine::Localization::Locale>>*() noexcept;

/// @brief Convert operator to "::System::IFormatProvider"
constexpr operator  ::System::IFormatProvider*() noexcept;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method CompareTo, addr 0xb00de98, size 0x1a0, virtual true, abstract: false, final true
inline int32_t CompareTo(::UnityEngine::Localization::Locale*  other) ;

/// @brief Method CreateLocale, addr 0xb00dca8, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Localization::Locale> CreateLocale(::StringW  code) ;

/// @brief Method CreateLocale, addr 0xb00de6c, size 0x2c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Localization::Locale> CreateLocale(::System::Globalization::CultureInfo*  cultureInfo) ;

/// @brief Method CreateLocale, addr 0xb00dd78, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Localization::Locale> CreateLocale(::UnityEngine::Localization::LocaleIdentifier  identifier) ;

/// @brief Method CreateLocale, addr 0xb00de28, size 0x44, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Localization::Locale> CreateLocale(::UnityEngine::SystemLanguage  language) ;

/// @brief Method Equals, addr 0xb00e0c8, size 0xcc, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Localization::Locale*  other) ;

/// [Obsolete("GetFallback is obsolete, please use GetFallbacks.")]
/// @brief Method GetFallback, addr 0xb00d978, size 0x11c, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Localization::Locale> GetFallback() ;

/// [IteratorStateMachine(typeof(UnityEngine.Localization.Locale::<GetFallbacks>d__20))]
/// @brief Method GetFallbacks, addr 0xb00da94, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Localization::Locale>>* GetFallbacks() ;

/// @brief Method GetFormatter, addr 0xb00dbd8, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Globalization::CultureInfo* GetFormatter(bool  useCustom, ::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::StringW  customCode) ;

static inline ::UnityEngine::Localization::Locale* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0xb00e038, size 0xc, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xb00e044, size 0x50, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method System.IFormatProvider.GetFormat, addr 0xb00e194, size 0xc0, virtual true, abstract: false, final true
inline ::System::Object* System_IFormatProvider_GetFormat(::System::Type*  formatType) ;

/// @brief Method ToString, addr 0xb00e094, size 0x34, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get_m_CustomFormatCultureCode() const;

constexpr ::StringW& __cordl_internal_get_m_CustomFormatCultureCode() ;

constexpr ::System::IFormatProvider* const& __cordl_internal_get_m_Formatter() const;

constexpr ::System::IFormatProvider*& __cordl_internal_get_m_Formatter() ;

constexpr ::UnityEngine::Localization::LocaleIdentifier const& __cordl_internal_get_m_Identifier() const;

constexpr ::UnityEngine::Localization::LocaleIdentifier& __cordl_internal_get_m_Identifier() ;

constexpr ::StringW const& __cordl_internal_get_m_LocaleName() const;

constexpr ::StringW& __cordl_internal_get_m_LocaleName() ;

constexpr ::UnityEngine::Localization::Metadata::MetadataCollection* const& __cordl_internal_get_m_Metadata() const;

constexpr ::UnityEngine::Localization::Metadata::MetadataCollection*& __cordl_internal_get_m_Metadata() ;

constexpr uint16_t const& __cordl_internal_get_m_SortOrder() const;

constexpr uint16_t& __cordl_internal_get_m_SortOrder() ;

constexpr bool const& __cordl_internal_get_m_UseCustomFormatter() const;

constexpr bool& __cordl_internal_get_m_UseCustomFormatter() ;

constexpr void __cordl_internal_set_m_CustomFormatCultureCode(::StringW  value) ;

constexpr void __cordl_internal_set_m_Formatter(::System::IFormatProvider*  value) ;

constexpr void __cordl_internal_set_m_Identifier(::UnityEngine::Localization::LocaleIdentifier  value) ;

constexpr void __cordl_internal_set_m_LocaleName(::StringW  value) ;

constexpr void __cordl_internal_set_m_Metadata(::UnityEngine::Localization::Metadata::MetadataCollection*  value) ;

constexpr void __cordl_internal_set_m_SortOrder(uint16_t  value) ;

constexpr void __cordl_internal_set_m_UseCustomFormatter(bool  value) ;

/// @brief Method .ctor, addr 0xb00e254, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CustomFormatterCode, addr 0xb00db64, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_CustomFormatterCode() ;

/// @brief Method get_Formatter, addr 0xb00db90, size 0x48, virtual true, abstract: false, final false
inline ::System::IFormatProvider* get_Formatter() ;

/// @brief Method get_Identifier, addr 0xb00d8b8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocaleIdentifier get_Identifier() ;

/// @brief Method get_LocaleName, addr 0xb00d8f0, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_LocaleName() ;

/// @brief Method get_Metadata, addr 0xb00d8d0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Metadata::MetadataCollection* get_Metadata() ;

/// @brief Method get_SortOrder, addr 0xb00d8e0, size 0x8, virtual false, abstract: false, final false
inline uint16_t get_SortOrder() ;

/// @brief Method get_UseCustomFormatter, addr 0xb00db48, size 0x8, virtual false, abstract: false, final false
inline bool get_UseCustomFormatter() ;

/// @brief Convert to "::System::IComparable_1<::UnityW<::UnityEngine::Localization::Locale>>"
constexpr ::System::IComparable_1<::UnityW<::UnityEngine::Localization::Locale>>* i___System__IComparable_1___UnityW___UnityEngine__Localization__Locale__() noexcept;

/// @brief Convert to "::System::IEquatable_1<::UnityW<::UnityEngine::Localization::Locale>>"
constexpr ::System::IEquatable_1<::UnityW<::UnityEngine::Localization::Locale>>* i___System__IEquatable_1___UnityW___UnityEngine__Localization__Locale__() noexcept;

/// @brief Convert to "::System::IFormatProvider"
constexpr ::System::IFormatProvider* i___System__IFormatProvider() noexcept;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Method set_CustomFormatterCode, addr 0xb00db6c, size 0x24, virtual false, abstract: false, final false
inline void set_CustomFormatterCode(::StringW  value) ;

/// @brief Method set_Formatter, addr 0xb00dca0, size 0x8, virtual true, abstract: false, final false
inline void set_Formatter(::System::IFormatProvider*  value) ;

/// @brief Method set_Identifier, addr 0xb00d8c4, size 0xc, virtual false, abstract: false, final false
inline void set_Identifier(::UnityEngine::Localization::LocaleIdentifier  value) ;

/// @brief Method set_LocaleName, addr 0xb00d970, size 0x8, virtual false, abstract: false, final false
inline void set_LocaleName(::StringW  value) ;

/// @brief Method set_Metadata, addr 0xb00d8d8, size 0x8, virtual false, abstract: false, final false
inline void set_Metadata(::UnityEngine::Localization::Metadata::MetadataCollection*  value) ;

/// @brief Method set_SortOrder, addr 0xb00d8e8, size 0x8, virtual false, abstract: false, final false
inline void set_SortOrder(uint16_t  value) ;

/// @brief Method set_UseCustomFormatter, addr 0xb00db50, size 0x14, virtual false, abstract: false, final false
inline void set_UseCustomFormatter(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Locale() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Locale", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Locale(Locale && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Locale", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Locale(Locale const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25019};

/// [SerializeField]
/// @brief Field m_Identifier, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Localization::LocaleIdentifier  ___m_Identifier;

/// [SerializeField]
/// [MetadataType((UnityEngine.Localization.Metadata.MetadataType)1)]
/// @brief Field m_Metadata, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Localization::Metadata::MetadataCollection*  ___m_Metadata;

/// [SerializeField]
/// @brief Field m_LocaleName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___m_LocaleName;

/// [SerializeField]
/// @brief Field m_CustomFormatCultureCode, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___m_CustomFormatCultureCode;

/// [SerializeField]
/// @brief Field m_UseCustomFormatter, offset: 0x40, size: 0x1, def value: None
 bool  ___m_UseCustomFormatter;

/// [SerializeField]
/// @brief Field m_SortOrder, offset: 0x42, size: 0x2, def value: None
 uint16_t  ___m_SortOrder;

/// @brief Field m_Formatter, offset: 0x48, size: 0x8, def value: None
 ::System::IFormatProvider*  ___m_Formatter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Locale, ___m_Identifier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Locale, ___m_Metadata) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Locale, ___m_LocaleName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Locale, ___m_CustomFormatCultureCode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Locale, ___m_UseCustomFormatter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Locale, ___m_SortOrder) == 0x42, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Locale, ___m_Formatter) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Locale) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::Localization
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Pool.PooledObject`1<T>
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.Locale/<GetFallbacks>d__20
class CORDL_TYPE Locale__GetFallbacks_d__20 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_Localization_Locale__get_Current)) ::UnityW<::UnityEngine::Localization::Locale>  System_Collections_Generic_IEnumerator_UnityEngine_Localization_Locale__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::UnityW<::UnityEngine::Localization::Locale>  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::UnityEngine::Localization::Locale>  __4__this;

/// @brief Field <>7__wrap2, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get___7__wrap2, put=__cordl_internal_set___7__wrap2)) ::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>*>  __7__wrap2;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <entries>5__4, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__entries_5__4, put=__cordl_internal_set__entries_5__4)) ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>*  _entries_5__4;

/// @brief Field <i>5__5, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__5, put=__cordl_internal_set__i_5__5)) int32_t  _i_5__5;

/// @brief Field <processedLocales>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__processedLocales_5__2, put=__cordl_internal_set__processedLocales_5__2)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>*  _processedLocales_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Localization::Locale>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Localization::Locale>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Localization::Locale>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Localization::Locale>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb00e2f4, size 0x648, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::Localization::Locale__GetFallbacks_d__20* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Localization.Locale>.GetEnumerator, addr 0xb00e9f4, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Localization::Locale>>* System_Collections_Generic_IEnumerable_UnityEngine_Localization_Locale__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Localization.Locale>.get_Current, addr 0xb00e9ac, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Localization::Locale> System_Collections_Generic_IEnumerator_UnityEngine_Localization_Locale__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb00ea98, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb00e9b4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb00e9ec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb00e2c8, size 0x2c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityW<::UnityEngine::Localization::Locale> const& __cordl_internal_get___2__current() const;

constexpr ::UnityW<::UnityEngine::Localization::Locale>& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::UnityEngine::Localization::Locale> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::UnityEngine::Localization::Locale>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>*> const& __cordl_internal_get___7__wrap2() const;

constexpr ::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>*>& __cordl_internal_get___7__wrap2() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>* const& __cordl_internal_get__entries_5__4() const;

constexpr ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>*& __cordl_internal_get__entries_5__4() ;

constexpr int32_t const& __cordl_internal_get__i_5__5() const;

constexpr int32_t& __cordl_internal_get__i_5__5() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>* const& __cordl_internal_get__processedLocales_5__2() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>*& __cordl_internal_get__processedLocales_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::UnityW<::UnityEngine::Localization::Locale>  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::Localization::Locale>  value) ;

constexpr void __cordl_internal_set___7__wrap2(::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>*>  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__entries_5__4(::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>*  value) ;

constexpr void __cordl_internal_set__i_5__5(int32_t  value) ;

constexpr void __cordl_internal_set__processedLocales_5__2(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>*  value) ;

/// @brief Method <>m__Finally1, addr 0xb00e95c, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb00db14, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Localization::Locale>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Localization::Locale>>* i___System__Collections__Generic__IEnumerable_1___UnityW___UnityEngine__Localization__Locale__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Localization::Locale>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Localization::Locale>>* i___System__Collections__Generic__IEnumerator_1___UnityW___UnityEngine__Localization__Locale__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Locale__GetFallbacks_d__20() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Locale__GetFallbacks_d__20", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Locale__GetFallbacks_d__20(Locale__GetFallbacks_d__20 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Locale__GetFallbacks_d__20", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Locale__GetFallbacks_d__20(Locale__GetFallbacks_d__20 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25018};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::Locale>  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::Locale>  _____4__this;

/// @brief Field <processedLocales>5__2, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>*  ____processedLocales_5__2;

/// @brief Field <>7__wrap2, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>*>  _____7__wrap2;

/// @brief Field <entries>5__4, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>*  ____entries_5__4;

/// @brief Field <i>5__5, offset: 0x50, size: 0x4, def value: None
 int32_t  ____i_5__5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Locale__GetFallbacks_d__20, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Locale__GetFallbacks_d__20, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Locale__GetFallbacks_d__20, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Locale__GetFallbacks_d__20, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Locale__GetFallbacks_d__20, ____processedLocales_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Locale__GetFallbacks_d__20, _____7__wrap2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Locale__GetFallbacks_d__20, ____entries_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Locale__GetFallbacks_d__20, ____i_5__5) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Locale__GetFallbacks_d__20) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine::Localization
