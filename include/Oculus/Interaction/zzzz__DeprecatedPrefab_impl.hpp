#pragma once
// IWYU pragma private; include "Oculus/Interaction/DeprecatedPrefab.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__DeprecatedPrefab_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::DeprecatedPrefab.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DeprecatedPrefab::*)()>(&::Oculus::Interaction::DeprecatedPrefab::Start)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xa48b77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DeprecatedPrefab*>(),
                    {::i2c::class_of<::Oculus::Interaction::DeprecatedPrefab*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DeprecatedPrefab._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DeprecatedPrefab::*)()>(&::Oculus::Interaction::DeprecatedPrefab::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48b990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DeprecatedPrefab*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::DeprecatedPrefab::__cordl_internal_get__replacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____replacement;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::DeprecatedPrefab::__cordl_internal_get__replacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____replacement;
}
constexpr void Oculus::Interaction::DeprecatedPrefab::__cordl_internal_set__replacement(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____replacement = value;
}
constexpr bool& Oculus::Interaction::DeprecatedPrefab::__cordl_internal_get__supressWarning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____supressWarning;
}
constexpr bool const& Oculus::Interaction::DeprecatedPrefab::__cordl_internal_get__supressWarning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____supressWarning;
}
constexpr void Oculus::Interaction::DeprecatedPrefab::__cordl_internal_set__supressWarning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____supressWarning = value;
}
inline void Oculus::Interaction::DeprecatedPrefab::setStaticF_label(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "label", ::Oculus::Interaction::DeprecatedPrefab*>(std::forward<::StringW>(value));
}
inline ::StringW Oculus::Interaction::DeprecatedPrefab::getStaticF_label()  {
return ::cordl_internals::getStaticField<::StringW, "label", ::Oculus::Interaction::DeprecatedPrefab*>();
}
inline void Oculus::Interaction::DeprecatedPrefab::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DeprecatedPrefab*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DeprecatedPrefab::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DeprecatedPrefab*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::DeprecatedPrefab* Oculus::Interaction::DeprecatedPrefab::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DeprecatedPrefab*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::DeprecatedPrefab::DeprecatedPrefab()   {
}
