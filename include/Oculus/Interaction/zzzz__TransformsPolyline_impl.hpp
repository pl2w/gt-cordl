#pragma once
// IWYU pragma private; include "Oculus/Interaction/TransformsPolyline.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "Oculus/Interaction/zzzz__TransformsPolyline_def.hpp"
#include "Oculus/Interaction/zzzz__IPolyline_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::TransformsPolyline.get_PointsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::TransformsPolyline::*)()>(&::Oculus::Interaction::TransformsPolyline::get_PointsCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa47947c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformsPolyline*>(),
                        {"get_PointsCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformsPolyline.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TransformsPolyline::*)()>(&::Oculus::Interaction::TransformsPolyline::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa479494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::TransformsPolyline*>(),
                    {::i2c::class_of<::Oculus::Interaction::TransformsPolyline*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformsPolyline.PointAtIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::TransformsPolyline::*)(int32_t)>(&::Oculus::Interaction::TransformsPolyline::PointAtIndex)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4794c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformsPolyline*>(),
                        {"PointAtIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformsPolyline.InjectAllTransformsPolyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TransformsPolyline::*)(::ArrayW<::UnityEngine::Transform*>)>(&::Oculus::Interaction::TransformsPolyline::InjectAllTransformsPolyline)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4794f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformsPolyline*>(),
                        {"InjectAllTransformsPolyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformsPolyline.InjectTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TransformsPolyline::*)(::ArrayW<::UnityEngine::Transform*>)>(&::Oculus::Interaction::TransformsPolyline::InjectTransforms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa479500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformsPolyline*>(),
                        {"InjectTransforms", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformsPolyline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TransformsPolyline::*)()>(&::Oculus::Interaction::TransformsPolyline::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa479508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformsPolyline*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& Oculus::Interaction::TransformsPolyline::__cordl_internal_get__transforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& Oculus::Interaction::TransformsPolyline::__cordl_internal_get__transforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transforms;
}
constexpr void Oculus::Interaction::TransformsPolyline::__cordl_internal_set__transforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transforms = value;
}
constexpr bool& Oculus::Interaction::TransformsPolyline::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::TransformsPolyline::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::TransformsPolyline::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline int32_t Oculus::Interaction::TransformsPolyline::get_PointsCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformsPolyline*>(),
                        {"get_PointsCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::TransformsPolyline::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::TransformsPolyline*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::TransformsPolyline::PointAtIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformsPolyline*>(),
                        {"PointAtIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, index);
}
inline void Oculus::Interaction::TransformsPolyline::InjectAllTransformsPolyline(::ArrayW<::UnityEngine::Transform*>  transforms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformsPolyline*>(),
                        {"InjectAllTransformsPolyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transforms);
}
inline void Oculus::Interaction::TransformsPolyline::InjectTransforms(::ArrayW<::UnityEngine::Transform*>  transforms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformsPolyline*>(),
                        {"InjectTransforms", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transforms);
}
inline void Oculus::Interaction::TransformsPolyline::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformsPolyline*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::TransformsPolyline* Oculus::Interaction::TransformsPolyline::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::TransformsPolyline*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IPolyline"
constexpr  Oculus::Interaction::TransformsPolyline::operator ::Oculus::Interaction::IPolyline*() noexcept {
return static_cast<::Oculus::Interaction::IPolyline*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IPolyline"
constexpr ::Oculus::Interaction::IPolyline* Oculus::Interaction::TransformsPolyline::i___Oculus__Interaction__IPolyline() noexcept {
return static_cast<::Oculus::Interaction::IPolyline*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::TransformsPolyline::TransformsPolyline()   {
}
