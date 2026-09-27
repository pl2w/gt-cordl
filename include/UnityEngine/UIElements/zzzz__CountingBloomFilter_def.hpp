#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CountingBloomFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__CountingBloomFilter__m_Counters_e__FixedBuffer_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CountingBloomFilter)
namespace GlobalNamespace {
struct CountingBloomFilter__m_Counters_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct CountingBloomFilter;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::CountingBloomFilter);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::CountingBloomFilter, "UnityEngine.UIElements", "CountingBloomFilter");
// Dependencies UnityEngine.UIElements.CountingBloomFilter::<m_Counters>e__FixedBuffer
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.CountingBloomFilter
struct CORDL_TYPE CountingBloomFilter {
public:
// Declarations
using _m_Counters_e__FixedBuffer = ::GlobalNamespace::CountingBloomFilter__m_Counters_e__FixedBuffer;

/// @brief Method AdjustSlot, addr 0xb87fc04, size 0x2c, virtual false, abstract: false, final false
inline void AdjustSlot(uint32_t  index, bool  increment) ;

/// @brief Method ContainsHash, addr 0xb87fcb8, size 0x28, virtual false, abstract: false, final false
inline bool ContainsHash(uint32_t  hash) ;

/// @brief Method Hash1, addr 0xb87fc30, size 0x8, virtual false, abstract: false, final false
inline uint32_t Hash1(uint32_t  hash) ;

/// @brief Method Hash2, addr 0xb87fc38, size 0x8, virtual false, abstract: false, final false
inline uint32_t Hash2(uint32_t  hash) ;

/// @brief Method InsertHash, addr 0xb87fc50, size 0x38, virtual false, abstract: false, final false
inline void InsertHash(uint32_t  hash) ;

/// @brief Method IsSlotEmpty, addr 0xb87fc40, size 0x10, virtual false, abstract: false, final false
inline bool IsSlotEmpty(uint32_t  index) ;

/// @brief Method RemoveHash, addr 0xb87fc88, size 0x30, virtual false, abstract: false, final false
inline void RemoveHash(uint32_t  hash) ;

// Ctor Parameters []
// @brief default ctor
constexpr CountingBloomFilter() ;

// Ctor Parameters [CppParam { name: "m_Counters", ty: "::GlobalNamespace::CountingBloomFilter__m_Counters_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr CountingBloomFilter(::GlobalNamespace::CountingBloomFilter__m_Counters_e__FixedBuffer  m_Counters) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7527};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4000};

/// [FixedBuffer(typeof(System.Byte), 16384)]
/// @brief Field m_Counters, offset: 0x0, size: 0x4000, def value: None
 ::GlobalNamespace::CountingBloomFilter__m_Counters_e__FixedBuffer  m_Counters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::CountingBloomFilter, m_Counters) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::CountingBloomFilter) == 0x4000, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
