#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/JsonParser_JsonString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Utilities/zzzz__Substring_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonParser_JsonString)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct JsonParser_JsonString;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JsonParser_JsonString);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JsonParser_JsonString, "UnityEngine.InputSystem.Utilities", "JsonParser/JsonString");
// Dependencies UnityEngine.InputSystem.Utilities.Substring
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct CORDL_TYPE JsonParser_JsonString {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::JsonParser_JsonString>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::JsonParser_JsonString>*() ;

/// @brief Method Equals, addr 0xaf3de98, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xaf3dd1c, size 0x17c, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::JsonParser_JsonString  other) ;

/// @brief Method GetHashCode, addr 0xaf3df28, size 0x58, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xaf3dc20, size 0xfc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::JsonParser_JsonString>"
constexpr ::System::IEquatable_1<::GlobalNamespace::JsonParser_JsonString>* i___System__IEquatable_1___GlobalNamespace__JsonParser_JsonString_() ;

/// @brief Method op_Equality, addr 0xaf3df80, size 0x30, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::JsonParser_JsonString  left, ::GlobalNamespace::JsonParser_JsonString  right) ;

/// @brief Method op_Implicit, addr 0xaf3dfe4, size 0x48, virtual false, abstract: false, final false
static inline ::GlobalNamespace::JsonParser_JsonString op_Implicit___GlobalNamespace__JsonParser_JsonString(::StringW  str) ;

/// @brief Method op_Inequality, addr 0xaf3dfb0, size 0x34, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::JsonParser_JsonString  left, ::GlobalNamespace::JsonParser_JsonString  right) ;

// Ctor Parameters []
// @brief default ctor
constexpr JsonParser_JsonString() ;

// Ctor Parameters [CppParam { name: "text", ty: "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasEscapes", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr JsonParser_JsonString(::UnityEngine::InputSystem::Utilities::Substring  text, bool  hasEscapes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13897};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field text, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::Substring  text;

/// @brief Field hasEscapes, offset: 0x10, size: 0x1, def value: None
 bool  hasEscapes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JsonParser_JsonString, text) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonParser_JsonString, hasEscapes) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JsonParser_JsonString) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
