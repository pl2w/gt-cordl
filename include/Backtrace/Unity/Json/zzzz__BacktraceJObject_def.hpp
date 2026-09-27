#pragma once
// IWYU pragma private; include "Backtrace/Unity/Json/BacktraceJObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BacktraceJObject)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Backtrace::Unity::Json {
class BacktraceJObject;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Json::BacktraceJObject*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Json::BacktraceJObject*, "Backtrace.Unity.Json", "BacktraceJObject");
// Dependencies System.Object
namespace Backtrace::Unity::Json {
// Is value type: false
// CS Name: Backtrace.Unity.Json.BacktraceJObject
class CORDL_TYPE BacktraceJObject : public ::System::Object {
public:
// Declarations
/// @brief Field ComplexObjects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ComplexObjects, put=__cordl_internal_set_ComplexObjects)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  ComplexObjects;

/// @brief Field InnerObjects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_InnerObjects, put=__cordl_internal_set_InnerObjects)) ::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Json::BacktraceJObject*>*  InnerObjects;

/// @brief Field PrimitiveValues, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_PrimitiveValues, put=__cordl_internal_set_PrimitiveValues)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  PrimitiveValues;

/// @brief Field UserPrimitives, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_UserPrimitives, put=__cordl_internal_set_UserPrimitives)) ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  UserPrimitives;

/// @brief Method Add, addr 0x5f161d4, size 0x94, virtual false, abstract: false, final false
inline void Add(::StringW  key, ::Backtrace::Unity::Json::BacktraceJObject*  value) ;

/// @brief Method Add, addr 0x5f167a4, size 0x110, virtual false, abstract: false, final false
inline void Add(::StringW  key, ::StringW  value) ;

/// @brief Method Add, addr 0x5f1737c, size 0x68, virtual false, abstract: false, final false
inline void Add(::StringW  key, ::System::Collections::IEnumerable*  value) ;

/// @brief Method Add, addr 0x5f1b504, size 0xd8, virtual false, abstract: false, final false
inline void Add(::StringW  key, bool  value) ;

/// @brief Method Add, addr 0x5f1f834, size 0xbc, virtual false, abstract: false, final false
inline void Add(::StringW  key, double_t  value, ::StringW  format) ;

/// @brief Method Add, addr 0x5f241b8, size 0xbc, virtual false, abstract: false, final false
inline void Add(::StringW  key, float_t  value, ::StringW  format) ;

/// @brief Method Add, addr 0x5f15fcc, size 0xac, virtual false, abstract: false, final false
inline void Add(::StringW  key, int64_t  value) ;

/// @brief Method AddUserPrimitives, addr 0x5f24760, size 0x4d4, virtual false, abstract: false, final false
inline void AddUserPrimitives(::System::Text::StringBuilder*  stringBuilder) ;

/// @brief Method AppendComplexValues, addr 0x5f24e7c, size 0x6c0, virtual false, abstract: false, final false
inline void AppendComplexValues(::System::Text::StringBuilder*  stringBuilder) ;

/// @brief Method AppendJObjects, addr 0x5f24c34, size 0x248, virtual false, abstract: false, final false
inline void AppendJObjects(::System::Text::StringBuilder*  stringBuilder) ;

/// @brief Method AppendKey, addr 0x5f255ac, size 0xd0, virtual false, abstract: false, final false
inline void AppendKey(::StringW  value, ::System::Text::StringBuilder*  builder) ;

/// @brief Method AppendPrimitives, addr 0x5f24538, size 0x228, virtual false, abstract: false, final false
inline void AppendPrimitives(::System::Text::StringBuilder*  stringBuilder) ;

/// @brief Method EscapeString, addr 0x5f24274, size 0x218, virtual false, abstract: false, final false
inline void EscapeString(::StringW  value, ::System::Text::StringBuilder*  output) ;

/// @brief Method IntToHex, addr 0x5f258ac, size 0x18, virtual false, abstract: false, final false
inline char16_t IntToHex(int32_t  n) ;

static inline ::Backtrace::Unity::Json::BacktraceJObject* New_ctor() ;

static inline ::Backtrace::Unity::Json::BacktraceJObject* New_ctor(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  source) ;

/// @brief Method ShouldContinueAddingJSONProperties, addr 0x5f2553c, size 0x70, virtual false, abstract: false, final false
inline bool ShouldContinueAddingJSONProperties(::System::Text::StringBuilder*  stringBuilder) ;

/// @brief Method ToCharAsUnicodeToStringBuilder, addr 0x5f2567c, size 0x230, virtual false, abstract: false, final false
inline void ToCharAsUnicodeToStringBuilder(char16_t  c, ::System::Text::StringBuilder*  output) ;

/// @brief Method ToJson, addr 0x5f1efb8, size 0x74, virtual false, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToJson, addr 0x5f2448c, size 0xac, virtual false, abstract: false, final false
inline void ToJson(::System::Text::StringBuilder*  stringBuilder) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& __cordl_internal_get_ComplexObjects() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& __cordl_internal_get_ComplexObjects() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Json::BacktraceJObject*>* const& __cordl_internal_get_InnerObjects() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Json::BacktraceJObject*>*& __cordl_internal_get_InnerObjects() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_PrimitiveValues() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_PrimitiveValues() ;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* const& __cordl_internal_get_UserPrimitives() const;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*& __cordl_internal_get_UserPrimitives() ;

constexpr void __cordl_internal_set_ComplexObjects(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

constexpr void __cordl_internal_set_InnerObjects(::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Json::BacktraceJObject*>*  value) ;

constexpr void __cordl_internal_set_PrimitiveValues(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_UserPrimitives(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method .ctor, addr 0x5f15fc4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5f16078, size 0x15c, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  source) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceJObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceJObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceJObject(BacktraceJObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceJObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceJObject(BacktraceJObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27656};

/// @brief Field PrimitiveValues, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___PrimitiveValues;

/// @brief Field UserPrimitives, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  ___UserPrimitives;

/// @brief Field InnerObjects, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Json::BacktraceJObject*>*  ___InnerObjects;

/// @brief Field ComplexObjects, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  ___ComplexObjects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Json::BacktraceJObject, ___PrimitiveValues) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Json::BacktraceJObject, ___UserPrimitives) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Json::BacktraceJObject, ___InnerObjects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Json::BacktraceJObject, ___ComplexObjects) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Json::BacktraceJObject) == 0x30, "Size mismatch!");

} // namespace end def Backtrace::Unity::Json
