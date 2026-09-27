#pragma once
// IWYU pragma private; include "Unity/Collections/NativeParallelMultiHashMap`2_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeParallelMultiHashMapIterator_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMap_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeParallelMultiHashMap`2_Enumerator)
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct NativeParallelMultiHashMap_2_Enumerator;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::NativeParallelMultiHashMap_2_Enumerator);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::NativeParallelMultiHashMap_2_Enumerator, "Unity.Collections", "NativeParallelMultiHashMap`2/Enumerator");
// Dependencies Unity.Collections.NativeParallelMultiHashMapIterator`1<TKey>, Unity.Collections.NativeParallelMultiHashMap`2<TKey, TValue>
namespace GlobalNamespace {
// cpp template
template<typename TKey,typename TValue>
// Is value type: true
// CS Name: Unity.Collections.NativeParallelMultiHashMap`2/Enumerator<TKey,TValue>
struct CORDL_TYPE NativeParallelMultiHashMap_2_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) TValue  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<TValue>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TValue get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TValue>"
constexpr ::System::Collections::Generic::IEnumerator_1<TValue>* i___System__Collections__Generic__IEnumerator_1_TValue_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeParallelMultiHashMap_2_Enumerator() ;

// Ctor Parameters [CppParam { name: "hashmap", ty: "::Unity::Collections::NativeParallelMultiHashMap_2<TKey,TValue>", modifiers: "", def_value: None, comment: None }, CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None, comment: None }, CppParam { name: "isFirst", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None, comment: None }, CppParam { name: "iterator", ty: "::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>", modifiers: "", def_value: None, comment: None }]
constexpr NativeParallelMultiHashMap_2_Enumerator(::Unity::Collections::NativeParallelMultiHashMap_2<TKey,TValue>  hashmap, TKey  key, uint8_t  isFirst, TValue  value, ::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>  iterator) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30184};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field hashmap, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeParallelMultiHashMap_2<TKey,TValue>  hashmap;

/// @brief Field key, offset: 0x10, size: 0x8, def value: None
 TKey  key;

/// @brief Field isFirst, offset: 0x18, size: 0x1, def value: None
 uint8_t  isFirst;

/// @brief Field value, offset: 0x20, size: 0x8, def value: None
 TValue  value;

/// @brief Field iterator, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>  iterator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
