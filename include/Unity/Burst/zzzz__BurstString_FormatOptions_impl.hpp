#pragma once
// IWYU pragma private; include "Unity/Burst/BurstString_FormatOptions.hpp"
#include "Unity/Burst/zzzz__BurstString_NumberFormatKind_impl.hpp"
#include "Unity/Burst/zzzz__BurstString_FormatOptions_def.hpp"
#include "Unity/Burst/zzzz__BurstString_NumberFormatKind_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BurstString_FormatOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstString_FormatOptions::*)(::GlobalNamespace::BurstString_NumberFormatKind, int8_t, uint8_t, bool)>(&::GlobalNamespace::BurstString_FormatOptions::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae83128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_FormatOptions>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::BurstString_NumberFormatKind>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstString_FormatOptions.get_Uppercase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BurstString_FormatOptions::*)()>(&::GlobalNamespace::BurstString_FormatOptions::get_Uppercase)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xae82930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_FormatOptions>(),
                        {"get_Uppercase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstString_FormatOptions.GetBase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BurstString_FormatOptions::*)()>(&::GlobalNamespace::BurstString_FormatOptions::GetBase)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae82918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_FormatOptions>(),
                        {"GetBase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstString_FormatOptions.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BurstString_FormatOptions::*)()>(&::GlobalNamespace::BurstString_FormatOptions::ToString)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0xae84fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BurstString_FormatOptions>(),
                    {::i2c::class_of<::GlobalNamespace::BurstString_FormatOptions>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BurstString_FormatOptions::_ctor(::GlobalNamespace::BurstString_NumberFormatKind  kind, int8_t  alignAndSize, uint8_t  specifier, bool  lowercase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_FormatOptions>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::BurstString_NumberFormatKind>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, kind, alignAndSize, specifier, lowercase);
}
inline bool GlobalNamespace::BurstString_FormatOptions::get_Uppercase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_FormatOptions>(),
                        {"get_Uppercase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::BurstString_FormatOptions::GetBase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_FormatOptions>(),
                        {"GetBase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::BurstString_FormatOptions::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BurstString_FormatOptions>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Kind", ty: "::GlobalNamespace::BurstString_NumberFormatKind", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AlignAndSize", ty: "int8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Specifier", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Lowercase", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BurstString_FormatOptions::BurstString_FormatOptions(::GlobalNamespace::BurstString_NumberFormatKind  Kind, int8_t  AlignAndSize, uint8_t  Specifier, bool  Lowercase) noexcept  {
this->Kind = Kind;
this->AlignAndSize = AlignAndSize;
this->Specifier = Specifier;
this->Lowercase = Lowercase;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstString_FormatOptions::BurstString_FormatOptions()   {
}
