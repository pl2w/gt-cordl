#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/InitializerNotification.hpp"
#include "Liv/Lck/Tablet/zzzz__NotificationType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Tablet/zzzz__InitializerNotification_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Tablet::InitializerNotification._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::InitializerNotification::*)()>(&::Liv::Lck::Tablet::InitializerNotification::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d57bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::InitializerNotification*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Liv::Lck::Tablet::InitializerNotification::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& Liv::Lck::Tablet::InitializerNotification::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void Liv::Lck::Tablet::InitializerNotification::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr ::Liv::Lck::Tablet::NotificationType& Liv::Lck::Tablet::InitializerNotification::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::Liv::Lck::Tablet::NotificationType const& Liv::Lck::Tablet::InitializerNotification::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void Liv::Lck::Tablet::InitializerNotification::__cordl_internal_set_Type(::Liv::Lck::Tablet::NotificationType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Type = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::Tablet::InitializerNotification::__cordl_internal_get_prefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::Tablet::InitializerNotification::__cordl_internal_get_prefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr void Liv::Lck::Tablet::InitializerNotification::__cordl_internal_set_prefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefab = value;
}
inline void Liv::Lck::Tablet::InitializerNotification::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::InitializerNotification*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Tablet::InitializerNotification* Liv::Lck::Tablet::InitializerNotification::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Tablet::InitializerNotification*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Tablet::InitializerNotification::InitializerNotification()   {
}
