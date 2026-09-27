#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocaleIdentifier.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__SystemLanguage_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::LocaleIdentifier.get_Code
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::LocaleIdentifier::*)()>(&::UnityEngine::Localization::LocaleIdentifier::get_Code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb00d0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                        {"get_Code", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocaleIdentifier.get_CultureInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (::UnityEngine::Localization::LocaleIdentifier::*)()>(&::UnityEngine::Localization::LocaleIdentifier::get_CultureInfo)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb00d0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                        {"get_CultureInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocaleIdentifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocaleIdentifier::*)(::StringW)>(&::UnityEngine::Localization::LocaleIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb00d1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocaleIdentifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocaleIdentifier::*)(::System::Globalization::CultureInfo*)>(&::UnityEngine::Localization::LocaleIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb00d1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                        {".ctor", {}, {::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocaleIdentifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocaleIdentifier::*)(::UnityEngine::SystemLanguage)>(&::UnityEngine::Localization::LocaleIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb00d264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::SystemLanguage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocaleIdentifier.op_Implicit___UnityEngine__Localization__LocaleIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::LocaleIdentifier (*)(::StringW)>(&::UnityEngine::Localization::LocaleIdentifier::op_Implicit___UnityEngine__Localization__LocaleIdentifier)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb00d4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocaleIdentifier.op_Implicit___UnityEngine__Localization__LocaleIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::LocaleIdentifier (*)(::System::Globalization::CultureInfo*)>(&::UnityEngine::Localization::LocaleIdentifier::op_Implicit___UnityEngine__Localization__LocaleIdentifier)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb00d534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocaleIdentifier.op_Implicit___UnityEngine__Localization__LocaleIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::LocaleIdentifier (*)(::UnityEngine::SystemLanguage)>(&::UnityEngine::Localization::LocaleIdentifier::op_Implicit___UnityEngine__Localization__LocaleIdentifier)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb00d55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::SystemLanguage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocaleIdentifier.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::LocaleIdentifier::*)()>(&::UnityEngine::Localization::LocaleIdentifier::ToString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb00d584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                    {::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocaleIdentifier.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::LocaleIdentifier::*)(::System::Object*)>(&::UnityEngine::Localization::LocaleIdentifier::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb00d664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                    {::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocaleIdentifier.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::LocaleIdentifier::*)(::UnityEngine::Localization::LocaleIdentifier)>(&::UnityEngine::Localization::LocaleIdentifier::Equals)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb00d6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocaleIdentifier.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Localization::LocaleIdentifier::*)()>(&::UnityEngine::Localization::LocaleIdentifier::GetHashCode)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb00d73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                    {::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocaleIdentifier.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Localization::LocaleIdentifier::*)(::UnityEngine::Localization::LocaleIdentifier)>(&::UnityEngine::Localization::LocaleIdentifier::CompareTo)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb00d7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                        {"CompareTo", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocaleIdentifier.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Localization::LocaleIdentifier, ::UnityEngine::Localization::LocaleIdentifier)>(&::UnityEngine::Localization::LocaleIdentifier::op_Equality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb00d85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocaleIdentifier.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Localization::LocaleIdentifier, ::UnityEngine::Localization::LocaleIdentifier)>(&::UnityEngine::Localization::LocaleIdentifier::op_Inequality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb00d888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Localization::LocaleIdentifier::get_Code()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                        {"get_Code", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::Globalization::CultureInfo* UnityEngine::Localization::LocaleIdentifier::get_CultureInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                        {"get_CultureInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(*this, ___internal_method);
}
inline void UnityEngine::Localization::LocaleIdentifier::_ctor(::StringW  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, code);
}
inline void UnityEngine::Localization::LocaleIdentifier::_ctor(::System::Globalization::CultureInfo*  culture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                        {".ctor", {}, {::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, culture);
}
inline void UnityEngine::Localization::LocaleIdentifier::_ctor(::UnityEngine::SystemLanguage  systemLanguage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::SystemLanguage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, systemLanguage);
}
inline ::UnityEngine::Localization::LocaleIdentifier UnityEngine::Localization::LocaleIdentifier::op_Implicit___UnityEngine__Localization__LocaleIdentifier(::StringW  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::LocaleIdentifier>(nullptr, ___internal_method, code);
}
inline ::UnityEngine::Localization::LocaleIdentifier UnityEngine::Localization::LocaleIdentifier::op_Implicit___UnityEngine__Localization__LocaleIdentifier(::System::Globalization::CultureInfo*  culture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::LocaleIdentifier>(nullptr, ___internal_method, culture);
}
inline ::UnityEngine::Localization::LocaleIdentifier UnityEngine::Localization::LocaleIdentifier::op_Implicit___UnityEngine__Localization__LocaleIdentifier(::UnityEngine::SystemLanguage  systemLanguage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::SystemLanguage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::LocaleIdentifier>(nullptr, ___internal_method, systemLanguage);
}
inline ::StringW UnityEngine::Localization::LocaleIdentifier::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::Localization::LocaleIdentifier::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::Localization::LocaleIdentifier::Equals(::UnityEngine::Localization::LocaleIdentifier  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::Localization::LocaleIdentifier::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::Localization::LocaleIdentifier::CompareTo(::UnityEngine::Localization::LocaleIdentifier  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                        {"CompareTo", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool UnityEngine::Localization::LocaleIdentifier::op_Equality(::UnityEngine::Localization::LocaleIdentifier  l1, ::UnityEngine::Localization::LocaleIdentifier  l2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, l1, l2);
}
inline bool UnityEngine::Localization::LocaleIdentifier::op_Inequality(::UnityEngine::Localization::LocaleIdentifier  l1, ::UnityEngine::Localization::LocaleIdentifier  l2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocaleIdentifier>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, l1, l2);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Localization::LocaleIdentifier>"
constexpr  UnityEngine::Localization::LocaleIdentifier::operator ::System::IEquatable_1<::UnityEngine::Localization::LocaleIdentifier>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Localization::LocaleIdentifier>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Localization::LocaleIdentifier>"
constexpr ::System::IEquatable_1<::UnityEngine::Localization::LocaleIdentifier>* UnityEngine::Localization::LocaleIdentifier::i___System__IEquatable_1___UnityEngine__Localization__LocaleIdentifier_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Localization::LocaleIdentifier>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::UnityEngine::Localization::LocaleIdentifier>"
constexpr  UnityEngine::Localization::LocaleIdentifier::operator ::System::IComparable_1<::UnityEngine::Localization::LocaleIdentifier>*()  {
return static_cast<::System::IComparable_1<::UnityEngine::Localization::LocaleIdentifier>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::UnityEngine::Localization::LocaleIdentifier>"
constexpr ::System::IComparable_1<::UnityEngine::Localization::LocaleIdentifier>* UnityEngine::Localization::LocaleIdentifier::i___System__IComparable_1___UnityEngine__Localization__LocaleIdentifier_()  {
return static_cast<::System::IComparable_1<::UnityEngine::Localization::LocaleIdentifier>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Code", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CultureInfo", ty: "::System::Globalization::CultureInfo*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Localization::LocaleIdentifier::LocaleIdentifier(::StringW  m_Code, ::System::Globalization::CultureInfo*  m_CultureInfo) noexcept  {
this->m_Code = m_Code;
this->m_CultureInfo = m_CultureInfo;
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::LocaleIdentifier::LocaleIdentifier()   {
}
