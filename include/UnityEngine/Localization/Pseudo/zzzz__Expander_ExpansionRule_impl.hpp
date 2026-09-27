#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/Expander_ExpansionRule.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__Expander_ExpansionRule_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Expander_ExpansionRule.get_MinCharacters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Expander_ExpansionRule::*)()>(&::GlobalNamespace::Expander_ExpansionRule::get_MinCharacters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb025bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Expander_ExpansionRule>(),
                        {"get_MinCharacters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Expander_ExpansionRule.set_MinCharacters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Expander_ExpansionRule::*)(int32_t)>(&::GlobalNamespace::Expander_ExpansionRule::set_MinCharacters)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb025bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Expander_ExpansionRule>(),
                        {"set_MinCharacters", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Expander_ExpansionRule.get_MaxCharacters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Expander_ExpansionRule::*)()>(&::GlobalNamespace::Expander_ExpansionRule::get_MaxCharacters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb025bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Expander_ExpansionRule>(),
                        {"get_MaxCharacters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Expander_ExpansionRule.set_MaxCharacters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Expander_ExpansionRule::*)(int32_t)>(&::GlobalNamespace::Expander_ExpansionRule::set_MaxCharacters)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb025be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Expander_ExpansionRule>(),
                        {"set_MaxCharacters", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Expander_ExpansionRule.get_ExpansionAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::Expander_ExpansionRule::*)()>(&::GlobalNamespace::Expander_ExpansionRule::get_ExpansionAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb025bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Expander_ExpansionRule>(),
                        {"get_ExpansionAmount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Expander_ExpansionRule.set_ExpansionAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Expander_ExpansionRule::*)(float_t)>(&::GlobalNamespace::Expander_ExpansionRule::set_ExpansionAmount)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb025bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Expander_ExpansionRule>(),
                        {"set_ExpansionAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Expander_ExpansionRule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Expander_ExpansionRule::*)(int32_t, int32_t, float_t)>(&::GlobalNamespace::Expander_ExpansionRule::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb024bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Expander_ExpansionRule>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Expander_ExpansionRule.InRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Expander_ExpansionRule::*)(int32_t)>(&::GlobalNamespace::Expander_ExpansionRule::InRange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb0257a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Expander_ExpansionRule>(),
                        {"InRange", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Expander_ExpansionRule.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Expander_ExpansionRule::*)(::GlobalNamespace::Expander_ExpansionRule)>(&::GlobalNamespace::Expander_ExpansionRule::CompareTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb025c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Expander_ExpansionRule>(),
                        {"CompareTo", {}, {::i2c::type_of<::GlobalNamespace::Expander_ExpansionRule>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::Expander_ExpansionRule::get_MinCharacters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Expander_ExpansionRule>(),
                        {"get_MinCharacters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::Expander_ExpansionRule::set_MinCharacters(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Expander_ExpansionRule>(),
                        {"set_MinCharacters", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::Expander_ExpansionRule::get_MaxCharacters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Expander_ExpansionRule>(),
                        {"get_MaxCharacters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::Expander_ExpansionRule::set_MaxCharacters(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Expander_ExpansionRule>(),
                        {"set_MaxCharacters", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::Expander_ExpansionRule::get_ExpansionAmount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Expander_ExpansionRule>(),
                        {"get_ExpansionAmount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::Expander_ExpansionRule::set_ExpansionAmount(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Expander_ExpansionRule>(),
                        {"set_ExpansionAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::Expander_ExpansionRule::_ctor(int32_t  minCharacters, int32_t  maxCharacters, float_t  expansion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Expander_ExpansionRule>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, minCharacters, maxCharacters, expansion);
}
inline bool GlobalNamespace::Expander_ExpansionRule::InRange(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Expander_ExpansionRule>(),
                        {"InRange", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, length);
}
inline int32_t GlobalNamespace::Expander_ExpansionRule::CompareTo(::GlobalNamespace::Expander_ExpansionRule  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Expander_ExpansionRule>(),
                        {"CompareTo", {}, {::i2c::type_of<::GlobalNamespace::Expander_ExpansionRule>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::Expander_ExpansionRule>"
constexpr  GlobalNamespace::Expander_ExpansionRule::operator ::System::IComparable_1<::GlobalNamespace::Expander_ExpansionRule>*()  {
return static_cast<::System::IComparable_1<::GlobalNamespace::Expander_ExpansionRule>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::Expander_ExpansionRule>"
constexpr ::System::IComparable_1<::GlobalNamespace::Expander_ExpansionRule>* GlobalNamespace::Expander_ExpansionRule::i___System__IComparable_1___GlobalNamespace__Expander_ExpansionRule_()  {
return static_cast<::System::IComparable_1<::GlobalNamespace::Expander_ExpansionRule>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_MinCharacters", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MaxCharacters", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ExpansionAmount", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Expander_ExpansionRule::Expander_ExpansionRule(int32_t  m_MinCharacters, int32_t  m_MaxCharacters, float_t  m_ExpansionAmount) noexcept  {
this->m_MinCharacters = m_MinCharacters;
this->m_MaxCharacters = m_MaxCharacters;
this->m_ExpansionAmount = m_ExpansionAmount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Expander_ExpansionRule::Expander_ExpansionRule()   {
}
