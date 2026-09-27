#pragma once
// IWYU pragma private; include "PlayFab/Json/PlayFabSimpleJson.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/Json/zzzz__PlayFabSimpleJson_def.hpp"
#include "PlayFab/Json/zzzz__IJsonSerializerStrategy_def.hpp"
#include "PlayFab/Json/zzzz__JsonArray_def.hpp"
#include "PlayFab/Json/zzzz__PlayFabSimpleJson_TokenType_def.hpp"
#include "PlayFab/Json/zzzz__PocoJsonSerializerStrategy_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::PlayFab::Json::PlayFabSimpleJson.DeserializeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::StringW)>(&::PlayFab::Json::PlayFabSimpleJson::DeserializeObject)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa7e1180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"DeserializeObject", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PlayFabSimpleJson.TryDeserializeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::System::Object*>)>(&::PlayFab::Json::PlayFabSimpleJson::TryDeserializeObject)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa7e1238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"TryDeserializeObject", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PlayFabSimpleJson.DeserializeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::StringW, ::System::Type*, ::PlayFab::Json::IJsonSerializerStrategy*)>(&::PlayFab::Json::PlayFabSimpleJson::DeserializeObject)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xa7df034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"DeserializeObject", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::PlayFab::Json::IJsonSerializerStrategy*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PlayFabSimpleJson.SerializeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, ::PlayFab::Json::IJsonSerializerStrategy*)>(&::PlayFab::Json::PlayFabSimpleJson::SerializeObject)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa7df258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"SerializeObject", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::PlayFab::Json::IJsonSerializerStrategy*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PlayFabSimpleJson.EscapeToJavascriptString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::PlayFab::Json::PlayFabSimpleJson::EscapeToJavascriptString)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xa7e1bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"EscapeToJavascriptString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PlayFabSimpleJson.ParseObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>* (*)(::StringW, ::by_ref<int32_t>, ::by_ref<bool>)>(&::PlayFab::Json::PlayFabSimpleJson::ParseObject)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xa7e1da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"ParseObject", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PlayFabSimpleJson.ParseArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::Json::JsonArray* (*)(::StringW, ::by_ref<int32_t>, ::by_ref<bool>)>(&::PlayFab::Json::PlayFabSimpleJson::ParseArray)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa7e2904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"ParseArray", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PlayFabSimpleJson.ParseValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::StringW, ::by_ref<int32_t>, ::by_ref<bool>)>(&::PlayFab::Json::PlayFabSimpleJson::ParseValue)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xa7e12f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"ParseValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PlayFabSimpleJson.ParseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::by_ref<int32_t>, ::by_ref<bool>)>(&::PlayFab::Json::PlayFabSimpleJson::ParseString)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0xa7e2334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"ParseString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PlayFabSimpleJson.ConvertFromUtf32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::PlayFab::Json::PlayFabSimpleJson::ConvertFromUtf32)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xa7e2de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"ConvertFromUtf32", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PlayFabSimpleJson.ParseNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::StringW, ::by_ref<int32_t>, ::by_ref<bool>)>(&::PlayFab::Json::PlayFabSimpleJson::ParseNumber)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xa7e2abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"ParseNumber", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PlayFabSimpleJson.GetLastIndexOfNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::PlayFab::Json::PlayFabSimpleJson::GetLastIndexOfNumber)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa7e2f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"GetLastIndexOfNumber", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PlayFabSimpleJson.EatWhitespace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<int32_t>)>(&::PlayFab::Json::PlayFabSimpleJson::EatWhitespace)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa7e2d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"EatWhitespace", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PlayFabSimpleJson.LookAhead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayFabSimpleJson_TokenType (*)(::StringW, int32_t)>(&::PlayFab::Json::PlayFabSimpleJson::LookAhead)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa7e22c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"LookAhead", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PlayFabSimpleJson.NextToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayFabSimpleJson_TokenType (*)(::StringW, ::by_ref<int32_t>)>(&::PlayFab::Json::PlayFabSimpleJson::NextToken)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0xa7e1fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"NextToken", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PlayFabSimpleJson.SerializeValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::PlayFab::Json::IJsonSerializerStrategy*, ::System::Object*, ::System::Text::StringBuilder*)>(&::PlayFab::Json::PlayFabSimpleJson::SerializeValue)> {
  constexpr static std::size_t size = 0x63c;
  constexpr static std::size_t addrs = 0xa7e1598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"SerializeValue", {}, {::i2c::type_of<::PlayFab::Json::IJsonSerializerStrategy*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PlayFabSimpleJson.SerializeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::PlayFab::Json::IJsonSerializerStrategy*, ::System::Collections::IEnumerable*, ::System::Collections::IEnumerable*, ::System::Text::StringBuilder*)>(&::PlayFab::Json::PlayFabSimpleJson::SerializeObject)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0xa7e3204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"SerializeObject", {}, {::i2c::type_of<::PlayFab::Json::IJsonSerializerStrategy*>(), ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PlayFabSimpleJson.SerializeArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::PlayFab::Json::IJsonSerializerStrategy*, ::System::Collections::IEnumerable*, ::System::Text::StringBuilder*)>(&::PlayFab::Json::PlayFabSimpleJson::SerializeArray)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0xa7e3618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"SerializeArray", {}, {::i2c::type_of<::PlayFab::Json::IJsonSerializerStrategy*>(), ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PlayFabSimpleJson.SerializeString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Text::StringBuilder*)>(&::PlayFab::Json::PlayFabSimpleJson::SerializeString)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xa7e2fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"SerializeString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PlayFabSimpleJson.SerializeNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::System::Text::StringBuilder*)>(&::PlayFab::Json::PlayFabSimpleJson::SerializeNumber)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0xa7e3a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"SerializeNumber", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PlayFabSimpleJson.IsNumeric
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*)>(&::PlayFab::Json::PlayFabSimpleJson::IsNumeric)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa7e39b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"IsNumeric", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PlayFabSimpleJson.get_CurrentJsonSerializerStrategy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::Json::IJsonSerializerStrategy* (*)()>(&::PlayFab::Json::PlayFabSimpleJson::get_CurrentJsonSerializerStrategy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa7e150c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"get_CurrentJsonSerializerStrategy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PlayFabSimpleJson.set_CurrentJsonSerializerStrategy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::Json::IJsonSerializerStrategy*)>(&::PlayFab::Json::PlayFabSimpleJson::set_CurrentJsonSerializerStrategy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa7e3dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"set_CurrentJsonSerializerStrategy", {}, {::i2c::type_of<::PlayFab::Json::IJsonSerializerStrategy*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PlayFabSimpleJson.get_PocoJsonSerializerStrategy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::Json::PocoJsonSerializerStrategy* (*)()>(&::PlayFab::Json::PlayFabSimpleJson::get_PocoJsonSerializerStrategy)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa7e3d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"get_PocoJsonSerializerStrategy", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::Json::PlayFabSimpleJson::setStaticF_EscapeTable(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "EscapeTable", ::PlayFab::Json::PlayFabSimpleJson*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> PlayFab::Json::PlayFabSimpleJson::getStaticF_EscapeTable()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "EscapeTable", ::PlayFab::Json::PlayFabSimpleJson*>();
}
inline void PlayFab::Json::PlayFabSimpleJson::setStaticF_EscapeCharacters(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "EscapeCharacters", ::PlayFab::Json::PlayFabSimpleJson*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> PlayFab::Json::PlayFabSimpleJson::getStaticF_EscapeCharacters()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "EscapeCharacters", ::PlayFab::Json::PlayFabSimpleJson*>();
}
inline void PlayFab::Json::PlayFabSimpleJson::setStaticF_NumberTypes(::System::Collections::Generic::List_1<::System::Type*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Type*>*, "NumberTypes", ::PlayFab::Json::PlayFabSimpleJson*>(std::forward<::System::Collections::Generic::List_1<::System::Type*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Type*>* PlayFab::Json::PlayFabSimpleJson::getStaticF_NumberTypes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Type*>*, "NumberTypes", ::PlayFab::Json::PlayFabSimpleJson*>();
}
inline void PlayFab::Json::PlayFabSimpleJson::setStaticF__serializeObjectBuilder(::System::Text::StringBuilder*  value)  {
::cordl_internals::setStaticField<::System::Text::StringBuilder*, "_serializeObjectBuilder", ::PlayFab::Json::PlayFabSimpleJson*>(std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* PlayFab::Json::PlayFabSimpleJson::getStaticF__serializeObjectBuilder()  {
return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "_serializeObjectBuilder", ::PlayFab::Json::PlayFabSimpleJson*>();
}
inline void PlayFab::Json::PlayFabSimpleJson::setStaticF__parseStringBuilder(::System::Text::StringBuilder*  value)  {
::cordl_internals::setStaticField<::System::Text::StringBuilder*, "_parseStringBuilder", ::PlayFab::Json::PlayFabSimpleJson*>(std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* PlayFab::Json::PlayFabSimpleJson::getStaticF__parseStringBuilder()  {
return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "_parseStringBuilder", ::PlayFab::Json::PlayFabSimpleJson*>();
}
inline void PlayFab::Json::PlayFabSimpleJson::setStaticF__currentJsonSerializerStrategy(::PlayFab::Json::IJsonSerializerStrategy*  value)  {
::cordl_internals::setStaticField<::PlayFab::Json::IJsonSerializerStrategy*, "_currentJsonSerializerStrategy", ::PlayFab::Json::PlayFabSimpleJson*>(std::forward<::PlayFab::Json::IJsonSerializerStrategy*>(value));
}
inline ::PlayFab::Json::IJsonSerializerStrategy* PlayFab::Json::PlayFabSimpleJson::getStaticF__currentJsonSerializerStrategy()  {
return ::cordl_internals::getStaticField<::PlayFab::Json::IJsonSerializerStrategy*, "_currentJsonSerializerStrategy", ::PlayFab::Json::PlayFabSimpleJson*>();
}
inline void PlayFab::Json::PlayFabSimpleJson::setStaticF__pocoJsonSerializerStrategy(::PlayFab::Json::PocoJsonSerializerStrategy*  value)  {
::cordl_internals::setStaticField<::PlayFab::Json::PocoJsonSerializerStrategy*, "_pocoJsonSerializerStrategy", ::PlayFab::Json::PlayFabSimpleJson*>(std::forward<::PlayFab::Json::PocoJsonSerializerStrategy*>(value));
}
inline ::PlayFab::Json::PocoJsonSerializerStrategy* PlayFab::Json::PlayFabSimpleJson::getStaticF__pocoJsonSerializerStrategy()  {
return ::cordl_internals::getStaticField<::PlayFab::Json::PocoJsonSerializerStrategy*, "_pocoJsonSerializerStrategy", ::PlayFab::Json::PlayFabSimpleJson*>();
}
inline ::System::Object* PlayFab::Json::PlayFabSimpleJson::DeserializeObject(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"DeserializeObject", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, json);
}
inline bool PlayFab::Json::PlayFabSimpleJson::TryDeserializeObject(::StringW  json, ::by_ref<::System::Object*>  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"TryDeserializeObject", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, json, obj);
}
inline ::System::Object* PlayFab::Json::PlayFabSimpleJson::DeserializeObject(::StringW  json, ::System::Type*  type, ::PlayFab::Json::IJsonSerializerStrategy*  jsonSerializerStrategy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"DeserializeObject", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::PlayFab::Json::IJsonSerializerStrategy*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, json, type, jsonSerializerStrategy);
}
template<typename T>
inline T PlayFab::Json::PlayFabSimpleJson::DeserializeObject(::StringW  json, ::PlayFab::Json::IJsonSerializerStrategy*  jsonSerializerStrategy)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                    {"DeserializeObject", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::PlayFab::Json::IJsonSerializerStrategy*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, json, jsonSerializerStrategy);
}
inline ::StringW PlayFab::Json::PlayFabSimpleJson::SerializeObject(::System::Object*  json, ::PlayFab::Json::IJsonSerializerStrategy*  jsonSerializerStrategy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"SerializeObject", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::PlayFab::Json::IJsonSerializerStrategy*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, json, jsonSerializerStrategy);
}
inline ::StringW PlayFab::Json::PlayFabSimpleJson::EscapeToJavascriptString(::StringW  jsonString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"EscapeToJavascriptString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, jsonString);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>* PlayFab::Json::PlayFabSimpleJson::ParseObject(::StringW  json, ::by_ref<int32_t>  index, ::by_ref<bool>  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"ParseObject", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>(nullptr, ___internal_method, json, index, success);
}
inline ::PlayFab::Json::JsonArray* PlayFab::Json::PlayFabSimpleJson::ParseArray(::StringW  json, ::by_ref<int32_t>  index, ::by_ref<bool>  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"ParseArray", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::Json::JsonArray*>(nullptr, ___internal_method, json, index, success);
}
inline ::System::Object* PlayFab::Json::PlayFabSimpleJson::ParseValue(::StringW  json, ::by_ref<int32_t>  index, ::by_ref<bool>  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"ParseValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, json, index, success);
}
inline ::StringW PlayFab::Json::PlayFabSimpleJson::ParseString(::StringW  json, ::by_ref<int32_t>  index, ::by_ref<bool>  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"ParseString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, json, index, success);
}
inline ::StringW PlayFab::Json::PlayFabSimpleJson::ConvertFromUtf32(int32_t  utf32)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"ConvertFromUtf32", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, utf32);
}
inline ::System::Object* PlayFab::Json::PlayFabSimpleJson::ParseNumber(::StringW  json, ::by_ref<int32_t>  index, ::by_ref<bool>  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"ParseNumber", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, json, index, success);
}
inline int32_t PlayFab::Json::PlayFabSimpleJson::GetLastIndexOfNumber(::StringW  json, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"GetLastIndexOfNumber", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, json, index);
}
inline void PlayFab::Json::PlayFabSimpleJson::EatWhitespace(::StringW  json, ::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"EatWhitespace", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, json, index);
}
inline ::GlobalNamespace::PlayFabSimpleJson_TokenType PlayFab::Json::PlayFabSimpleJson::LookAhead(::StringW  json, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"LookAhead", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayFabSimpleJson_TokenType>(nullptr, ___internal_method, json, index);
}
inline ::GlobalNamespace::PlayFabSimpleJson_TokenType PlayFab::Json::PlayFabSimpleJson::NextToken(::StringW  json, ::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"NextToken", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayFabSimpleJson_TokenType>(nullptr, ___internal_method, json, index);
}
inline bool PlayFab::Json::PlayFabSimpleJson::SerializeValue(::PlayFab::Json::IJsonSerializerStrategy*  jsonSerializerStrategy, ::System::Object*  value, ::System::Text::StringBuilder*  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"SerializeValue", {}, {::i2c::type_of<::PlayFab::Json::IJsonSerializerStrategy*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, jsonSerializerStrategy, value, builder);
}
inline bool PlayFab::Json::PlayFabSimpleJson::SerializeObject(::PlayFab::Json::IJsonSerializerStrategy*  jsonSerializerStrategy, ::System::Collections::IEnumerable*  keys, ::System::Collections::IEnumerable*  values, ::System::Text::StringBuilder*  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"SerializeObject", {}, {::i2c::type_of<::PlayFab::Json::IJsonSerializerStrategy*>(), ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, jsonSerializerStrategy, keys, values, builder);
}
inline bool PlayFab::Json::PlayFabSimpleJson::SerializeArray(::PlayFab::Json::IJsonSerializerStrategy*  jsonSerializerStrategy, ::System::Collections::IEnumerable*  anArray, ::System::Text::StringBuilder*  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"SerializeArray", {}, {::i2c::type_of<::PlayFab::Json::IJsonSerializerStrategy*>(), ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, jsonSerializerStrategy, anArray, builder);
}
inline bool PlayFab::Json::PlayFabSimpleJson::SerializeString(::StringW  aString, ::System::Text::StringBuilder*  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"SerializeString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aString, builder);
}
inline bool PlayFab::Json::PlayFabSimpleJson::SerializeNumber(::System::Object*  number, ::System::Text::StringBuilder*  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"SerializeNumber", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, number, builder);
}
inline bool PlayFab::Json::PlayFabSimpleJson::IsNumeric(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"IsNumeric", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline ::PlayFab::Json::IJsonSerializerStrategy* PlayFab::Json::PlayFabSimpleJson::get_CurrentJsonSerializerStrategy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"get_CurrentJsonSerializerStrategy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::Json::IJsonSerializerStrategy*>(nullptr, ___internal_method);
}
inline void PlayFab::Json::PlayFabSimpleJson::set_CurrentJsonSerializerStrategy(::PlayFab::Json::IJsonSerializerStrategy*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"set_CurrentJsonSerializerStrategy", {}, {::i2c::type_of<::PlayFab::Json::IJsonSerializerStrategy*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::PlayFab::Json::PocoJsonSerializerStrategy* PlayFab::Json::PlayFabSimpleJson::get_PocoJsonSerializerStrategy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PlayFabSimpleJson*>(),
                        {"get_PocoJsonSerializerStrategy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::Json::PocoJsonSerializerStrategy*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::PlayFab::Json::PlayFabSimpleJson::PlayFabSimpleJson()   {
}
