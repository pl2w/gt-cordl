#pragma once
// IWYU pragma private; include "LitJson/WriterContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WriterContext)
// Forward declare root types
namespace LitJson {
class WriterContext;
}
// Write type traits
MARK_REF_T(::LitJson::WriterContext*);
DEFINE_IL2CPP_CLASS(::LitJson::WriterContext*, "LitJson", "WriterContext");
// Dependencies System.Object
namespace LitJson {
// Is value type: false
// CS Name: LitJson.WriterContext
class CORDL_TYPE WriterContext : public ::System::Object {
public:
// Declarations
/// @brief Field Count, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Count, put=__cordl_internal_set_Count)) int32_t  Count;

/// @brief Field ExpectingValue, offset 0x16, size 0x1 
 __declspec(property(get=__cordl_internal_get_ExpectingValue, put=__cordl_internal_set_ExpectingValue)) bool  ExpectingValue;

/// @brief Field InArray, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_InArray, put=__cordl_internal_set_InArray)) bool  InArray;

/// @brief Field InObject, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get_InObject, put=__cordl_internal_set_InObject)) bool  InObject;

/// @brief Field Padding, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Padding, put=__cordl_internal_set_Padding)) int32_t  Padding;

static inline ::LitJson::WriterContext* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_Count() const;

constexpr int32_t& __cordl_internal_get_Count() ;

constexpr bool const& __cordl_internal_get_ExpectingValue() const;

constexpr bool& __cordl_internal_get_ExpectingValue() ;

constexpr bool const& __cordl_internal_get_InArray() const;

constexpr bool& __cordl_internal_get_InArray() ;

constexpr bool const& __cordl_internal_get_InObject() const;

constexpr bool& __cordl_internal_get_InObject() ;

constexpr int32_t const& __cordl_internal_get_Padding() const;

constexpr int32_t& __cordl_internal_get_Padding() ;

constexpr void __cordl_internal_set_Count(int32_t  value) ;

constexpr void __cordl_internal_set_ExpectingValue(bool  value) ;

constexpr void __cordl_internal_set_InArray(bool  value) ;

constexpr void __cordl_internal_set_InObject(bool  value) ;

constexpr void __cordl_internal_set_Padding(int32_t  value) ;

/// @brief Method .ctor, addr 0x5b69274, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WriterContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WriterContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WriterContext(WriterContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WriterContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WriterContext(WriterContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3837};

/// @brief Field Count, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Count;

/// @brief Field InArray, offset: 0x14, size: 0x1, def value: None
 bool  ___InArray;

/// @brief Field InObject, offset: 0x15, size: 0x1, def value: None
 bool  ___InObject;

/// @brief Field ExpectingValue, offset: 0x16, size: 0x1, def value: None
 bool  ___ExpectingValue;

/// @brief Field Padding, offset: 0x18, size: 0x4, def value: None
 int32_t  ___Padding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LitJson::WriterContext, ___Count) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LitJson::WriterContext, ___InArray) == 0x14, "Offset mismatch!");

static_assert(offsetof(::LitJson::WriterContext, ___InObject) == 0x15, "Offset mismatch!");

static_assert(offsetof(::LitJson::WriterContext, ___ExpectingValue) == 0x16, "Offset mismatch!");

static_assert(offsetof(::LitJson::WriterContext, ___Padding) == 0x18, "Offset mismatch!");

static_assert(sizeof(::LitJson::WriterContext) == 0x20, "Size mismatch!");

} // namespace end def LitJson
