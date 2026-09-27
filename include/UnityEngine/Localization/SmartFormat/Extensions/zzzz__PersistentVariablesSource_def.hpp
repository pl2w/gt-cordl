#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/PersistentVariablesSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary`2_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PersistentVariablesSource)
namespace GlobalNamespace {
struct PersistentVariablesSource_ScopedUpdate;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
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
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class ISelectorInfo;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class ISource;
}
namespace UnityEngine::Localization::SmartFormat::Extensions {
class PersistentVariablesSource_NameValuePair;
}
namespace UnityEngine::Localization::SmartFormat::Extensions {
class PersistentVariablesSource__GetEnumerator_d__35;
}
namespace UnityEngine::Localization::SmartFormat::Extensions {
class PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34;
}
namespace UnityEngine::Localization::SmartFormat::Extensions {
class PersistentVariablesSource___c;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariableGroup;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class VariablesGroupAsset;
}
namespace UnityEngine::Localization::SmartFormat {
class SmartFormatter;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Extensions {
class PersistentVariablesSource;
}
namespace UnityEngine::Localization::SmartFormat::Extensions {
class PersistentVariablesSource_NameValuePair;
}
namespace UnityEngine::Localization::SmartFormat::Extensions {
class PersistentVariablesSource__GetEnumerator_d__35;
}
namespace UnityEngine::Localization::SmartFormat::Extensions {
class PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34;
}
namespace UnityEngine::Localization::SmartFormat::Extensions {
class PersistentVariablesSource___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*, "UnityEngine.Localization.SmartFormat.Extensions", "PersistentVariablesSource");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*, "UnityEngine.Localization.SmartFormat.Extensions", "PersistentVariablesSource/NameValuePair");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35*, "UnityEngine.Localization.SmartFormat.Extensions", "PersistentVariablesSource/<GetEnumerator>d__35");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34*, "UnityEngine.Localization.SmartFormat.Extensions", "PersistentVariablesSource/<System-Collections-Generic-IEnumerable<System-Collections-Generic-KeyValuePair<System-String,UnityEngine-Localization-SmartFormat-PersistentVariables-VariablesGroupAsset>>-GetEnumerator>d__34");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c*, "UnityEngine.Localization.SmartFormat.Extensions", "PersistentVariablesSource/<>c");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.PersistentVariablesSource
class CORDL_TYPE PersistentVariablesSource : public ::System::Object {
public:
// Declarations
using ScopedUpdate = ::GlobalNamespace::PersistentVariablesSource_ScopedUpdate;

using NameValuePair = ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair;

using _GetEnumerator_d__35 = ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35;

using _System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34 = ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34;

using __c = ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c;

 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Field EndUpdate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EndUpdate, put=setStaticF_EndUpdate)) ::System::Action*  EndUpdate;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>  Item[];

 __declspec(property(get=get_Keys)) ::System::Collections::Generic::ICollection_1<::StringW>*  Keys;

 __declspec(property(get=get_Values)) ::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>*  Values;

/// @brief Field m_GroupLookup, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GroupLookup, put=__cordl_internal_set_m_GroupLookup)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>*  m_GroupLookup;

/// @brief Field m_Groups, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Groups, put=__cordl_internal_set_m_Groups)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>*  m_Groups;

/// @brief Field s_IsUpdating, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_IsUpdating, put=setStaticF_s_IsUpdating)) int32_t  s_IsUpdating;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>"
constexpr operator  ::System::Collections::Generic::IDictionary_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource"
constexpr operator  ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*() noexcept;

/// @brief Method Add, addr 0xb03f458, size 0x60, virtual true, abstract: false, final true
inline void Add(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>  item) ;

/// @brief Method Add, addr 0xb03ee2c, size 0x264, virtual true, abstract: false, final true
inline void Add(::StringW  name, ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*  group) ;

/// @brief Method BeginUpdating, addr 0xb03f208, size 0x50, virtual false, abstract: false, final false
static inline void BeginUpdating() ;

/// @brief Method Clear, addr 0xb03f5c4, size 0x94, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0xb03f6b0, size 0xb0, virtual true, abstract: false, final true
inline bool Contains(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>  item) ;

/// @brief Method ContainsKey, addr 0xb03f658, size 0x58, virtual true, abstract: false, final true
inline bool ContainsKey(::StringW  name) ;

/// @brief Method CopyTo, addr 0xb03f760, size 0x1c4, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>  array, int32_t  arrayIndex) ;

/// @brief Method EndUpdating, addr 0xb03f258, size 0xcc, virtual false, abstract: false, final false
static inline void EndUpdating() ;

/// @brief Method EvaluateLocalGroup, addr 0xb03fd18, size 0x350, virtual false, abstract: false, final false
static inline bool EvaluateLocalGroup(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  selectorInfo, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  variablleGroup) ;

/// [IteratorStateMachine(typeof(UnityEngine.Localization.SmartFormat.Extensions.PersistentVariablesSource::<GetEnumerator>d__35))]
/// @brief Method GetEnumerator, addr 0xb03f9b8, size 0x6c, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* GetEnumerator() ;

static inline ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource* New_ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter) ;

/// @brief Method OnAfterDeserialize, addr 0xb04006c, size 0x1f4, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xb040068, size 0x4, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method Remove, addr 0xb03f580, size 0x44, virtual true, abstract: false, final true
inline bool Remove(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>  item) ;

/// @brief Method Remove, addr 0xb03f4b8, size 0xc8, virtual true, abstract: false, final true
inline bool Remove(::StringW  name) ;

/// [IteratorStateMachine(typeof(UnityEngine.Localization.SmartFormat.Extensions.PersistentVariablesSource::<System-Collections-Generic-IEnumerable<System-Collections-Generic-KeyValuePair<System-String,UnityEngine-Localization-SmartFormat-PersistentVariables-VariablesGroupAsset>>-GetEnumerator>d__34))]
/// @brief Method System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,UnityEngine.Localization.SmartFormat.PersistentVariables.VariablesGroupAsset>>.GetEnumerator, addr 0xb03f924, size 0x6c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>* System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator() ;

/// @brief Method TryEvaluateSelector, addr 0xb03fa4c, size 0x2cc, virtual true, abstract: false, final true
inline bool TryEvaluateSelector(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  selectorInfo) ;

/// @brief Method TryGetValue, addr 0xb03f3b4, size 0x9c, virtual true, abstract: false, final true
inline bool TryGetValue(::StringW  name, ::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*>  value) ;

/// @brief Method UpdateScope, addr 0xb03f324, size 0x90, virtual false, abstract: false, final false
static inline ::System::IDisposable* UpdateScope() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>* const& __cordl_internal_get_m_GroupLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>*& __cordl_internal_get_m_GroupLookup() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>* const& __cordl_internal_get_m_Groups() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>*& __cordl_internal_get_m_Groups() ;

constexpr void __cordl_internal_set_m_GroupLookup(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>*  value) ;

constexpr void __cordl_internal_set_m_Groups(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>*  value) ;

/// @brief Method .ctor, addr 0xb027ee8, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter) ;

/// [CompilerGenerated]
/// @brief Method add_EndUpdate, addr 0xb03f090, size 0xbc, virtual false, abstract: false, final false
static inline void add_EndUpdate(::System::Action*  value) ;

static inline ::System::Action* getStaticF_EndUpdate() ;

static inline int32_t getStaticF_s_IsUpdating() ;

/// @brief Method get_Count, addr 0xb03ebd4, size 0x48, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsReadOnly, addr 0xb03ec1c, size 0x8, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Method get_IsUpdating, addr 0xb03eb84, size 0x50, virtual false, abstract: false, final false
static inline bool get_IsUpdating() ;

/// @brief Method get_Item, addr 0xb03edc4, size 0x64, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset> get_Item(::StringW  name) ;

/// @brief Method get_Keys, addr 0xb03ec24, size 0x50, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<::StringW>* get_Keys() ;

/// @brief Method get_Values, addr 0xb03ec74, size 0x150, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>* get_Values() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>* i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2___StringW___UnityW___UnityEngine__Localization__SmartFormat__PersistentVariables__VariablesGroupAsset___() noexcept;

/// @brief Convert to "::System::Collections::Generic::IDictionary_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>"
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>* i___System__Collections__Generic__IDictionary_2___StringW___UnityW___UnityEngine__Localization__SmartFormat__PersistentVariables__VariablesGroupAsset__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>* i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___UnityW___UnityEngine__Localization__SmartFormat__PersistentVariables__VariablesGroupAsset___() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource* i___UnityEngine__Localization__SmartFormat__Core__Extensions__ISource() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_EndUpdate, addr 0xb03f14c, size 0xbc, virtual false, abstract: false, final false
static inline void remove_EndUpdate(::System::Action*  value) ;

static inline void setStaticF_EndUpdate(::System::Action*  value) ;

static inline void setStaticF_s_IsUpdating(int32_t  value) ;

/// @brief Method set_Item, addr 0xb03ee28, size 0x4, virtual true, abstract: false, final true
inline void set_Item(::StringW  name, ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PersistentVariablesSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PersistentVariablesSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PersistentVariablesSource(PersistentVariablesSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PersistentVariablesSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PersistentVariablesSource(PersistentVariablesSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25196};

/// [SerializeField]
/// @brief Field m_Groups, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>*  ___m_Groups;

/// @brief Field m_GroupLookup, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>*  ___m_GroupLookup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource, ___m_Groups) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource, ___m_GroupLookup) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Extensions
// [CompilerGenerated]
// Dependencies System.Collections.Generic.Dictionary`2::Enumerator<TKey, TValue>, System.Collections.Generic.KeyValuePair`2<TKey, TValue>, System.Object
namespace UnityEngine::Localization::SmartFormat::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.PersistentVariablesSource/<System-Collections-Generic-IEnumerable<System-Collections-Generic-KeyValuePair<System-String,UnityEngine-Localization-SmartFormat-PersistentVariables-VariablesGroupAsset>>-GetEnumerator>d__34
class CORDL_TYPE PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___get_Current)) ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>  System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*  __4__this;

/// @brief Field <>7__wrap1, offset 0x30, size 0x28 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>  __7__wrap1;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb0405ec, size 0x20c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,UnityEngine.Localization.SmartFormat.PersistentVariables.VariablesGroupAsset>>.get_Current, addr 0xb040848, size 0xc, virtual true, abstract: false, final true
inline ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb040854, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb04088c, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb0405d0, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>> const& __cordl_internal_get___2__current() const;

constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>& __cordl_internal_get___2__current() ;

constexpr ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource* const& __cordl_internal_get___4__this() const;

constexpr ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*> const& __cordl_internal_get___7__wrap1() const;

constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>& __cordl_internal_get___7__wrap1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>  value) ;

constexpr void __cordl_internal_set___4__this(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*  value) ;

constexpr void __cordl_internal_set___7__wrap1(::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>  value) ;

/// @brief Method <>m__Finally1, addr 0xb0407f8, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb03f990, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>>* i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___UnityW___UnityEngine__Localization__SmartFormat__PersistentVariables__VariablesGroupAsset___() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34(PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34(PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25195};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
 ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>  _____2__current;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x28, def value: None
 ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_VariablesGroupAsset___GetEnumerator_d__34) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Extensions
// [CompilerGenerated]
// Dependencies System.Collections.Generic.Dictionary`2::Enumerator<TKey, TValue>, System.Object
namespace UnityEngine::Localization::SmartFormat::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.PersistentVariablesSource/<GetEnumerator>d__35
class CORDL_TYPE PersistentVariablesSource__GetEnumerator_d__35 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*  __4__this;

/// @brief Field <>7__wrap1, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>  __7__wrap1;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb040304, size 0x234, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xb040588, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb040590, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb0405c8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb0402e8, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource* const& __cordl_internal_get___4__this() const;

constexpr ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*> const& __cordl_internal_get___7__wrap1() const;

constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>& __cordl_internal_get___7__wrap1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*  value) ;

constexpr void __cordl_internal_set___7__wrap1(::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>  value) ;

/// @brief Method <>m__Finally1, addr 0xb040538, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb03fa24, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PersistentVariablesSource__GetEnumerator_d__35() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PersistentVariablesSource__GetEnumerator_d__35", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PersistentVariablesSource__GetEnumerator_d__35(PersistentVariablesSource__GetEnumerator_d__35 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PersistentVariablesSource__GetEnumerator_d__35", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PersistentVariablesSource__GetEnumerator_d__35(PersistentVariablesSource__GetEnumerator_d__35 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25194};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource*  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x28, size: 0x28, def value: None
 ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*>  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35, _____7__wrap1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource__GetEnumerator_d__35) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Extensions
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.PersistentVariablesSource/<>c
class CORDL_TYPE PersistentVariablesSource___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c*  __9;

/// @brief Field <>9__14_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_0, put=setStaticF___9__14_0)) ::System::Func_2<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>*  __9__14_0;

static inline ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c* New_ctor() ;

/// @brief Method .ctor, addr 0xb0402cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_Values>b__14_0, addr 0xb0402d4, size 0x14, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset> _get_Values_b__14_0(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*  k) ;

static inline ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>* getStaticF___9__14_0() ;

static inline void setStaticF___9(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c*  value) ;

static inline void setStaticF___9__14_0(::System::Func_2<::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair*,::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PersistentVariablesSource___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PersistentVariablesSource___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PersistentVariablesSource___c(PersistentVariablesSource___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PersistentVariablesSource___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PersistentVariablesSource___c(PersistentVariablesSource___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25193};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Extensions
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.PersistentVariablesSource/NameValuePair
class CORDL_TYPE PersistentVariablesSource_NameValuePair : public ::System::Object {
public:
// Declarations
/// @brief Field group, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_group, put=__cordl_internal_set_group)) ::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>  group;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

static inline ::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset> const& __cordl_internal_get_group() const;

constexpr ::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>& __cordl_internal_get_group() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_group(::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0xb03f450, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PersistentVariablesSource_NameValuePair() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PersistentVariablesSource_NameValuePair", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PersistentVariablesSource_NameValuePair(PersistentVariablesSource_NameValuePair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PersistentVariablesSource_NameValuePair", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PersistentVariablesSource_NameValuePair(PersistentVariablesSource_NameValuePair const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25191};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// [SerializeReference]
/// @brief Field group, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>  ___group;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair, ___group) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Extensions::PersistentVariablesSource_NameValuePair) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Extensions
