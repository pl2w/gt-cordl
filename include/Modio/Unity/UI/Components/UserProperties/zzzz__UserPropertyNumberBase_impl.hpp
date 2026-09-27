#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/UserProperties/UserPropertyNumberBase.hpp"
#include "Modio/Unity/UI/zzzz__StringFormatKilo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Components/UserProperties/zzzz__UserPropertyNumberBase_def.hpp"
#include "Modio/Unity/UI/Components/UserProperties/zzzz__IUserProperty_def.hpp"
#include "Modio/Users/zzzz__UserProfile_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase.OnUserUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase::*)(::Modio::Users::UserProfile*)>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase::OnUserUpdate)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9fbec54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase*>(),
                        {"OnUserUpdate", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase::*)(::Modio::Users::UserProfile*)>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase.IsCustomFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase::*)()>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase::IsCustomFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fbed08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase*>(),
                        {"IsCustomFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase::*)()>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fbed18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase::__cordl_internal_get__text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase::__cordl_internal_get__text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase::__cordl_internal_set__text(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____text = value;
}
constexpr ::Modio::Unity::UI::StringFormatKilo& Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase::__cordl_internal_get__format()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr ::Modio::Unity::UI::StringFormatKilo const& Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase::__cordl_internal_get__format() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase::__cordl_internal_set__format(::Modio::Unity::UI::StringFormatKilo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____format = value;
}
constexpr ::StringW& Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase::__cordl_internal_get__customFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customFormat;
}
constexpr ::StringW const& Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase::__cordl_internal_get__customFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customFormat;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase::__cordl_internal_set__customFormat(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customFormat = value;
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase::OnUserUpdate(::Modio::Users::UserProfile*  user)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase*>(),
                        {"OnUserUpdate", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user);
}
inline int64_t Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase::GetValue(::Modio::Users::UserProfile*  user)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, user);
}
inline bool Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase::IsCustomFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase*>(),
                        {"IsCustomFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase* Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr  Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase::operator ::Modio::Unity::UI::Components::UserProperties::IUserProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::UserProperties::IUserProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr ::Modio::Unity::UI::Components::UserProperties::IUserProperty* Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase::i___Modio__Unity__UI__Components__UserProperties__IUserProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::UserProperties::IUserProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::UserProperties::UserPropertyNumberBase::UserPropertyNumberBase()   {
}
