#pragma once
// IWYU pragma private; include "BoingKit/Codec_IntFloat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Codec_IntFloat)
// Forward declare root types
namespace GlobalNamespace {
struct Codec_IntFloat;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Codec_IntFloat);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Codec_IntFloat, "BoingKit", "Codec/IntFloat");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BoingKit.Codec/IntFloat
struct CORDL_TYPE Codec_IntFloat {
public:
// Declarations
/// @brief Field FloatValue, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_FloatValue, put=__cordl_internal_set_FloatValue)) float_t  FloatValue;

/// @brief Field IntValue, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_IntValue, put=__cordl_internal_set_IntValue)) int32_t  IntValue;

constexpr float_t const& __cordl_internal_get_FloatValue() const;

constexpr float_t& __cordl_internal_get_FloatValue() ;

constexpr int32_t const& __cordl_internal_get_IntValue() const;

constexpr int32_t& __cordl_internal_get_IntValue() ;

constexpr void __cordl_internal_set_FloatValue(float_t  value) ;

constexpr void __cordl_internal_set_IntValue(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Codec_IntFloat() ;

// Ctor Parameters [CppParam { name: "IntValue", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "FloatValue", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr Codec_IntFloat(int32_t  IntValue, float_t  FloatValue) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___IntValue_padding[0x0];
/// @brief Field IntValue, offset: 0x0, size: 0x4, def value: None
 int32_t  ___IntValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___IntValue_padding_forAlignment[0x0];
/// @brief Field IntValue, offset: 0x0, size: 0x4, def value: None
 int32_t  ___IntValue_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___FloatValue_padding[0x0];
/// @brief Field FloatValue, offset: 0x0, size: 0x4, def value: None
 float_t  ___FloatValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___FloatValue_padding_forAlignment[0x0];
/// @brief Field FloatValue, offset: 0x0, size: 0x4, def value: None
 float_t  ___FloatValue_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5215};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Codec_IntFloat) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
