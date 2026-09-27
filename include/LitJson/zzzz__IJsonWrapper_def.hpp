#pragma once
// IWYU pragma private; include "LitJson/IJsonWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IJsonWrapper)
namespace LitJson {
struct JsonType;
}
namespace LitJson {
class JsonWriter;
}
namespace System::Collections::Specialized {
class IOrderedDictionary;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace LitJson {
class IJsonWrapper;
}
// Write type traits
MARK_REF_T(::LitJson::IJsonWrapper*);
DEFINE_IL2CPP_CLASS(::LitJson::IJsonWrapper*, "LitJson", "IJsonWrapper");
// Dependencies 
namespace LitJson {
// Is value type: false
// CS Name: LitJson.IJsonWrapper
class CORDL_TYPE IJsonWrapper {
public:
// Declarations
 __declspec(property(get=get_IsArray)) bool  IsArray;

 __declspec(property(get=get_IsBoolean)) bool  IsBoolean;

 __declspec(property(get=get_IsDouble)) bool  IsDouble;

 __declspec(property(get=get_IsInt)) bool  IsInt;

 __declspec(property(get=get_IsLong)) bool  IsLong;

 __declspec(property(get=get_IsObject)) bool  IsObject;

 __declspec(property(get=get_IsString)) bool  IsString;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IDictionary"
constexpr operator  ::System::Collections::IDictionary*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IList"
constexpr operator  ::System::Collections::IList*() noexcept;

/// @brief Convert operator to "::System::Collections::Specialized::IOrderedDictionary"
constexpr operator  ::System::Collections::Specialized::IOrderedDictionary*() noexcept;

/// @brief Method GetBoolean, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetBoolean() ;

/// @brief Method GetDouble, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline double_t GetDouble() ;

/// @brief Method GetInt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t GetInt() ;

/// @brief Method GetJsonType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::LitJson::JsonType GetJsonType() ;

/// @brief Method GetLong, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int64_t GetLong() ;

/// @brief Method GetString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetString() ;

/// @brief Method SetBoolean, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetBoolean(bool  val) ;

/// @brief Method SetDouble, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetDouble(double_t  val) ;

/// @brief Method SetInt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetInt(int32_t  val) ;

/// @brief Method SetJsonType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetJsonType(::LitJson::JsonType  type) ;

/// @brief Method SetLong, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetLong(int64_t  val) ;

/// @brief Method SetString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetString(::StringW  val) ;

/// @brief Method ToJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW ToJson() ;

/// @brief Method ToJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ToJson(::LitJson::JsonWriter*  writer) ;

/// @brief Method get_IsArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsArray() ;

/// @brief Method get_IsBoolean, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsBoolean() ;

/// @brief Method get_IsDouble, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsDouble() ;

/// @brief Method get_IsInt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsInt() ;

/// @brief Method get_IsLong, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsLong() ;

/// @brief Method get_IsObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsObject() ;

/// @brief Method get_IsString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsString() ;

/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

/// @brief Convert to "::System::Collections::IDictionary"
constexpr ::System::Collections::IDictionary* i___System__Collections__IDictionary() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

/// @brief Convert to "::System::Collections::Specialized::IOrderedDictionary"
constexpr ::System::Collections::Specialized::IOrderedDictionary* i___System__Collections__Specialized__IOrderedDictionary() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IJsonWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IJsonWrapper(IJsonWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3818};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LitJson
