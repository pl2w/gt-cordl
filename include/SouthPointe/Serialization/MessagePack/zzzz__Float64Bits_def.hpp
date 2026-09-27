#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/Float64Bits.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Float64Bits)
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
struct Float64Bits;
}
// Write type traits
MARK_VAL_T(::SouthPointe::Serialization::MessagePack::Float64Bits);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::Float64Bits, "SouthPointe.Serialization.MessagePack", "Float64Bits");
// Dependencies 
namespace SouthPointe::Serialization::MessagePack {
// Is value type: true
// CS Name: SouthPointe.Serialization.MessagePack.Float64Bits
struct CORDL_TYPE Float64Bits {
public:
// Declarations
/// @brief Field byte0, offset 0x0, size 0x1 
 __declspec(property(get=__cordl_internal_get_byte0, put=__cordl_internal_set_byte0)) uint8_t  byte0;

/// @brief Field byte1, offset 0x1, size 0x1 
 __declspec(property(get=__cordl_internal_get_byte1, put=__cordl_internal_set_byte1)) uint8_t  byte1;

/// @brief Field byte2, offset 0x2, size 0x1 
 __declspec(property(get=__cordl_internal_get_byte2, put=__cordl_internal_set_byte2)) uint8_t  byte2;

/// @brief Field byte3, offset 0x3, size 0x1 
 __declspec(property(get=__cordl_internal_get_byte3, put=__cordl_internal_set_byte3)) uint8_t  byte3;

/// @brief Field byte4, offset 0x4, size 0x1 
 __declspec(property(get=__cordl_internal_get_byte4, put=__cordl_internal_set_byte4)) uint8_t  byte4;

/// @brief Field byte5, offset 0x5, size 0x1 
 __declspec(property(get=__cordl_internal_get_byte5, put=__cordl_internal_set_byte5)) uint8_t  byte5;

/// @brief Field byte6, offset 0x6, size 0x1 
 __declspec(property(get=__cordl_internal_get_byte6, put=__cordl_internal_set_byte6)) uint8_t  byte6;

/// @brief Field byte7, offset 0x7, size 0x1 
 __declspec(property(get=__cordl_internal_get_byte7, put=__cordl_internal_set_byte7)) uint8_t  byte7;

/// @brief Field value, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) double_t  value;

/// @brief Method GetBytes, addr 0x9d08024, size 0x98, virtual false, abstract: false, final false
static inline void GetBytes(double_t  value, ::ArrayW<uint8_t>  buffer) ;

/// @brief Method ToDouble, addr 0x9d06a74, size 0x30, virtual false, abstract: false, final false
static inline double_t ToDouble(::ArrayW<uint8_t>  bigEndianBytes) ;

constexpr uint8_t const& __cordl_internal_get_byte0() const;

constexpr uint8_t& __cordl_internal_get_byte0() ;

constexpr uint8_t const& __cordl_internal_get_byte1() const;

constexpr uint8_t& __cordl_internal_get_byte1() ;

constexpr uint8_t const& __cordl_internal_get_byte2() const;

constexpr uint8_t& __cordl_internal_get_byte2() ;

constexpr uint8_t const& __cordl_internal_get_byte3() const;

constexpr uint8_t& __cordl_internal_get_byte3() ;

constexpr uint8_t const& __cordl_internal_get_byte4() const;

constexpr uint8_t& __cordl_internal_get_byte4() ;

constexpr uint8_t const& __cordl_internal_get_byte5() const;

constexpr uint8_t& __cordl_internal_get_byte5() ;

constexpr uint8_t const& __cordl_internal_get_byte6() const;

constexpr uint8_t& __cordl_internal_get_byte6() ;

constexpr uint8_t const& __cordl_internal_get_byte7() const;

constexpr uint8_t& __cordl_internal_get_byte7() ;

constexpr double_t const& __cordl_internal_get_value() const;

constexpr double_t& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_byte0(uint8_t  value) ;

constexpr void __cordl_internal_set_byte1(uint8_t  value) ;

constexpr void __cordl_internal_set_byte2(uint8_t  value) ;

constexpr void __cordl_internal_set_byte3(uint8_t  value) ;

constexpr void __cordl_internal_set_byte4(uint8_t  value) ;

constexpr void __cordl_internal_set_byte5(uint8_t  value) ;

constexpr void __cordl_internal_set_byte6(uint8_t  value) ;

constexpr void __cordl_internal_set_byte7(uint8_t  value) ;

constexpr void __cordl_internal_set_value(double_t  value) ;

/// @brief Method .ctor, addr 0x9d0ba60, size 0x8, virtual false, abstract: false, final false
inline void _ctor(double_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Float64Bits() ;

// Ctor Parameters [CppParam { name: "value", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "byte0", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "byte1", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "byte2", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "byte3", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "byte4", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "byte5", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "byte6", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "byte7", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr Float64Bits(double_t  value, uint8_t  byte0, uint8_t  byte1, uint8_t  byte2, uint8_t  byte3, uint8_t  byte4, uint8_t  byte5, uint8_t  byte6, uint8_t  byte7) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___value_padding[0x0];
/// @brief Field value, offset: 0x0, size: 0x8, def value: None
 double_t  ___value;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___value_padding_forAlignment[0x0];
/// @brief Field value, offset: 0x0, size: 0x8, def value: None
 double_t  ___value_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___byte0_padding[0x0];
/// @brief Field byte0, offset: 0x0, size: 0x1, def value: None
 uint8_t  ___byte0;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___byte0_padding_forAlignment[0x0];
/// @brief Field byte0, offset: 0x0, size: 0x1, def value: None
 uint8_t  ___byte0_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1
 uint8_t  ___byte1_padding[0x1];
/// @brief Field byte1, offset: 0x1, size: 0x1, def value: None
 uint8_t  ___byte1;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1 for alignment
 uint8_t  ___byte1_padding_forAlignment[0x1];
/// @brief Field byte1, offset: 0x1, size: 0x1, def value: None
 uint8_t  ___byte1_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2
 uint8_t  ___byte2_padding[0x2];
/// @brief Field byte2, offset: 0x2, size: 0x1, def value: None
 uint8_t  ___byte2;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2 for alignment
 uint8_t  ___byte2_padding_forAlignment[0x2];
/// @brief Field byte2, offset: 0x2, size: 0x1, def value: None
 uint8_t  ___byte2_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x3
 uint8_t  ___byte3_padding[0x3];
/// @brief Field byte3, offset: 0x3, size: 0x1, def value: None
 uint8_t  ___byte3;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x3 for alignment
 uint8_t  ___byte3_padding_forAlignment[0x3];
/// @brief Field byte3, offset: 0x3, size: 0x1, def value: None
 uint8_t  ___byte3_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___byte4_padding[0x4];
/// @brief Field byte4, offset: 0x4, size: 0x1, def value: None
 uint8_t  ___byte4;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___byte4_padding_forAlignment[0x4];
/// @brief Field byte4, offset: 0x4, size: 0x1, def value: None
 uint8_t  ___byte4_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x5
 uint8_t  ___byte5_padding[0x5];
/// @brief Field byte5, offset: 0x5, size: 0x1, def value: None
 uint8_t  ___byte5;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x5 for alignment
 uint8_t  ___byte5_padding_forAlignment[0x5];
/// @brief Field byte5, offset: 0x5, size: 0x1, def value: None
 uint8_t  ___byte5_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x6
 uint8_t  ___byte6_padding[0x6];
/// @brief Field byte6, offset: 0x6, size: 0x1, def value: None
 uint8_t  ___byte6;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x6 for alignment
 uint8_t  ___byte6_padding_forAlignment[0x6];
/// @brief Field byte6, offset: 0x6, size: 0x1, def value: None
 uint8_t  ___byte6_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x7
 uint8_t  ___byte7_padding[0x7];
/// @brief Field byte7, offset: 0x7, size: 0x1, def value: None
 uint8_t  ___byte7;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x7 for alignment
 uint8_t  ___byte7_padding_forAlignment[0x7];
/// @brief Field byte7, offset: 0x7, size: 0x1, def value: None
 uint8_t  ___byte7_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31755};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::SouthPointe::Serialization::MessagePack::Float64Bits) == 0x8, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
