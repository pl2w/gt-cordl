#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/JsonParser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonParser)
namespace GlobalNamespace {
struct JsonParser_JsonString;
}
namespace GlobalNamespace {
struct JsonParser_JsonValueType;
}
namespace GlobalNamespace {
struct JsonParser_JsonValue;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class JsonValue_JsonParser___c;
}
namespace UnityEngine::InputSystem::Utilities {
struct JsonParser;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*);
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::JsonParser);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*, "UnityEngine.InputSystem.Utilities", "JsonParser/JsonValue/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Utilities::JsonParser, "UnityEngine.InputSystem.Utilities", "JsonParser");
// Dependencies 
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Utilities.JsonParser
struct CORDL_TYPE JsonParser {
public:
// Declarations
using JsonString = ::GlobalNamespace::JsonParser_JsonString;

using JsonValue = ::GlobalNamespace::JsonParser_JsonValue;

using JsonValueType = ::GlobalNamespace::JsonParser_JsonValueType;

 __declspec(property(get=get_isAtEnd)) bool  isAtEnd;

/// @brief Method CurrentPropertyHasValueEqualTo, addr 0xaf32c08, size 0x158, virtual false, abstract: false, final false
inline bool CurrentPropertyHasValueEqualTo(::GlobalNamespace::JsonParser_JsonValue  expectedValue) ;

/// @brief Method NavigateToProperty, addr 0xaf32758, size 0x450, virtual false, abstract: false, final false
inline bool NavigateToProperty(::StringW  path) ;

/// @brief Method ParseArrayValue, addr 0xaf3d074, size 0x2f0, virtual false, abstract: false, final false
inline bool ParseArrayValue(::by_ref<::GlobalNamespace::JsonParser_JsonValue>  result) ;

/// @brief Method ParseBooleanValue, addr 0xaf3d4d8, size 0xf4, virtual false, abstract: false, final false
inline bool ParseBooleanValue(::by_ref<::GlobalNamespace::JsonParser_JsonValue>  result) ;

/// @brief Method ParseNullValue, addr 0xaf3d5cc, size 0x64, virtual false, abstract: false, final false
inline bool ParseNullValue(::by_ref<::GlobalNamespace::JsonParser_JsonValue>  result) ;

/// @brief Method ParseNumber, addr 0xaf3d630, size 0x474, virtual false, abstract: false, final false
inline bool ParseNumber(::by_ref<::GlobalNamespace::JsonParser_JsonValue>  result) ;

/// @brief Method ParseObjectValue, addr 0xaf3d364, size 0x174, virtual false, abstract: false, final false
inline bool ParseObjectValue(::by_ref<::GlobalNamespace::JsonParser_JsonValue>  result) ;

/// @brief Method ParseStringValue, addr 0xaf3cec0, size 0x1b4, virtual false, abstract: false, final false
inline bool ParseStringValue(::by_ref<::GlobalNamespace::JsonParser_JsonValue>  result) ;

/// @brief Method ParseToken, addr 0xaf3cbfc, size 0x74, virtual false, abstract: false, final false
inline bool ParseToken(char16_t  token) ;

/// @brief Method ParseValue, addr 0xaf3cd4c, size 0x30, virtual false, abstract: false, final false
inline bool ParseValue() ;

/// @brief Method ParseValue, addr 0xaf3cd7c, size 0x110, virtual false, abstract: false, final false
inline bool ParseValue(::by_ref<::GlobalNamespace::JsonParser_JsonValue>  result) ;

/// @brief Method Reset, addr 0xaf3cb10, size 0xc, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SkipString, addr 0xaf3db40, size 0xa8, virtual false, abstract: false, final false
inline bool SkipString(::StringW  text) ;

/// @brief Method SkipToValue, addr 0xaf3ccec, size 0x60, virtual false, abstract: false, final false
inline bool SkipToValue() ;

/// @brief Method SkipWhitespace, addr 0xaf3cc70, size 0x7c, virtual false, abstract: false, final false
inline void SkipWhitespace() ;

/// @brief Method ToString, addr 0xaf3cb1c, size 0xe0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xaf326d8, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::StringW  json) ;

/// @brief Method get_isAtEnd, addr 0xaf3dc10, size 0x10, virtual false, abstract: false, final false
inline bool get_isAtEnd() ;

// Ctor Parameters []
// @brief default ctor
constexpr JsonParser() ;

// Ctor Parameters [CppParam { name: "m_Text", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Position", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MatchAnyElementInArray", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DryRun", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr JsonParser(::StringW  m_Text, int32_t  m_Length, int32_t  m_Position, bool  m_MatchAnyElementInArray, bool  m_DryRun) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13900};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Text, offset: 0x0, size: 0x8, def value: None
 ::StringW  m_Text;

/// @brief Field m_Length, offset: 0x8, size: 0x4, def value: None
 int32_t  m_Length;

/// @brief Field m_Position, offset: 0xc, size: 0x4, def value: None
 int32_t  m_Position;

/// @brief Field m_MatchAnyElementInArray, offset: 0x10, size: 0x1, def value: None
 bool  m_MatchAnyElementInArray;

/// @brief Field m_DryRun, offset: 0x11, size: 0x1, def value: None
 bool  m_DryRun;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser, m_Text) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser, m_Length) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser, m_Position) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser, m_MatchAnyElementInArray) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::JsonParser, m_DryRun) == 0x11, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::Utilities::JsonParser) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.JsonParser/JsonValue/<>c
class CORDL_TYPE JsonValue_JsonParser___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*  __9;

/// @brief Field <>9__11_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_0, put=setStaticF___9__11_0)) ::System::Func_2<::GlobalNamespace::JsonParser_JsonValue,::StringW>*  __9__11_0;

/// @brief Field <>9__11_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_1, put=setStaticF___9__11_1)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::JsonParser_JsonValue>,::StringW>*  __9__11_1;

static inline ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c* New_ctor() ;

/// @brief Method <ToString>b__11_0, addr 0xaf3f4dc, size 0x8, virtual false, abstract: false, final false
inline ::StringW _ToString_b__11_0(::GlobalNamespace::JsonParser_JsonValue  x) ;

/// @brief Method <ToString>b__11_1, addr 0xaf3f4e4, size 0xb4, virtual false, abstract: false, final false
inline ::StringW _ToString_b__11_1(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::JsonParser_JsonValue>  pair) ;

/// @brief Method .ctor, addr 0xaf3f4d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c* getStaticF___9() ;

static inline ::System::Func_2<::GlobalNamespace::JsonParser_JsonValue,::StringW>* getStaticF___9__11_0() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::JsonParser_JsonValue>,::StringW>* getStaticF___9__11_1() ;

static inline void setStaticF___9(::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*  value) ;

static inline void setStaticF___9__11_0(::System::Func_2<::GlobalNamespace::JsonParser_JsonValue,::StringW>*  value) ;

static inline void setStaticF___9__11_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::JsonParser_JsonValue>,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonValue_JsonParser___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonValue_JsonParser___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonValue_JsonParser___c(JsonValue_JsonParser___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonValue_JsonParser___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonValue_JsonParser___c(JsonValue_JsonParser___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13898};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Utilities
