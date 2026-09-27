#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSerializableDict_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GTSerializableDict_2)
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class GTSerializableDict_2___c;
}
namespace GlobalNamespace {
template<typename T1,typename T2>
struct GTSerializableKeyValue_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class GTSerializableDict_2;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class GTSerializableDict_2___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::GTSerializableDict_2);
MARK_GEN_REF_T_PTR(::GlobalNamespace::GTSerializableDict_2___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::GTSerializableDict_2, "", "GTSerializableDict`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::GTSerializableDict_2___c, "", "GTSerializableDict`2/<>c");
// Dependencies System.Collections.Generic.Dictionary`2<TKey, TValue>
namespace GlobalNamespace {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// CS Name: GTSerializableDict`2<TKey,TValue>
class CORDL_TYPE GTSerializableDict_2 : public ::System::Collections::Generic::Dictionary_2<TKey,TValue> {
public:
// Declarations
using __c = ::GlobalNamespace::GTSerializableDict_2___c<TKey, TValue>;

/// @brief Field _m_serializedEntries, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__m_serializedEntries, put=__cordl_internal_set__m_serializedEntries)) ::System::Collections::Generic::List_1<::GlobalNamespace::GTSerializableKeyValue_2<TKey,TValue>>*  _m_serializedEntries;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

static inline ::GlobalNamespace::GTSerializableDict_2<TKey,TValue>* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTSerializableKeyValue_2<TKey,TValue>>* const& __cordl_internal_get__m_serializedEntries() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTSerializableKeyValue_2<TKey,TValue>>*& __cordl_internal_get__m_serializedEntries() ;

constexpr void __cordl_internal_set__m_serializedEntries(::System::Collections::Generic::List_1<::GlobalNamespace::GTSerializableKeyValue_2<TKey,TValue>>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTSerializableDict_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTSerializableDict_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTSerializableDict_2(GTSerializableDict_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTSerializableDict_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTSerializableDict_2(GTSerializableDict_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{900};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field _m_serializedEntries, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GTSerializableKeyValue_2<TKey,TValue>>*  ____m_serializedEntries;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// CS Name: GTSerializableDict`2/<>c<TKey,TValue>
class CORDL_TYPE GTSerializableDict_2___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::GTSerializableDict_2___c<TKey,TValue>*  __9;

/// @brief Field <>9__1_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__1_0, put=setStaticF___9__1_0)) ::System::Comparison_1<::GlobalNamespace::GTSerializableKeyValue_2<TKey,TValue>>*  __9__1_0;

static inline ::GlobalNamespace::GTSerializableDict_2___c<TKey,TValue>* New_ctor() ;

/// @brief Method <OnBeforeSerialize>b__1_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t _OnBeforeSerialize_b__1_0(::GlobalNamespace::GTSerializableKeyValue_2<TKey,TValue>  entry1, ::GlobalNamespace::GTSerializableKeyValue_2<TKey,TValue>  entry2) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::GTSerializableDict_2___c<TKey,TValue>* getStaticF___9() ;

static inline ::System::Comparison_1<::GlobalNamespace::GTSerializableKeyValue_2<TKey,TValue>>* getStaticF___9__1_0() ;

static inline void setStaticF___9(::GlobalNamespace::GTSerializableDict_2___c<TKey,TValue>*  value) ;

static inline void setStaticF___9__1_0(::System::Comparison_1<::GlobalNamespace::GTSerializableKeyValue_2<TKey,TValue>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTSerializableDict_2___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTSerializableDict_2___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTSerializableDict_2___c(GTSerializableDict_2___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTSerializableDict_2___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTSerializableDict_2___c(GTSerializableDict_2___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{899};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
