#pragma once
// IWYU pragma private; include "GlobalNamespace/DroneFakeCameraMimicer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DroneFakeCameraMimicer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DroneFakeCameraMimicer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DroneFakeCameraMimicer::*)()>(&::GlobalNamespace::DroneFakeCameraMimicer::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9d14ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DroneFakeCameraMimicer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DroneFakeCameraMimicer.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DroneFakeCameraMimicer::*)()>(&::GlobalNamespace::DroneFakeCameraMimicer::LateUpdate)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9d14b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DroneFakeCameraMimicer*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DroneFakeCameraMimicer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DroneFakeCameraMimicer::*)()>(&::GlobalNamespace::DroneFakeCameraMimicer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d14c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DroneFakeCameraMimicer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::DroneFakeCameraMimicer::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::DroneFakeCameraMimicer::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void GlobalNamespace::DroneFakeCameraMimicer::__cordl_internal_set__target(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::DroneFakeCameraMimicer::__cordl_internal_get__mimicer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mimicer;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::DroneFakeCameraMimicer::__cordl_internal_get__mimicer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mimicer;
}
constexpr void GlobalNamespace::DroneFakeCameraMimicer::__cordl_internal_set__mimicer(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mimicer = value;
}
inline void GlobalNamespace::DroneFakeCameraMimicer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DroneFakeCameraMimicer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DroneFakeCameraMimicer::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DroneFakeCameraMimicer*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DroneFakeCameraMimicer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DroneFakeCameraMimicer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DroneFakeCameraMimicer* GlobalNamespace::DroneFakeCameraMimicer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DroneFakeCameraMimicer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DroneFakeCameraMimicer::DroneFakeCameraMimicer()   {
}
