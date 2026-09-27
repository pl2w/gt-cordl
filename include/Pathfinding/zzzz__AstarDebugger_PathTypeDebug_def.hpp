#pragma once
// IWYU pragma private; include "Pathfinding/AstarDebugger_PathTypeDebug.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AstarDebugger_PathTypeDebug)
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct AstarDebugger_PathTypeDebug;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AstarDebugger_PathTypeDebug);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AstarDebugger_PathTypeDebug, "Pathfinding", "AstarDebugger/PathTypeDebug");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.AstarDebugger/PathTypeDebug
struct CORDL_TYPE AstarDebugger_PathTypeDebug {
public:
// Declarations
/// @brief Method Print, addr 0x5e55000, size 0x148, virtual false, abstract: false, final false
inline void Print(::System::Text::StringBuilder*  text) ;

/// @brief Method .ctor, addr 0x5e55c54, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::System::Func_1<int32_t>*  getSize, ::System::Func_1<int32_t>*  getTotalCreated) ;

// Ctor Parameters []
// @brief default ctor
constexpr AstarDebugger_PathTypeDebug() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "getSize", ty: "::System::Func_1<int32_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "getTotalCreated", ty: "::System::Func_1<int32_t>*", modifiers: "", def_value: None, comment: None }]
constexpr AstarDebugger_PathTypeDebug(::StringW  name, ::System::Func_1<int32_t>*  getSize, ::System::Func_1<int32_t>*  getTotalCreated) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21236};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field getSize, offset: 0x8, size: 0x8, def value: None
 ::System::Func_1<int32_t>*  getSize;

/// @brief Field getTotalCreated, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<int32_t>*  getTotalCreated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AstarDebugger_PathTypeDebug, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarDebugger_PathTypeDebug, getSize) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarDebugger_PathTypeDebug, getTotalCreated) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AstarDebugger_PathTypeDebug) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
