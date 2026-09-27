#pragma once
// IWYU pragma private; include "Fusion/DynamicHeap_ObjectFree.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicHeap_ObjectFree)
// Forward declare root types
namespace GlobalNamespace {
struct DynamicHeap_ObjectFree;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DynamicHeap_ObjectFree);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DynamicHeap_ObjectFree, "Fusion", "DynamicHeap/ObjectFree");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.DynamicHeap/ObjectFree
struct CORDL_TYPE DynamicHeap_ObjectFree {
public:
// Declarations
/// @brief Field Next, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_Next, put=__cordl_internal_set_Next)) int32_t  Next;

constexpr int32_t const& __cordl_internal_get_Next() const;

constexpr int32_t& __cordl_internal_get_Next() ;

constexpr void __cordl_internal_set_Next(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DynamicHeap_ObjectFree() ;

// Ctor Parameters [CppParam { name: "Next", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DynamicHeap_ObjectFree(int32_t  Next) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___Next_padding[0x4];
/// @brief Field Next, offset: 0x4, size: 0x4, def value: None
 int32_t  ___Next;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___Next_padding_forAlignment[0x4];
/// @brief Field Next, offset: 0x4, size: 0x4, def value: None
 int32_t  ___Next_forAlignment;
};
};
public:

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x8)};

/// @brief Field WORDS offset 0xffffffff size 0x4
static constexpr int32_t  WORDS{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18948};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DynamicHeap_ObjectFree) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
