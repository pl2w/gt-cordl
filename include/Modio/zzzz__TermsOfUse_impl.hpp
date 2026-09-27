#pragma once
// IWYU pragma private; include "Modio/TermsOfUse.hpp"
#include "Modio/zzzz__TermsOfUseLink_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/zzzz__TermsOfUse_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "Modio/zzzz__LinkType_def.hpp"
#include "Modio/zzzz__TermsOfUseLink_def.hpp"
#include "Modio/zzzz__TermsOfUse__Get_d__17_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Modio::TermsOfUse.get_TermsText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::TermsOfUse::*)()>(&::Modio::TermsOfUse::get_TermsText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01bb18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::TermsOfUse*>(),
                        {"get_TermsText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::TermsOfUse.set_TermsText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::TermsOfUse::*)(::StringW)>(&::Modio::TermsOfUse::set_TermsText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01bb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::TermsOfUse*>(),
                        {"set_TermsText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::TermsOfUse.get_AgreeText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::TermsOfUse::*)()>(&::Modio::TermsOfUse::get_AgreeText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01bb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::TermsOfUse*>(),
                        {"get_AgreeText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::TermsOfUse.set_AgreeText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::TermsOfUse::*)(::StringW)>(&::Modio::TermsOfUse::set_AgreeText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01bb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::TermsOfUse*>(),
                        {"set_AgreeText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::TermsOfUse.get_DisagreeText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::TermsOfUse::*)()>(&::Modio::TermsOfUse::get_DisagreeText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01bb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::TermsOfUse*>(),
                        {"get_DisagreeText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::TermsOfUse.set_DisagreeText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::TermsOfUse::*)(::StringW)>(&::Modio::TermsOfUse::set_DisagreeText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01bb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::TermsOfUse*>(),
                        {"set_DisagreeText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::TermsOfUse.get_Links
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Modio::TermsOfUseLink> (::Modio::TermsOfUse::*)()>(&::Modio::TermsOfUse::get_Links)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01bb48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::TermsOfUse*>(),
                        {"get_Links", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::TermsOfUse.set_Links
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::TermsOfUse::*)(::ArrayW<::Modio::TermsOfUseLink>)>(&::Modio::TermsOfUse::set_Links)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01bb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::TermsOfUse*>(),
                        {"set_Links", {}, {::i2c::type_of<::ArrayW<::Modio::TermsOfUseLink>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::TermsOfUse.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::TermsOfUse*>>* (*)()>(&::Modio::TermsOfUse::Get)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa01bb58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::TermsOfUse*>(),
                        {"Get", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::TermsOfUse.GetLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::TermsOfUseLink (::Modio::TermsOfUse::*)(::Modio::LinkType)>(&::Modio::TermsOfUse::GetLink)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa01bc44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::TermsOfUse*>(),
                        {"GetLink", {}, {::i2c::type_of<::Modio::LinkType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::TermsOfUse.ConvertTermsObjectToTermsOfUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::TermsOfUse* (*)(::Modio::API::SchemaDefinitions::TermsObject)>(&::Modio::TermsOfUse::ConvertTermsObjectToTermsOfUse)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xa01bdd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::TermsOfUse*>(),
                        {"ConvertTermsObjectToTermsOfUse", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::TermsObject>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::TermsOfUse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::TermsOfUse::*)()>(&::Modio::TermsOfUse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01c050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::TermsOfUse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Modio::TermsOfUse::__cordl_internal_get__TermsText_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TermsText_k__BackingField;
}
constexpr ::StringW const& Modio::TermsOfUse::__cordl_internal_get__TermsText_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TermsText_k__BackingField;
}
constexpr void Modio::TermsOfUse::__cordl_internal_set__TermsText_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TermsText_k__BackingField = value;
}
constexpr ::StringW& Modio::TermsOfUse::__cordl_internal_get__AgreeText_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgreeText_k__BackingField;
}
constexpr ::StringW const& Modio::TermsOfUse::__cordl_internal_get__AgreeText_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgreeText_k__BackingField;
}
constexpr void Modio::TermsOfUse::__cordl_internal_set__AgreeText_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AgreeText_k__BackingField = value;
}
constexpr ::StringW& Modio::TermsOfUse::__cordl_internal_get__DisagreeText_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisagreeText_k__BackingField;
}
constexpr ::StringW const& Modio::TermsOfUse::__cordl_internal_get__DisagreeText_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisagreeText_k__BackingField;
}
constexpr void Modio::TermsOfUse::__cordl_internal_set__DisagreeText_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DisagreeText_k__BackingField = value;
}
constexpr ::ArrayW<::Modio::TermsOfUseLink>& Modio::TermsOfUse::__cordl_internal_get__Links_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Links_k__BackingField;
}
constexpr ::ArrayW<::Modio::TermsOfUseLink> const& Modio::TermsOfUse::__cordl_internal_get__Links_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Links_k__BackingField;
}
constexpr void Modio::TermsOfUse::__cordl_internal_set__Links_k__BackingField(::ArrayW<::Modio::TermsOfUseLink>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Links_k__BackingField = value;
}
inline void Modio::TermsOfUse::setStaticF__termsCache(::System::Collections::Generic::Dictionary_2<::StringW,::Modio::TermsOfUse*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Modio::TermsOfUse*>*, "_termsCache", ::Modio::TermsOfUse*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::Modio::TermsOfUse*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::TermsOfUse*>* Modio::TermsOfUse::getStaticF__termsCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Modio::TermsOfUse*>*, "_termsCache", ::Modio::TermsOfUse*>();
}
inline ::StringW Modio::TermsOfUse::get_TermsText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::TermsOfUse*>(),
                        {"get_TermsText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::TermsOfUse::set_TermsText(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::TermsOfUse*>(),
                        {"set_TermsText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Modio::TermsOfUse::get_AgreeText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::TermsOfUse*>(),
                        {"get_AgreeText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::TermsOfUse::set_AgreeText(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::TermsOfUse*>(),
                        {"set_AgreeText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Modio::TermsOfUse::get_DisagreeText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::TermsOfUse*>(),
                        {"get_DisagreeText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::TermsOfUse::set_DisagreeText(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::TermsOfUse*>(),
                        {"set_DisagreeText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::Modio::TermsOfUseLink> Modio::TermsOfUse::get_Links()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::TermsOfUse*>(),
                        {"get_Links", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Modio::TermsOfUseLink>>(this, ___internal_method);
}
inline void Modio::TermsOfUse::set_Links(::ArrayW<::Modio::TermsOfUseLink>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::TermsOfUse*>(),
                        {"set_Links", {}, {::i2c::type_of<::ArrayW<::Modio::TermsOfUseLink>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::TermsOfUse*>>* Modio::TermsOfUse::Get()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::TermsOfUse*>(),
                        {"Get", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::TermsOfUse*>>*>(nullptr, ___internal_method);
}
inline ::Modio::TermsOfUseLink Modio::TermsOfUse::GetLink(::Modio::LinkType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::TermsOfUse*>(),
                        {"GetLink", {}, {::i2c::type_of<::Modio::LinkType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::TermsOfUseLink>(this, ___internal_method, type);
}
inline ::Modio::TermsOfUse* Modio::TermsOfUse::ConvertTermsObjectToTermsOfUse(::Modio::API::SchemaDefinitions::TermsObject  termsObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::TermsOfUse*>(),
                        {"ConvertTermsObjectToTermsOfUse", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::TermsObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::TermsOfUse*>(nullptr, ___internal_method, termsObject);
}
inline void Modio::TermsOfUse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::TermsOfUse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::TermsOfUse* Modio::TermsOfUse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::TermsOfUse*>());
}
// Ctor Parameters []
constexpr ::Modio::TermsOfUse::TermsOfUse()   {
}
