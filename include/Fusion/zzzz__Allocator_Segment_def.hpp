#pragma once
// IWYU pragma private; include "Fusion/Allocator_Segment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__Ptr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Allocator_Segment)
// Forward declare root types
namespace GlobalNamespace {
struct Allocator_Segment;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Allocator_Segment);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Allocator_Segment, "Fusion", "Allocator/Segment");
// Dependencies Fusion.Ptr
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Allocator/Segment
struct CORDL_TYPE Allocator_Segment {
public:
// Declarations
/// @brief Field Next, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Next, put=__cordl_internal_set_Next)) ::Fusion::Ptr  Next;

constexpr ::Fusion::Ptr const& __cordl_internal_get_Next() const;

constexpr ::Fusion::Ptr& __cordl_internal_get_Next() ;

constexpr void __cordl_internal_set_Next(::Fusion::Ptr  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Allocator_Segment() ;

// Ctor Parameters [CppParam { name: "Next", ty: "::Fusion::Ptr", modifiers: "", def_value: None, comment: None }]
constexpr Allocator_Segment(::Fusion::Ptr  Next) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Next_padding[0x0];
/// @brief Field Next, offset: 0x0, size: 0x4, def value: None
 ::Fusion::Ptr  ___Next;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Next_padding_forAlignment[0x0];
/// @brief Field Next, offset: 0x0, size: 0x4, def value: None
 ::Fusion::Ptr  ___Next_forAlignment;
};
};
public:

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18792};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Allocator_Segment) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
