#pragma once
// IWYU pragma private; include "GlobalNamespace/LineRendererUpdateTarget.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourPostTick_impl.hpp"
#include "GlobalNamespace/zzzz__LineRendererUpdateTarget_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LineRendererUpdateTarget.PostTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LineRendererUpdateTarget::*)()>(&::GlobalNamespace::LineRendererUpdateTarget::PostTick)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5640344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LineRendererUpdateTarget*>(),
                    {::i2c::class_of<::GlobalNamespace::LineRendererUpdateTarget*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LineRendererUpdateTarget.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LineRendererUpdateTarget::*)()>(&::GlobalNamespace::LineRendererUpdateTarget::Awake)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x56404a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LineRendererUpdateTarget*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LineRendererUpdateTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LineRendererUpdateTarget::*)()>(&::GlobalNamespace::LineRendererUpdateTarget::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5640510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LineRendererUpdateTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::LineRenderer>& GlobalNamespace::LineRendererUpdateTarget::__cordl_internal_get_lineRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineRenderer;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& GlobalNamespace::LineRendererUpdateTarget::__cordl_internal_get_lineRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineRenderer;
}
constexpr void GlobalNamespace::LineRendererUpdateTarget::__cordl_internal_set_lineRenderer(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LineRendererUpdateTarget::__cordl_internal_get_targetTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LineRendererUpdateTarget::__cordl_internal_get_targetTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetTransform;
}
constexpr void GlobalNamespace::LineRendererUpdateTarget::__cordl_internal_set_targetTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetTransform = value;
}
inline void GlobalNamespace::LineRendererUpdateTarget::PostTick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LineRendererUpdateTarget*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LineRendererUpdateTarget::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LineRendererUpdateTarget*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LineRendererUpdateTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LineRendererUpdateTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LineRendererUpdateTarget* GlobalNamespace::LineRendererUpdateTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LineRendererUpdateTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LineRendererUpdateTarget::LineRendererUpdateTarget()   {
}
