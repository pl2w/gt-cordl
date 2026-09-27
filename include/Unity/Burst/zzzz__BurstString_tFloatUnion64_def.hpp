#pragma once
// IWYU pragma private; include "Unity/Burst/BurstString_tFloatUnion64.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstString_tFloatUnion64)
// Forward declare root types
namespace GlobalNamespace {
struct BurstString_tFloatUnion64;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BurstString_tFloatUnion64);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BurstString_tFloatUnion64, "Unity.Burst", "BurstString/tFloatUnion64");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Burst.BurstString/tFloatUnion64
struct CORDL_TYPE BurstString_tFloatUnion64 {
public:
// Declarations
/// @brief Field m_floatingPoint, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_floatingPoint, put=__cordl_internal_set_m_floatingPoint)) double_t  m_floatingPoint;

/// @brief Field m_integer, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_integer, put=__cordl_internal_set_m_integer)) uint64_t  m_integer;

/// @brief Method GetExponent, addr 0xae84dd4, size 0xc, virtual false, abstract: false, final false
inline uint32_t GetExponent() ;

/// @brief Method GetMantissa, addr 0xae84de0, size 0xc, virtual false, abstract: false, final false
inline uint64_t GetMantissa() ;

/// @brief Method IsNegative, addr 0xae84dec, size 0xc, virtual false, abstract: false, final false
inline bool IsNegative() ;

constexpr double_t const& __cordl_internal_get_m_floatingPoint() const;

constexpr double_t& __cordl_internal_get_m_floatingPoint() ;

constexpr uint64_t const& __cordl_internal_get_m_integer() const;

constexpr uint64_t& __cordl_internal_get_m_integer() ;

constexpr void __cordl_internal_set_m_floatingPoint(double_t  value) ;

constexpr void __cordl_internal_set_m_integer(uint64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BurstString_tFloatUnion64() ;

// Ctor Parameters [CppParam { name: "m_floatingPoint", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_integer", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr BurstString_tFloatUnion64(double_t  m_floatingPoint, uint64_t  m_integer) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_floatingPoint_padding[0x0];
/// @brief Field m_floatingPoint, offset: 0x0, size: 0x8, def value: None
 double_t  ___m_floatingPoint;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_floatingPoint_padding_forAlignment[0x0];
/// @brief Field m_floatingPoint, offset: 0x0, size: 0x8, def value: None
 double_t  ___m_floatingPoint_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_integer_padding[0x0];
/// @brief Field m_integer, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___m_integer;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_integer_padding_forAlignment[0x0];
/// @brief Field m_integer, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___m_integer_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32184};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BurstString_tFloatUnion64) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
