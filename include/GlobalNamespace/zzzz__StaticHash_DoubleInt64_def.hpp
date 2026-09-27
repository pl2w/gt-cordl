#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticHash_DoubleInt64.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StaticHash_DoubleInt64)
// Forward declare root types
namespace GlobalNamespace {
struct StaticHash_DoubleInt64;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StaticHash_DoubleInt64);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StaticHash_DoubleInt64, "", "StaticHash/DoubleInt64");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: StaticHash/DoubleInt64
struct CORDL_TYPE StaticHash_DoubleInt64 {
public:
// Declarations
/// @brief Field double, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_double, put=__cordl_internal_set__cordl_double)) double_t  _cordl_double;

/// @brief Field int64, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_int64, put=__cordl_internal_set_int64)) int64_t  int64;

constexpr double_t const& __cordl_internal_get__cordl_double() const;

constexpr double_t& __cordl_internal_get__cordl_double() ;

constexpr int64_t const& __cordl_internal_get_int64() const;

constexpr int64_t& __cordl_internal_get_int64() ;

constexpr void __cordl_internal_set__cordl_double(double_t  value) ;

constexpr void __cordl_internal_set_int64(int64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr StaticHash_DoubleInt64() ;

// Ctor Parameters [CppParam { name: "_cordl_double", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "int64", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr StaticHash_DoubleInt64(double_t  _cordl_double, int64_t  int64) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____cordl_double_padding[0x0];
/// @brief Field double, offset: 0x0, size: 0x8, def value: None
 double_t  ____cordl_double;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____cordl_double_padding_forAlignment[0x0];
/// @brief Field double, offset: 0x0, size: 0x8, def value: None
 double_t  ____cordl_double_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___int64_padding[0x0];
/// @brief Field int64, offset: 0x0, size: 0x8, def value: None
 int64_t  ___int64;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___int64_padding_forAlignment[0x0];
/// @brief Field int64, offset: 0x0, size: 0x8, def value: None
 int64_t  ___int64_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3562};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::StaticHash_DoubleInt64) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
