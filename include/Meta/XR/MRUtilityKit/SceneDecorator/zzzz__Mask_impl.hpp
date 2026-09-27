#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/Mask.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Candidate_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::Mask.SampleMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::MRUtilityKit::SceneDecorator::Mask::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::Mask::SampleMask)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Mask*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Mask*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::Mask.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::SceneDecorator::Mask::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::Mask::Check)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Mask*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Mask*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::Mask.SampleMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::MRUtilityKit::SceneDecorator::Mask::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate, float_t, float_t)>(&::Meta::XR::MRUtilityKit::SceneDecorator::Mask::SampleMask)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9f51d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Mask*>(),
                        {"SampleMask", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::Candidate>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::Mask.SampleMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::MRUtilityKit::SceneDecorator::Mask::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate, float_t, float_t, float_t, float_t)>(&::Meta::XR::MRUtilityKit::SceneDecorator::Mask::SampleMask)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9f51468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Mask*>(),
                        {"SampleMask", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::Candidate>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::Mask._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::Mask::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::Mask::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f509bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Mask*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t Meta::XR::MRUtilityKit::SceneDecorator::Mask::SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  candidate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Mask*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, candidate);
}
inline bool Meta::XR::MRUtilityKit::SceneDecorator::Mask::Check(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Mask*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline float_t Meta::XR::MRUtilityKit::SceneDecorator::Mask::SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  candidate, float_t  scale, float_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Mask*>(),
                        {"SampleMask", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::Candidate>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, candidate, scale, offset);
}
inline float_t Meta::XR::MRUtilityKit::SceneDecorator::Mask::SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  candidate, float_t  limitMin, float_t  limitMax, float_t  scale, float_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Mask*>(),
                        {"SampleMask", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::Candidate>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, candidate, limitMin, limitMax, scale, offset);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::Mask::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Mask*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::Mask* Meta::XR::MRUtilityKit::SceneDecorator::Mask::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::Mask*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Mask::Mask()   {
}
