#pragma once
// IWYU pragma private; include "Pathfinding/AstarDebugger_PathTypeDebug.hpp"
#include "Pathfinding/zzzz__AstarDebugger_PathTypeDebug_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AstarDebugger_PathTypeDebug._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarDebugger_PathTypeDebug::*)(::StringW, ::System::Func_1<int32_t>*, ::System::Func_1<int32_t>*)>(&::GlobalNamespace::AstarDebugger_PathTypeDebug::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e55c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarDebugger_PathTypeDebug>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Func_1<int32_t>*>(), ::i2c::type_of<::System::Func_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarDebugger_PathTypeDebug.Print
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarDebugger_PathTypeDebug::*)(::System::Text::StringBuilder*)>(&::GlobalNamespace::AstarDebugger_PathTypeDebug::Print)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5e55000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarDebugger_PathTypeDebug>(),
                        {"Print", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AstarDebugger_PathTypeDebug::_ctor(::StringW  name, ::System::Func_1<int32_t>*  getSize, ::System::Func_1<int32_t>*  getTotalCreated)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarDebugger_PathTypeDebug>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Func_1<int32_t>*>(), ::i2c::type_of<::System::Func_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, getSize, getTotalCreated);
}
inline void GlobalNamespace::AstarDebugger_PathTypeDebug::Print(::System::Text::StringBuilder*  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarDebugger_PathTypeDebug>(),
                        {"Print", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, text);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "getSize", ty: "::System::Func_1<int32_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "getTotalCreated", ty: "::System::Func_1<int32_t>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AstarDebugger_PathTypeDebug::AstarDebugger_PathTypeDebug(::StringW  name, ::System::Func_1<int32_t>*  getSize, ::System::Func_1<int32_t>*  getTotalCreated) noexcept  {
this->name = name;
this->getSize = getSize;
this->getTotalCreated = getTotalCreated;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AstarDebugger_PathTypeDebug::AstarDebugger_PathTypeDebug()   {
}
