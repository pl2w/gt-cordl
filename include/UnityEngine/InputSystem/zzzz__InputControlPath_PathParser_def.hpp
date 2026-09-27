#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlPath_PathParser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputControlPath_ParsedPathComponent_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlPath_PathParser)
namespace UnityEngine::InputSystem::Utilities {
struct Substring;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputControlPath_PathParser;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputControlPath_PathParser);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputControlPath_PathParser, "UnityEngine.InputSystem", "InputControlPath/PathParser");
// Dependencies UnityEngine.InputSystem.InputControlPath::ParsedPathComponent
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlPath/PathParser
struct CORDL_TYPE InputControlPath_PathParser {
public:
// Declarations
 __declspec(property(get=get_isAtEnd)) bool  isAtEnd;

/// @brief Method MoveToNextComponent, addr 0xaf579fc, size 0x2ec, virtual false, abstract: false, final false
inline bool MoveToNextComponent() ;

/// @brief Method ParseComponentPart, addr 0xaf5a138, size 0x108, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::Substring ParseComponentPart(char16_t  terminator) ;

/// @brief Method .ctor, addr 0xaf579ac, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::StringW  path) ;

/// @brief Method get_isAtEnd, addr 0xaf58e38, size 0x14, virtual false, abstract: false, final false
inline bool get_isAtEnd() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputControlPath_PathParser() ;

// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftIndexInPath", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightIndexInPath", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "current", ty: "::GlobalNamespace::InputControlPath_ParsedPathComponent", modifiers: "", def_value: None, comment: None }]
constexpr InputControlPath_PathParser(::StringW  path, int32_t  length, int32_t  leftIndexInPath, int32_t  rightIndexInPath, ::GlobalNamespace::InputControlPath_ParsedPathComponent  current) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13441};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field path, offset: 0x0, size: 0x8, def value: None
 ::StringW  path;

/// @brief Field length, offset: 0x8, size: 0x4, def value: None
 int32_t  length;

/// @brief Field leftIndexInPath, offset: 0xc, size: 0x4, def value: None
 int32_t  leftIndexInPath;

/// @brief Field rightIndexInPath, offset: 0x10, size: 0x4, def value: None
 int32_t  rightIndexInPath;

/// @brief Field current, offset: 0x18, size: 0x48, def value: None
 ::GlobalNamespace::InputControlPath_ParsedPathComponent  current;

/// @brief Size padding 0x68 - 0x60 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputControlPath_PathParser, path) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlPath_PathParser, length) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlPath_PathParser, leftIndexInPath) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlPath_PathParser, rightIndexInPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlPath_PathParser, current) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputControlPath_PathParser) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
