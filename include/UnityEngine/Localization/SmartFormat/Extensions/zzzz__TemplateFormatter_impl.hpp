#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/TemplateFormatter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__FormatterBase_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Extensions/zzzz__TemplateFormatter_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__IFormattingInfo_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Format_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Extensions/zzzz__TemplateFormatter_def.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__SmartFormatter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter.get_Templates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>* (::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::get_Templates)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0xb042778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*>(),
                        {"get_Templates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter.get_Formatter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::SmartFormatter* (::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::get_Formatter)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb042b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*>(),
                        {"get_Formatter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter.set_Formatter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::*)(::UnityEngine::Localization::SmartFormat::SmartFormatter*)>(&::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::set_Formatter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb042ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*>(),
                        {"set_Formatter", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb042ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter.get_DefaultNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::get_DefaultNames)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb042d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter.TryEvaluateFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::TryEvaluateFormat)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0xb042e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::*)(::StringW, ::StringW)>(&::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::Register)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb0432a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*>(),
                        {"Register", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::*)(::StringW)>(&::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::Remove)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb0433a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb043458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::Clear)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb04347c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template*>*& UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::__cordl_internal_get_m_Templates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Templates;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template*>* const& UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::__cordl_internal_get_m_Templates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Templates;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::__cordl_internal_set_m_Templates(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Templates = value;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*& UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::__cordl_internal_get_m_TemplatesDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TemplatesDict;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>* const& UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::__cordl_internal_get_m_TemplatesDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TemplatesDict;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::__cordl_internal_set_m_TemplatesDict(::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TemplatesDict = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::SmartFormatter*& UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::__cordl_internal_get_m_Formatter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Formatter;
}
constexpr ::UnityEngine::Localization::SmartFormat::SmartFormatter* const& UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::__cordl_internal_get_m_Formatter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Formatter;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::__cordl_internal_set_m_Formatter(::UnityEngine::Localization::SmartFormat::SmartFormatter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Formatter = value;
}
inline ::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>* UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::get_Templates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*>(),
                        {"get_Templates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::SmartFormatter* UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::get_Formatter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*>(),
                        {"get_Formatter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::SmartFormatter*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::set_Formatter(::UnityEngine::Localization::SmartFormat::SmartFormatter*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*>(),
                        {"set_Formatter", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::StringW> UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::get_DefaultNames()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::TryEvaluateFormat(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, formattingInfo);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::Register(::StringW  templateName, ::StringW  _cordl_template)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*>(),
                        {"Register", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, templateName, _cordl_template);
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::Remove(::StringW  templateName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, templateName);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::OnAfterDeserialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter* UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter::TemplateFormatter()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template.get_Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* (::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template::get_Format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb043528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template*>(),
                        {"get_Format", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template.set_Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template::*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*)>(&::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template::set_Format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb043530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template*>(),
                        {"set_Format", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb043538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::StringW& UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template::__cordl_internal_get_text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr ::StringW const& UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template::__cordl_internal_get_text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template::__cordl_internal_set_text(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*& UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template::__cordl_internal_get__Format_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Format_k__BackingField;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* const& UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template::__cordl_internal_get__Format_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Format_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template::__cordl_internal_set__Format_k__BackingField(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Format_k__BackingField = value;
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template::get_Format()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template*>(),
                        {"get_Format", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template::set_Format(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template*>(),
                        {"set_Format", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template* UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template::TemplateFormatter_Template()   {
}
