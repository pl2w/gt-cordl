#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotoBoothImageReciever.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PhotoBoothImageReciever_def.hpp"
#include "GlobalNamespace/zzzz__PhotoBoothCamera_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PhotoBoothImageReciever.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotoBoothImageReciever::*)()>(&::GlobalNamespace::PhotoBoothImageReciever::OnEnable)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x571172c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothImageReciever*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotoBoothImageReciever.photoBoothCamera_OnCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotoBoothImageReciever::*)(::UnityEngine::Texture*, int32_t)>(&::GlobalNamespace::PhotoBoothImageReciever::photoBoothCamera_OnCapture)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5711810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothImageReciever*>(),
                        {"photoBoothCamera_OnCapture", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotoBoothImageReciever.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotoBoothImageReciever::*)()>(&::GlobalNamespace::PhotoBoothImageReciever::OnDisable)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x57118a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothImageReciever*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotoBoothImageReciever._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotoBoothImageReciever::*)()>(&::GlobalNamespace::PhotoBoothImageReciever::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x571198c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothImageReciever*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PhotoBoothCamera>& GlobalNamespace::PhotoBoothImageReciever::__cordl_internal_get_photoBoothCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photoBoothCamera;
}
constexpr ::UnityW<::GlobalNamespace::PhotoBoothCamera> const& GlobalNamespace::PhotoBoothImageReciever::__cordl_internal_get_photoBoothCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photoBoothCamera;
}
constexpr void GlobalNamespace::PhotoBoothImageReciever::__cordl_internal_set_photoBoothCamera(::UnityW<::GlobalNamespace::PhotoBoothCamera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___photoBoothCamera = value;
}
constexpr int32_t& GlobalNamespace::PhotoBoothImageReciever::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& GlobalNamespace::PhotoBoothImageReciever::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void GlobalNamespace::PhotoBoothImageReciever::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
inline void GlobalNamespace::PhotoBoothImageReciever::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothImageReciever*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhotoBoothImageReciever::photoBoothCamera_OnCapture(::UnityEngine::Texture*  texture, int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothImageReciever*>(),
                        {"photoBoothCamera_OnCapture", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, texture, i);
}
inline void GlobalNamespace::PhotoBoothImageReciever::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothImageReciever*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhotoBoothImageReciever::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothImageReciever*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PhotoBoothImageReciever* GlobalNamespace::PhotoBoothImageReciever::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhotoBoothImageReciever*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotoBoothImageReciever::PhotoBoothImageReciever()   {
}
