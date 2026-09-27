#pragma once
// IWYU pragma private; include "GlobalNamespace/LerpScale.hpp"
#include "GlobalNamespace/zzzz__LerpComponent_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__LerpScale_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LerpScale.OnLerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LerpScale::*)(float_t)>(&::GlobalNamespace::LerpScale::OnLerp)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5a1d5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LerpScale*>(),
                    {::i2c::class_of<::GlobalNamespace::LerpScale*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LerpScale._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LerpScale::*)()>(&::GlobalNamespace::LerpScale::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5a1d6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LerpScale*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LerpScale::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LerpScale::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::LerpScale::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LerpScale::__cordl_internal_get_start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LerpScale::__cordl_internal_get_start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr void GlobalNamespace::LerpScale::__cordl_internal_set_start(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___start = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LerpScale::__cordl_internal_get_end()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LerpScale::__cordl_internal_get_end() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end;
}
constexpr void GlobalNamespace::LerpScale::__cordl_internal_set_end(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___end = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LerpScale::__cordl_internal_get_current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___current;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LerpScale::__cordl_internal_get_current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___current;
}
constexpr void GlobalNamespace::LerpScale::__cordl_internal_set_current(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___current = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::LerpScale::__cordl_internal_get_scaleCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::LerpScale::__cordl_internal_get_scaleCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleCurve;
}
constexpr void GlobalNamespace::LerpScale::__cordl_internal_set_scaleCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleCurve = value;
}
inline void GlobalNamespace::LerpScale::OnLerp(float_t  t)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LerpScale*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void GlobalNamespace::LerpScale::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LerpScale*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LerpScale* GlobalNamespace::LerpScale::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LerpScale*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LerpScale::LerpScale()   {
}
