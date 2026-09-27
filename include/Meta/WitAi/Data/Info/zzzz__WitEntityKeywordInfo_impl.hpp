#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Info/WitEntityKeywordInfo.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitEntityKeywordInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::Info::WitEntityKeywordInfo.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Data::Info::WitEntityKeywordInfo::*)(::System::Object*)>(&::Meta::WitAi::Data::Info::WitEntityKeywordInfo::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9e47c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>(),
                    {::i2c::class_of<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Info::WitEntityKeywordInfo.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Data::Info::WitEntityKeywordInfo::*)(::Meta::WitAi::Data::Info::WitEntityKeywordInfo)>(&::Meta::WitAi::Data::Info::WitEntityKeywordInfo::Equals)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9e47cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>(),
                        {"Equals", {}, {::i2c::type_of<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Info::WitEntityKeywordInfo.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::Data::Info::WitEntityKeywordInfo::*)()>(&::Meta::WitAi::Data::Info::WitEntityKeywordInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9e47d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>(),
                    {::i2c::class_of<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool Meta::WitAi::Data::Info::WitEntityKeywordInfo::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool Meta::WitAi::Data::Info::WitEntityKeywordInfo::Equals(::Meta::WitAi::Data::Info::WitEntityKeywordInfo  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>(),
                        {"Equals", {}, {::i2c::type_of<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Meta::WitAi::Data::Info::WitEntityKeywordInfo::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "keyword", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "synonyms", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::WitAi::Data::Info::WitEntityKeywordInfo::WitEntityKeywordInfo(::StringW  keyword, ::System::Collections::Generic::List_1<::StringW>*  synonyms) noexcept  {
this->keyword = keyword;
this->synonyms = synonyms;
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::Info::WitEntityKeywordInfo::WitEntityKeywordInfo()   {
}
