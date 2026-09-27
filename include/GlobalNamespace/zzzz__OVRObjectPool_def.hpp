#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRObjectPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OVRObjectPool)
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct OVRObjectPool_DictionaryScope_2;
}
namespace GlobalNamespace {
template<typename T>
struct OVRObjectPool_HashSetScope_1;
}
namespace GlobalNamespace {
class OVRObjectPool_IPoolObject;
}
namespace GlobalNamespace {
template<typename T>
struct OVRObjectPool_ItemScope_1;
}
namespace GlobalNamespace {
template<typename T>
struct OVRObjectPool_ListScope_1;
}
namespace GlobalNamespace {
template<typename T>
struct OVRObjectPool_QueueScope_1;
}
namespace GlobalNamespace {
template<typename T>
struct OVRObjectPool_StackScope_1;
}
namespace GlobalNamespace {
template<typename T>
class OVRObjectPool_Storage_1;
}
namespace GlobalNamespace {
template<typename T>
struct OVRObjectPool_TaskScope_1;
}
namespace GlobalNamespace {
template<typename T>
class Storage_1_OVRObjectPool___c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
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
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRObjectPool;
}
namespace GlobalNamespace {
class OVRObjectPool_IPoolObject;
}
namespace GlobalNamespace {
template<typename T>
class OVRObjectPool_Storage_1;
}
namespace GlobalNamespace {
template<typename T>
class Storage_1_OVRObjectPool___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRObjectPool*);
MARK_REF_T(::GlobalNamespace::OVRObjectPool_IPoolObject*);
MARK_GEN_REF_T_PTR(::GlobalNamespace::OVRObjectPool_Storage_1);
MARK_GEN_REF_T_PTR(::GlobalNamespace::Storage_1_OVRObjectPool___c);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRObjectPool*, "", "OVRObjectPool");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRObjectPool_IPoolObject*, "", "OVRObjectPool/IPoolObject");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::OVRObjectPool_Storage_1, "", "OVRObjectPool/Storage`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::Storage_1_OVRObjectPool___c, "", "OVRObjectPool/Storage`1/<>c");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRObjectPool
class CORDL_TYPE OVRObjectPool : public ::System::Object {
public:
// Declarations
template<typename TKey,typename TValue>
using DictionaryScope_2 = ::GlobalNamespace::OVRObjectPool_DictionaryScope_2<TKey, TValue>;

template<typename T>
using HashSetScope_1 = ::GlobalNamespace::OVRObjectPool_HashSetScope_1<T>;

using IPoolObject = ::GlobalNamespace::OVRObjectPool_IPoolObject;

template<typename T>
using ItemScope_1 = ::GlobalNamespace::OVRObjectPool_ItemScope_1<T>;

template<typename T>
using ListScope_1 = ::GlobalNamespace::OVRObjectPool_ListScope_1<T>;

template<typename T>
using QueueScope_1 = ::GlobalNamespace::OVRObjectPool_QueueScope_1<T>;

template<typename T>
using StackScope_1 = ::GlobalNamespace::OVRObjectPool_StackScope_1<T>;

template<typename T>
using Storage_1 = ::GlobalNamespace::OVRObjectPool_Storage_1<T>;

template<typename T>
using TaskScope_1 = ::GlobalNamespace::OVRObjectPool_TaskScope_1<T>;

/// @brief Method Dictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TKey,typename TValue>
static inline ::System::Collections::Generic::Dictionary_2<TKey,TValue>* Dictionary() ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T Get() ;

/// @brief Method HashSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::HashSet_1<T>* HashSet() ;

/// @brief Method List, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* List() ;

/// @brief Method List, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* List(::System::Collections::Generic::IEnumerable_1<T>*  source) ;

/// @brief Method Queue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::Queue_1<T>* Queue() ;

/// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void Return(T  obj) ;

/// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Return(::System::Collections::Generic::Queue_1<T>*  queue) ;

/// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Return(::System::Collections::Generic::HashSet_1<T>*  set) ;

/// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Return(::System::Collections::Generic::Stack_1<T>*  stack) ;

/// @brief Method Stack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::Stack_1<T>* Stack() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRObjectPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRObjectPool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRObjectPool(OVRObjectPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRObjectPool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRObjectPool(OVRObjectPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12691};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRObjectPool) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: OVRObjectPool/Storage`1<T>
class CORDL_TYPE OVRObjectPool_Storage_1 : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::Storage_1_OVRObjectPool___c<T>;

/// @brief Field Clear, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Clear, put=setStaticF_Clear)) ::System::Action*  Clear;

/// @brief Field s_hashSet, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_hashSet, put=setStaticF_s_hashSet)) ::System::Collections::Generic::HashSet_1<T>*  s_hashSet;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool Add(T  item) ;

/// @brief Method GetOrCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T GetOrCreate() ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool Remove(T  item) ;

static inline ::System::Action* getStaticF_Clear() ;

static inline ::System::Collections::Generic::HashSet_1<T>* getStaticF_s_hashSet() ;

static inline void setStaticF_Clear(::System::Action*  value) ;

static inline void setStaticF_s_hashSet(::System::Collections::Generic::HashSet_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRObjectPool_Storage_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRObjectPool_Storage_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRObjectPool_Storage_1(OVRObjectPool_Storage_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRObjectPool_Storage_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRObjectPool_Storage_1(OVRObjectPool_Storage_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12683};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: OVRObjectPool/Storage`1/<>c<T>
class CORDL_TYPE Storage_1_OVRObjectPool___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::Storage_1_OVRObjectPool___c<T>*  __9;

static inline ::GlobalNamespace::Storage_1_OVRObjectPool___c<T>* New_ctor() ;

/// @brief Method <.cctor>b__5_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __cctor_b__5_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::Storage_1_OVRObjectPool___c<T>* getStaticF___9() ;

static inline void setStaticF___9(::GlobalNamespace::Storage_1_OVRObjectPool___c<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Storage_1_OVRObjectPool___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Storage_1_OVRObjectPool___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Storage_1_OVRObjectPool___c(Storage_1_OVRObjectPool___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Storage_1_OVRObjectPool___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Storage_1_OVRObjectPool___c(Storage_1_OVRObjectPool___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12682};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRObjectPool/IPoolObject
class CORDL_TYPE OVRObjectPool_IPoolObject {
public:
// Declarations
/// @brief Method OnGet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnGet() ;

/// @brief Method OnReturn, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnReturn() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRObjectPool_IPoolObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRObjectPool_IPoolObject(OVRObjectPool_IPoolObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12681};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
