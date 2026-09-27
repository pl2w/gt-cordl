#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JProperty.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JContainer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JProperty_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JProperty__LoadAsync_d__4_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JProperty_def.hpp"
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
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty.LoadAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JProperty*>* (*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::Linq::JProperty::LoadAsync)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa3d9348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                        {"LoadAsync", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty.get_ChildrenTokens
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* (::Newtonsoft::Json::Linq::JProperty::*)()>(&::Newtonsoft::Json::Linq::JProperty::get_ChildrenTokens)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3d9484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Linq::JProperty::*)()>(&::Newtonsoft::Json::Linq::JProperty::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3d948c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JProperty::*)()>(&::Newtonsoft::Json::Linq::JProperty::get_Value)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa3d4280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty.set_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JProperty::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JProperty::set_Value)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa3d6d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                        {"set_Value", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JProperty::*)(::Newtonsoft::Json::Linq::JProperty*, ::Newtonsoft::Json::Linq::JsonCloneSettings*)>(&::Newtonsoft::Json::Linq::JProperty::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa3d9494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JProperty*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonCloneSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty.GetItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JProperty::*)(int32_t)>(&::Newtonsoft::Json::Linq::JProperty::GetItem)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa3d9534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(), 75}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty.SetItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JProperty::*)(int32_t, ::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JProperty::SetItem)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa3d9588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(), 76}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty.RemoveItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JProperty::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JProperty::RemoveItem)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa3d96cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(), 74}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty.RemoveItemAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JProperty::*)(int32_t)>(&::Newtonsoft::Json::Linq::JProperty::RemoveItemAt)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa3d977c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(), 73}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty.IndexOfItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Linq::JProperty::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JProperty::IndexOfItem)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa3d982c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty.InsertItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JProperty::*)(int32_t, ::Newtonsoft::Json::Linq::JToken*, bool, bool)>(&::Newtonsoft::Json::Linq::JProperty::InsertItem)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa3d9868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(), 72}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty.ContainsItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JProperty::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JProperty::ContainsItem)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa3d9984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty.ClearItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JProperty::*)()>(&::Newtonsoft::Json::Linq::JProperty::ClearItems)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa3d99a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(), 77}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty.CloneToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JProperty::*)(::Newtonsoft::Json::Linq::JsonCloneSettings*)>(&::Newtonsoft::Json::Linq::JProperty::CloneToken)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa3d9a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JTokenType (::Newtonsoft::Json::Linq::JProperty::*)()>(&::Newtonsoft::Json::Linq::JProperty::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3d9abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JProperty::*)(::StringW)>(&::Newtonsoft::Json::Linq::JProperty::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa3d4658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JProperty::*)(::StringW, ::System::Object*)>(&::Newtonsoft::Json::Linq::JProperty::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa3d7274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty.WriteTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JProperty::*)(::Newtonsoft::Json::JsonWriter*, ::ArrayW<::Newtonsoft::Json::JsonConverter*>)>(&::Newtonsoft::Json::Linq::JProperty::WriteTo)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa3d9ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JProperty* (*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*)>(&::Newtonsoft::Json::Linq::JProperty::Load)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa3d9b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                        {"Load", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Linq::JProperty_JPropertyList*& Newtonsoft::Json::Linq::JProperty::__cordl_internal_get__content()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____content;
}
constexpr ::Newtonsoft::Json::Linq::JProperty_JPropertyList* const& Newtonsoft::Json::Linq::JProperty::__cordl_internal_get__content() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____content;
}
constexpr void Newtonsoft::Json::Linq::JProperty::__cordl_internal_set__content(::Newtonsoft::Json::Linq::JProperty_JPropertyList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____content = value;
}
constexpr ::StringW& Newtonsoft::Json::Linq::JProperty::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& Newtonsoft::Json::Linq::JProperty::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void Newtonsoft::Json::Linq::JProperty::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name = value;
}
inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JProperty*>* Newtonsoft::Json::Linq::JProperty::LoadAsync(::Newtonsoft::Json::JsonReader*  reader, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                        {"LoadAsync", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JProperty*>*>(nullptr, ___internal_method, reader, settings, cancellationToken);
}
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JProperty::get_ChildrenTokens()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Linq::JProperty::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JProperty::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JProperty::set_Value(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                        {"set_Value", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JProperty::_ctor(::Newtonsoft::Json::Linq::JProperty*  other, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JProperty*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonCloneSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other, settings);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JProperty::GetItem(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(), 75}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method, index);
}
inline void Newtonsoft::Json::Linq::JProperty::SetItem(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(), 76}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, item);
}
inline bool Newtonsoft::Json::Linq::JProperty::RemoveItem(::Newtonsoft::Json::Linq::JToken*  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline void Newtonsoft::Json::Linq::JProperty::RemoveItemAt(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(), 73}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline int32_t Newtonsoft::Json::Linq::JProperty::IndexOfItem(::Newtonsoft::Json::Linq::JToken*  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
inline bool Newtonsoft::Json::Linq::JProperty::InsertItem(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  item, bool  skipParentCheck, bool  copyAnnotations)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(), 72}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, item, skipParentCheck, copyAnnotations);
}
inline bool Newtonsoft::Json::Linq::JProperty::ContainsItem(::Newtonsoft::Json::Linq::JToken*  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline void Newtonsoft::Json::Linq::JProperty::ClearItems()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(), 77}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JProperty::CloneToken(/* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method, settings);
}
inline ::Newtonsoft::Json::Linq::JTokenType Newtonsoft::Json::Linq::JProperty::get_Type()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JTokenType>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JProperty::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::Linq::JProperty::_ctor(::StringW  name, /* [Nullable(2)] */ ::System::Object*  content)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, content);
}
inline void Newtonsoft::Json::Linq::JProperty::WriteTo(::Newtonsoft::Json::JsonWriter*  writer, /* [ParamArray] */ ::ArrayW<::Newtonsoft::Json::JsonConverter*>  converters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, converters);
}
inline ::Newtonsoft::Json::Linq::JProperty* Newtonsoft::Json::Linq::JProperty::Load(::Newtonsoft::Json::JsonReader*  reader, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty*>(),
                        {"Load", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JProperty*>(nullptr, ___internal_method, reader, settings);
}
inline ::Newtonsoft::Json::Linq::JProperty* Newtonsoft::Json::Linq::JProperty::New_ctor(::Newtonsoft::Json::Linq::JProperty*  other, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JProperty*>(other, settings));
}
inline ::Newtonsoft::Json::Linq::JProperty* Newtonsoft::Json::Linq::JProperty::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JProperty*>(name));
}
inline ::Newtonsoft::Json::Linq::JProperty* Newtonsoft::Json::Linq::JProperty::New_ctor(::StringW  name, /* [Nullable(2)] */ ::System::Object*  content)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JProperty*>(name, content));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JProperty::JProperty()   {
}
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty_JPropertyList.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* (::Newtonsoft::Json::Linq::JProperty_JPropertyList::*)()>(&::Newtonsoft::Json::Linq::JProperty_JPropertyList::GetEnumerator)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa3d9d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty_JPropertyList.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Newtonsoft::Json::Linq::JProperty_JPropertyList::*)()>(&::Newtonsoft::Json::Linq::JProperty_JPropertyList::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa3d9dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty_JPropertyList.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JProperty_JPropertyList::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JProperty_JPropertyList::Add)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3d9dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"Add", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty_JPropertyList.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JProperty_JPropertyList::*)()>(&::Newtonsoft::Json::Linq::JProperty_JPropertyList::Clear)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa3d9dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty_JPropertyList.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JProperty_JPropertyList::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JProperty_JPropertyList::Contains)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3d9dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"Contains", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty_JPropertyList.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JProperty_JPropertyList::*)(::ArrayW<::Newtonsoft::Json::Linq::JToken*>, int32_t)>(&::Newtonsoft::Json::Linq::JProperty_JPropertyList::CopyTo)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa3d9de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::Newtonsoft::Json::Linq::JToken*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty_JPropertyList.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JProperty_JPropertyList::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JProperty_JPropertyList::Remove)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa3d9e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"Remove", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty_JPropertyList.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Linq::JProperty_JPropertyList::*)()>(&::Newtonsoft::Json::Linq::JProperty_JPropertyList::get_Count)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3d9e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty_JPropertyList.get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JProperty_JPropertyList::*)()>(&::Newtonsoft::Json::Linq::JProperty_JPropertyList::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3d9ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty_JPropertyList.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Linq::JProperty_JPropertyList::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JProperty_JPropertyList::IndexOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3d9858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"IndexOf", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty_JPropertyList.Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JProperty_JPropertyList::*)(int32_t, ::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JProperty_JPropertyList::Insert)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa3d9ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty_JPropertyList.RemoveAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JProperty_JPropertyList::*)(int32_t)>(&::Newtonsoft::Json::Linq::JProperty_JPropertyList::RemoveAt)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa3d9ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty_JPropertyList.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JProperty_JPropertyList::*)(int32_t)>(&::Newtonsoft::Json::Linq::JProperty_JPropertyList::get_Item)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa3d9ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty_JPropertyList.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JProperty_JPropertyList::*)(int32_t, ::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JProperty_JPropertyList::set_Item)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa3d9f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JProperty_JPropertyList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JProperty_JPropertyList::*)()>(&::Newtonsoft::Json::Linq::JProperty_JPropertyList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3d952c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Linq::JToken*& Newtonsoft::Json::Linq::JProperty_JPropertyList::__cordl_internal_get__token()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____token;
}
constexpr ::Newtonsoft::Json::Linq::JToken* const& Newtonsoft::Json::Linq::JProperty_JPropertyList::__cordl_internal_get__token() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____token;
}
constexpr void Newtonsoft::Json::Linq::JProperty_JPropertyList::__cordl_internal_set__token(::Newtonsoft::Json::Linq::JToken*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____token = value;
}
inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JProperty_JPropertyList::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Newtonsoft::Json::Linq::JProperty_JPropertyList::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JProperty_JPropertyList::Add(::Newtonsoft::Json::Linq::JToken*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"Add", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Newtonsoft::Json::Linq::JProperty_JPropertyList::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JProperty_JPropertyList::Contains(::Newtonsoft::Json::Linq::JToken*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"Contains", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline void Newtonsoft::Json::Linq::JProperty_JPropertyList::CopyTo(::ArrayW<::Newtonsoft::Json::Linq::JToken*>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::Newtonsoft::Json::Linq::JToken*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline bool Newtonsoft::Json::Linq::JProperty_JPropertyList::Remove(::Newtonsoft::Json::Linq::JToken*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"Remove", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline int32_t Newtonsoft::Json::Linq::JProperty_JPropertyList::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JProperty_JPropertyList::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::Linq::JProperty_JPropertyList::IndexOf(::Newtonsoft::Json::Linq::JToken*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"IndexOf", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
inline void Newtonsoft::Json::Linq::JProperty_JPropertyList::Insert(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, item);
}
inline void Newtonsoft::Json::Linq::JProperty_JPropertyList::RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JProperty_JPropertyList::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method, index);
}
inline void Newtonsoft::Json::Linq::JProperty_JPropertyList::set_Item(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void Newtonsoft::Json::Linq::JProperty_JPropertyList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JProperty_JPropertyList* Newtonsoft::Json::Linq::JProperty_JPropertyList::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JProperty_JPropertyList*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr  Newtonsoft::Json::Linq::JProperty_JPropertyList::operator ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept {
return static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JProperty_JPropertyList::i___System__Collections__Generic__IList_1___Newtonsoft__Json__Linq__JToken__() noexcept {
return static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr  Newtonsoft::Json::Linq::JProperty_JPropertyList::operator ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JProperty_JPropertyList::i___System__Collections__Generic__ICollection_1___Newtonsoft__Json__Linq__JToken__() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr  Newtonsoft::Json::Linq::JProperty_JPropertyList::operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JProperty_JPropertyList::i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Newtonsoft::Json::Linq::JProperty_JPropertyList::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Newtonsoft::Json::Linq::JProperty_JPropertyList::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JProperty_JPropertyList::JProperty_JPropertyList()   {
}
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::*)(int32_t)>(&::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa3d9d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::*)()>(&::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa3d9f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::*)()>(&::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::MoveNext)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa3d9f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1.System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::*)()>(&::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3d9fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1*>(),
                        {"System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::*)()>(&::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa3d9fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::*)()>(&::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3da008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::Newtonsoft::Json::Linq::JToken*& Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::Newtonsoft::Json::Linq::JToken* const& Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::__cordl_internal_set___2__current(::Newtonsoft::Json::Linq::JToken*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Newtonsoft::Json::Linq::JProperty_JPropertyList*& Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Newtonsoft::Json::Linq::JProperty_JPropertyList* const& Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::__cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JProperty_JPropertyList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1*>(),
                        {"System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1* Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr  Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::operator ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::i___System__Collections__Generic__IEnumerator_1___Newtonsoft__Json__Linq__JToken__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1::JPropertyList_JProperty__GetEnumerator_d__1()   {
}
