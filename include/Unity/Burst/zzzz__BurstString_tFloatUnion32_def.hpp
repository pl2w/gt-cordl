#pragma once
// IWYU pragma private; include "Unity/Burst/BurstString_tFloatUnion32.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstString_tFloatUnion32)
// Forward declare root types
namespace GlobalNamespace {
struct BurstString_tFloatUnion32;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BurstString_tFloatUnion32);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BurstString_tFloatUnion32, "Unity.Burst", "BurstString/tFloatUnion32");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Burst.BurstString/tFloatUnion32
struct CORDL_TYPE BurstString_tFloatUnion32 {
public:
// Declarations
/// @brief Field m_floatingPoint, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_floatingPoint, put=__cordl_internal_set_m_floatingPoint)) float_t  m_floatingPoint;

/// @brief Field m_integer, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_integer, put=__cordl_internal_set_m_integer)) uint32_t  m_integer;

/// @brief Method GetExponent, addr 0xae84db0, size 0xc, virtual false, abstract: false, final false
inline uint32_t GetExponent() ;

/// @brief Method GetMantissa, addr 0xae84dbc, size 0xc, virtual false, abstract: false, final false
inline uint32_t GetMantissa() ;

/// @brief Method IsNegative, addr 0xae84dc8, size 0xc, virtual false, abstract: false, final false
inline bool IsNegative() ;

constexpr float_t const& __cordl_internal_get_m_floatingPoint() const;

constexpr float_t& __cordl_internal_get_m_floatingPoint() ;

constexpr uint32_t const& __cordl_internal_get_m_integer() const;

constexpr uint32_t& __cordl_internal_get_m_integer() ;

constexpr void __cordl_internal_set_m_floatingPoint(float_t  value) ;

constexpr void __cordl_internal_set_m_integer(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BurstString_tFloatUnion32() ;

// Ctor Parameters [CppParam { name: "m_floatingPoint", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_integer", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr BurstString_tFloatUnion32(float_t  m_floatingPoint, uint32_t  m_integer) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_floatingPoint_padding[0x0];
/// @brief Field m_floatingPoint, offset: 0x0, size: 0x4, def value: None
 float_t  ___m_floatingPoint;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_floatingPoint_padding_forAlignment[0x0];
/// @brief Field m_floatingPoint, offset: 0x0, size: 0x4, def value: None
 float_t  ___m_floatingPoint_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_integer_padding[0x0];
/// @brief Field m_integer, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___m_integer;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_integer_padding_forAlignment[0x0];
/// @brief Field m_integer, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___m_integer_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32183};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BurstString_tFloatUnion32) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
