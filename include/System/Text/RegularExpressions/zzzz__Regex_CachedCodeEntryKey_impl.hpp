#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/Regex_CachedCodeEntryKey.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexOptions_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_CachedCodeEntryKey_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexOptions_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Regex_CachedCodeEntryKey._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Regex_CachedCodeEntryKey::*)(::System::Text::RegularExpressions::RegexOptions, ::StringW, ::StringW)>(&::GlobalNamespace::Regex_CachedCodeEntryKey::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xad10604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Regex_CachedCodeEntryKey>(),
                        {".ctor", {}, {::i2c::type_of<::System::Text::RegularExpressions::RegexOptions>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Regex_CachedCodeEntryKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Regex_CachedCodeEntryKey::*)(::System::Object*)>(&::GlobalNamespace::Regex_CachedCodeEntryKey::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xad108b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Regex_CachedCodeEntryKey>(),
                    {::i2c::class_of<::GlobalNamespace::Regex_CachedCodeEntryKey>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Regex_CachedCodeEntryKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Regex_CachedCodeEntryKey::*)(::GlobalNamespace::Regex_CachedCodeEntryKey)>(&::GlobalNamespace::Regex_CachedCodeEntryKey::Equals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xad10940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Regex_CachedCodeEntryKey>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::Regex_CachedCodeEntryKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Regex_CachedCodeEntryKey.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::Regex_CachedCodeEntryKey, ::GlobalNamespace::Regex_CachedCodeEntryKey)>(&::GlobalNamespace::Regex_CachedCodeEntryKey::op_Equality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xad0d7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Regex_CachedCodeEntryKey>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::Regex_CachedCodeEntryKey>(), ::i2c::type_of<::GlobalNamespace::Regex_CachedCodeEntryKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Regex_CachedCodeEntryKey.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Regex_CachedCodeEntryKey::*)()>(&::GlobalNamespace::Regex_CachedCodeEntryKey::GetHashCode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xad109a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Regex_CachedCodeEntryKey>(),
                    {::i2c::class_of<::GlobalNamespace::Regex_CachedCodeEntryKey>(), 2}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Regex_CachedCodeEntryKey::_ctor(::System::Text::RegularExpressions::RegexOptions  options, ::StringW  cultureKey, ::StringW  pattern)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Regex_CachedCodeEntryKey>(),
                        {".ctor", {}, {::i2c::type_of<::System::Text::RegularExpressions::RegexOptions>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, options, cultureKey, pattern);
}
inline bool GlobalNamespace::Regex_CachedCodeEntryKey::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Regex_CachedCodeEntryKey>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool GlobalNamespace::Regex_CachedCodeEntryKey::Equals(::GlobalNamespace::Regex_CachedCodeEntryKey  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Regex_CachedCodeEntryKey>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::Regex_CachedCodeEntryKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::Regex_CachedCodeEntryKey::op_Equality(::GlobalNamespace::Regex_CachedCodeEntryKey  left, ::GlobalNamespace::Regex_CachedCodeEntryKey  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Regex_CachedCodeEntryKey>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::Regex_CachedCodeEntryKey>(), ::i2c::type_of<::GlobalNamespace::Regex_CachedCodeEntryKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline int32_t GlobalNamespace::Regex_CachedCodeEntryKey::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Regex_CachedCodeEntryKey>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::Regex_CachedCodeEntryKey>"
constexpr  GlobalNamespace::Regex_CachedCodeEntryKey::operator ::System::IEquatable_1<::GlobalNamespace::Regex_CachedCodeEntryKey>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::Regex_CachedCodeEntryKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::Regex_CachedCodeEntryKey>"
constexpr ::System::IEquatable_1<::GlobalNamespace::Regex_CachedCodeEntryKey>* GlobalNamespace::Regex_CachedCodeEntryKey::i___System__IEquatable_1___GlobalNamespace__Regex_CachedCodeEntryKey_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::Regex_CachedCodeEntryKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_options", ty: "::System::Text::RegularExpressions::RegexOptions", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_cultureKey", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_pattern", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Regex_CachedCodeEntryKey::Regex_CachedCodeEntryKey(::System::Text::RegularExpressions::RegexOptions  _options, ::StringW  _cultureKey, ::StringW  _pattern) noexcept  {
this->_options = _options;
this->_cultureKey = _cultureKey;
this->_pattern = _pattern;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Regex_CachedCodeEntryKey::Regex_CachedCodeEntryKey()   {
}
