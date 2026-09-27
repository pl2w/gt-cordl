#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/RingDictionaryBuffer_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RingDictionaryBuffer_2)
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Voice::Logging {
template<typename TKey,typename TValue>
class RingDictionaryBuffer_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::Voice::Logging::RingDictionaryBuffer_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::Voice::Logging::RingDictionaryBuffer_2, "Meta.Voice.Logging", "RingDictionaryBuffer`2");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace Meta::Voice::Logging {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// CS Name: Meta.Voice.Logging.RingDictionaryBuffer`2<TKey,TValue>
class CORDL_TYPE RingDictionaryBuffer_2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Item)) ::System::Collections::Generic::ICollection_1<TValue>*  Item[];

/// @brief Field _capacity, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__capacity, put=__cordl_internal_set__capacity)) int32_t  _capacity;

/// @brief Field _dictionary, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__dictionary, put=__cordl_internal_set__dictionary)) ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Collections::Generic::LinkedList_1<TValue>*>*  _dictionary;

/// @brief Field _valueLocks, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__valueLocks, put=__cordl_internal_set__valueLocks)) ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Object*>*  _valueLocks;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Add(TKey  key, TValue  value, bool  unique) ;

/// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool ContainsKey(TKey  key) ;

/// @brief Method Extract, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<TValue>* Extract(TKey  key) ;

static inline ::Meta::Voice::Logging::RingDictionaryBuffer_2<TKey,TValue>* New_ctor(int32_t  capacity) ;

constexpr int32_t const& __cordl_internal_get__capacity() const;

constexpr int32_t& __cordl_internal_get__capacity() ;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Collections::Generic::LinkedList_1<TValue>*>* const& __cordl_internal_get__dictionary() const;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Collections::Generic::LinkedList_1<TValue>*>*& __cordl_internal_get__dictionary() ;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Object*>* const& __cordl_internal_get__valueLocks() const;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Object*>*& __cordl_internal_get__valueLocks() ;

constexpr void __cordl_internal_set__capacity(int32_t  value) ;

constexpr void __cordl_internal_set__dictionary(::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Collections::Generic::LinkedList_1<TValue>*>*  value) ;

constexpr void __cordl_internal_set__valueLocks(::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Object*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::ICollection_1<TValue>* get_Item(TKey  key) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RingDictionaryBuffer_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RingDictionaryBuffer_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RingDictionaryBuffer_2(RingDictionaryBuffer_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RingDictionaryBuffer_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RingDictionaryBuffer_2(RingDictionaryBuffer_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30970};

/// @brief Field _capacity, offset: 0x10, size: 0x4, def value: None
 int32_t  ____capacity;

/// @brief Field _dictionary, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Collections::Generic::LinkedList_1<TValue>*>*  ____dictionary;

/// @brief Field _valueLocks, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Object*>*  ____valueLocks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice::Logging
