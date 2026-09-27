#pragma once
// IWYU pragma private; include "System/DecimalEx_DecCalc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DecimalEx_DecCalc)
// Forward declare root types
namespace GlobalNamespace {
struct DecimalEx_DecCalc;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DecimalEx_DecCalc);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DecimalEx_DecCalc, "System", "DecimalEx/DecCalc");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.DecimalEx/DecCalc
struct CORDL_TYPE DecimalEx_DecCalc {
public:
// Declarations
/// @brief Field uflags, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_uflags, put=__cordl_internal_set_uflags)) uint32_t  uflags;

/// @brief Field uhi, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_uhi, put=__cordl_internal_set_uhi)) uint32_t  uhi;

/// @brief Field ulo, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_ulo, put=__cordl_internal_set_ulo)) uint32_t  ulo;

/// @brief Field ulomidLE, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_ulomidLE, put=__cordl_internal_set_ulomidLE)) uint64_t  ulomidLE;

/// @brief Field umid, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_umid, put=__cordl_internal_set_umid)) uint32_t  umid;

/// @brief Method DecDivMod1E9, addr 0xb993d08, size 0x5c, virtual false, abstract: false, final false
static inline uint32_t DecDivMod1E9(::by_ref<::GlobalNamespace::DecimalEx_DecCalc>  value) ;

constexpr uint32_t const& __cordl_internal_get_uflags() const;

constexpr uint32_t& __cordl_internal_get_uflags() ;

constexpr uint32_t const& __cordl_internal_get_uhi() const;

constexpr uint32_t& __cordl_internal_get_uhi() ;

constexpr uint32_t const& __cordl_internal_get_ulo() const;

constexpr uint32_t& __cordl_internal_get_ulo() ;

constexpr uint64_t const& __cordl_internal_get_ulomidLE() const;

constexpr uint64_t& __cordl_internal_get_ulomidLE() ;

constexpr uint32_t const& __cordl_internal_get_umid() const;

constexpr uint32_t& __cordl_internal_get_umid() ;

constexpr void __cordl_internal_set_uflags(uint32_t  value) ;

constexpr void __cordl_internal_set_uhi(uint32_t  value) ;

constexpr void __cordl_internal_set_ulo(uint32_t  value) ;

constexpr void __cordl_internal_set_ulomidLE(uint64_t  value) ;

constexpr void __cordl_internal_set_umid(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DecimalEx_DecCalc() ;

// Ctor Parameters [CppParam { name: "uflags", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "uhi", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ulo", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "umid", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ulomidLE", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr DecimalEx_DecCalc(uint32_t  uflags, uint32_t  uhi, uint32_t  ulo, uint32_t  umid, uint64_t  ulomidLE) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___uflags_padding[0x0];
/// @brief Field uflags, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___uflags;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___uflags_padding_forAlignment[0x0];
/// @brief Field uflags, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___uflags_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___uhi_padding[0x4];
/// @brief Field uhi, offset: 0x4, size: 0x4, def value: None
 uint32_t  ___uhi;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___uhi_padding_forAlignment[0x4];
/// @brief Field uhi, offset: 0x4, size: 0x4, def value: None
 uint32_t  ___uhi_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___ulo_padding[0x8];
/// @brief Field ulo, offset: 0x8, size: 0x4, def value: None
 uint32_t  ___ulo;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___ulo_padding_forAlignment[0x8];
/// @brief Field ulo, offset: 0x8, size: 0x4, def value: None
 uint32_t  ___ulo_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___umid_padding[0xc];
/// @brief Field umid, offset: 0xc, size: 0x4, def value: None
 uint32_t  ___umid;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___umid_padding_forAlignment[0xc];
/// @brief Field umid, offset: 0xc, size: 0x4, def value: None
 uint32_t  ___umid_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___ulomidLE_padding[0x8];
/// @brief Field ulomidLE, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___ulomidLE;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___ulomidLE_padding_forAlignment[0x8];
/// @brief Field ulomidLE, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___ulomidLE_forAlignment;
};
};
public:

/// @brief Field TenToPowerNine offset 0xffffffff size 0x4
static constexpr uint32_t  TenToPowerNine{static_cast<uint32_t>(0x3b9aca00u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26317};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DecimalEx_DecCalc) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
