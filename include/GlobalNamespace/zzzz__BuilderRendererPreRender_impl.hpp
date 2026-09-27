#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderRendererPreRender.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourPostTick_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderRendererPreRender_def.hpp"
#include "GlobalNamespace/zzzz__BuilderRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderRendererPreRender.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRendererPreRender::*)()>(&::GlobalNamespace::BuilderRendererPreRender::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57b3f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRendererPreRender*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRendererPreRender.PostTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRendererPreRender::*)()>(&::GlobalNamespace::BuilderRendererPreRender::PostTick)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x57b3f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BuilderRendererPreRender*>(),
                    {::i2c::class_of<::GlobalNamespace::BuilderRendererPreRender*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRendererPreRender._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRendererPreRender::*)()>(&::GlobalNamespace::BuilderRendererPreRender::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b3f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRendererPreRender*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BuilderRenderer>& GlobalNamespace::BuilderRendererPreRender::__cordl_internal_get_builderRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builderRenderer;
}
constexpr ::UnityW<::GlobalNamespace::BuilderRenderer> const& GlobalNamespace::BuilderRendererPreRender::__cordl_internal_get_builderRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builderRenderer;
}
constexpr void GlobalNamespace::BuilderRendererPreRender::__cordl_internal_set_builderRenderer(::UnityW<::GlobalNamespace::BuilderRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___builderRenderer = value;
}
inline void GlobalNamespace::BuilderRendererPreRender::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRendererPreRender*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderRendererPreRender::PostTick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BuilderRendererPreRender*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderRendererPreRender::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRendererPreRender*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderRendererPreRender* GlobalNamespace::BuilderRendererPreRender::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderRendererPreRender*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderRendererPreRender::BuilderRendererPreRender()   {
}
