#pragma once
// IWYU pragma private; include "emotitron/Compression/Utilities/ByteConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ByteConverter)
// Forward declare root types
namespace emotitron::Compression::Utilities {
struct ByteConverter;
}
// Write type traits
MARK_VAL_T(::emotitron::Compression::Utilities::ByteConverter);
DEFINE_IL2CPP_CLASS(::emotitron::Compression::Utilities::ByteConverter, "emotitron.Compression.Utilities", "ByteConverter");
// [DefaultMember("Item")]
// Dependencies 
namespace emotitron::Compression::Utilities {
// Is value type: true
// CS Name: emotitron.Compression.Utilities.ByteConverter
struct CORDL_TYPE ByteConverter {
public:
// Declarations
 __declspec(property(get=get_Item)) uint8_t  Item[];

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

/// @brief Field character, offset 0x0, size 0x2 
 __declspec(property(get=__cordl_internal_get_character, put=__cordl_internal_set_character)) char16_t  character;

/// @brief Field float32, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_float32, put=__cordl_internal_set_float32)) float_t  float32;

/// @brief Field float64, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_float64, put=__cordl_internal_set_float64)) double_t  float64;

/// @brief Field int16, offset 0x0, size 0x2 
 __declspec(property(get=__cordl_internal_get_int16, put=__cordl_internal_set_int16)) int16_t  int16;

/// @brief Field int32, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_int32, put=__cordl_internal_set_int32)) int32_t  int32;

/// @brief Field int64, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_int64, put=__cordl_internal_set_int64)) int64_t  int64;

/// @brief Field int8, offset 0x0, size 0x1 
 __declspec(property(get=__cordl_internal_get_int8, put=__cordl_internal_set_int8)) int8_t  int8;

/// @brief Field uint16, offset 0x0, size 0x2 
 __declspec(property(get=__cordl_internal_get_uint16, put=__cordl_internal_set_uint16)) uint16_t  uint16;

/// @brief Field uint16_B, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_uint16_B, put=__cordl_internal_set_uint16_B)) uint32_t  uint16_B;

/// @brief Field uint32, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_uint32, put=__cordl_internal_set_uint32)) uint32_t  uint32;

/// @brief Field uint64, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_uint64, put=__cordl_internal_set_uint64)) uint64_t  uint64;

/// @brief Method ExtractByteArray, addr 0x5dd8d7c, size 0x9c, virtual false, abstract: false, final false
inline void ExtractByteArray(::ArrayW<uint8_t>  targetArray) ;

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

constexpr char16_t const& __cordl_internal_get_character() const;

constexpr char16_t& __cordl_internal_get_character() ;

constexpr float_t const& __cordl_internal_get_float32() const;

constexpr float_t& __cordl_internal_get_float32() ;

constexpr double_t const& __cordl_internal_get_float64() const;

constexpr double_t& __cordl_internal_get_float64() ;

constexpr int16_t const& __cordl_internal_get_int16() const;

constexpr int16_t& __cordl_internal_get_int16() ;

constexpr int32_t const& __cordl_internal_get_int32() const;

constexpr int32_t& __cordl_internal_get_int32() ;

constexpr int64_t const& __cordl_internal_get_int64() const;

constexpr int64_t& __cordl_internal_get_int64() ;

constexpr int8_t const& __cordl_internal_get_int8() const;

constexpr int8_t& __cordl_internal_get_int8() ;

constexpr uint16_t const& __cordl_internal_get_uint16() const;

constexpr uint16_t& __cordl_internal_get_uint16() ;

constexpr uint32_t const& __cordl_internal_get_uint16_B() const;

constexpr uint32_t& __cordl_internal_get_uint16_B() ;

constexpr uint32_t const& __cordl_internal_get_uint32() const;

constexpr uint32_t& __cordl_internal_get_uint32() ;

constexpr uint64_t const& __cordl_internal_get_uint64() const;

constexpr uint64_t& __cordl_internal_get_uint64() ;

constexpr void __cordl_internal_set_byte0(uint8_t  value) ;

constexpr void __cordl_internal_set_byte1(uint8_t  value) ;

constexpr void __cordl_internal_set_byte2(uint8_t  value) ;

constexpr void __cordl_internal_set_byte3(uint8_t  value) ;

constexpr void __cordl_internal_set_byte4(uint8_t  value) ;

constexpr void __cordl_internal_set_byte5(uint8_t  value) ;

constexpr void __cordl_internal_set_byte6(uint8_t  value) ;

constexpr void __cordl_internal_set_byte7(uint8_t  value) ;

constexpr void __cordl_internal_set_character(char16_t  value) ;

constexpr void __cordl_internal_set_float32(float_t  value) ;

constexpr void __cordl_internal_set_float64(double_t  value) ;

constexpr void __cordl_internal_set_int16(int16_t  value) ;

constexpr void __cordl_internal_set_int32(int32_t  value) ;

constexpr void __cordl_internal_set_int64(int64_t  value) ;

constexpr void __cordl_internal_set_int8(int8_t  value) ;

constexpr void __cordl_internal_set_uint16(uint16_t  value) ;

constexpr void __cordl_internal_set_uint16_B(uint32_t  value) ;

constexpr void __cordl_internal_set_uint32(uint32_t  value) ;

constexpr void __cordl_internal_set_uint64(uint64_t  value) ;

/// @brief Method get_Item, addr 0x5dd8bec, size 0x9c, virtual false, abstract: false, final false
inline uint8_t get_Item(int32_t  index) ;

/// @brief Method op_Implicit, addr 0x5dd8c88, size 0xc0, virtual false, abstract: false, final false
static inline ::emotitron::Compression::Utilities::ByteConverter op_Implicit___emotitron__Compression__Utilities__ByteConverter(::ArrayW<uint8_t>  bytes) ;

/// @brief Method op_Implicit, addr 0x5dd8d74, size 0x8, virtual false, abstract: false, final false
static inline ::emotitron::Compression::Utilities::ByteConverter op_Implicit___emotitron__Compression__Utilities__ByteConverter(bool  val) ;

/// @brief Method op_Implicit, addr 0x5dd8d58, size 0x8, virtual false, abstract: false, final false
static inline ::emotitron::Compression::Utilities::ByteConverter op_Implicit___emotitron__Compression__Utilities__ByteConverter(char16_t  val) ;

/// @brief Method op_Implicit, addr 0x5dd8d6c, size 0x8, virtual false, abstract: false, final false
static inline ::emotitron::Compression::Utilities::ByteConverter op_Implicit___emotitron__Compression__Utilities__ByteConverter(double_t  val) ;

/// @brief Method op_Implicit, addr 0x5dd47ac, size 0x8, virtual false, abstract: false, final false
static inline ::emotitron::Compression::Utilities::ByteConverter op_Implicit___emotitron__Compression__Utilities__ByteConverter(float_t  val) ;

/// @brief Method op_Implicit, addr 0x5dd8d60, size 0x8, virtual false, abstract: false, final false
static inline ::emotitron::Compression::Utilities::ByteConverter op_Implicit___emotitron__Compression__Utilities__ByteConverter(int32_t  val) ;

/// @brief Method op_Implicit, addr 0x5dd8d68, size 0x4, virtual false, abstract: false, final false
static inline ::emotitron::Compression::Utilities::ByteConverter op_Implicit___emotitron__Compression__Utilities__ByteConverter(int64_t  val) ;

/// @brief Method op_Implicit, addr 0x5dd8d50, size 0x8, virtual false, abstract: false, final false
static inline ::emotitron::Compression::Utilities::ByteConverter op_Implicit___emotitron__Compression__Utilities__ByteConverter(int8_t  val) ;

/// @brief Method op_Implicit, addr 0x5dd81b4, size 0x8, virtual false, abstract: false, final false
static inline ::emotitron::Compression::Utilities::ByteConverter op_Implicit___emotitron__Compression__Utilities__ByteConverter(uint32_t  val) ;

/// @brief Method op_Implicit, addr 0x5dd47cc, size 0x4, virtual false, abstract: false, final false
static inline ::emotitron::Compression::Utilities::ByteConverter op_Implicit___emotitron__Compression__Utilities__ByteConverter(uint64_t  val) ;

/// @brief Method op_Implicit, addr 0x5dd8d48, size 0x8, virtual false, abstract: false, final false
static inline ::emotitron::Compression::Utilities::ByteConverter op_Implicit___emotitron__Compression__Utilities__ByteConverter(uint8_t  val) ;

/// @brief Method op_Implicit, addr 0x5dd8e4c, size 0xc, virtual false, abstract: false, final false
static inline bool op_Implicit_bool(::emotitron::Compression::Utilities::ByteConverter  bc) ;

/// @brief Method op_Implicit, addr 0x5dd8e20, size 0x4, virtual false, abstract: false, final false
static inline char16_t op_Implicit_char16_t(::emotitron::Compression::Utilities::ByteConverter  bc) ;

/// @brief Method op_Implicit, addr 0x5dd8e44, size 0x8, virtual false, abstract: false, final false
static inline double_t op_Implicit_double_t(::emotitron::Compression::Utilities::ByteConverter  bc) ;

/// @brief Method op_Implicit, addr 0x5dd8e3c, size 0x8, virtual false, abstract: false, final false
static inline float_t op_Implicit_float_t(::emotitron::Compression::Utilities::ByteConverter  bc) ;

/// @brief Method op_Implicit, addr 0x5dd8e28, size 0x4, virtual false, abstract: false, final false
static inline int16_t op_Implicit_int16_t(::emotitron::Compression::Utilities::ByteConverter  bc) ;

/// @brief Method op_Implicit, addr 0x5dd8e30, size 0x4, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::emotitron::Compression::Utilities::ByteConverter  bc) ;

/// @brief Method op_Implicit, addr 0x5dd8e38, size 0x4, virtual false, abstract: false, final false
static inline int64_t op_Implicit_int64_t(::emotitron::Compression::Utilities::ByteConverter  bc) ;

/// @brief Method op_Implicit, addr 0x5dd8e1c, size 0x4, virtual false, abstract: false, final false
static inline int8_t op_Implicit_int8_t(::emotitron::Compression::Utilities::ByteConverter  bc) ;

/// @brief Method op_Implicit, addr 0x5dd8e24, size 0x4, virtual false, abstract: false, final false
static inline uint16_t op_Implicit_uint16_t(::emotitron::Compression::Utilities::ByteConverter  bc) ;

/// @brief Method op_Implicit, addr 0x5dd8e2c, size 0x4, virtual false, abstract: false, final false
static inline uint32_t op_Implicit_uint32_t(::emotitron::Compression::Utilities::ByteConverter  bc) ;

/// @brief Method op_Implicit, addr 0x5dd8e34, size 0x4, virtual false, abstract: false, final false
static inline uint64_t op_Implicit_uint64_t(::emotitron::Compression::Utilities::ByteConverter  bc) ;

/// @brief Method op_Implicit, addr 0x5dd8e18, size 0x4, virtual false, abstract: false, final false
static inline uint8_t op_Implicit_uint8_t(::emotitron::Compression::Utilities::ByteConverter  bc) ;

// Ctor Parameters []
// @brief default ctor
constexpr ByteConverter() ;

// Ctor Parameters [CppParam { name: "float32", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "float64", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "int8", ty: "int8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "int16", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "uint16", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "character", ty: "char16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "int32", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "uint32", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "int64", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "uint64", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "byte0", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "byte1", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "byte2", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "byte3", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "byte4", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "byte5", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "byte6", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "byte7", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "uint16_B", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr ByteConverter(float_t  float32, double_t  float64, int8_t  int8, int16_t  int16, uint16_t  uint16, char16_t  character, int32_t  int32, uint32_t  uint32, int64_t  int64, uint64_t  uint64, uint8_t  byte0, uint8_t  byte1, uint8_t  byte2, uint8_t  byte3, uint8_t  byte4, uint8_t  byte5, uint8_t  byte6, uint8_t  byte7, uint32_t  uint16_B) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___float32_padding[0x0];
/// @brief Field float32, offset: 0x0, size: 0x4, def value: None
 float_t  ___float32;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___float32_padding_forAlignment[0x0];
/// @brief Field float32, offset: 0x0, size: 0x4, def value: None
 float_t  ___float32_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___float64_padding[0x0];
/// @brief Field float64, offset: 0x0, size: 0x8, def value: None
 double_t  ___float64;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___float64_padding_forAlignment[0x0];
/// @brief Field float64, offset: 0x0, size: 0x8, def value: None
 double_t  ___float64_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___int8_padding[0x0];
/// @brief Field int8, offset: 0x0, size: 0x1, def value: None
 int8_t  ___int8;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___int8_padding_forAlignment[0x0];
/// @brief Field int8, offset: 0x0, size: 0x1, def value: None
 int8_t  ___int8_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___int16_padding[0x0];
/// @brief Field int16, offset: 0x0, size: 0x2, def value: None
 int16_t  ___int16;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___int16_padding_forAlignment[0x0];
/// @brief Field int16, offset: 0x0, size: 0x2, def value: None
 int16_t  ___int16_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___uint16_padding[0x0];
/// @brief Field uint16, offset: 0x0, size: 0x2, def value: None
 uint16_t  ___uint16;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___uint16_padding_forAlignment[0x0];
/// @brief Field uint16, offset: 0x0, size: 0x2, def value: None
 uint16_t  ___uint16_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___character_padding[0x0];
/// @brief Field character, offset: 0x0, size: 0x2, def value: None
 char16_t  ___character;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___character_padding_forAlignment[0x0];
/// @brief Field character, offset: 0x0, size: 0x2, def value: None
 char16_t  ___character_forAlignment;
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
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___uint32_padding[0x0];
/// @brief Field uint32, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___uint32;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___uint32_padding_forAlignment[0x0];
/// @brief Field uint32, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___uint32_forAlignment;
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
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___uint64_padding[0x0];
/// @brief Field uint64, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___uint64;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___uint64_padding_forAlignment[0x0];
/// @brief Field uint64, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___uint64_forAlignment;
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
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___uint16_B_padding[0x4];
/// @brief Field uint16_B, offset: 0x4, size: 0x4, def value: None
 uint32_t  ___uint16_B;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___uint16_B_padding_forAlignment[0x4];
/// @brief Field uint16_B, offset: 0x4, size: 0x4, def value: None
 uint32_t  ___uint16_B_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5102};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::emotitron::Compression::Utilities::ByteConverter) == 0x8, "Size mismatch!");

} // namespace end def emotitron::Compression::Utilities
