#pragma once
// IWYU pragma private; include "GlobalNamespace/LineRenderVelocityMapper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LineRenderVelocityMapper_def.hpp"
#include "GlobalNamespace/zzzz__GorillaVelocityEstimator_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LineRenderVelocityMapper.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LineRenderVelocityMapper::*)()>(&::GlobalNamespace::LineRenderVelocityMapper::Awake)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x56d1c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LineRenderVelocityMapper*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LineRenderVelocityMapper.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LineRenderVelocityMapper::*)()>(&::GlobalNamespace::LineRenderVelocityMapper::LateUpdate)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x56d1cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LineRenderVelocityMapper*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LineRenderVelocityMapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LineRenderVelocityMapper::*)()>(&::GlobalNamespace::LineRenderVelocityMapper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d1eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LineRenderVelocityMapper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& GlobalNamespace::LineRenderVelocityMapper::__cordl_internal_get_velocityEstimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& GlobalNamespace::LineRenderVelocityMapper::__cordl_internal_get_velocityEstimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr void GlobalNamespace::LineRenderVelocityMapper::__cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityEstimator = value;
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& GlobalNamespace::LineRenderVelocityMapper::__cordl_internal_get__lr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lr;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& GlobalNamespace::LineRenderVelocityMapper::__cordl_internal_get__lr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lr;
}
constexpr void GlobalNamespace::LineRenderVelocityMapper::__cordl_internal_set__lr(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lr = value;
}
inline void GlobalNamespace::LineRenderVelocityMapper::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LineRenderVelocityMapper*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LineRenderVelocityMapper::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LineRenderVelocityMapper*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LineRenderVelocityMapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LineRenderVelocityMapper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LineRenderVelocityMapper* GlobalNamespace::LineRenderVelocityMapper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LineRenderVelocityMapper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LineRenderVelocityMapper::LineRenderVelocityMapper()   {
}
