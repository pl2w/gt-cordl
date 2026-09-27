#pragma once
// IWYU pragma private; include "Fusion/Allocator_Bucket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Allocator_Bucket)
namespace GlobalNamespace {
struct Allocator_Config;
}
// Forward declare root types
namespace GlobalNamespace {
struct Allocator_Bucket;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Allocator_Bucket);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Allocator_Bucket, "Fusion", "Allocator/Bucket");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Allocator/Bucket
struct CORDL_TYPE Allocator_Bucket {
public:
// Declarations
/// @brief Field Index, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Index, put=__cordl_internal_set_Index)) int32_t  Index;

/// @brief Field SegmentCapacity, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_SegmentCapacity, put=__cordl_internal_set_SegmentCapacity)) int32_t  SegmentCapacity;

/// @brief Field SegmentStride, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_SegmentStride, put=__cordl_internal_set_SegmentStride)) int32_t  SegmentStride;

/// @brief Field SegmentWordCount, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_SegmentWordCount, put=__cordl_internal_set_SegmentWordCount)) int32_t  SegmentWordCount;

/// @brief Method Create, addr 0x5f6ede4, size 0x68, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Allocator_Bucket Create(int32_t  index, int32_t  wordCount, ::GlobalNamespace::Allocator_Config  config) ;

/// @brief Method ToString, addr 0x5f6f71c, size 0x1d0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_Index() const;

constexpr int32_t& __cordl_internal_get_Index() ;

constexpr int32_t const& __cordl_internal_get_SegmentCapacity() const;

constexpr int32_t& __cordl_internal_get_SegmentCapacity() ;

constexpr int32_t const& __cordl_internal_get_SegmentStride() const;

constexpr int32_t& __cordl_internal_get_SegmentStride() ;

constexpr int32_t const& __cordl_internal_get_SegmentWordCount() const;

constexpr int32_t& __cordl_internal_get_SegmentWordCount() ;

constexpr void __cordl_internal_set_Index(int32_t  value) ;

constexpr void __cordl_internal_set_SegmentCapacity(int32_t  value) ;

constexpr void __cordl_internal_set_SegmentStride(int32_t  value) ;

constexpr void __cordl_internal_set_SegmentWordCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x5f6f710, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  index, int32_t  stride, int32_t  wordCount, int32_t  capacity) ;

// Ctor Parameters []
// @brief default ctor
constexpr Allocator_Bucket() ;

// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SegmentStride", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SegmentWordCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SegmentCapacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Allocator_Bucket(int32_t  Index, int32_t  SegmentStride, int32_t  SegmentWordCount, int32_t  SegmentCapacity) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Index_padding[0x0];
/// @brief Field Index, offset: 0x0, size: 0x4, def value: None
 int32_t  ___Index;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Index_padding_forAlignment[0x0];
/// @brief Field Index, offset: 0x0, size: 0x4, def value: None
 int32_t  ___Index_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___SegmentStride_padding[0x4];
/// @brief Field SegmentStride, offset: 0x4, size: 0x4, def value: None
 int32_t  ___SegmentStride;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___SegmentStride_padding_forAlignment[0x4];
/// @brief Field SegmentStride, offset: 0x4, size: 0x4, def value: None
 int32_t  ___SegmentStride_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___SegmentWordCount_padding[0x8];
/// @brief Field SegmentWordCount, offset: 0x8, size: 0x4, def value: None
 int32_t  ___SegmentWordCount;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___SegmentWordCount_padding_forAlignment[0x8];
/// @brief Field SegmentWordCount, offset: 0x8, size: 0x4, def value: None
 int32_t  ___SegmentWordCount_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___SegmentCapacity_padding[0xc];
/// @brief Field SegmentCapacity, offset: 0xc, size: 0x4, def value: None
 int32_t  ___SegmentCapacity;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___SegmentCapacity_padding_forAlignment[0xc];
/// @brief Field SegmentCapacity, offset: 0xc, size: 0x4, def value: None
 int32_t  ___SegmentCapacity_forAlignment;
};
};
public:

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18789};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Allocator_Bucket) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
