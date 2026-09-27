#pragma once
// IWYU pragma private; include "GlobalNamespace/TransformReset.hpp"
#include "GlobalNamespace/zzzz__TransformReset_OriginalGameObjectTransform_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TransformReset_def.hpp"
#include "GlobalNamespace/zzzz__TransformReset_OriginalGameObjectTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransformReset.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformReset::*)()>(&::GlobalNamespace::TransformReset::Awake)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5745cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformReset*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformReset.ReturnTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformReset::*)()>(&::GlobalNamespace::TransformReset::ReturnTransforms)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5745e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformReset*>(),
                        {"ReturnTransforms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformReset.SetScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformReset::*)(float_t)>(&::GlobalNamespace::TransformReset::SetScale)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5745ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformReset*>(),
                        {"SetScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformReset.ResetTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformReset::*)()>(&::GlobalNamespace::TransformReset::ResetTransforms)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x57459b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformReset*>(),
                        {"ResetTransforms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformReset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformReset::*)()>(&::GlobalNamespace::TransformReset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5745f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformReset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::TransformReset_OriginalGameObjectTransform>& GlobalNamespace::TransformReset::__cordl_internal_get_transformList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformList;
}
constexpr ::ArrayW<::GlobalNamespace::TransformReset_OriginalGameObjectTransform> const& GlobalNamespace::TransformReset::__cordl_internal_get_transformList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformList;
}
constexpr void GlobalNamespace::TransformReset::__cordl_internal_set_transformList(::ArrayW<::GlobalNamespace::TransformReset_OriginalGameObjectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transformList = value;
}
constexpr ::ArrayW<::GlobalNamespace::TransformReset_OriginalGameObjectTransform>& GlobalNamespace::TransformReset::__cordl_internal_get_tempTransformList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempTransformList;
}
constexpr ::ArrayW<::GlobalNamespace::TransformReset_OriginalGameObjectTransform> const& GlobalNamespace::TransformReset::__cordl_internal_get_tempTransformList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempTransformList;
}
constexpr void GlobalNamespace::TransformReset::__cordl_internal_set_tempTransformList(::ArrayW<::GlobalNamespace::TransformReset_OriginalGameObjectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempTransformList = value;
}
inline void GlobalNamespace::TransformReset::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformReset*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransformReset::ReturnTransforms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformReset*>(),
                        {"ReturnTransforms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransformReset::SetScale(float_t  ratio)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformReset*>(),
                        {"SetScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ratio);
}
inline void GlobalNamespace::TransformReset::ResetTransforms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformReset*>(),
                        {"ResetTransforms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransformReset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformReset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TransformReset* GlobalNamespace::TransformReset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TransformReset*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransformReset::TransformReset()   {
}
