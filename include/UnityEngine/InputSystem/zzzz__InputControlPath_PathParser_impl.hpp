#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlPath_PathParser.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlPath_ParsedPathComponent_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlPath_PathParser_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Substring_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputControlPath_PathParser.get_isAtEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputControlPath_PathParser::*)()>(&::GlobalNamespace::InputControlPath_PathParser::get_isAtEnd)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaf58e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlPath_PathParser>(),
                        {"get_isAtEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlPath_PathParser._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlPath_PathParser::*)(::StringW)>(&::GlobalNamespace::InputControlPath_PathParser::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xaf579ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlPath_PathParser>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlPath_PathParser.MoveToNextComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputControlPath_PathParser::*)()>(&::GlobalNamespace::InputControlPath_PathParser::MoveToNextComponent)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0xaf579fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlPath_PathParser>(),
                        {"MoveToNextComponent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlPath_PathParser.ParseComponentPart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::Substring (::GlobalNamespace::InputControlPath_PathParser::*)(char16_t)>(&::GlobalNamespace::InputControlPath_PathParser::ParseComponentPart)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xaf5a138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlPath_PathParser>(),
                        {"ParseComponentPart", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::InputControlPath_PathParser::get_isAtEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlPath_PathParser>(),
                        {"get_isAtEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlPath_PathParser::_ctor(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlPath_PathParser>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, path);
}
inline bool GlobalNamespace::InputControlPath_PathParser::MoveToNextComponent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlPath_PathParser>(),
                        {"MoveToNextComponent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::Substring GlobalNamespace::InputControlPath_PathParser::ParseComponentPart(char16_t  terminator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlPath_PathParser>(),
                        {"ParseComponentPart", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::Substring>(*this, ___internal_method, terminator);
}
// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "leftIndexInPath", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rightIndexInPath", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "current", ty: "::GlobalNamespace::InputControlPath_ParsedPathComponent", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputControlPath_PathParser::InputControlPath_PathParser(::StringW  path, int32_t  length, int32_t  leftIndexInPath, int32_t  rightIndexInPath, ::GlobalNamespace::InputControlPath_ParsedPathComponent  current) noexcept  {
this->path = path;
this->length = length;
this->leftIndexInPath = leftIndexInPath;
this->rightIndexInPath = rightIndexInPath;
this->current = current;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputControlPath_PathParser::InputControlPath_PathParser()   {
}
