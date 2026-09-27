#pragma once
// IWYU pragma private; include "System/DecimalEx_DecimalBits.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DecimalEx_DecimalBits)
// Forward declare root types
namespace GlobalNamespace {
struct DecimalEx_DecimalBits;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DecimalEx_DecimalBits);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DecimalEx_DecimalBits, "System", "DecimalEx/DecimalBits");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.DecimalEx/DecimalBits
struct CORDL_TYPE DecimalEx_DecimalBits {
public:
// Declarations
/// @brief Field flags, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_flags, put=__cordl_internal_set_flags)) int32_t  flags;

/// @brief Field hi, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_hi, put=__cordl_internal_set_hi)) int32_t  hi;

/// @brief Field lo, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lo, put=__cordl_internal_set_lo)) int32_t  lo;

/// @brief Field mid, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_mid, put=__cordl_internal_set_mid)) int32_t  mid;

constexpr int32_t const& __cordl_internal_get_flags() const;

constexpr int32_t& __cordl_internal_get_flags() ;

constexpr int32_t const& __cordl_internal_get_hi() const;

constexpr int32_t& __cordl_internal_get_hi() ;

constexpr int32_t const& __cordl_internal_get_lo() const;

constexpr int32_t& __cordl_internal_get_lo() ;

constexpr int32_t const& __cordl_internal_get_mid() const;

constexpr int32_t& __cordl_internal_get_mid() ;

constexpr void __cordl_internal_set_flags(int32_t  value) ;

constexpr void __cordl_internal_set_hi(int32_t  value) ;

constexpr void __cordl_internal_set_lo(int32_t  value) ;

constexpr void __cordl_internal_set_mid(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DecimalEx_DecimalBits() ;

// Ctor Parameters [CppParam { name: "flags", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hi", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lo", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "mid", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DecimalEx_DecimalBits(int32_t  flags, int32_t  hi, int32_t  lo, int32_t  mid) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___flags_padding[0x0];
/// @brief Field flags, offset: 0x0, size: 0x4, def value: None
 int32_t  ___flags;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___flags_padding_forAlignment[0x0];
/// @brief Field flags, offset: 0x0, size: 0x4, def value: None
 int32_t  ___flags_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___hi_padding[0x4];
/// @brief Field hi, offset: 0x4, size: 0x4, def value: None
 int32_t  ___hi;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___hi_padding_forAlignment[0x4];
/// @brief Field hi, offset: 0x4, size: 0x4, def value: None
 int32_t  ___hi_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___lo_padding[0x8];
/// @brief Field lo, offset: 0x8, size: 0x4, def value: None
 int32_t  ___lo;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___lo_padding_forAlignment[0x8];
/// @brief Field lo, offset: 0x8, size: 0x4, def value: None
 int32_t  ___lo_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___mid_padding[0xc];
/// @brief Field mid, offset: 0xc, size: 0x4, def value: None
 int32_t  ___mid;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___mid_padding_forAlignment[0xc];
/// @brief Field mid, offset: 0xc, size: 0x4, def value: None
 int32_t  ___mid_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26316};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DecimalEx_DecimalBits) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
