#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticHash_SingleInt32.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StaticHash_SingleInt32)
// Forward declare root types
namespace GlobalNamespace {
struct StaticHash_SingleInt32;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StaticHash_SingleInt32);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StaticHash_SingleInt32, "", "StaticHash/SingleInt32");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: StaticHash/SingleInt32
struct CORDL_TYPE StaticHash_SingleInt32 {
public:
// Declarations
/// @brief Field int32, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_int32, put=__cordl_internal_set_int32)) int32_t  int32;

/// @brief Field single, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_single, put=__cordl_internal_set_single)) float_t  single;

constexpr int32_t const& __cordl_internal_get_int32() const;

constexpr int32_t& __cordl_internal_get_int32() ;

constexpr float_t const& __cordl_internal_get_single() const;

constexpr float_t& __cordl_internal_get_single() ;

constexpr void __cordl_internal_set_int32(int32_t  value) ;

constexpr void __cordl_internal_set_single(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr StaticHash_SingleInt32() ;

// Ctor Parameters [CppParam { name: "single", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "int32", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr StaticHash_SingleInt32(float_t  single, int32_t  int32) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___single_padding[0x0];
/// @brief Field single, offset: 0x0, size: 0x4, def value: None
 float_t  ___single;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___single_padding_forAlignment[0x0];
/// @brief Field single, offset: 0x0, size: 0x4, def value: None
 float_t  ___single_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___int32_padding[0x0];
/// @brief Field int32, offset: 0x0, size: 0x4, def value: None
 int32_t  ___int32;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___int32_padding_forAlignment[0x0];
/// @brief Field int32, offset: 0x0, size: 0x4, def value: None
 int32_t  ___int32_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3561};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::StaticHash_SingleInt32) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
