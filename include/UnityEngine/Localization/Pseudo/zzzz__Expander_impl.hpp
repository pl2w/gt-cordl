#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/Expander.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__Expander_InsertLocation_impl.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__Expander_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__Expander_ExpansionRule_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__Expander_InsertLocation_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__IPseudoLocalizationMethod_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__Message_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Expander.get_ExpansionRules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::Expander_ExpansionRule>* (::UnityEngine::Localization::Pseudo::Expander::*)()>(&::UnityEngine::Localization::Pseudo::Expander::get_ExpansionRules)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0247c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"get_ExpansionRules", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Expander.get_Location
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Expander_InsertLocation (::UnityEngine::Localization::Pseudo::Expander::*)()>(&::UnityEngine::Localization::Pseudo::Expander::get_Location)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0247d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"get_Location", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Expander.set_Location
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Expander::*)(::GlobalNamespace::Expander_InsertLocation)>(&::UnityEngine::Localization::Pseudo::Expander::set_Location)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0247d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"set_Location", {}, {::i2c::type_of<::GlobalNamespace::Expander_InsertLocation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Expander.get_PaddingCharacters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<char16_t>* (::UnityEngine::Localization::Pseudo::Expander::*)()>(&::UnityEngine::Localization::Pseudo::Expander::get_PaddingCharacters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0247e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"get_PaddingCharacters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Expander.get_MinimumStringLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Localization::Pseudo::Expander::*)()>(&::UnityEngine::Localization::Pseudo::Expander::get_MinimumStringLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0247e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"get_MinimumStringLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Expander.set_MinimumStringLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Expander::*)(int32_t)>(&::UnityEngine::Localization::Pseudo::Expander::set_MinimumStringLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb0247f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"set_MinimumStringLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Expander._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Expander::*)()>(&::UnityEngine::Localization::Pseudo::Expander::_ctor)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0xb0247fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Expander._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Expander::*)(char16_t)>(&::UnityEngine::Localization::Pseudo::Expander::_ctor)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0xb024ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {".ctor", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Expander._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Expander::*)(char16_t, char16_t)>(&::UnityEngine::Localization::Pseudo::Expander::_ctor)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0xb0250dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {".ctor", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Expander.AddCharacterRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Expander::*)(char16_t, char16_t)>(&::UnityEngine::Localization::Pseudo::Expander::AddCharacterRange)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb024be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"AddCharacterRange", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Expander.SetConstantExpansion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Expander::*)(float_t)>(&::UnityEngine::Localization::Pseudo::Expander::SetConstantExpansion)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb0254b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"SetConstantExpansion", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Expander.AddExpansionRule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Expander::*)(int32_t, int32_t, float_t)>(&::UnityEngine::Localization::Pseudo::Expander::AddExpansionRule)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xb025518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"AddExpansionRule", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Expander.GetExpansionForLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Localization::Pseudo::Expander::*)(int32_t)>(&::UnityEngine::Localization::Pseudo::Expander::GetExpansionForLength)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xb025654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"GetExpansionForLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Expander.Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Expander::*)(::UnityEngine::Localization::Pseudo::Message*)>(&::UnityEngine::Localization::Pseudo::Expander::Transform)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xb0257c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"Transform", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::Message*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Expander.AddPaddingToMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Expander::*)(::UnityEngine::Localization::Pseudo::Message*, ::ArrayW<char16_t>)>(&::UnityEngine::Localization::Pseudo::Expander::AddPaddingToMessage)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xb0259bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"AddPaddingToMessage", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::Message*>(), ::i2c::type_of<::ArrayW<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Expander.GetRandomSeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Localization::Pseudo::Expander::*)(::StringW)>(&::UnityEngine::Localization::Pseudo::Expander::GetRandomSeed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb02599c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"GetRandomSeed", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Expander_ExpansionRule>*& UnityEngine::Localization::Pseudo::Expander::__cordl_internal_get_m_ExpansionRules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExpansionRules;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Expander_ExpansionRule>* const& UnityEngine::Localization::Pseudo::Expander::__cordl_internal_get_m_ExpansionRules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExpansionRules;
}
constexpr void UnityEngine::Localization::Pseudo::Expander::__cordl_internal_set_m_ExpansionRules(::System::Collections::Generic::List_1<::GlobalNamespace::Expander_ExpansionRule>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ExpansionRules = value;
}
constexpr ::GlobalNamespace::Expander_InsertLocation& UnityEngine::Localization::Pseudo::Expander::__cordl_internal_get_m_Location()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Location;
}
constexpr ::GlobalNamespace::Expander_InsertLocation const& UnityEngine::Localization::Pseudo::Expander::__cordl_internal_get_m_Location() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Location;
}
constexpr void UnityEngine::Localization::Pseudo::Expander::__cordl_internal_set_m_Location(::GlobalNamespace::Expander_InsertLocation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Location = value;
}
constexpr int32_t& UnityEngine::Localization::Pseudo::Expander::__cordl_internal_get_m_MinimumStringLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinimumStringLength;
}
constexpr int32_t const& UnityEngine::Localization::Pseudo::Expander::__cordl_internal_get_m_MinimumStringLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinimumStringLength;
}
constexpr void UnityEngine::Localization::Pseudo::Expander::__cordl_internal_set_m_MinimumStringLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MinimumStringLength = value;
}
constexpr ::System::Collections::Generic::List_1<char16_t>*& UnityEngine::Localization::Pseudo::Expander::__cordl_internal_get_m_PaddingCharacters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PaddingCharacters;
}
constexpr ::System::Collections::Generic::List_1<char16_t>* const& UnityEngine::Localization::Pseudo::Expander::__cordl_internal_get_m_PaddingCharacters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PaddingCharacters;
}
constexpr void UnityEngine::Localization::Pseudo::Expander::__cordl_internal_set_m_PaddingCharacters(::System::Collections::Generic::List_1<char16_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PaddingCharacters = value;
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::Expander_ExpansionRule>* UnityEngine::Localization::Pseudo::Expander::get_ExpansionRules()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"get_ExpansionRules", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::Expander_ExpansionRule>*>(this, ___internal_method);
}
inline ::GlobalNamespace::Expander_InsertLocation UnityEngine::Localization::Pseudo::Expander::get_Location()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"get_Location", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Expander_InsertLocation>(this, ___internal_method);
}
inline void UnityEngine::Localization::Pseudo::Expander::set_Location(::GlobalNamespace::Expander_InsertLocation  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"set_Location", {}, {::i2c::type_of<::GlobalNamespace::Expander_InsertLocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<char16_t>* UnityEngine::Localization::Pseudo::Expander::get_PaddingCharacters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"get_PaddingCharacters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<char16_t>*>(this, ___internal_method);
}
inline int32_t UnityEngine::Localization::Pseudo::Expander::get_MinimumStringLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"get_MinimumStringLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Localization::Pseudo::Expander::set_MinimumStringLength(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"set_MinimumStringLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::Pseudo::Expander::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Pseudo::Expander::_ctor(char16_t  paddingCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {".ctor", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paddingCharacter);
}
inline void UnityEngine::Localization::Pseudo::Expander::_ctor(char16_t  start, char16_t  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {".ctor", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end);
}
inline void UnityEngine::Localization::Pseudo::Expander::AddCharacterRange(char16_t  start, char16_t  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"AddCharacterRange", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end);
}
inline void UnityEngine::Localization::Pseudo::Expander::SetConstantExpansion(float_t  expansion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"SetConstantExpansion", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expansion);
}
inline void UnityEngine::Localization::Pseudo::Expander::AddExpansionRule(int32_t  minCharacters, int32_t  maxCharacters, float_t  expansion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"AddExpansionRule", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minCharacters, maxCharacters, expansion);
}
inline float_t UnityEngine::Localization::Pseudo::Expander::GetExpansionForLength(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"GetExpansionForLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, length);
}
inline void UnityEngine::Localization::Pseudo::Expander::Transform(::UnityEngine::Localization::Pseudo::Message*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"Transform", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::Message*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void UnityEngine::Localization::Pseudo::Expander::AddPaddingToMessage(::UnityEngine::Localization::Pseudo::Message*  message, ::ArrayW<char16_t>  padding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"AddPaddingToMessage", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::Message*>(), ::i2c::type_of<::ArrayW<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, padding);
}
inline int32_t UnityEngine::Localization::Pseudo::Expander::GetRandomSeed(::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Expander*>(),
                        {"GetRandomSeed", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input);
}
inline ::UnityEngine::Localization::Pseudo::Expander* UnityEngine::Localization::Pseudo::Expander::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Pseudo::Expander*>());
}
inline ::UnityEngine::Localization::Pseudo::Expander* UnityEngine::Localization::Pseudo::Expander::New_ctor(char16_t  paddingCharacter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Pseudo::Expander*>(paddingCharacter));
}
inline ::UnityEngine::Localization::Pseudo::Expander* UnityEngine::Localization::Pseudo::Expander::New_ctor(char16_t  start, char16_t  end)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Pseudo::Expander*>(start, end));
}
/// @brief Convert operator to "::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod"
constexpr  UnityEngine::Localization::Pseudo::Expander::operator ::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*() noexcept {
return static_cast<::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod"
constexpr ::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod* UnityEngine::Localization::Pseudo::Expander::i___UnityEngine__Localization__Pseudo__IPseudoLocalizationMethod() noexcept {
return static_cast<::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Pseudo::Expander::Expander()   {
}
