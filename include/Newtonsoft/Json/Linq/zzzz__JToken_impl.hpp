#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JToken.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JTokenType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JEnumerable_1_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JTokenType_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken__ReadFromAsync_d__3_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JValue_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonCloneSettings_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonLoadSettings_def.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_def.hpp"
#include "Newtonsoft/Json/zzzz__IJsonLineInfo_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObject_def.hpp"
#include "System/Dynamic/zzzz__IDynamicMetaObjectProvider_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Numerics/zzzz__BigInteger_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ReadFromAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>* (*)(::Newtonsoft::Json::JsonReader*, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::Linq::JToken::ReadFromAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa3db46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"ReadFromAsync", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ReadFromAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>* (*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::Linq::JToken::ReadFromAsync)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa3db4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"ReadFromAsync", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_Parent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JContainer* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::get_Parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3db618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"get_Parent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.set_Parent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::Newtonsoft::Json::Linq::JContainer*)>(&::Newtonsoft::Json::Linq::JToken::set_Parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3db620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"set_Parent", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_Root
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::get_Root)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa3d2140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"get_Root", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.CloneToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)(::Newtonsoft::Json::Linq::JsonCloneSettings*)>(&::Newtonsoft::Json::Linq::JToken::CloneToken)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JTokenType (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::get_Type)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_HasValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::get_HasValues)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_Next
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::get_Next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3db628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"get_Next", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.set_Next
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::set_Next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3db630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"set_Next", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_Previous
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::get_Previous)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3db638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"get_Previous", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.set_Previous
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::set_Previous)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3db640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"set_Previous", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_Path
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::get_Path)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0xa3db648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"get_Path", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3d15e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JToken::get_Item)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa3db99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::System::Object*, ::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::set_Item)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa3dba2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_First
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::get_First)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa3dbabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_Last
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::get_Last)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa3dbb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Children
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*> (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::Children)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa3dbbdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::Remove)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa3d7528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"Remove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Replace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::Replace)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa3d4700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"Replace", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.WriteTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::Newtonsoft::Json::JsonWriter*, ::ArrayW<::Newtonsoft::Json::JsonConverter*>)>(&::Newtonsoft::Json::Linq::JToken::WriteTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::ToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa3dbc34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Linq::JToken::*)(::Newtonsoft::Json::Formatting, ::ArrayW<::Newtonsoft::Json::JsonConverter*>)>(&::Newtonsoft::Json::Linq::JToken::ToString)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xa3dbcd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"ToString", {}, {::i2c::type_of<::Newtonsoft::Json::Formatting>(), ::i2c::type_of<::ArrayW<::Newtonsoft::Json::JsonConverter*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.EnsureValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JValue* (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::EnsureValue)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa3dbeec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"EnsureValue", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.GetType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::GetType)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa3dc000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"GetType", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ValidateToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Newtonsoft::Json::Linq::JToken*, ::ArrayW<::Newtonsoft::Json::Linq::JTokenType>, bool)>(&::Newtonsoft::Json::Linq::JToken::ValidateToken)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa3dc0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"ValidateToken", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_bool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_bool)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xa3dc1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__DateTimeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__DateTimeOffset)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xa3dc3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_bool_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_bool_)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0xa3dc5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_int64_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_int64_t)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa3dc84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1___System__DateTime_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTime> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__DateTime_)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xa3dca30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1___System__DateTimeOffset_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTimeOffset> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__DateTimeOffset_)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0xa3dcc58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1___System__Decimal_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::Decimal> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__Decimal_)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xa3dcf1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_double_t_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<double_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_double_t_)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xa3dd15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_char16_t_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<char16_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_char16_t_)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xa3dd37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_int32_t)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa3dd5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_int16_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_int16_t)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa3dd784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_uint16_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_uint16_t)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa3dd968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_char16_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_char16_t)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa3ddb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_uint8_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_uint8_t)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa3ddd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_int8_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_int8_t)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa3ddf14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_int32_t_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_int32_t_)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xa3de0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_int16_t_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int16_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_int16_t_)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xa3de31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_uint16_t_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<uint16_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_uint16_t_)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xa3de540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_uint8_t_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<uint8_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_uint8_t_)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xa3de764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_int8_t_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int8_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_int8_t_)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xa3de988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__DateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__DateTime)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa3debac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_int64_t_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int64_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_int64_t_)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xa3deda4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_float_t_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<float_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_float_t_)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xa3defc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Decimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Decimal)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa3df1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_uint32_t_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<uint32_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_uint32_t_)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xa3df3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_uint64_t_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<uint64_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_uint64_t_)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xa3df5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_double_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_double_t)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa3df814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_float_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_float_t)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa3df9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___StringW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___StringW)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0xa3dfbdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_uint32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_uint32_t)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa3dfe64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_uint64_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_uint64_t)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa3e0048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Guid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Guid)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xa3e022c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1___System__Guid_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::Guid> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__Guid_)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xa3e044c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__TimeSpan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__TimeSpan)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xa3e06bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1___System__TimeSpan_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::TimeSpan> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__TimeSpan_)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xa3e08b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Uri_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Uri_)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xa3e0af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ToBigInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Numerics::BigInteger (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::ToBigInteger)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa3e0ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"ToBigInteger", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ToBigIntegerNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::Numerics::BigInteger> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::ToBigIntegerNullable)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xa3e0e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"ToBigIntegerNullable", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(bool)>(&::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa3e0fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Implicit", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(int32_t)>(&::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa3e1038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(float_t)>(&::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa3e1094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Implicit", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::StringW)>(&::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa3e10f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa3e1154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa3e11e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.CreateReader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonReader* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::CreateReader)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa3e1280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"CreateReader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.FromObjectInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(&::Newtonsoft::Json::Linq::JToken::FromObjectInternal)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa3e134c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"FromObjectInternal", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.FromObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JToken::FromObject)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa3e1594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"FromObject", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ToObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Linq::JToken::*)(::System::Type*)>(&::Newtonsoft::Json::Linq::JToken::ToObject)> {
  constexpr static std::size_t size = 0xc30;
  constexpr static std::size_t addrs = 0xa3e15fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"ToObject", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ToObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Linq::JToken::*)(::System::Type*, ::Newtonsoft::Json::JsonSerializer*)>(&::Newtonsoft::Json::Linq::JToken::ToObject)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xa3e222c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"ToObject", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ReadFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::Newtonsoft::Json::JsonReader*)>(&::Newtonsoft::Json::Linq::JToken::ReadFrom)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa3e244c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"ReadFrom", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ReadFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*)>(&::Newtonsoft::Json::Linq::JToken::ReadFrom)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0xa3e24a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"ReadFrom", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.SetLineInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::Newtonsoft::Json::IJsonLineInfo*, ::Newtonsoft::Json::Linq::JsonLoadSettings*)>(&::Newtonsoft::Json::Linq::JToken::SetLineInfo)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa3cf3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"SetLineInfo", {}, {::i2c::type_of<::Newtonsoft::Json::IJsonLineInfo*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.SetLineInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(int32_t, int32_t)>(&::Newtonsoft::Json::Linq::JToken::SetLineInfo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa3e27bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"SetLineInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Newtonsoft_Json_IJsonLineInfo_HasLineInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::Newtonsoft_Json_IJsonLineInfo_HasLineInfo)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa3e2ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"Newtonsoft.Json.IJsonLineInfo.HasLineInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Newtonsoft_Json_IJsonLineInfo_get_LineNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::Newtonsoft_Json_IJsonLineInfo_get_LineNumber)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa3e2b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"Newtonsoft.Json.IJsonLineInfo.get_LineNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Newtonsoft_Json_IJsonLineInfo_get_LinePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::Newtonsoft_Json_IJsonLineInfo_get_LinePosition)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa3e2b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"Newtonsoft.Json.IJsonLineInfo.get_LinePosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.GetMetaObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (::Newtonsoft::Json::Linq::JToken::*)(::System::Linq::Expressions::Expression*)>(&::Newtonsoft::Json::Linq::JToken::GetMetaObject)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa3e2bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.System_Dynamic_IDynamicMetaObjectProvider_GetMetaObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (::Newtonsoft::Json::Linq::JToken::*)(::System::Linq::Expressions::Expression*)>(&::Newtonsoft::Json::Linq::JToken::System_Dynamic_IDynamicMetaObjectProvider_GetMetaObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3e2c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"System.Dynamic.IDynamicMetaObjectProvider.GetMetaObject", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.System_ICloneable_Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3e2c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"System.ICloneable.Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.DeepClone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::DeepClone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3e2c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"DeepClone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.AddAnnotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JToken::AddAnnotation)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0xa3e2858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"AddAnnotation", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.CopyAnnotations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::CopyAnnotations)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa3d15ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"CopyAnnotations", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Linq::JContainer*& Newtonsoft::Json::Linq::JToken::__cordl_internal_get__parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr ::Newtonsoft::Json::Linq::JContainer* const& Newtonsoft::Json::Linq::JToken::__cordl_internal_get__parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr void Newtonsoft::Json::Linq::JToken::__cordl_internal_set__parent(::Newtonsoft::Json::Linq::JContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parent = value;
}
constexpr ::Newtonsoft::Json::Linq::JToken*& Newtonsoft::Json::Linq::JToken::__cordl_internal_get__previous()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previous;
}
constexpr ::Newtonsoft::Json::Linq::JToken* const& Newtonsoft::Json::Linq::JToken::__cordl_internal_get__previous() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previous;
}
constexpr void Newtonsoft::Json::Linq::JToken::__cordl_internal_set__previous(::Newtonsoft::Json::Linq::JToken*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previous = value;
}
constexpr ::Newtonsoft::Json::Linq::JToken*& Newtonsoft::Json::Linq::JToken::__cordl_internal_get__next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____next;
}
constexpr ::Newtonsoft::Json::Linq::JToken* const& Newtonsoft::Json::Linq::JToken::__cordl_internal_get__next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____next;
}
constexpr void Newtonsoft::Json::Linq::JToken::__cordl_internal_set__next(::Newtonsoft::Json::Linq::JToken*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____next = value;
}
constexpr ::System::Object*& Newtonsoft::Json::Linq::JToken::__cordl_internal_get__annotations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____annotations;
}
constexpr ::System::Object* const& Newtonsoft::Json::Linq::JToken::__cordl_internal_get__annotations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____annotations;
}
constexpr void Newtonsoft::Json::Linq::JToken::__cordl_internal_set__annotations(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____annotations = value;
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_BooleanTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>, "BooleanTypes", ::Newtonsoft::Json::Linq::JToken*>(std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType> Newtonsoft::Json::Linq::JToken::getStaticF_BooleanTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>, "BooleanTypes", ::Newtonsoft::Json::Linq::JToken*>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_NumberTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>, "NumberTypes", ::Newtonsoft::Json::Linq::JToken*>(std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType> Newtonsoft::Json::Linq::JToken::getStaticF_NumberTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>, "NumberTypes", ::Newtonsoft::Json::Linq::JToken*>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_BigIntegerTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>, "BigIntegerTypes", ::Newtonsoft::Json::Linq::JToken*>(std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType> Newtonsoft::Json::Linq::JToken::getStaticF_BigIntegerTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>, "BigIntegerTypes", ::Newtonsoft::Json::Linq::JToken*>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_StringTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>, "StringTypes", ::Newtonsoft::Json::Linq::JToken*>(std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType> Newtonsoft::Json::Linq::JToken::getStaticF_StringTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>, "StringTypes", ::Newtonsoft::Json::Linq::JToken*>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_GuidTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>, "GuidTypes", ::Newtonsoft::Json::Linq::JToken*>(std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType> Newtonsoft::Json::Linq::JToken::getStaticF_GuidTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>, "GuidTypes", ::Newtonsoft::Json::Linq::JToken*>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_TimeSpanTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>, "TimeSpanTypes", ::Newtonsoft::Json::Linq::JToken*>(std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType> Newtonsoft::Json::Linq::JToken::getStaticF_TimeSpanTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>, "TimeSpanTypes", ::Newtonsoft::Json::Linq::JToken*>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_UriTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>, "UriTypes", ::Newtonsoft::Json::Linq::JToken*>(std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType> Newtonsoft::Json::Linq::JToken::getStaticF_UriTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>, "UriTypes", ::Newtonsoft::Json::Linq::JToken*>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_CharTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>, "CharTypes", ::Newtonsoft::Json::Linq::JToken*>(std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType> Newtonsoft::Json::Linq::JToken::getStaticF_CharTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>, "CharTypes", ::Newtonsoft::Json::Linq::JToken*>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_DateTimeTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>, "DateTimeTypes", ::Newtonsoft::Json::Linq::JToken*>(std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType> Newtonsoft::Json::Linq::JToken::getStaticF_DateTimeTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>, "DateTimeTypes", ::Newtonsoft::Json::Linq::JToken*>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_BytesTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>, "BytesTypes", ::Newtonsoft::Json::Linq::JToken*>(std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType> Newtonsoft::Json::Linq::JToken::getStaticF_BytesTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>, "BytesTypes", ::Newtonsoft::Json::Linq::JToken*>();
}
inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JToken::ReadFromAsync(::Newtonsoft::Json::JsonReader*  reader, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"ReadFromAsync", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>*>(nullptr, ___internal_method, reader, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JToken::ReadFromAsync(::Newtonsoft::Json::JsonReader*  reader, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"ReadFromAsync", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>*>(nullptr, ___internal_method, reader, settings, cancellationToken);
}
inline ::Newtonsoft::Json::Linq::JContainer* Newtonsoft::Json::Linq::JToken::get_Parent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"get_Parent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JContainer*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JToken::set_Parent(::Newtonsoft::Json::Linq::JContainer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"set_Parent", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::get_Root()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"get_Root", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::CloneToken(/* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method, settings);
}
inline ::Newtonsoft::Json::Linq::JTokenType Newtonsoft::Json::Linq::JToken::get_Type()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JTokenType>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JToken::get_HasValues()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::get_Next()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"get_Next", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JToken::set_Next(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"set_Next", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::get_Previous()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"get_Previous", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JToken::set_Previous(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"set_Previous", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::Linq::JToken::get_Path()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"get_Path", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JToken::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::get_Item(::System::Object*  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method, key);
}
inline void Newtonsoft::Json::Linq::JToken::set_Item(::System::Object*  key, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JToken*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::get_First()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::get_Last()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*> Newtonsoft::Json::Linq::JToken::Children()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*>>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JToken::Remove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"Remove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JToken::Replace(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"Replace", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JToken::WriteTo(::Newtonsoft::Json::JsonWriter*  writer, /* [ParamArray] */ ::ArrayW<::Newtonsoft::Json::JsonConverter*>  converters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, converters);
}
inline ::StringW Newtonsoft::Json::Linq::JToken::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Linq::JToken::ToString(::Newtonsoft::Json::Formatting  formatting, /* [ParamArray] */ ::ArrayW<::Newtonsoft::Json::JsonConverter*>  converters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"ToString", {}, {::i2c::type_of<::Newtonsoft::Json::Formatting>(), ::i2c::type_of<::ArrayW<::Newtonsoft::Json::JsonConverter*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, formatting, converters);
}
inline ::Newtonsoft::Json::Linq::JValue* Newtonsoft::Json::Linq::JToken::EnsureValue(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"EnsureValue", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JValue*>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::Linq::JToken::GetType(::Newtonsoft::Json::Linq::JToken*  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"GetType", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, token);
}
inline bool Newtonsoft::Json::Linq::JToken::ValidateToken(::Newtonsoft::Json::Linq::JToken*  o, ::ArrayW<::Newtonsoft::Json::Linq::JTokenType>  validTypes, bool  nullable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"ValidateToken", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::ArrayW<::Newtonsoft::Json::Linq::JTokenType>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, o, validTypes, nullable);
}
inline bool Newtonsoft::Json::Linq::JToken::op_Explicit_bool(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline ::System::DateTimeOffset Newtonsoft::Json::Linq::JToken::op_Explicit___System__DateTimeOffset(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<bool> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_bool_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(nullptr, ___internal_method, value);
}
inline int64_t Newtonsoft::Json::Linq::JToken::op_Explicit_int64_t(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<::System::DateTime> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__DateTime_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<::System::DateTimeOffset> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__DateTimeOffset_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTimeOffset>>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<::System::Decimal> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__Decimal_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Decimal>>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<double_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_double_t_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<double_t>>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<char16_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_char16_t_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<char16_t>>(nullptr, ___internal_method, value);
}
inline int32_t Newtonsoft::Json::Linq::JToken::op_Explicit_int32_t(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int16_t Newtonsoft::Json::Linq::JToken::op_Explicit_int16_t(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline uint16_t Newtonsoft::Json::Linq::JToken::op_Explicit_uint16_t(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline char16_t Newtonsoft::Json::Linq::JToken::op_Explicit_char16_t(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value);
}
inline uint8_t Newtonsoft::Json::Linq::JToken::op_Explicit_uint8_t(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline int8_t Newtonsoft::Json::Linq::JToken::op_Explicit_int8_t(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_int32_t_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<int16_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_int16_t_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int16_t>>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<uint16_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_uint16_t_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint16_t>>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<uint8_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_uint8_t_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint8_t>>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<int8_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_int8_t_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int8_t>>(nullptr, ___internal_method, value);
}
inline ::System::DateTime Newtonsoft::Json::Linq::JToken::op_Explicit___System__DateTime(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<int64_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_int64_t_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<float_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_float_t_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>>(nullptr, ___internal_method, value);
}
inline ::System::Decimal Newtonsoft::Json::Linq::JToken::op_Explicit___System__Decimal(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<uint32_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_uint32_t_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint32_t>>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<uint64_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_uint64_t_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint64_t>>(nullptr, ___internal_method, value);
}
inline double_t Newtonsoft::Json::Linq::JToken::op_Explicit_double_t(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline float_t Newtonsoft::Json::Linq::JToken::op_Explicit_float_t(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::Linq::JToken::op_Explicit___StringW(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline uint32_t Newtonsoft::Json::Linq::JToken::op_Explicit_uint32_t(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint64_t Newtonsoft::Json::Linq::JToken::op_Explicit_uint64_t(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline ::System::Guid Newtonsoft::Json::Linq::JToken::op_Explicit___System__Guid(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<::System::Guid> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__Guid_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Guid>>(nullptr, ___internal_method, value);
}
inline ::System::TimeSpan Newtonsoft::Json::Linq::JToken::op_Explicit___System__TimeSpan(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<::System::TimeSpan> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__TimeSpan_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::TimeSpan>>(nullptr, ___internal_method, value);
}
inline ::System::Uri* Newtonsoft::Json::Linq::JToken::op_Explicit___System__Uri_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(nullptr, ___internal_method, value);
}
inline ::System::Numerics::BigInteger Newtonsoft::Json::Linq::JToken::ToBigInteger(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"ToBigInteger", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<::System::Numerics::BigInteger> Newtonsoft::Json::Linq::JToken::ToBigIntegerNullable(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"ToBigIntegerNullable", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Numerics::BigInteger>>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Implicit", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Implicit", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(/* [Nullable(2)] */ ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(nullptr, ___internal_method, value);
}
inline ::System::Collections::IEnumerator* Newtonsoft::Json::Linq::JToken::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JToken::System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonReader* Newtonsoft::Json::Linq::JToken::CreateReader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"CreateReader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonReader*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::FromObjectInternal(::System::Object*  o, ::Newtonsoft::Json::JsonSerializer*  jsonSerializer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"FromObjectInternal", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(nullptr, ___internal_method, o, jsonSerializer);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::FromObject(::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"FromObject", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(nullptr, ___internal_method, o);
}
template<typename T>
inline T Newtonsoft::Json::Linq::JToken::ToObject()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                    {"ToObject", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::Linq::JToken::ToObject(::System::Type*  objectType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"ToObject", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, objectType);
}
inline ::System::Object* Newtonsoft::Json::Linq::JToken::ToObject(::System::Type*  objectType, /* [Nullable(1)] */ ::Newtonsoft::Json::JsonSerializer*  jsonSerializer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"ToObject", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, objectType, jsonSerializer);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::ReadFrom(::Newtonsoft::Json::JsonReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"ReadFrom", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(nullptr, ___internal_method, reader);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::ReadFrom(::Newtonsoft::Json::JsonReader*  reader, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"ReadFrom", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(nullptr, ___internal_method, reader, settings);
}
inline void Newtonsoft::Json::Linq::JToken::SetLineInfo(::Newtonsoft::Json::IJsonLineInfo*  lineInfo, ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"SetLineInfo", {}, {::i2c::type_of<::Newtonsoft::Json::IJsonLineInfo*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lineInfo, settings);
}
inline void Newtonsoft::Json::Linq::JToken::SetLineInfo(int32_t  lineNumber, int32_t  linePosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"SetLineInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lineNumber, linePosition);
}
inline bool Newtonsoft::Json::Linq::JToken::Newtonsoft_Json_IJsonLineInfo_HasLineInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"Newtonsoft.Json.IJsonLineInfo.HasLineInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::Linq::JToken::Newtonsoft_Json_IJsonLineInfo_get_LineNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"Newtonsoft.Json.IJsonLineInfo.get_LineNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::Linq::JToken::Newtonsoft_Json_IJsonLineInfo_get_LinePosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"Newtonsoft.Json.IJsonLineInfo.get_LinePosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Dynamic::DynamicMetaObject* Newtonsoft::Json::Linq::JToken::GetMetaObject(::System::Linq::Expressions::Expression*  parameter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, parameter);
}
inline ::System::Dynamic::DynamicMetaObject* Newtonsoft::Json::Linq::JToken::System_Dynamic_IDynamicMetaObjectProvider_GetMetaObject(::System::Linq::Expressions::Expression*  parameter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"System.Dynamic.IDynamicMetaObjectProvider.GetMetaObject", {}, {::i2c::type_of<::System::Linq::Expressions::Expression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, parameter);
}
inline ::System::Object* Newtonsoft::Json::Linq::JToken::System_ICloneable_Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"System.ICloneable.Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::DeepClone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"DeepClone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JToken::AddAnnotation(::System::Object*  annotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"AddAnnotation", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, annotation);
}
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline T Newtonsoft::Json::Linq::JToken::Annotation()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                    {"Annotation", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JToken::CopyAnnotations(::Newtonsoft::Json::Linq::JToken*  target, ::Newtonsoft::Json::Linq::JToken*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken*>(),
                        {"CopyAnnotations", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, source);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JToken*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr  Newtonsoft::Json::Linq::JToken::operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JToken::i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Newtonsoft::Json::Linq::JToken::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Newtonsoft::Json::Linq::JToken::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Newtonsoft::Json::IJsonLineInfo"
constexpr  Newtonsoft::Json::Linq::JToken::operator ::Newtonsoft::Json::IJsonLineInfo*() noexcept {
return static_cast<::Newtonsoft::Json::IJsonLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::IJsonLineInfo"
constexpr ::Newtonsoft::Json::IJsonLineInfo* Newtonsoft::Json::Linq::JToken::i___Newtonsoft__Json__IJsonLineInfo() noexcept {
return static_cast<::Newtonsoft::Json::IJsonLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr  Newtonsoft::Json::Linq::JToken::operator ::System::ICloneable*() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* Newtonsoft::Json::Linq::JToken::i___System__ICloneable() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Dynamic::IDynamicMetaObjectProvider"
constexpr  Newtonsoft::Json::Linq::JToken::operator ::System::Dynamic::IDynamicMetaObjectProvider*() noexcept {
return static_cast<::System::Dynamic::IDynamicMetaObjectProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Dynamic::IDynamicMetaObjectProvider"
constexpr ::System::Dynamic::IDynamicMetaObjectProvider* Newtonsoft::Json::Linq::JToken::i___System__Dynamic__IDynamicMetaObjectProvider() noexcept {
return static_cast<::System::Dynamic::IDynamicMetaObjectProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JToken::JToken()   {
}
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation::*)(int32_t, int32_t)>(&::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa3e282c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Newtonsoft::Json::Linq::JToken_LineInfoAnnotation::__cordl_internal_get_LineNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LineNumber;
}
constexpr int32_t const& Newtonsoft::Json::Linq::JToken_LineInfoAnnotation::__cordl_internal_get_LineNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LineNumber;
}
constexpr void Newtonsoft::Json::Linq::JToken_LineInfoAnnotation::__cordl_internal_set_LineNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LineNumber = value;
}
constexpr int32_t& Newtonsoft::Json::Linq::JToken_LineInfoAnnotation::__cordl_internal_get_LinePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinePosition;
}
constexpr int32_t const& Newtonsoft::Json::Linq::JToken_LineInfoAnnotation::__cordl_internal_get_LinePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinePosition;
}
constexpr void Newtonsoft::Json::Linq::JToken_LineInfoAnnotation::__cordl_internal_set_LinePosition(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LinePosition = value;
}
inline void Newtonsoft::Json::Linq::JToken_LineInfoAnnotation::_ctor(int32_t  lineNumber, int32_t  linePosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lineNumber, linePosition);
}
inline ::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation* Newtonsoft::Json::Linq::JToken_LineInfoAnnotation::New_ctor(int32_t  lineNumber, int32_t  linePosition)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation*>(lineNumber, linePosition));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation::JToken_LineInfoAnnotation()   {
}
