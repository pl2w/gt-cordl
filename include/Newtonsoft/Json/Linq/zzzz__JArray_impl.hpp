#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JArray.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JContainer_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JArray_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JArray__LoadAsync_d__2_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JTokenType_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonCloneSettings_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonLoadSettings_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.LoadAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JArray*>* (*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::Linq::JArray::LoadAsync)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa3ceb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"LoadAsync", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.get_ChildrenTokens
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* (::Newtonsoft::Json::Linq::JArray::*)()>(&::Newtonsoft::Json::Linq::JArray::get_ChildrenTokens)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3cec4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JTokenType (::Newtonsoft::Json::Linq::JArray::*)()>(&::Newtonsoft::Json::Linq::JArray::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3cec54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray::*)()>(&::Newtonsoft::Json::Linq::JArray::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa3cec5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::Linq::JArray*, ::Newtonsoft::Json::Linq::JsonCloneSettings*)>(&::Newtonsoft::Json::Linq::JArray::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa3ced38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {".ctor", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JArray*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonCloneSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JArray::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa3cf10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.CloneToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::Linq::JsonCloneSettings*)>(&::Newtonsoft::Json::Linq::JArray::CloneToken)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa3cf1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JArray* (*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*)>(&::Newtonsoft::Json::Linq::JArray::Load)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa3cf214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"Load", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.WriteTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::JsonWriter*, ::ArrayW<::Newtonsoft::Json::JsonConverter*>)>(&::Newtonsoft::Json::Linq::JArray::WriteTo)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa3cf6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JArray::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JArray::get_Item)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa3cf77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray::*)(::System::Object*, ::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JArray::set_Item)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa3cf894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JArray::*)(int32_t)>(&::Newtonsoft::Json::Linq::JArray::get_Item)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3cf9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray::*)(int32_t, ::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JArray::set_Item)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3cf9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.IndexOfItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JArray::IndexOfItem)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa3cf9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JArray::IndexOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3cfa38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"IndexOf", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray::*)(int32_t, ::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JArray::Insert)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa3cfa48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.RemoveAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray::*)(int32_t)>(&::Newtonsoft::Json::Linq::JArray::RemoveAt)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3cfa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* (::Newtonsoft::Json::Linq::JArray::*)()>(&::Newtonsoft::Json::Linq::JArray::GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa3cfa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JArray::Add)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3cfb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"Add", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray::*)()>(&::Newtonsoft::Json::Linq::JArray::Clear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3cfb18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JArray::Contains)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3cfb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"Contains", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JArray::*)(::ArrayW<::Newtonsoft::Json::Linq::JToken*>, int32_t)>(&::Newtonsoft::Json::Linq::JArray::CopyTo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3cfb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::Newtonsoft::Json::Linq::JToken*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JArray::*)()>(&::Newtonsoft::Json::Linq::JArray::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3cfb48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JArray.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JArray::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JArray::Remove)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3cfb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"Remove", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*& Newtonsoft::Json::Linq::JArray::__cordl_internal_get__values()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____values;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>* const& Newtonsoft::Json::Linq::JArray::__cordl_internal_get__values() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____values;
}
constexpr void Newtonsoft::Json::Linq::JArray::__cordl_internal_set__values(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____values = value;
}
inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JArray*>* Newtonsoft::Json::Linq::JArray::LoadAsync(::Newtonsoft::Json::JsonReader*  reader, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"LoadAsync", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JArray*>*>(nullptr, ___internal_method, reader, settings, cancellationToken);
}
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JArray::get_ChildrenTokens()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JTokenType Newtonsoft::Json::Linq::JArray::get_Type()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JTokenType>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JArray::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JArray::_ctor(::Newtonsoft::Json::Linq::JArray*  other, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {".ctor", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JArray*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonCloneSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other, settings);
}
inline void Newtonsoft::Json::Linq::JArray::_ctor(::System::Object*  content)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, content);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JArray::CloneToken(/* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method, settings);
}
inline ::Newtonsoft::Json::Linq::JArray* Newtonsoft::Json::Linq::JArray::Load(::Newtonsoft::Json::JsonReader*  reader, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"Load", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JArray*>(nullptr, ___internal_method, reader, settings);
}
inline void Newtonsoft::Json::Linq::JArray::WriteTo(::Newtonsoft::Json::JsonWriter*  writer, /* [ParamArray] */ ::ArrayW<::Newtonsoft::Json::JsonConverter*>  converters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, converters);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JArray::get_Item(::System::Object*  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method, key);
}
inline void Newtonsoft::Json::Linq::JArray::set_Item(::System::Object*  key, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JToken*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JArray::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method, index);
}
inline void Newtonsoft::Json::Linq::JArray::set_Item(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline int32_t Newtonsoft::Json::Linq::JArray::IndexOfItem(::Newtonsoft::Json::Linq::JToken*  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
inline int32_t Newtonsoft::Json::Linq::JArray::IndexOf(::Newtonsoft::Json::Linq::JToken*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"IndexOf", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
inline void Newtonsoft::Json::Linq::JArray::Insert(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, item);
}
inline void Newtonsoft::Json::Linq::JArray::RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JArray::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JArray::Add(::Newtonsoft::Json::Linq::JToken*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"Add", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Newtonsoft::Json::Linq::JArray::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JArray::Contains(::Newtonsoft::Json::Linq::JToken*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"Contains", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline void Newtonsoft::Json::Linq::JArray::CopyTo(::ArrayW<::Newtonsoft::Json::Linq::JToken*>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::Newtonsoft::Json::Linq::JToken*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline bool Newtonsoft::Json::Linq::JArray::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JArray::Remove(::Newtonsoft::Json::Linq::JToken*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JArray*>(),
                        {"Remove", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline ::Newtonsoft::Json::Linq::JArray* Newtonsoft::Json::Linq::JArray::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JArray*>());
}
inline ::Newtonsoft::Json::Linq::JArray* Newtonsoft::Json::Linq::JArray::New_ctor(::Newtonsoft::Json::Linq::JArray*  other, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JArray*>(other, settings));
}
inline ::Newtonsoft::Json::Linq::JArray* Newtonsoft::Json::Linq::JArray::New_ctor(::System::Object*  content)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JArray*>(content));
}
/// @brief Convert operator to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr  Newtonsoft::Json::Linq::JArray::operator ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept {
return static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JArray::i___System__Collections__Generic__IList_1___Newtonsoft__Json__Linq__JToken__() noexcept {
return static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr  Newtonsoft::Json::Linq::JArray::operator ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JArray::i___System__Collections__Generic__ICollection_1___Newtonsoft__Json__Linq__JToken__() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr  Newtonsoft::Json::Linq::JArray::operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JArray::i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Newtonsoft::Json::Linq::JArray::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Newtonsoft::Json::Linq::JArray::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JArray::JArray()   {
}
