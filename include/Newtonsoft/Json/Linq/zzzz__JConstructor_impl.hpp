#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JConstructor.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JContainer_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JConstructor_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JConstructor__LoadAsync_d__2_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JTokenType_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonCloneSettings_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonLoadSettings_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.LoadAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JConstructor*>* (*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::Linq::JConstructor::LoadAsync)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa3d0368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(),
                        {"LoadAsync", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.get_ChildrenTokens
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* (::Newtonsoft::Json::Linq::JConstructor::*)()>(&::Newtonsoft::Json::Linq::JConstructor::get_ChildrenTokens)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3d04a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.IndexOfItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Linq::JConstructor::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JConstructor::IndexOfItem)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa3d04ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Linq::JConstructor::*)()>(&::Newtonsoft::Json::Linq::JConstructor::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3d0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JTokenType (::Newtonsoft::Json::Linq::JConstructor::*)()>(&::Newtonsoft::Json::Linq::JConstructor::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3d0518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JConstructor::*)(::Newtonsoft::Json::Linq::JConstructor*, ::Newtonsoft::Json::Linq::JsonCloneSettings*)>(&::Newtonsoft::Json::Linq::JConstructor::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa3d0520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(),
                        {".ctor", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JConstructor*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonCloneSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JConstructor::*)(::StringW)>(&::Newtonsoft::Json::Linq::JConstructor::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa3d05d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.CloneToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JConstructor::*)(::Newtonsoft::Json::Linq::JsonCloneSettings*)>(&::Newtonsoft::Json::Linq::JConstructor::CloneToken)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa3d0708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.WriteTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JConstructor::*)(::Newtonsoft::Json::JsonWriter*, ::ArrayW<::Newtonsoft::Json::JsonConverter*>)>(&::Newtonsoft::Json::Linq::JConstructor::WriteTo)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa3d0770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JConstructor::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JConstructor::get_Item)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa3d0850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JConstructor::*)(::System::Object*, ::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JConstructor::set_Item)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa3d0968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JConstructor.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JConstructor* (*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*)>(&::Newtonsoft::Json::Linq::JConstructor::Load)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa3d0a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(),
                        {"Load", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Newtonsoft::Json::Linq::JConstructor::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& Newtonsoft::Json::Linq::JConstructor::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void Newtonsoft::Json::Linq::JConstructor::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name = value;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*& Newtonsoft::Json::Linq::JConstructor::__cordl_internal_get__values()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____values;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>* const& Newtonsoft::Json::Linq::JConstructor::__cordl_internal_get__values() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____values;
}
constexpr void Newtonsoft::Json::Linq::JConstructor::__cordl_internal_set__values(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____values = value;
}
inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JConstructor*>* Newtonsoft::Json::Linq::JConstructor::LoadAsync(::Newtonsoft::Json::JsonReader*  reader, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(),
                        {"LoadAsync", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JConstructor*>*>(nullptr, ___internal_method, reader, settings, cancellationToken);
}
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JConstructor::get_ChildrenTokens()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::Linq::JConstructor::IndexOfItem(::Newtonsoft::Json::Linq::JToken*  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
inline ::StringW Newtonsoft::Json::Linq::JConstructor::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JTokenType Newtonsoft::Json::Linq::JConstructor::get_Type()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JTokenType>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JConstructor::_ctor(::Newtonsoft::Json::Linq::JConstructor*  other, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(),
                        {".ctor", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JConstructor*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonCloneSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other, settings);
}
inline void Newtonsoft::Json::Linq::JConstructor::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JConstructor::CloneToken(/* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method, settings);
}
inline void Newtonsoft::Json::Linq::JConstructor::WriteTo(::Newtonsoft::Json::JsonWriter*  writer, /* [ParamArray] */ ::ArrayW<::Newtonsoft::Json::JsonConverter*>  converters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, converters);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JConstructor::get_Item(::System::Object*  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method, key);
}
inline void Newtonsoft::Json::Linq::JConstructor::set_Item(::System::Object*  key, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JToken*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline ::Newtonsoft::Json::Linq::JConstructor* Newtonsoft::Json::Linq::JConstructor::Load(::Newtonsoft::Json::JsonReader*  reader, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JConstructor*>(),
                        {"Load", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JConstructor*>(nullptr, ___internal_method, reader, settings);
}
inline ::Newtonsoft::Json::Linq::JConstructor* Newtonsoft::Json::Linq::JConstructor::New_ctor(::Newtonsoft::Json::Linq::JConstructor*  other, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JConstructor*>(other, settings));
}
inline ::Newtonsoft::Json::Linq::JConstructor* Newtonsoft::Json::Linq::JConstructor::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JConstructor*>(name));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JConstructor::JConstructor()   {
}
