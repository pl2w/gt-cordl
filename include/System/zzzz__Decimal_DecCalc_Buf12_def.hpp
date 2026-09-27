#pragma once
// IWYU pragma private; include "System/Decimal_DecCalc_Buf12.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Decimal_DecCalc_Buf12)
// Forward declare root types
namespace GlobalNamespace {
struct DecCalc_Decimal_Buf12;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DecCalc_Decimal_Buf12);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DecCalc_Decimal_Buf12, "System", "Decimal/DecCalc/Buf12");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Decimal/DecCalc/Buf12
struct CORDL_TYPE DecCalc_Decimal_Buf12 {
public:
// Declarations
 __declspec(property(get=get_High64, put=set_High64)) uint64_t  High64;

 __declspec(property(get=get_Low64, put=set_Low64)) uint64_t  Low64;

/// @brief Field U0, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_U0, put=__cordl_internal_set_U0)) uint32_t  U0;

/// @brief Field U1, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_U1, put=__cordl_internal_set_U1)) uint32_t  U1;

/// @brief Field U2, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_U2, put=__cordl_internal_set_U2)) uint32_t  U2;

/// @brief Field uhigh64LE, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_uhigh64LE, put=__cordl_internal_set_uhigh64LE)) uint64_t  uhigh64LE;

/// @brief Field ulo64LE, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ulo64LE, put=__cordl_internal_set_ulo64LE)) uint64_t  ulo64LE;

constexpr uint32_t const& __cordl_internal_get_U0() const;

constexpr uint32_t& __cordl_internal_get_U0() ;

constexpr uint32_t const& __cordl_internal_get_U1() const;

constexpr uint32_t& __cordl_internal_get_U1() ;

constexpr uint32_t const& __cordl_internal_get_U2() const;

constexpr uint32_t& __cordl_internal_get_U2() ;

constexpr uint64_t const& __cordl_internal_get_uhigh64LE() const;

constexpr uint64_t& __cordl_internal_get_uhigh64LE() ;

constexpr uint64_t const& __cordl_internal_get_ulo64LE() const;

constexpr uint64_t& __cordl_internal_get_ulo64LE() ;

constexpr void __cordl_internal_set_U0(uint32_t  value) ;

constexpr void __cordl_internal_set_U1(uint32_t  value) ;

constexpr void __cordl_internal_set_U2(uint32_t  value) ;

constexpr void __cordl_internal_set_uhigh64LE(uint64_t  value) ;

constexpr void __cordl_internal_set_ulo64LE(uint64_t  value) ;

/// @brief Method get_High64, addr 0xa34108c, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_High64() ;

/// @brief Method get_Low64, addr 0xa34109c, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_Low64() ;

/// @brief Method set_High64, addr 0xa341094, size 0x8, virtual false, abstract: false, final false
inline void set_High64(uint64_t  value) ;

/// @brief Method set_Low64, addr 0xa3410a4, size 0x8, virtual false, abstract: false, final false
inline void set_Low64(uint64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DecCalc_Decimal_Buf12() ;

// Ctor Parameters [CppParam { name: "U0", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "U1", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "U2", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ulo64LE", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "uhigh64LE", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr DecCalc_Decimal_Buf12(uint32_t  U0, uint32_t  U1, uint32_t  U2, uint64_t  ulo64LE, uint64_t  uhigh64LE) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___U0_padding[0x0];
/// @brief Field U0, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___U0;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___U0_padding_forAlignment[0x0];
/// @brief Field U0, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___U0_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___U1_padding[0x4];
/// @brief Field U1, offset: 0x4, size: 0x4, def value: None
 uint32_t  ___U1;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___U1_padding_forAlignment[0x4];
/// @brief Field U1, offset: 0x4, size: 0x4, def value: None
 uint32_t  ___U1_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___U2_padding[0x8];
/// @brief Field U2, offset: 0x8, size: 0x4, def value: None
 uint32_t  ___U2;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___U2_padding_forAlignment[0x8];
/// @brief Field U2, offset: 0x8, size: 0x4, def value: None
 uint32_t  ___U2_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___ulo64LE_padding[0x0];
/// @brief Field ulo64LE, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___ulo64LE;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___ulo64LE_padding_forAlignment[0x0];
/// @brief Field ulo64LE, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___ulo64LE_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___uhigh64LE_padding[0x8];
/// @brief Field uhigh64LE, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___uhigh64LE;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___uhigh64LE_padding_forAlignment[0x8];
/// @brief Field uhigh64LE, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___uhigh64LE_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5777};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DecCalc_Decimal_Buf12) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
