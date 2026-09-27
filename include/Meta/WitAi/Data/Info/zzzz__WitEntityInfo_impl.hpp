#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Info/WitEntityInfo.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitEntityKeywordInfo_impl.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitEntityRoleInfo_impl.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitEntityInfo_def.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitEntityKeywordInfo_def.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitEntityRoleInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::Info::WitEntityInfo.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Data::Info::WitEntityInfo::*)(::System::Object*)>(&::Meta::WitAi::Data::Info::WitEntityInfo::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9e479f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Data::Info::WitEntityInfo>(),
                    {::i2c::class_of<::Meta::WitAi::Data::Info::WitEntityInfo>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Info::WitEntityInfo.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Data::Info::WitEntityInfo::*)(::Meta::WitAi::Data::Info::WitEntityInfo)>(&::Meta::WitAi::Data::Info::WitEntityInfo::Equals)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e47a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Info::WitEntityInfo>(),
                        {"Equals", {}, {::i2c::type_of<::Meta::WitAi::Data::Info::WitEntityInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Info::WitEntityInfo.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::Data::Info::WitEntityInfo::*)()>(&::Meta::WitAi::Data::Info::WitEntityInfo::GetHashCode)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9e47b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Data::Info::WitEntityInfo>(),
                    {::i2c::class_of<::Meta::WitAi::Data::Info::WitEntityInfo>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool Meta::WitAi::Data::Info::WitEntityInfo::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Data::Info::WitEntityInfo>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool Meta::WitAi::Data::Info::WitEntityInfo::Equals(::Meta::WitAi::Data::Info::WitEntityInfo  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Info::WitEntityInfo>(),
                        {"Equals", {}, {::i2c::type_of<::Meta::WitAi::Data::Info::WitEntityInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Meta::WitAi::Data::Info::WitEntityInfo::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Data::Info::WitEntityInfo>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lookups", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "roles", ty: "::ArrayW<::Meta::WitAi::Data::Info::WitEntityRoleInfo>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "keywords", ty: "::ArrayW<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::WitAi::Data::Info::WitEntityInfo::WitEntityInfo(::StringW  name, ::StringW  id, ::ArrayW<::StringW>  lookups, ::ArrayW<::Meta::WitAi::Data::Info::WitEntityRoleInfo>  roles, ::ArrayW<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>  keywords) noexcept  {
this->name = name;
this->id = id;
this->lookups = lookups;
this->roles = roles;
this->keywords = keywords;
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::Info::WitEntityInfo::WitEntityInfo()   {
}
