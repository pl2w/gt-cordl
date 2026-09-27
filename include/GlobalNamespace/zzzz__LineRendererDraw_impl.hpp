#pragma once
// IWYU pragma private; include "GlobalNamespace/LineRendererDraw.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__LineRendererDraw_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LineRendererDraw.SetUpLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LineRendererDraw::*)(::ArrayW<::UnityEngine::Transform*>)>(&::GlobalNamespace::LineRendererDraw::SetUpLine)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x56d1b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LineRendererDraw*>(),
                        {"SetUpLine", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LineRendererDraw.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LineRendererDraw::*)()>(&::GlobalNamespace::LineRendererDraw::LateUpdate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x56d1bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LineRendererDraw*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LineRendererDraw.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LineRendererDraw::*)(bool)>(&::GlobalNamespace::LineRendererDraw::Enable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56d1c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LineRendererDraw*>(),
                        {"Enable", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LineRendererDraw._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LineRendererDraw::*)()>(&::GlobalNamespace::LineRendererDraw::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d1c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LineRendererDraw*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::LineRenderer>& GlobalNamespace::LineRendererDraw::__cordl_internal_get_lr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lr;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& GlobalNamespace::LineRendererDraw::__cordl_internal_get_lr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lr;
}
constexpr void GlobalNamespace::LineRendererDraw::__cordl_internal_set_lr(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lr = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::LineRendererDraw::__cordl_internal_get_points()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___points;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::LineRendererDraw::__cordl_internal_get_points() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___points;
}
constexpr void GlobalNamespace::LineRendererDraw::__cordl_internal_set_points(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___points = value;
}
inline void GlobalNamespace::LineRendererDraw::SetUpLine(::ArrayW<::UnityEngine::Transform*>  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LineRendererDraw*>(),
                        {"SetUpLine", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points);
}
inline void GlobalNamespace::LineRendererDraw::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LineRendererDraw*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LineRendererDraw::Enable(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LineRendererDraw*>(),
                        {"Enable", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline void GlobalNamespace::LineRendererDraw::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LineRendererDraw*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LineRendererDraw* GlobalNamespace::LineRendererDraw::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LineRendererDraw*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LineRendererDraw::LineRendererDraw()   {
}
