#pragma once
// IWYU pragma private; include "System/ParameterizedStrings_FormatParam.hpp"
#include "System/zzzz__ParameterizedStrings_FormatParam_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParameterizedStrings_FormatParam._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParameterizedStrings_FormatParam::*)(int32_t)>(&::GlobalNamespace::ParameterizedStrings_FormatParam::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa337af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParameterizedStrings_FormatParam>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParameterizedStrings_FormatParam._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParameterizedStrings_FormatParam::*)(int32_t, ::StringW)>(&::GlobalNamespace::ParameterizedStrings_FormatParam::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa337b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParameterizedStrings_FormatParam>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParameterizedStrings_FormatParam.op_Implicit___GlobalNamespace__ParameterizedStrings_FormatParam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParameterizedStrings_FormatParam (*)(int32_t)>(&::GlobalNamespace::ParameterizedStrings_FormatParam::op_Implicit___GlobalNamespace__ParameterizedStrings_FormatParam)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa3345e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParameterizedStrings_FormatParam>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParameterizedStrings_FormatParam.get_Int32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ParameterizedStrings_FormatParam::*)()>(&::GlobalNamespace::ParameterizedStrings_FormatParam::get_Int32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa337b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParameterizedStrings_FormatParam>(),
                        {"get_Int32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParameterizedStrings_FormatParam.get_String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ParameterizedStrings_FormatParam::*)()>(&::GlobalNamespace::ParameterizedStrings_FormatParam::get_String)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa337404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParameterizedStrings_FormatParam>(),
                        {"get_String", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParameterizedStrings_FormatParam.get_Object
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ParameterizedStrings_FormatParam::*)()>(&::GlobalNamespace::ParameterizedStrings_FormatParam::get_Object)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa337428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParameterizedStrings_FormatParam>(),
                        {"get_Object", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ParameterizedStrings_FormatParam::_ctor(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParameterizedStrings_FormatParam>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::ParameterizedStrings_FormatParam::_ctor(int32_t  intValue, ::StringW  stringValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParameterizedStrings_FormatParam>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, intValue, stringValue);
}
inline ::GlobalNamespace::ParameterizedStrings_FormatParam GlobalNamespace::ParameterizedStrings_FormatParam::op_Implicit___GlobalNamespace__ParameterizedStrings_FormatParam(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParameterizedStrings_FormatParam>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParameterizedStrings_FormatParam>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::ParameterizedStrings_FormatParam::get_Int32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParameterizedStrings_FormatParam>(),
                        {"get_Int32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::ParameterizedStrings_FormatParam::get_String()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParameterizedStrings_FormatParam>(),
                        {"get_String", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ParameterizedStrings_FormatParam::get_Object()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParameterizedStrings_FormatParam>(),
                        {"get_Object", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_int32", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_string", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ParameterizedStrings_FormatParam::ParameterizedStrings_FormatParam(int32_t  _int32, ::StringW  _string) noexcept  {
this->_int32 = _int32;
this->_string = _string;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParameterizedStrings_FormatParam::ParameterizedStrings_FormatParam()   {
}
