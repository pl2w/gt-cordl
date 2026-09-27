#pragma once
// IWYU pragma private; include "GlobalNamespace/XfToXfLine.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__XfToXfLine_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XfToXfLine.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XfToXfLine::*)()>(&::GlobalNamespace::XfToXfLine::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5962310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XfToXfLine*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XfToXfLine.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XfToXfLine::*)()>(&::GlobalNamespace::XfToXfLine::Update)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5962368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XfToXfLine*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XfToXfLine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XfToXfLine::*)()>(&::GlobalNamespace::XfToXfLine::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59623e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XfToXfLine*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::XfToXfLine::__cordl_internal_get_pt0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pt0;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::XfToXfLine::__cordl_internal_get_pt0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pt0;
}
constexpr void GlobalNamespace::XfToXfLine::__cordl_internal_set_pt0(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pt0 = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::XfToXfLine::__cordl_internal_get_pt1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pt1;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::XfToXfLine::__cordl_internal_get_pt1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pt1;
}
constexpr void GlobalNamespace::XfToXfLine::__cordl_internal_set_pt1(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pt1 = value;
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& GlobalNamespace::XfToXfLine::__cordl_internal_get_lineRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineRenderer;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& GlobalNamespace::XfToXfLine::__cordl_internal_get_lineRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineRenderer;
}
constexpr void GlobalNamespace::XfToXfLine::__cordl_internal_set_lineRenderer(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineRenderer = value;
}
inline void GlobalNamespace::XfToXfLine::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XfToXfLine*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::XfToXfLine::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XfToXfLine*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::XfToXfLine::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XfToXfLine*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::XfToXfLine* GlobalNamespace::XfToXfLine::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::XfToXfLine*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XfToXfLine::XfToXfLine()   {
}
