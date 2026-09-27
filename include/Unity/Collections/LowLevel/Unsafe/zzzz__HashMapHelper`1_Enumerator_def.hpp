#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/HashMapHelper`1_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HashMapHelper`1_Enumerator)
namespace Unity::Collections::LowLevel::Unsafe {
template<typename TKey>
struct HashMapHelper_1;
}
namespace Unity::Collections {
template<typename TKey,typename TValue>
struct KVPair_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TKey>
struct HashMapHelper_1_Enumerator;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::HashMapHelper_1_Enumerator);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::HashMapHelper_1_Enumerator, "Unity.Collections.LowLevel.Unsafe", "HashMapHelper`1/Enumerator");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TKey>
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.HashMapHelper`1/Enumerator<TKey>
struct CORDL_TYPE HashMapHelper_1_Enumerator {
public:
// Declarations
/// @brief Method GetCurrent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline ::Unity::Collections::KVPair_2<TKey,TValue> GetCurrent() ;

/// @brief Method GetCurrentKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TKey GetCurrentKey() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool MoveNext() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*  data) ;

// Ctor Parameters []
// @brief default ctor
constexpr HashMapHelper_1_Enumerator() ;

// Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BucketIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_NextIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HashMapHelper_1_Enumerator(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*  m_Data, int32_t  m_Index, int32_t  m_BucketIndex, int32_t  m_NextIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30225};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field m_Data, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*  m_Data;

/// @brief Field m_Index, offset: 0x8, size: 0x4, def value: None
 int32_t  m_Index;

/// @brief Field m_BucketIndex, offset: 0xc, size: 0x4, def value: None
 int32_t  m_BucketIndex;

/// @brief Field m_NextIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  m_NextIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
