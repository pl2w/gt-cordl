#pragma once
// IWYU pragma private; include "Pathfinding/Serialization/TinyJsonDeserializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Serialization/zzzz__TinyJsonDeserializer_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Pathfinding::Serialization::TinyJsonDeserializer.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::StringW, ::System::Type*, ::System::Object*, ::UnityEngine::GameObject*)>(&::Pathfinding::Serialization::TinyJsonDeserializer::Deserialize)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5ed0904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::TinyJsonDeserializer*>(),
                        {"Deserialize", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::TinyJsonDeserializer.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::Serialization::TinyJsonDeserializer::*)(::System::Type*, ::System::Object*)>(&::Pathfinding::Serialization::TinyJsonDeserializer::Deserialize)> {
  constexpr static std::size_t size = 0xce0;
  constexpr static std::size_t addrs = 0x5ed3a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::TinyJsonDeserializer*>(),
                        {"Deserialize", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::TinyJsonDeserializer.DeserializeUnityObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Pathfinding::Serialization::TinyJsonDeserializer::*)()>(&::Pathfinding::Serialization::TinyJsonDeserializer::DeserializeUnityObject)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5ed4a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::TinyJsonDeserializer*>(),
                        {"DeserializeUnityObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::TinyJsonDeserializer.DeserializeUnityObjectInner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Pathfinding::Serialization::TinyJsonDeserializer::*)()>(&::Pathfinding::Serialization::TinyJsonDeserializer::DeserializeUnityObjectInner)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0x5ed4c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::TinyJsonDeserializer*>(),
                        {"DeserializeUnityObjectInner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::TinyJsonDeserializer.EatWhitespace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::TinyJsonDeserializer::*)()>(&::Pathfinding::Serialization::TinyJsonDeserializer::EatWhitespace)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ed51f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::TinyJsonDeserializer*>(),
                        {"EatWhitespace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::TinyJsonDeserializer.Eat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::TinyJsonDeserializer::*)(::StringW)>(&::Pathfinding::Serialization::TinyJsonDeserializer::Eat)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5ed484c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::TinyJsonDeserializer*>(),
                        {"Eat", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::TinyJsonDeserializer.EatUntil
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Serialization::TinyJsonDeserializer::*)(::StringW, bool)>(&::Pathfinding::Serialization::TinyJsonDeserializer::EatUntil)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5ed5274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::TinyJsonDeserializer*>(),
                        {"EatUntil", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::TinyJsonDeserializer.TryEat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Serialization::TinyJsonDeserializer::*)(char16_t)>(&::Pathfinding::Serialization::TinyJsonDeserializer::TryEat)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ed47ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::TinyJsonDeserializer*>(),
                        {"TryEat", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::TinyJsonDeserializer.EatField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Serialization::TinyJsonDeserializer::*)()>(&::Pathfinding::Serialization::TinyJsonDeserializer::EatField)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ed4764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::TinyJsonDeserializer*>(),
                        {"EatField", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::TinyJsonDeserializer.SkipFieldData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::TinyJsonDeserializer::*)()>(&::Pathfinding::Serialization::TinyJsonDeserializer::SkipFieldData)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5ed4ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::TinyJsonDeserializer*>(),
                        {"SkipFieldData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::TinyJsonDeserializer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::TinyJsonDeserializer::*)()>(&::Pathfinding::Serialization::TinyJsonDeserializer::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ed3a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::TinyJsonDeserializer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IO::TextReader*& Pathfinding::Serialization::TinyJsonDeserializer::__cordl_internal_get_reader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader;
}
constexpr ::System::IO::TextReader* const& Pathfinding::Serialization::TinyJsonDeserializer::__cordl_internal_get_reader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader;
}
constexpr void Pathfinding::Serialization::TinyJsonDeserializer::__cordl_internal_set_reader(::System::IO::TextReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reader = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Pathfinding::Serialization::TinyJsonDeserializer::__cordl_internal_get_contextRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contextRoot;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Pathfinding::Serialization::TinyJsonDeserializer::__cordl_internal_get_contextRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contextRoot;
}
constexpr void Pathfinding::Serialization::TinyJsonDeserializer::__cordl_internal_set_contextRoot(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contextRoot = value;
}
constexpr ::System::Text::StringBuilder*& Pathfinding::Serialization::TinyJsonDeserializer::__cordl_internal_get_builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builder;
}
constexpr ::System::Text::StringBuilder* const& Pathfinding::Serialization::TinyJsonDeserializer::__cordl_internal_get_builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builder;
}
constexpr void Pathfinding::Serialization::TinyJsonDeserializer::__cordl_internal_set_builder(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___builder = value;
}
inline void Pathfinding::Serialization::TinyJsonDeserializer::setStaticF_numberFormat(::System::Globalization::NumberFormatInfo*  value)  {
::cordl_internals::setStaticField<::System::Globalization::NumberFormatInfo*, "numberFormat", ::Pathfinding::Serialization::TinyJsonDeserializer*>(std::forward<::System::Globalization::NumberFormatInfo*>(value));
}
inline ::System::Globalization::NumberFormatInfo* Pathfinding::Serialization::TinyJsonDeserializer::getStaticF_numberFormat()  {
return ::cordl_internals::getStaticField<::System::Globalization::NumberFormatInfo*, "numberFormat", ::Pathfinding::Serialization::TinyJsonDeserializer*>();
}
inline ::System::Object* Pathfinding::Serialization::TinyJsonDeserializer::Deserialize(::StringW  text, ::System::Type*  type, ::System::Object*  populate, ::UnityEngine::GameObject*  contextRoot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::TinyJsonDeserializer*>(),
                        {"Deserialize", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, text, type, populate, contextRoot);
}
inline ::System::Object* Pathfinding::Serialization::TinyJsonDeserializer::Deserialize(::System::Type*  tp, ::System::Object*  populate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::TinyJsonDeserializer*>(),
                        {"Deserialize", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, tp, populate);
}
inline ::UnityW<::UnityEngine::Object> Pathfinding::Serialization::TinyJsonDeserializer::DeserializeUnityObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::TinyJsonDeserializer*>(),
                        {"DeserializeUnityObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> Pathfinding::Serialization::TinyJsonDeserializer::DeserializeUnityObjectInner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::TinyJsonDeserializer*>(),
                        {"DeserializeUnityObjectInner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline void Pathfinding::Serialization::TinyJsonDeserializer::EatWhitespace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::TinyJsonDeserializer*>(),
                        {"EatWhitespace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Serialization::TinyJsonDeserializer::Eat(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::TinyJsonDeserializer*>(),
                        {"Eat", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::StringW Pathfinding::Serialization::TinyJsonDeserializer::EatUntil(::StringW  c, bool  inString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::TinyJsonDeserializer*>(),
                        {"EatUntil", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, c, inString);
}
inline bool Pathfinding::Serialization::TinyJsonDeserializer::TryEat(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::TinyJsonDeserializer*>(),
                        {"TryEat", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline ::StringW Pathfinding::Serialization::TinyJsonDeserializer::EatField()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::TinyJsonDeserializer*>(),
                        {"EatField", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Pathfinding::Serialization::TinyJsonDeserializer::SkipFieldData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::TinyJsonDeserializer*>(),
                        {"SkipFieldData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Serialization::TinyJsonDeserializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::TinyJsonDeserializer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Serialization::TinyJsonDeserializer* Pathfinding::Serialization::TinyJsonDeserializer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Serialization::TinyJsonDeserializer*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Serialization::TinyJsonDeserializer::TinyJsonDeserializer()   {
}
