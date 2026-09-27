#pragma once
// IWYU pragma private; include "GlobalNamespace/TappableDent.hpp"
#include "GlobalNamespace/zzzz__Tappable_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__TappableDent_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TappableDent.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableDent::*)()>(&::GlobalNamespace::TappableDent::Start)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x598d3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableDent*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableDent.OnTapLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableDent::*)(float_t, float_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::TappableDent::OnTapLocal)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x598d520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TappableDent*>(),
                    {::i2c::class_of<::GlobalNamespace::TappableDent*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableDent.ChangeNumTapsToDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableDent::*)(int32_t)>(&::GlobalNamespace::TappableDent::ChangeNumTapsToDestroy)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x598d5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableDent*>(),
                        {"ChangeNumTapsToDestroy", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableDent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableDent::*)()>(&::GlobalNamespace::TappableDent::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x598d6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableDent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::TappableDent::__cordl_internal_get_numTapsToDestroy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numTapsToDestroy;
}
constexpr int32_t const& GlobalNamespace::TappableDent::__cordl_internal_get_numTapsToDestroy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numTapsToDestroy;
}
constexpr void GlobalNamespace::TappableDent::__cordl_internal_set_numTapsToDestroy(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numTapsToDestroy = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TappableDent::__cordl_internal_get_finalLocalOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalLocalOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TappableDent::__cordl_internal_get_finalLocalOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalLocalOffset;
}
constexpr void GlobalNamespace::TappableDent::__cordl_internal_set_finalLocalOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finalLocalOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TappableDent::__cordl_internal_get_finalLocalScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalLocalScale;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TappableDent::__cordl_internal_get_finalLocalScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalLocalScale;
}
constexpr void GlobalNamespace::TappableDent::__cordl_internal_set_finalLocalScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finalLocalScale = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TappableDent::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TappableDent::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr void GlobalNamespace::TappableDent::__cordl_internal_set_parent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
constexpr int32_t& GlobalNamespace::TappableDent::__cordl_internal_get_numTapsSoFar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numTapsSoFar;
}
constexpr int32_t const& GlobalNamespace::TappableDent::__cordl_internal_get_numTapsSoFar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numTapsSoFar;
}
constexpr void GlobalNamespace::TappableDent::__cordl_internal_set_numTapsSoFar(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numTapsSoFar = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TappableDent::__cordl_internal_get_offsetPerTap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetPerTap;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TappableDent::__cordl_internal_get_offsetPerTap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetPerTap;
}
constexpr void GlobalNamespace::TappableDent::__cordl_internal_set_offsetPerTap(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offsetPerTap = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TappableDent::__cordl_internal_get_scaleOffsetPerTap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleOffsetPerTap;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TappableDent::__cordl_internal_get_scaleOffsetPerTap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleOffsetPerTap;
}
constexpr void GlobalNamespace::TappableDent::__cordl_internal_set_scaleOffsetPerTap(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleOffsetPerTap = value;
}
inline void GlobalNamespace::TappableDent::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableDent*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TappableDent::OnTapLocal(float_t  tapStrength, float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TappableDent*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tapStrength, tapTime, info);
}
inline void GlobalNamespace::TappableDent::ChangeNumTapsToDestroy(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableDent*>(),
                        {"ChangeNumTapsToDestroy", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline void GlobalNamespace::TappableDent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableDent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TappableDent* GlobalNamespace::TappableDent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TappableDent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TappableDent::TappableDent()   {
}
