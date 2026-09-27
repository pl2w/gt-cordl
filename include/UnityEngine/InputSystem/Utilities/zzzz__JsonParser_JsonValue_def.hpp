#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/JsonParser_JsonValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_JsonString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_JsonValueType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonParser_JsonValue)
namespace GlobalNamespace {
struct JsonParser_JsonString;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Enum;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::Utilities {
class JsonValue_JsonParser___c;
}
// Forward declare root types
namespace GlobalNamespace {
struct JsonParser_JsonValue;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JsonParser_JsonValue);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JsonParser_JsonValue, "UnityEngine.InputSystem.Utilities", "JsonParser/JsonValue");
// Dependencies UnityEngine.InputSystem.Utilities.JsonParser::JsonString, UnityEngine.InputSystem.Utilities.JsonParser::JsonValueType
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct CORDL_TYPE JsonParser_JsonValue {
public:
// Declarations
using __c = ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::JsonParser_JsonValue>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::JsonParser_JsonValue>*() ;

/// @brief Method Equals, addr 0xaf3f278, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xaf3eaec, size 0x78c, virtual false, abstract: false, final false
static inline bool Equals(::System::Object*  obj, ::GlobalNamespace::JsonParser_JsonValue  value) ;

/// @brief Method Equals, addr 0xaf3e8c0, size 0x22c, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::JsonParser_JsonValue  other) ;

/// @brief Method GetHashCode, addr 0xaf3f308, size 0x12c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToBoolean, addr 0xaf3e02c, size 0x140, virtual false, abstract: false, final false
inline bool ToBoolean() ;

/// @brief Method ToDouble, addr 0xaf3e6d8, size 0xc8, virtual false, abstract: false, final false
inline double_t ToDouble() ;

/// @brief Method ToInteger, addr 0xaf3e608, size 0xd0, virtual false, abstract: false, final false
inline int64_t ToInteger() ;

/// @brief Method ToString, addr 0xaf3e16c, size 0x49c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::JsonParser_JsonValue>"
constexpr ::System::IEquatable_1<::GlobalNamespace::JsonParser_JsonValue>* i___System__IEquatable_1___GlobalNamespace__JsonParser_JsonValue_() ;

/// @brief Method op_Equality, addr 0xaf3ce8c, size 0x34, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::JsonParser_JsonValue  left, ::GlobalNamespace::JsonParser_JsonValue  right) ;

/// @brief Method op_Implicit, addr 0xaf3daa4, size 0x54, virtual false, abstract: false, final false
static inline ::GlobalNamespace::JsonParser_JsonValue op_Implicit___GlobalNamespace__JsonParser_JsonValue(::System::Collections::Generic::List_1<::GlobalNamespace::JsonParser_JsonValue>*  array) ;

/// @brief Method op_Implicit, addr 0xaf3e820, size 0x50, virtual false, abstract: false, final false
static inline ::GlobalNamespace::JsonParser_JsonValue op_Implicit___GlobalNamespace__JsonParser_JsonValue(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::JsonParser_JsonValue>*  obj) ;

/// @brief Method op_Implicit, addr 0xaf32ba8, size 0x60, virtual false, abstract: false, final false
static inline ::GlobalNamespace::JsonParser_JsonValue op_Implicit___GlobalNamespace__JsonParser_JsonValue(::GlobalNamespace::JsonParser_JsonString  str) ;

/// @brief Method op_Implicit, addr 0xaf3e7a0, size 0x80, virtual false, abstract: false, final false
static inline ::GlobalNamespace::JsonParser_JsonValue op_Implicit___GlobalNamespace__JsonParser_JsonValue(::StringW  str) ;

/// @brief Method op_Implicit, addr 0xaf3e870, size 0x50, virtual false, abstract: false, final false
static inline ::GlobalNamespace::JsonParser_JsonValue op_Implicit___GlobalNamespace__JsonParser_JsonValue(::System::Enum*  val) ;

/// @brief Method op_Implicit, addr 0xaf3dbe8, size 0x28, virtual false, abstract: false, final false
static inline ::GlobalNamespace::JsonParser_JsonValue op_Implicit___GlobalNamespace__JsonParser_JsonValue(bool  val) ;

/// @brief Method op_Implicit, addr 0xaf3db20, size 0x20, virtual false, abstract: false, final false
static inline ::GlobalNamespace::JsonParser_JsonValue op_Implicit___GlobalNamespace__JsonParser_JsonValue(double_t  val) ;

/// @brief Method op_Implicit, addr 0xaf3daf8, size 0x28, virtual false, abstract: false, final false
static inline ::GlobalNamespace::JsonParser_JsonValue op_Implicit___GlobalNamespace__JsonParser_JsonValue(int64_t  val) ;

/// @brief Method op_Inequality, addr 0xaf3f434, size 0x38, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::JsonParser_JsonValue  left, ::GlobalNamespace::JsonParser_JsonValue  right) ;

// Ctor Parameters []
// @brief default ctor
constexpr JsonParser_JsonValue() ;

// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::JsonParser_JsonValueType", modifiers: "", def_value: None, comment: None }, CppParam { name: "boolValue", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "realValue", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "integerValue", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "stringValue", ty: "::GlobalNamespace::JsonParser_JsonString", modifiers: "", def_value: None, comment: None }, CppParam { name: "arrayValue", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::JsonParser_JsonValue>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "objectValue", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::JsonParser_JsonValue>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "anyValue", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }]
constexpr JsonParser_JsonValue(::GlobalNamespace::JsonParser_JsonValueType  type, bool  boolValue, double_t  realValue, int64_t  integerValue, ::GlobalNamespace::JsonParser_JsonString  stringValue, ::System::Collections::Generic::List_1<::GlobalNamespace::JsonParser_JsonValue>*  arrayValue, ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::JsonParser_JsonValue>*  objectValue, ::System::Object*  anyValue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13899};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::JsonParser_JsonValueType  type;

/// @brief Field boolValue, offset: 0x4, size: 0x1, def value: None
 bool  boolValue;

/// @brief Field realValue, offset: 0x8, size: 0x8, def value: None
 double_t  realValue;

/// @brief Field integerValue, offset: 0x10, size: 0x8, def value: None
 int64_t  integerValue;

/// @brief Field stringValue, offset: 0x18, size: 0x18, def value: None
 ::GlobalNamespace::JsonParser_JsonString  stringValue;

/// @brief Field arrayValue, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::JsonParser_JsonValue>*  arrayValue;

/// @brief Field objectValue, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::JsonParser_JsonValue>*  objectValue;

/// @brief Field anyValue, offset: 0x40, size: 0x8, def value: None
 ::System::Object*  anyValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JsonParser_JsonValue, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonParser_JsonValue, boolValue) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonParser_JsonValue, realValue) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonParser_JsonValue, integerValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonParser_JsonValue, stringValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonParser_JsonValue, arrayValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonParser_JsonValue, objectValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonParser_JsonValue, anyValue) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JsonParser_JsonValue) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
