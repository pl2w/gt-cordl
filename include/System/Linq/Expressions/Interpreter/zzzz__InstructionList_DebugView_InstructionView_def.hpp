#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/InstructionList_DebugView_InstructionView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstructionList_DebugView_InstructionView)
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
// Forward declare root types
namespace GlobalNamespace {
struct DebugView_InstructionList_InstructionView;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DebugView_InstructionList_InstructionView);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DebugView_InstructionList_InstructionView, "System.Linq.Expressions.Interpreter", "InstructionList/DebugView/InstructionView");
// [IsReadOnly]
// [DebuggerDisplay("{GetValue(),nq}", Name = "{GetName(),nq}", Type = "{GetDisplayType(), nq}")]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Linq.Expressions.Interpreter.InstructionList/DebugView/InstructionView
struct CORDL_TYPE DebugView_InstructionList_InstructionView {
public:
// Declarations
/// @brief Method GetValue, addr 0xa897374, size 0x8, virtual false, abstract: false, final false
inline ::StringW GetValue() ;

/// @brief Method .ctor, addr 0xa897324, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::System::Linq::Expressions::Interpreter::Instruction*  instruction, ::StringW  name, int32_t  index, int32_t  stackDepth, int32_t  continuationsDepth) ;

// Ctor Parameters []
// @brief default ctor
constexpr DebugView_InstructionList_InstructionView() ;

// Ctor Parameters [CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_stackDepth", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_continuationsDepth", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_instruction", ty: "::System::Linq::Expressions::Interpreter::Instruction*", modifiers: "", def_value: None, comment: None }]
constexpr DebugView_InstructionList_InstructionView(int32_t  _index, int32_t  _stackDepth, int32_t  _continuationsDepth, ::StringW  _name, ::System::Linq::Expressions::Interpreter::Instruction*  _instruction) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23866};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _index, offset: 0x0, size: 0x4, def value: None
 int32_t  _index;

/// @brief Field _stackDepth, offset: 0x4, size: 0x4, def value: None
 int32_t  _stackDepth;

/// @brief Field _continuationsDepth, offset: 0x8, size: 0x4, def value: None
 int32_t  _continuationsDepth;

/// @brief Field _name, offset: 0x10, size: 0x8, def value: None
 ::StringW  _name;

/// @brief Field _instruction, offset: 0x18, size: 0x8, def value: None
 ::System::Linq::Expressions::Interpreter::Instruction*  _instruction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DebugView_InstructionList_InstructionView, _index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugView_InstructionList_InstructionView, _stackDepth) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugView_InstructionList_InstructionView, _continuationsDepth) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugView_InstructionList_InstructionView, _name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugView_InstructionList_InstructionView, _instruction) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DebugView_InstructionList_InstructionView) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
