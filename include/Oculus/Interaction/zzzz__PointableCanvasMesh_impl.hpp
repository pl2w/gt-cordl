#pragma once
// IWYU pragma private; include "Oculus/Interaction/PointableCanvasMesh.hpp"
#include "Oculus/Interaction/zzzz__PointableElement_impl.hpp"
#include "Oculus/Interaction/zzzz__PointableCanvasMesh_def.hpp"
#include "Oculus/Interaction/UnityCanvas/zzzz__CanvasMesh_def.hpp"
#include "Oculus/Interaction/zzzz__PointerEvent_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasMesh.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasMesh::*)()>(&::Oculus::Interaction::PointableCanvasMesh::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4850b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PointableCanvasMesh*>(),
                    {::i2c::class_of<::Oculus::Interaction::PointableCanvasMesh*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasMesh.ProcessPointerEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasMesh::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::PointableCanvasMesh::ProcessPointerEvent)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa4850c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PointableCanvasMesh*>(),
                    {::i2c::class_of<::Oculus::Interaction::PointableCanvasMesh*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasMesh.InjectAllCanvasMeshPointable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasMesh::*)(::Oculus::Interaction::UnityCanvas::CanvasMesh*)>(&::Oculus::Interaction::PointableCanvasMesh::InjectAllCanvasMeshPointable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48520c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasMesh*>(),
                        {"InjectAllCanvasMeshPointable", {}, {::i2c::type_of<::Oculus::Interaction::UnityCanvas::CanvasMesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasMesh.InjectCanvasMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasMesh::*)(::Oculus::Interaction::UnityCanvas::CanvasMesh*)>(&::Oculus::Interaction::PointableCanvasMesh::InjectCanvasMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa485214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasMesh*>(),
                        {"InjectCanvasMesh", {}, {::i2c::type_of<::Oculus::Interaction::UnityCanvas::CanvasMesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableCanvasMesh._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableCanvasMesh::*)()>(&::Oculus::Interaction::PointableCanvasMesh::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48521c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasMesh*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasMesh>& Oculus::Interaction::PointableCanvasMesh::__cordl_internal_get__canvasMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvasMesh;
}
constexpr ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasMesh> const& Oculus::Interaction::PointableCanvasMesh::__cordl_internal_get__canvasMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvasMesh;
}
constexpr void Oculus::Interaction::PointableCanvasMesh::__cordl_internal_set__canvasMesh(::UnityW<::Oculus::Interaction::UnityCanvas::CanvasMesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canvasMesh = value;
}
inline void Oculus::Interaction::PointableCanvasMesh::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointableCanvasMesh*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableCanvasMesh::ProcessPointerEvent(::Oculus::Interaction::PointerEvent  evt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointableCanvasMesh*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Oculus::Interaction::PointableCanvasMesh::InjectAllCanvasMeshPointable(::Oculus::Interaction::UnityCanvas::CanvasMesh*  canvasMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasMesh*>(),
                        {"InjectAllCanvasMeshPointable", {}, {::i2c::type_of<::Oculus::Interaction::UnityCanvas::CanvasMesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, canvasMesh);
}
inline void Oculus::Interaction::PointableCanvasMesh::InjectCanvasMesh(::Oculus::Interaction::UnityCanvas::CanvasMesh*  canvasMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasMesh*>(),
                        {"InjectCanvasMesh", {}, {::i2c::type_of<::Oculus::Interaction::UnityCanvas::CanvasMesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, canvasMesh);
}
inline void Oculus::Interaction::PointableCanvasMesh::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableCanvasMesh*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PointableCanvasMesh* Oculus::Interaction::PointableCanvasMesh::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PointableCanvasMesh*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PointableCanvasMesh::PointableCanvasMesh()   {
}
