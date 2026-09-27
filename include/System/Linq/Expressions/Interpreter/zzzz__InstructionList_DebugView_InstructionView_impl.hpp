#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/InstructionList_DebugView_InstructionView.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InstructionList_DebugView_InstructionView_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DebugView_InstructionList_InstructionView.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::DebugView_InstructionList_InstructionView::*)()>(&::GlobalNamespace::DebugView_InstructionList_InstructionView::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa897374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugView_InstructionList_InstructionView>(),
                        {"GetValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugView_InstructionList_InstructionView._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugView_InstructionList_InstructionView::*)(::System::Linq::Expressions::Interpreter::Instruction*, ::StringW, int32_t, int32_t, int32_t)>(&::GlobalNamespace::DebugView_InstructionList_InstructionView::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa897324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugView_InstructionList_InstructionView>(),
                        {".ctor", {}, {::i2c::type_of<::System::Linq::Expressions::Interpreter::Instruction*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::DebugView_InstructionList_InstructionView::GetValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugView_InstructionList_InstructionView>(),
                        {"GetValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void GlobalNamespace::DebugView_InstructionList_InstructionView::_ctor(::System::Linq::Expressions::Interpreter::Instruction*  instruction, ::StringW  name, int32_t  index, int32_t  stackDepth, int32_t  continuationsDepth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugView_InstructionList_InstructionView>(),
                        {".ctor", {}, {::i2c::type_of<::System::Linq::Expressions::Interpreter::Instruction*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instruction, name, index, stackDepth, continuationsDepth);
}
// Ctor Parameters [CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_stackDepth", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_continuationsDepth", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_instruction", ty: "::System::Linq::Expressions::Interpreter::Instruction*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DebugView_InstructionList_InstructionView::DebugView_InstructionList_InstructionView(int32_t  _index, int32_t  _stackDepth, int32_t  _continuationsDepth, ::StringW  _name, ::System::Linq::Expressions::Interpreter::Instruction*  _instruction) noexcept  {
this->_index = _index;
this->_stackDepth = _stackDepth;
this->_continuationsDepth = _continuationsDepth;
this->_name = _name;
this->_instruction = _instruction;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DebugView_InstructionList_InstructionView::DebugView_InstructionList_InstructionView()   {
}
