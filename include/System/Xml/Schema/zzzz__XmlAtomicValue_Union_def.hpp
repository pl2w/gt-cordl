#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlAtomicValue_Union.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlAtomicValue_Union)
// Forward declare root types
namespace GlobalNamespace {
struct XmlAtomicValue_Union;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlAtomicValue_Union);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlAtomicValue_Union, "System.Xml.Schema", "XmlAtomicValue/Union");
// Dependencies System.DateTime
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.Schema.XmlAtomicValue/Union
#pragma pack(push, 0)
struct CORDL_TYPE XmlAtomicValue_Union {
public:
// Declarations
/// @brief Field boolVal, offset 0x0, size 0x1 
 __declspec(property(get=__cordl_internal_get_boolVal, put=__cordl_internal_set_boolVal)) bool  boolVal;

/// @brief Field dblVal, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_dblVal, put=__cordl_internal_set_dblVal)) double_t  dblVal;

/// @brief Field dtVal, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_dtVal, put=__cordl_internal_set_dtVal)) ::System::DateTime  dtVal;

/// @brief Field i32Val, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_i32Val, put=__cordl_internal_set_i32Val)) int32_t  i32Val;

/// @brief Field i64Val, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_i64Val, put=__cordl_internal_set_i64Val)) int64_t  i64Val;

constexpr bool const& __cordl_internal_get_boolVal() const;

constexpr bool& __cordl_internal_get_boolVal() ;

constexpr double_t const& __cordl_internal_get_dblVal() const;

constexpr double_t& __cordl_internal_get_dblVal() ;

constexpr ::System::DateTime const& __cordl_internal_get_dtVal() const;

constexpr ::System::DateTime& __cordl_internal_get_dtVal() ;

constexpr int32_t const& __cordl_internal_get_i32Val() const;

constexpr int32_t& __cordl_internal_get_i32Val() ;

constexpr int64_t const& __cordl_internal_get_i64Val() const;

constexpr int64_t& __cordl_internal_get_i64Val() ;

constexpr void __cordl_internal_set_boolVal(bool  value) ;

constexpr void __cordl_internal_set_dblVal(double_t  value) ;

constexpr void __cordl_internal_set_dtVal(::System::DateTime  value) ;

constexpr void __cordl_internal_set_i32Val(int32_t  value) ;

constexpr void __cordl_internal_set_i64Val(int64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr XmlAtomicValue_Union() ;

// Ctor Parameters [CppParam { name: "boolVal", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "dblVal", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "i64Val", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "i32Val", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "dtVal", ty: "::System::DateTime", modifiers: "", def_value: None, comment: None }]
constexpr XmlAtomicValue_Union(bool  boolVal, double_t  dblVal, int64_t  i64Val, int32_t  i32Val, ::System::DateTime  dtVal) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___boolVal_padding[0x0];
/// @brief Field boolVal, offset: 0x0, size: 0x1, def value: None
 bool  ___boolVal;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___boolVal_padding_forAlignment[0x0];
/// @brief Field boolVal, offset: 0x0, size: 0x1, def value: None
 bool  ___boolVal_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___dblVal_padding[0x0];
/// @brief Field dblVal, offset: 0x0, size: 0x8, def value: None
 double_t  ___dblVal;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___dblVal_padding_forAlignment[0x0];
/// @brief Field dblVal, offset: 0x0, size: 0x8, def value: None
 double_t  ___dblVal_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___i64Val_padding[0x0];
/// @brief Field i64Val, offset: 0x0, size: 0x8, def value: None
 int64_t  ___i64Val;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___i64Val_padding_forAlignment[0x0];
/// @brief Field i64Val, offset: 0x0, size: 0x8, def value: None
 int64_t  ___i64Val_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___i32Val_padding[0x0];
/// @brief Field i32Val, offset: 0x0, size: 0x4, def value: None
 int32_t  ___i32Val;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___i32Val_padding_forAlignment[0x0];
/// @brief Field i32Val, offset: 0x0, size: 0x4, def value: None
 int32_t  ___i32Val_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___dtVal_padding[0x0];
/// @brief Field dtVal, offset: 0x0, size: 0x8, def value: None
 ::System::DateTime  ___dtVal;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___dtVal_padding_forAlignment[0x0];
/// @brief Field dtVal, offset: 0x0, size: 0x8, def value: None
 ::System::DateTime  ___dtVal_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14466};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::XmlAtomicValue_Union) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
