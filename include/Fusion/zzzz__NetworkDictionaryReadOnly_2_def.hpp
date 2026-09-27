#pragma once
// IWYU pragma private; include "Fusion/NetworkDictionaryReadOnly_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkDictionaryReadOnly_2)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
namespace System::Collections::Generic {
template<typename T>
class EqualityComparer_1;
}
// Forward declare root types
namespace Fusion {
template<typename K,typename V>
struct NetworkDictionaryReadOnly_2;
}
// Write type traits
MARK_GEN_VAL_T(::Fusion::NetworkDictionaryReadOnly_2);
DEFINE_IL2CPP_GEN_CLASS(::Fusion::NetworkDictionaryReadOnly_2, "Fusion", "NetworkDictionaryReadOnly`2");
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// [IsReadOnly]
// Dependencies 
namespace Fusion {
// cpp template
template<typename K,typename V>
// Is value type: true
// CS Name: Fusion.NetworkDictionaryReadOnly`2<K,V>
struct CORDL_TYPE NetworkDictionaryReadOnly_2 {
public:
// Declarations
 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get__free)) int32_t  _free;

 __declspec(property(get=get__freeCount)) int32_t  _freeCount;

 __declspec(property(get=get__usedCount)) int32_t  _usedCount;

/// @brief Method Find, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Find(K  key) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline V Get(K  key) ;

/// @brief Method GetBucketFromHashCode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline uint32_t GetBucketFromHashCode(int32_t  hash) ;

/// @brief Method GetKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline K GetKey(int32_t  entry) ;

/// @brief Method GetNxt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t GetNxt(int32_t  entry) ;

/// @brief Method GetVal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline V GetVal(int32_t  entry) ;

/// @brief Method TryGet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGet(K  key, ::by_ref<V>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t*  data, int32_t  capacity, ::Fusion::IElementReaderWriter_1<K>*  keyReaderWriter, ::Fusion::IElementReaderWriter_1<V>*  valReaderWriter) ;

/// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get__free, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get__free() ;

/// @brief Method get__freeCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get__freeCount() ;

/// @brief Method get__usedCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get__usedCount() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkDictionaryReadOnly_2() ;

// Ctor Parameters [CppParam { name: "_data", ty: "int32_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_capacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_nxtOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_keyOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_valOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_entryStride", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_bucketsOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_entriesOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_keyReaderWriter", ty: "::Fusion::IElementReaderWriter_1<K>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_valReaderWriter", ty: "::Fusion::IElementReaderWriter_1<V>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_equalityComparer", ty: "::System::Collections::Generic::EqualityComparer_1<K>*", modifiers: "", def_value: None, comment: None }]
constexpr NetworkDictionaryReadOnly_2(int32_t*  _data, int32_t  _capacity, int32_t  _nxtOffset, int32_t  _keyOffset, int32_t  _valOffset, int32_t  _entryStride, int32_t  _bucketsOffset, int32_t  _entriesOffset, ::Fusion::IElementReaderWriter_1<K>*  _keyReaderWriter, ::Fusion::IElementReaderWriter_1<V>*  _valReaderWriter, ::System::Collections::Generic::EqualityComparer_1<K>*  _equalityComparer) noexcept;

/// @brief Field FREE_COUNT_OFFSET offset 0xffffffff size 0x4
static constexpr int32_t  FREE_COUNT_OFFSET{static_cast<int32_t>(0x1)};

/// @brief Field FREE_OFFSET offset 0xffffffff size 0x4
static constexpr int32_t  FREE_OFFSET{static_cast<int32_t>(0x0)};

/// @brief Field INVALID_ENTRY offset 0xffffffff size 0x4
static constexpr int32_t  INVALID_ENTRY{static_cast<int32_t>(0x0)};

/// @brief Field USED_COUNT_OFFSET offset 0xffffffff size 0x4
static constexpr int32_t  USED_COUNT_OFFSET{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19070};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field _data, offset: 0x0, size: 0x8, def value: None
 int32_t*  _data;

/// @brief Field _capacity, offset: 0x8, size: 0x4, def value: None
 int32_t  _capacity;

/// @brief Field _nxtOffset, offset: 0xc, size: 0x4, def value: None
 int32_t  _nxtOffset;

/// @brief Field _keyOffset, offset: 0x10, size: 0x4, def value: None
 int32_t  _keyOffset;

/// @brief Field _valOffset, offset: 0x14, size: 0x4, def value: None
 int32_t  _valOffset;

/// @brief Field _entryStride, offset: 0x18, size: 0x4, def value: None
 int32_t  _entryStride;

/// @brief Field _bucketsOffset, offset: 0x1c, size: 0x4, def value: None
 int32_t  _bucketsOffset;

/// @brief Field _entriesOffset, offset: 0x20, size: 0x4, def value: None
 int32_t  _entriesOffset;

/// @brief Field _keyReaderWriter, offset: 0x28, size: 0x8, def value: None
 ::Fusion::IElementReaderWriter_1<K>*  _keyReaderWriter;

/// @brief Field _valReaderWriter, offset: 0x30, size: 0x8, def value: None
 ::Fusion::IElementReaderWriter_1<V>*  _valReaderWriter;

/// @brief Field _equalityComparer, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::EqualityComparer_1<K>*  _equalityComparer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Fusion
