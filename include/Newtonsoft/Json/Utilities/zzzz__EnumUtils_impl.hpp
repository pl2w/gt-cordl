#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/EnumUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__EnumUtils_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__CamelCaseNamingStrategy_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__NamingStrategy_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__EnumInfo_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__EnumUtils_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StructMultiKey_2_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ThreadSafeStore_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__EnumMemberAttribute_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__StringComparison_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::EnumUtils.InitializeValuesAndNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Utilities::EnumInfo* (*)(::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*,::Newtonsoft::Json::Serialization::NamingStrategy*>)>(&::Newtonsoft::Json::Utilities::EnumUtils::InitializeValuesAndNames)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0xa39b7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::EnumUtils*>(),
                        {"InitializeValuesAndNames", {}, {::i2c::type_of<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*,::Newtonsoft::Json::Serialization::NamingStrategy*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::EnumUtils.TryToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Object*, ::Newtonsoft::Json::Serialization::NamingStrategy*, ::by_ref<::StringW>)>(&::Newtonsoft::Json::Utilities::EnumUtils::TryToString)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa39c090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::EnumUtils*>(),
                        {"TryToString", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::NamingStrategy*>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::EnumUtils.InternalFlagsFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Newtonsoft::Json::Utilities::EnumInfo*, uint64_t)>(&::Newtonsoft::Json::Utilities::EnumUtils::InternalFlagsFormat)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xa39c230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::EnumUtils*>(),
                        {"InternalFlagsFormat", {}, {::i2c::type_of<::Newtonsoft::Json::Utilities::EnumInfo*>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::EnumUtils.GetEnumValuesAndNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Utilities::EnumInfo* (*)(::System::Type*)>(&::Newtonsoft::Json::Utilities::EnumUtils::GetEnumValuesAndNames)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa39c3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::EnumUtils*>(),
                        {"GetEnumValuesAndNames", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::EnumUtils.ToUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::Object*)>(&::Newtonsoft::Json::Utilities::EnumUtils::ToUInt64)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0xa39bc98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::EnumUtils*>(),
                        {"ToUInt64", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::EnumUtils.ParseEnum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::Newtonsoft::Json::Serialization::NamingStrategy*, ::StringW, bool)>(&::Newtonsoft::Json::Utilities::EnumUtils::ParseEnum)> {
  constexpr static std::size_t size = 0x774;
  constexpr static std::size_t addrs = 0xa39c490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::EnumUtils*>(),
                        {"ParseEnum", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::NamingStrategy*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::EnumUtils.MatchName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (*)(::StringW, ::ArrayW<::StringW>, ::ArrayW<::StringW>, int32_t, int32_t, ::System::StringComparison)>(&::Newtonsoft::Json::Utilities::EnumUtils::MatchName)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa39cd5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::EnumUtils*>(),
                        {"MatchName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::StringComparison>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::EnumUtils.FindIndexByName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (*)(::ArrayW<::StringW>, ::StringW, int32_t, int32_t, ::System::StringComparison)>(&::Newtonsoft::Json::Utilities::EnumUtils::FindIndexByName)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa39cc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::EnumUtils*>(),
                        {"FindIndexByName", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::StringComparison>()}}
                    )));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Utilities::EnumUtils::setStaticF_ValuesAndNamesPerEnum(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*,::Newtonsoft::Json::Serialization::NamingStrategy*>,::Newtonsoft::Json::Utilities::EnumInfo*>*  value)  {
::cordl_internals::setStaticField<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*,::Newtonsoft::Json::Serialization::NamingStrategy*>,::Newtonsoft::Json::Utilities::EnumInfo*>*, "ValuesAndNamesPerEnum", ::Newtonsoft::Json::Utilities::EnumUtils*>(std::forward<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*,::Newtonsoft::Json::Serialization::NamingStrategy*>,::Newtonsoft::Json::Utilities::EnumInfo*>*>(value));
}
inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*,::Newtonsoft::Json::Serialization::NamingStrategy*>,::Newtonsoft::Json::Utilities::EnumInfo*>* Newtonsoft::Json::Utilities::EnumUtils::getStaticF_ValuesAndNamesPerEnum()  {
return ::cordl_internals::getStaticField<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*,::Newtonsoft::Json::Serialization::NamingStrategy*>,::Newtonsoft::Json::Utilities::EnumInfo*>*, "ValuesAndNamesPerEnum", ::Newtonsoft::Json::Utilities::EnumUtils*>();
}
inline void Newtonsoft::Json::Utilities::EnumUtils::setStaticF__camelCaseNamingStrategy(::Newtonsoft::Json::Serialization::CamelCaseNamingStrategy*  value)  {
::cordl_internals::setStaticField<::Newtonsoft::Json::Serialization::CamelCaseNamingStrategy*, "_camelCaseNamingStrategy", ::Newtonsoft::Json::Utilities::EnumUtils*>(std::forward<::Newtonsoft::Json::Serialization::CamelCaseNamingStrategy*>(value));
}
inline ::Newtonsoft::Json::Serialization::CamelCaseNamingStrategy* Newtonsoft::Json::Utilities::EnumUtils::getStaticF__camelCaseNamingStrategy()  {
return ::cordl_internals::getStaticField<::Newtonsoft::Json::Serialization::CamelCaseNamingStrategy*, "_camelCaseNamingStrategy", ::Newtonsoft::Json::Utilities::EnumUtils*>();
}
inline ::Newtonsoft::Json::Utilities::EnumInfo* Newtonsoft::Json::Utilities::EnumUtils::InitializeValuesAndNames(/* [Nullable(new[] { 0, 1, 2 })] */ ::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*,::Newtonsoft::Json::Serialization::NamingStrategy*>  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::EnumUtils*>(),
                        {"InitializeValuesAndNames", {}, {::i2c::type_of<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*,::Newtonsoft::Json::Serialization::NamingStrategy*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::EnumInfo*>(nullptr, ___internal_method, key);
}
inline bool Newtonsoft::Json::Utilities::EnumUtils::TryToString(::System::Type*  enumType, ::System::Object*  value, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::NamingStrategy*  namingStrategy, /* [Nullable(2)] [NotNullWhen(true)] */ ::by_ref<::StringW>  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::EnumUtils*>(),
                        {"TryToString", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::NamingStrategy*>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, enumType, value, namingStrategy, name);
}
inline ::StringW Newtonsoft::Json::Utilities::EnumUtils::InternalFlagsFormat(::Newtonsoft::Json::Utilities::EnumInfo*  entry, uint64_t  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::EnumUtils*>(),
                        {"InternalFlagsFormat", {}, {::i2c::type_of<::Newtonsoft::Json::Utilities::EnumInfo*>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, entry, result);
}
inline ::Newtonsoft::Json::Utilities::EnumInfo* Newtonsoft::Json::Utilities::EnumUtils::GetEnumValuesAndNames(::System::Type*  enumType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::EnumUtils*>(),
                        {"GetEnumValuesAndNames", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::EnumInfo*>(nullptr, ___internal_method, enumType);
}
inline uint64_t Newtonsoft::Json::Utilities::EnumUtils::ToUInt64(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::EnumUtils*>(),
                        {"ToUInt64", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline ::System::Object* Newtonsoft::Json::Utilities::EnumUtils::ParseEnum(::System::Type*  enumType, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::NamingStrategy*  namingStrategy, ::StringW  value, bool  disallowNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::EnumUtils*>(),
                        {"ParseEnum", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::NamingStrategy*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, enumType, namingStrategy, value, disallowNumber);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::Utilities::EnumUtils::MatchName(::StringW  value, ::ArrayW<::StringW>  enumNames, ::ArrayW<::StringW>  resolvedNames, int32_t  valueIndex, int32_t  valueSubstringLength, ::System::StringComparison  comparison)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::EnumUtils*>(),
                        {"MatchName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::StringComparison>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(nullptr, ___internal_method, value, enumNames, resolvedNames, valueIndex, valueSubstringLength, comparison);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::Utilities::EnumUtils::FindIndexByName(::ArrayW<::StringW>  enumNames, ::StringW  value, int32_t  valueIndex, int32_t  valueSubstringLength, ::System::StringComparison  comparison)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::EnumUtils*>(),
                        {"FindIndexByName", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::StringComparison>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(nullptr, ___internal_method, enumNames, value, valueIndex, valueSubstringLength, comparison);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::EnumUtils::EnumUtils()   {
}
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::EnumUtils___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Utilities::EnumUtils___c::*)()>(&::Newtonsoft::Json::Utilities::EnumUtils___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa39cfd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::EnumUtils___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::EnumUtils___c._InitializeValuesAndNames_b__3_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Utilities::EnumUtils___c::*)(::System::Runtime::Serialization::EnumMemberAttribute*)>(&::Newtonsoft::Json::Utilities::EnumUtils___c::_InitializeValuesAndNames_b__3_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa39cfdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::EnumUtils___c*>(),
                        {"<InitializeValuesAndNames>b__3_0", {}, {::i2c::type_of<::System::Runtime::Serialization::EnumMemberAttribute*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Utilities::EnumUtils___c::setStaticF___9(::Newtonsoft::Json::Utilities::EnumUtils___c*  value)  {
::cordl_internals::setStaticField<::Newtonsoft::Json::Utilities::EnumUtils___c*, "<>9", ::Newtonsoft::Json::Utilities::EnumUtils___c*>(std::forward<::Newtonsoft::Json::Utilities::EnumUtils___c*>(value));
}
inline ::Newtonsoft::Json::Utilities::EnumUtils___c* Newtonsoft::Json::Utilities::EnumUtils___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Newtonsoft::Json::Utilities::EnumUtils___c*, "<>9", ::Newtonsoft::Json::Utilities::EnumUtils___c*>();
}
inline void Newtonsoft::Json::Utilities::EnumUtils___c::setStaticF___9__3_0(::System::Func_2<::System::Runtime::Serialization::EnumMemberAttribute*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Runtime::Serialization::EnumMemberAttribute*,::StringW>*, "<>9__3_0", ::Newtonsoft::Json::Utilities::EnumUtils___c*>(std::forward<::System::Func_2<::System::Runtime::Serialization::EnumMemberAttribute*,::StringW>*>(value));
}
inline ::System::Func_2<::System::Runtime::Serialization::EnumMemberAttribute*,::StringW>* Newtonsoft::Json::Utilities::EnumUtils___c::getStaticF___9__3_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Runtime::Serialization::EnumMemberAttribute*,::StringW>*, "<>9__3_0", ::Newtonsoft::Json::Utilities::EnumUtils___c*>();
}
inline void Newtonsoft::Json::Utilities::EnumUtils___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::EnumUtils___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Utilities::EnumUtils___c::_InitializeValuesAndNames_b__3_0(::System::Runtime::Serialization::EnumMemberAttribute*  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::EnumUtils___c*>(),
                        {"<InitializeValuesAndNames>b__3_0", {}, {::i2c::type_of<::System::Runtime::Serialization::EnumMemberAttribute*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, a);
}
inline ::Newtonsoft::Json::Utilities::EnumUtils___c* Newtonsoft::Json::Utilities::EnumUtils___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Utilities::EnumUtils___c*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::EnumUtils___c::EnumUtils___c()   {
}
