#pragma once
// IWYU pragma private; include "KID/Model/Challenge.hpp"
#include "KID/Model/zzzz__ChallengeType_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__Challenge_def.hpp"
#include "KID/Model/zzzz__ChallengeType_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::KID::Model::Challenge.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::ChallengeType (::KID::Model::Challenge::*)()>(&::KID::Model::Challenge::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Challenge*>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Challenge.set_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::Challenge::*)(::KID::Model::ChallengeType)>(&::KID::Model::Challenge::set_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Challenge*>(),
                        {"set_Type", {}, {::i2c::type_of<::KID::Model::ChallengeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Challenge._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::Challenge::*)()>(&::KID::Model::Challenge::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Challenge*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Challenge._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::Challenge::*)(::System::Guid, ::KID::Model::ChallengeType, ::StringW, ::StringW, bool)>(&::KID::Model::Challenge::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9cd3890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Challenge*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::KID::Model::ChallengeType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Challenge.get_ChallengeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::KID::Model::Challenge::*)()>(&::KID::Model::Challenge::get_ChallengeId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9cd3904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Challenge*>(),
                        {"get_ChallengeId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Challenge.set_ChallengeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::Challenge::*)(::System::Guid)>(&::KID::Model::Challenge::set_ChallengeId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cd3914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Challenge*>(),
                        {"set_ChallengeId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Challenge.get_Url
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::Challenge::*)()>(&::KID::Model::Challenge::get_Url)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Challenge*>(),
                        {"get_Url", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Challenge.set_Url
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::Challenge::*)(::StringW)>(&::KID::Model::Challenge::set_Url)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Challenge*>(),
                        {"set_Url", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Challenge.get_OneTimePassword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::Challenge::*)()>(&::KID::Model::Challenge::get_OneTimePassword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Challenge*>(),
                        {"get_OneTimePassword", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Challenge.set_OneTimePassword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::Challenge::*)(::StringW)>(&::KID::Model::Challenge::set_OneTimePassword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Challenge*>(),
                        {"set_OneTimePassword", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Challenge.get_ChildLiteAccessEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::KID::Model::Challenge::*)()>(&::KID::Model::Challenge::get_ChildLiteAccessEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Challenge*>(),
                        {"get_ChildLiteAccessEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Challenge.set_ChildLiteAccessEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::Challenge::*)(bool)>(&::KID::Model::Challenge::set_ChildLiteAccessEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Challenge*>(),
                        {"set_ChildLiteAccessEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Challenge.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::Challenge::*)()>(&::KID::Model::Challenge::ToString)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x9cd3950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::Challenge*>(),
                    {::i2c::class_of<::KID::Model::Challenge*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Challenge.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::Challenge::*)()>(&::KID::Model::Challenge::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd3bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::Challenge*>(),
                    {::i2c::class_of<::KID::Model::Challenge*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::KID::Model::ChallengeType& KID::Model::Challenge::__cordl_internal_get__Type_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type_k__BackingField;
}
constexpr ::KID::Model::ChallengeType const& KID::Model::Challenge::__cordl_internal_get__Type_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type_k__BackingField;
}
constexpr void KID::Model::Challenge::__cordl_internal_set__Type_k__BackingField(::KID::Model::ChallengeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Type_k__BackingField = value;
}
constexpr ::System::Guid& KID::Model::Challenge::__cordl_internal_get__ChallengeId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChallengeId_k__BackingField;
}
constexpr ::System::Guid const& KID::Model::Challenge::__cordl_internal_get__ChallengeId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChallengeId_k__BackingField;
}
constexpr void KID::Model::Challenge::__cordl_internal_set__ChallengeId_k__BackingField(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ChallengeId_k__BackingField = value;
}
constexpr ::StringW& KID::Model::Challenge::__cordl_internal_get__Url_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Url_k__BackingField;
}
constexpr ::StringW const& KID::Model::Challenge::__cordl_internal_get__Url_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Url_k__BackingField;
}
constexpr void KID::Model::Challenge::__cordl_internal_set__Url_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Url_k__BackingField = value;
}
constexpr ::StringW& KID::Model::Challenge::__cordl_internal_get__OneTimePassword_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OneTimePassword_k__BackingField;
}
constexpr ::StringW const& KID::Model::Challenge::__cordl_internal_get__OneTimePassword_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OneTimePassword_k__BackingField;
}
constexpr void KID::Model::Challenge::__cordl_internal_set__OneTimePassword_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OneTimePassword_k__BackingField = value;
}
constexpr bool& KID::Model::Challenge::__cordl_internal_get__ChildLiteAccessEnabled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChildLiteAccessEnabled_k__BackingField;
}
constexpr bool const& KID::Model::Challenge::__cordl_internal_get__ChildLiteAccessEnabled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChildLiteAccessEnabled_k__BackingField;
}
constexpr void KID::Model::Challenge::__cordl_internal_set__ChildLiteAccessEnabled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ChildLiteAccessEnabled_k__BackingField = value;
}
inline ::KID::Model::ChallengeType KID::Model::Challenge::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Challenge*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::ChallengeType>(this, ___internal_method);
}
inline void KID::Model::Challenge::set_Type(::KID::Model::ChallengeType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Challenge*>(),
                        {"set_Type", {}, {::i2c::type_of<::KID::Model::ChallengeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void KID::Model::Challenge::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Challenge*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::Challenge::_ctor(::System::Guid  challengeId, ::KID::Model::ChallengeType  type, ::StringW  url, ::StringW  oneTimePassword, bool  childLiteAccessEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Challenge*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::KID::Model::ChallengeType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, challengeId, type, url, oneTimePassword, childLiteAccessEnabled);
}
inline ::System::Guid KID::Model::Challenge::get_ChallengeId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Challenge*>(),
                        {"get_ChallengeId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void KID::Model::Challenge::set_ChallengeId(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Challenge*>(),
                        {"set_ChallengeId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::Challenge::get_Url()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Challenge*>(),
                        {"get_Url", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::Challenge::set_Url(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Challenge*>(),
                        {"set_Url", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::Challenge::get_OneTimePassword()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Challenge*>(),
                        {"get_OneTimePassword", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::Challenge::set_OneTimePassword(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Challenge*>(),
                        {"set_OneTimePassword", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool KID::Model::Challenge::get_ChildLiteAccessEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Challenge*>(),
                        {"get_ChildLiteAccessEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void KID::Model::Challenge::set_ChildLiteAccessEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Challenge*>(),
                        {"set_ChildLiteAccessEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::Challenge::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::Challenge*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::Challenge::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::Challenge*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::Challenge* KID::Model::Challenge::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::Challenge*>());
}
inline ::KID::Model::Challenge* KID::Model::Challenge::New_ctor(::System::Guid  challengeId, ::KID::Model::ChallengeType  type, ::StringW  url, ::StringW  oneTimePassword, bool  childLiteAccessEnabled)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::Challenge*>(challengeId, type, url, oneTimePassword, childLiteAccessEnabled));
}
// Ctor Parameters []
constexpr ::KID::Model::Challenge::Challenge()   {
}
