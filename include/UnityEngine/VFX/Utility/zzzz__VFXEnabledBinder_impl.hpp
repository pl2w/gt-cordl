#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXEnabledBinder.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_impl.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXEnabledBinder_Check_impl.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXEnabledBinder_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__ExposedProperty_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXEnabledBinder_Check_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffect_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXEnabledBinder.get_Property
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::VFX::Utility::VFXEnabledBinder::*)()>(&::UnityEngine::VFX::Utility::VFXEnabledBinder::get_Property)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb3e6f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXEnabledBinder*>(),
                        {"get_Property", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXEnabledBinder.set_Property
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXEnabledBinder::*)(::StringW)>(&::UnityEngine::VFX::Utility::VFXEnabledBinder::set_Property)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb3e6f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXEnabledBinder*>(),
                        {"set_Property", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXEnabledBinder.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::VFX::Utility::VFXEnabledBinder::*)(::UnityEngine::VFX::VisualEffect*)>(&::UnityEngine::VFX::Utility::VFXEnabledBinder::IsValid)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb3e6fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::VFX::Utility::VFXEnabledBinder*>(),
                    {::i2c::class_of<::UnityEngine::VFX::Utility::VFXEnabledBinder*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXEnabledBinder.UpdateBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXEnabledBinder::*)(::UnityEngine::VFX::VisualEffect*)>(&::UnityEngine::VFX::Utility::VFXEnabledBinder::UpdateBinding)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb3e7064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::VFX::Utility::VFXEnabledBinder*>(),
                    {::i2c::class_of<::UnityEngine::VFX::Utility::VFXEnabledBinder*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXEnabledBinder.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::VFX::Utility::VFXEnabledBinder::*)()>(&::UnityEngine::VFX::Utility::VFXEnabledBinder::ToString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb3e70d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::VFX::Utility::VFXEnabledBinder*>(),
                    {::i2c::class_of<::UnityEngine::VFX::Utility::VFXEnabledBinder*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXEnabledBinder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXEnabledBinder::*)()>(&::UnityEngine::VFX::Utility::VFXEnabledBinder::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb3e71d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXEnabledBinder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::VFXEnabledBinder_Check& UnityEngine::VFX::Utility::VFXEnabledBinder::__cordl_internal_get_check()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___check;
}
constexpr ::GlobalNamespace::VFXEnabledBinder_Check const& UnityEngine::VFX::Utility::VFXEnabledBinder::__cordl_internal_get_check() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___check;
}
constexpr void UnityEngine::VFX::Utility::VFXEnabledBinder::__cordl_internal_set_check(::GlobalNamespace::VFXEnabledBinder_Check  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___check = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::VFXEnabledBinder::__cordl_internal_get_m_Property()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Property;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::VFXEnabledBinder::__cordl_internal_get_m_Property() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Property;
}
constexpr void UnityEngine::VFX::Utility::VFXEnabledBinder::__cordl_internal_set_m_Property(::UnityEngine::VFX::Utility::ExposedProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Property = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::VFX::Utility::VFXEnabledBinder::__cordl_internal_get_Target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Target;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::VFX::Utility::VFXEnabledBinder::__cordl_internal_get_Target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Target;
}
constexpr void UnityEngine::VFX::Utility::VFXEnabledBinder::__cordl_internal_set_Target(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Target = value;
}
inline ::StringW UnityEngine::VFX::Utility::VFXEnabledBinder::get_Property()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXEnabledBinder*>(),
                        {"get_Property", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXEnabledBinder::set_Property(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXEnabledBinder*>(),
                        {"set_Property", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::VFX::Utility::VFXEnabledBinder::IsValid(::UnityEngine::VFX::VisualEffect*  component)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::VFX::Utility::VFXEnabledBinder*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline void UnityEngine::VFX::Utility::VFXEnabledBinder::UpdateBinding(::UnityEngine::VFX::VisualEffect*  component)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::VFX::Utility::VFXEnabledBinder*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline ::StringW UnityEngine::VFX::Utility::VFXEnabledBinder::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::VFX::Utility::VFXEnabledBinder*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXEnabledBinder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXEnabledBinder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::Utility::VFXEnabledBinder* UnityEngine::VFX::Utility::VFXEnabledBinder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::Utility::VFXEnabledBinder*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Utility::VFXEnabledBinder::VFXEnabledBinder()   {
}
