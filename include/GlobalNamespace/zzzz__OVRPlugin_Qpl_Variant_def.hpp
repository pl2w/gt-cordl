#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Qpl_Variant.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Bool_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Qpl_VariantType_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_Qpl_Variant)
namespace GlobalNamespace {
struct OVRPlugin_Bool;
}
// Forward declare root types
namespace GlobalNamespace {
struct Qpl_OVRPlugin_Variant;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Qpl_OVRPlugin_Variant);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Qpl_OVRPlugin_Variant, "", "OVRPlugin/Qpl/Variant");
// Dependencies OVRPlugin::Bool, OVRPlugin::Qpl::VariantType
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Qpl/Variant
struct CORDL_TYPE Qpl_OVRPlugin_Variant {
public:
// Declarations
/// @brief Field BoolValue, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_BoolValue, put=__cordl_internal_set_BoolValue)) ::GlobalNamespace::OVRPlugin_Bool  BoolValue;

/// @brief Field BoolValues, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_BoolValues, put=__cordl_internal_set_BoolValues)) ::GlobalNamespace::OVRPlugin_Bool*  BoolValues;

/// @brief Field Count, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_Count, put=__cordl_internal_set_Count)) int32_t  Count;

/// @brief Field DoubleValue, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_DoubleValue, put=__cordl_internal_set_DoubleValue)) double_t  DoubleValue;

/// @brief Field DoubleValues, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_DoubleValues, put=__cordl_internal_set_DoubleValues)) double_t*  DoubleValues;

/// @brief Field LongValue, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_LongValue, put=__cordl_internal_set_LongValue)) int64_t  LongValue;

/// @brief Field LongValues, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_LongValues, put=__cordl_internal_set_LongValues)) int64_t*  LongValues;

/// @brief Field StringValue, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_StringValue, put=__cordl_internal_set_StringValue)) uint8_t*  StringValue;

/// @brief Field StringValues, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_StringValues, put=__cordl_internal_set_StringValues)) uint8_t*  StringValues;

/// @brief Field Type, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::GlobalNamespace::Qpl_OVRPlugin_VariantType  Type;

/// @brief Method From, addr 0xa6140a4, size 0x10, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Qpl_OVRPlugin_Variant From(bool  value) ;

/// @brief Method From, addr 0xa614098, size 0xc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Qpl_OVRPlugin_Variant From(double_t  value) ;

/// @brief Method From, addr 0xa61408c, size 0xc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Qpl_OVRPlugin_Variant From(int64_t  value) ;

/// @brief Method From, addr 0xa614080, size 0xc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Qpl_OVRPlugin_Variant From(uint8_t*  value) ;

/// @brief Method From, addr 0xa6140f0, size 0x14, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Qpl_OVRPlugin_Variant From(::GlobalNamespace::OVRPlugin_Bool*  values, int32_t  count) ;

/// @brief Method From, addr 0xa6140dc, size 0x14, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Qpl_OVRPlugin_Variant From(double_t*  values, int32_t  count) ;

/// @brief Method From, addr 0xa6140c8, size 0x14, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Qpl_OVRPlugin_Variant From(int64_t*  values, int32_t  count) ;

/// @brief Method From, addr 0xa6140b4, size 0x14, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Qpl_OVRPlugin_Variant From(uint8_t*  values, int32_t  count) ;

constexpr ::GlobalNamespace::OVRPlugin_Bool const& __cordl_internal_get_BoolValue() const;

constexpr ::GlobalNamespace::OVRPlugin_Bool& __cordl_internal_get_BoolValue() ;

constexpr ::GlobalNamespace::OVRPlugin_Bool* const& __cordl_internal_get_BoolValues() const;

constexpr ::GlobalNamespace::OVRPlugin_Bool*& __cordl_internal_get_BoolValues() ;

constexpr int32_t const& __cordl_internal_get_Count() const;

constexpr int32_t& __cordl_internal_get_Count() ;

constexpr double_t const& __cordl_internal_get_DoubleValue() const;

constexpr double_t& __cordl_internal_get_DoubleValue() ;

constexpr double_t* const& __cordl_internal_get_DoubleValues() const;

constexpr double_t*& __cordl_internal_get_DoubleValues() ;

constexpr int64_t const& __cordl_internal_get_LongValue() const;

constexpr int64_t& __cordl_internal_get_LongValue() ;

constexpr int64_t* const& __cordl_internal_get_LongValues() const;

constexpr int64_t*& __cordl_internal_get_LongValues() ;

constexpr uint8_t* const& __cordl_internal_get_StringValue() const;

constexpr uint8_t*& __cordl_internal_get_StringValue() ;

constexpr uint8_t* const& __cordl_internal_get_StringValues() const;

constexpr uint8_t*& __cordl_internal_get_StringValues() ;

constexpr ::GlobalNamespace::Qpl_OVRPlugin_VariantType const& __cordl_internal_get_Type() const;

constexpr ::GlobalNamespace::Qpl_OVRPlugin_VariantType& __cordl_internal_get_Type() ;

constexpr void __cordl_internal_set_BoolValue(::GlobalNamespace::OVRPlugin_Bool  value) ;

constexpr void __cordl_internal_set_BoolValues(::GlobalNamespace::OVRPlugin_Bool*  value) ;

constexpr void __cordl_internal_set_Count(int32_t  value) ;

constexpr void __cordl_internal_set_DoubleValue(double_t  value) ;

constexpr void __cordl_internal_set_DoubleValues(double_t*  value) ;

constexpr void __cordl_internal_set_LongValue(int64_t  value) ;

constexpr void __cordl_internal_set_LongValues(int64_t*  value) ;

constexpr void __cordl_internal_set_StringValue(uint8_t*  value) ;

constexpr void __cordl_internal_set_StringValues(uint8_t*  value) ;

constexpr void __cordl_internal_set_Type(::GlobalNamespace::Qpl_OVRPlugin_VariantType  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Qpl_OVRPlugin_Variant() ;

// Ctor Parameters [CppParam { name: "Type", ty: "::GlobalNamespace::Qpl_OVRPlugin_VariantType", modifiers: "", def_value: None, comment: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "StringValue", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "LongValue", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DoubleValue", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoolValue", ty: "::GlobalNamespace::OVRPlugin_Bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "StringValues", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "LongValues", ty: "int64_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "DoubleValues", ty: "double_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoolValues", ty: "::GlobalNamespace::OVRPlugin_Bool*", modifiers: "", def_value: None, comment: None }]
constexpr Qpl_OVRPlugin_Variant(::GlobalNamespace::Qpl_OVRPlugin_VariantType  Type, int32_t  Count, uint8_t*  StringValue, int64_t  LongValue, double_t  DoubleValue, ::GlobalNamespace::OVRPlugin_Bool  BoolValue, uint8_t*  StringValues, int64_t*  LongValues, double_t*  DoubleValues, ::GlobalNamespace::OVRPlugin_Bool*  BoolValues) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Type_padding[0x0];
/// @brief Field Type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::Qpl_OVRPlugin_VariantType  ___Type;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Type_padding_forAlignment[0x0];
/// @brief Field Type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::Qpl_OVRPlugin_VariantType  ___Type_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___Count_padding[0x4];
/// @brief Field Count, offset: 0x4, size: 0x4, def value: None
 int32_t  ___Count;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___Count_padding_forAlignment[0x4];
/// @brief Field Count, offset: 0x4, size: 0x4, def value: None
 int32_t  ___Count_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___StringValue_padding[0x8];
/// @brief Field StringValue, offset: 0x8, size: 0x8, def value: None
 uint8_t*  ___StringValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___StringValue_padding_forAlignment[0x8];
/// @brief Field StringValue, offset: 0x8, size: 0x8, def value: None
 uint8_t*  ___StringValue_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___LongValue_padding[0x8];
/// @brief Field LongValue, offset: 0x8, size: 0x8, def value: None
 int64_t  ___LongValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___LongValue_padding_forAlignment[0x8];
/// @brief Field LongValue, offset: 0x8, size: 0x8, def value: None
 int64_t  ___LongValue_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___DoubleValue_padding[0x8];
/// @brief Field DoubleValue, offset: 0x8, size: 0x8, def value: None
 double_t  ___DoubleValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___DoubleValue_padding_forAlignment[0x8];
/// @brief Field DoubleValue, offset: 0x8, size: 0x8, def value: None
 double_t  ___DoubleValue_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___BoolValue_padding[0x8];
/// @brief Field BoolValue, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_Bool  ___BoolValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___BoolValue_padding_forAlignment[0x8];
/// @brief Field BoolValue, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_Bool  ___BoolValue_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___StringValues_padding[0x8];
/// @brief Field StringValues, offset: 0x8, size: 0x8, def value: None
 uint8_t*  ___StringValues;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___StringValues_padding_forAlignment[0x8];
/// @brief Field StringValues, offset: 0x8, size: 0x8, def value: None
 uint8_t*  ___StringValues_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___LongValues_padding[0x8];
/// @brief Field LongValues, offset: 0x8, size: 0x8, def value: None
 int64_t*  ___LongValues;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___LongValues_padding_forAlignment[0x8];
/// @brief Field LongValues, offset: 0x8, size: 0x8, def value: None
 int64_t*  ___LongValues_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___DoubleValues_padding[0x8];
/// @brief Field DoubleValues, offset: 0x8, size: 0x8, def value: None
 double_t*  ___DoubleValues;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___DoubleValues_padding_forAlignment[0x8];
/// @brief Field DoubleValues, offset: 0x8, size: 0x8, def value: None
 double_t*  ___DoubleValues_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___BoolValues_padding[0x8];
/// @brief Field BoolValues, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_Bool*  ___BoolValues;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___BoolValues_padding_forAlignment[0x8];
/// @brief Field BoolValues, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_Bool*  ___BoolValues_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12266};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Qpl_OVRPlugin_Variant) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
