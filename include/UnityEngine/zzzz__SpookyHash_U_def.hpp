#pragma once
// IWYU pragma private; include "UnityEngine/SpookyHash_U.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpookyHash_U)
// Forward declare root types
namespace GlobalNamespace {
struct SpookyHash_U;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SpookyHash_U);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpookyHash_U, "UnityEngine", "SpookyHash/U");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.SpookyHash/U
struct CORDL_TYPE SpookyHash_U {
public:
// Declarations
/// @brief Field i, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_i, put=__cordl_internal_set_i)) uint64_t  i;

/// @brief Field p32, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_p32, put=__cordl_internal_set_p32)) uint32_t*  p32;

/// @brief Field p64, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_p64, put=__cordl_internal_set_p64)) uint64_t*  p64;

/// @brief Field p8, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_p8, put=__cordl_internal_set_p8)) uint8_t*  p8;

constexpr uint64_t const& __cordl_internal_get_i() const;

constexpr uint64_t& __cordl_internal_get_i() ;

constexpr uint32_t* const& __cordl_internal_get_p32() const;

constexpr uint32_t*& __cordl_internal_get_p32() ;

constexpr uint64_t* const& __cordl_internal_get_p64() const;

constexpr uint64_t*& __cordl_internal_get_p64() ;

constexpr uint8_t* const& __cordl_internal_get_p8() const;

constexpr uint8_t*& __cordl_internal_get_p8() ;

constexpr void __cordl_internal_set_i(uint64_t  value) ;

constexpr void __cordl_internal_set_p32(uint32_t*  value) ;

constexpr void __cordl_internal_set_p64(uint64_t*  value) ;

constexpr void __cordl_internal_set_p8(uint8_t*  value) ;

/// @brief Method .ctor, addr 0xb5c4938, size 0x8, virtual false, abstract: false, final false
inline void _ctor(uint16_t*  p8) ;

// Ctor Parameters []
// @brief default ctor
constexpr SpookyHash_U() ;

// Ctor Parameters [CppParam { name: "p8", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "p32", ty: "uint32_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "p64", ty: "uint64_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "i", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr SpookyHash_U(uint8_t*  p8, uint32_t*  p32, uint64_t*  p64, uint64_t  i) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___p8_padding[0x0];
/// @brief Field p8, offset: 0x0, size: 0x8, def value: None
 uint8_t*  ___p8;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___p8_padding_forAlignment[0x0];
/// @brief Field p8, offset: 0x0, size: 0x8, def value: None
 uint8_t*  ___p8_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___p32_padding[0x0];
/// @brief Field p32, offset: 0x0, size: 0x8, def value: None
 uint32_t*  ___p32;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___p32_padding_forAlignment[0x0];
/// @brief Field p32, offset: 0x0, size: 0x8, def value: None
 uint32_t*  ___p32_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___p64_padding[0x0];
/// @brief Field p64, offset: 0x0, size: 0x8, def value: None
 uint64_t*  ___p64;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___p64_padding_forAlignment[0x0];
/// @brief Field p64, offset: 0x0, size: 0x8, def value: None
 uint64_t*  ___p64_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___i_padding[0x0];
/// @brief Field i, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___i;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___i_padding_forAlignment[0x0];
/// @brief Field i, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___i_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14964};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SpookyHash_U) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
