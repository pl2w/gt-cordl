#pragma once
// IWYU pragma private; include "GlobalNamespace/LookAtTransform.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LookAtTransform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LookAtTransform.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LookAtTransform::*)()>(&::GlobalNamespace::LookAtTransform::Update)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5b087d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LookAtTransform*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LookAtTransform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LookAtTransform::*)()>(&::GlobalNamespace::LookAtTransform::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b08864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LookAtTransform*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LookAtTransform::__cordl_internal_get_lookAt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookAt;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LookAtTransform::__cordl_internal_get_lookAt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookAt;
}
constexpr void GlobalNamespace::LookAtTransform::__cordl_internal_set_lookAt(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookAt = value;
}
inline void GlobalNamespace::LookAtTransform::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LookAtTransform*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LookAtTransform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LookAtTransform*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LookAtTransform* GlobalNamespace::LookAtTransform::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LookAtTransform*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LookAtTransform::LookAtTransform()   {
}
