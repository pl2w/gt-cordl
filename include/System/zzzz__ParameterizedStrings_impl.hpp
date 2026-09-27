#pragma once
// IWYU pragma private; include "System/ParameterizedStrings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ParameterizedStrings_FormatParam_impl.hpp"
#include "System/zzzz__ParameterizedStrings_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ParameterizedStrings_FormatParam_def.hpp"
#include "System/zzzz__ParameterizedStrings_def.hpp"
//  Writing Method size for method: ::System::ParameterizedStrings.Evaluate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>)>(&::System::ParameterizedStrings::Evaluate)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa334610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings*>(),
                        {"Evaluate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParameterizedStrings.EvaluateInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::by_ref<int32_t>, ::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>, ::System::ParameterizedStrings_LowLevelStack*, ::by_ref<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>>, ::by_ref<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>>)>(&::System::ParameterizedStrings::EvaluateInternal)> {
  constexpr static std::size_t size = 0x8e0;
  constexpr static std::size_t addrs = 0xa336a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings*>(),
                        {"EvaluateInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>>(), ::i2c::type_of<::System::ParameterizedStrings_LowLevelStack*>(), ::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>>>(), ::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParameterizedStrings.AsBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::System::ParameterizedStrings::AsBool)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa337874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings*>(),
                        {"AsBool", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParameterizedStrings.AsInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(bool)>(&::System::ParameterizedStrings::AsInt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa33786c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings*>(),
                        {"AsInt", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParameterizedStrings.StringFromAsciiBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::ParameterizedStrings::StringFromAsciiBytes)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa337880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings*>(),
                        {"StringFromAsciiBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParameterizedStrings.snprintf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, ::System::IntPtr, ::StringW, ::StringW)>(&::System::ParameterizedStrings::snprintf)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa337974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings*>(),
                        {"snprintf", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParameterizedStrings.snprintf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, ::System::IntPtr, ::StringW, int32_t)>(&::System::ParameterizedStrings::snprintf)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa337a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings*>(),
                        {"snprintf", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParameterizedStrings.FormatPrintF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Object*)>(&::System::ParameterizedStrings::FormatPrintF)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xa337460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings*>(),
                        {"FormatPrintF", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParameterizedStrings.GetDynamicOrStaticVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam> (*)(char16_t, ::by_ref<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>>, ::by_ref<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>>, ::by_ref<int32_t>)>(&::System::ParameterizedStrings::GetDynamicOrStaticVariables)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa337750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings*>(),
                        {"GetDynamicOrStaticVariables", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>>>(), ::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::ParameterizedStrings::setStaticF__cachedStack(::System::ParameterizedStrings_LowLevelStack*  value)  {
::cordl_internals::setStaticField<::System::ParameterizedStrings_LowLevelStack*, "_cachedStack", ::System::ParameterizedStrings*>(std::forward<::System::ParameterizedStrings_LowLevelStack*>(value));
}
inline ::System::ParameterizedStrings_LowLevelStack* System::ParameterizedStrings::getStaticF__cachedStack()  {
return ::cordl_internals::getStaticField<::System::ParameterizedStrings_LowLevelStack*, "_cachedStack", ::System::ParameterizedStrings*>();
}
inline ::StringW System::ParameterizedStrings::Evaluate(::StringW  format, /* [ParamArray] */ ::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings*>(),
                        {"Evaluate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format, args);
}
inline ::StringW System::ParameterizedStrings::EvaluateInternal(::StringW  format, ::by_ref<int32_t>  pos, ::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>  args, ::System::ParameterizedStrings_LowLevelStack*  stack, ::by_ref<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>>  dynamicVars, ::by_ref<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>>  staticVars)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings*>(),
                        {"EvaluateInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>>(), ::i2c::type_of<::System::ParameterizedStrings_LowLevelStack*>(), ::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>>>(), ::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format, pos, args, stack, dynamicVars, staticVars);
}
inline bool System::ParameterizedStrings::AsBool(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings*>(),
                        {"AsBool", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, i);
}
inline int32_t System::ParameterizedStrings::AsInt(bool  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings*>(),
                        {"AsInt", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, b);
}
inline ::StringW System::ParameterizedStrings::StringFromAsciiBytes(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings*>(),
                        {"StringFromAsciiBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, buffer, offset, length);
}
inline int32_t System::ParameterizedStrings::snprintf(uint8_t*  str, ::System::IntPtr  size, ::StringW  format, ::StringW  arg1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings*>(),
                        {"snprintf", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, str, size, format, arg1);
}
inline int32_t System::ParameterizedStrings::snprintf(uint8_t*  str, ::System::IntPtr  size, ::StringW  format, int32_t  arg1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings*>(),
                        {"snprintf", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, str, size, format, arg1);
}
inline ::StringW System::ParameterizedStrings::FormatPrintF(::StringW  format, ::System::Object*  arg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings*>(),
                        {"FormatPrintF", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format, arg);
}
inline ::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam> System::ParameterizedStrings::GetDynamicOrStaticVariables(char16_t  c, ::by_ref<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>>  dynamicVars, ::by_ref<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>>  staticVars, ::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings*>(),
                        {"GetDynamicOrStaticVariables", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>>>(), ::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>>(nullptr, ___internal_method, c, dynamicVars, staticVars, index);
}
// Ctor Parameters []
constexpr ::System::ParameterizedStrings::ParameterizedStrings()   {
}
//  Writing Method size for method: ::System::ParameterizedStrings_LowLevelStack._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ParameterizedStrings_LowLevelStack::*)()>(&::System::ParameterizedStrings_LowLevelStack::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa336a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings_LowLevelStack*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParameterizedStrings_LowLevelStack.Pop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParameterizedStrings_FormatParam (::System::ParameterizedStrings_LowLevelStack::*)()>(&::System::ParameterizedStrings_LowLevelStack::Pop)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa337378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings_LowLevelStack*>(),
                        {"Pop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParameterizedStrings_LowLevelStack.Push
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ParameterizedStrings_LowLevelStack::*)(::GlobalNamespace::ParameterizedStrings_FormatParam)>(&::System::ParameterizedStrings_LowLevelStack::Push)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa337660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings_LowLevelStack*>(),
                        {"Push", {}, {::i2c::type_of<::GlobalNamespace::ParameterizedStrings_FormatParam>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParameterizedStrings_LowLevelStack.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ParameterizedStrings_LowLevelStack::*)()>(&::System::ParameterizedStrings_LowLevelStack::Clear)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa336a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings_LowLevelStack*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>& System::ParameterizedStrings_LowLevelStack::__cordl_internal_get__arr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arr;
}
constexpr ::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam> const& System::ParameterizedStrings_LowLevelStack::__cordl_internal_get__arr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arr;
}
constexpr void System::ParameterizedStrings_LowLevelStack::__cordl_internal_set__arr(::ArrayW<::GlobalNamespace::ParameterizedStrings_FormatParam>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____arr = value;
}
constexpr int32_t& System::ParameterizedStrings_LowLevelStack::__cordl_internal_get__count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
constexpr int32_t const& System::ParameterizedStrings_LowLevelStack::__cordl_internal_get__count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
constexpr void System::ParameterizedStrings_LowLevelStack::__cordl_internal_set__count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____count = value;
}
inline void System::ParameterizedStrings_LowLevelStack::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings_LowLevelStack*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ParameterizedStrings_FormatParam System::ParameterizedStrings_LowLevelStack::Pop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings_LowLevelStack*>(),
                        {"Pop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParameterizedStrings_FormatParam>(this, ___internal_method);
}
inline void System::ParameterizedStrings_LowLevelStack::Push(::GlobalNamespace::ParameterizedStrings_FormatParam  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings_LowLevelStack*>(),
                        {"Push", {}, {::i2c::type_of<::GlobalNamespace::ParameterizedStrings_FormatParam>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void System::ParameterizedStrings_LowLevelStack::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ParameterizedStrings_LowLevelStack*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ParameterizedStrings_LowLevelStack* System::ParameterizedStrings_LowLevelStack::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ParameterizedStrings_LowLevelStack*>());
}
// Ctor Parameters []
constexpr ::System::ParameterizedStrings_LowLevelStack::ParameterizedStrings_LowLevelStack()   {
}
