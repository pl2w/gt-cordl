#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/EnableTargetOnStart.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__EnableTargetOnStart_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::EnableTargetOnStart.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::EnableTargetOnStart::*)()>(&::Oculus::Interaction::Samples::EnableTargetOnStart::Start)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa43744c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::EnableTargetOnStart*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::EnableTargetOnStart._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::EnableTargetOnStart::*)()>(&::Oculus::Interaction::Samples::EnableTargetOnStart::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa437504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::EnableTargetOnStart*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>& Oculus::Interaction::Samples::EnableTargetOnStart::__cordl_internal_get__components()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____components;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>> const& Oculus::Interaction::Samples::EnableTargetOnStart::__cordl_internal_get__components() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____components;
}
constexpr void Oculus::Interaction::Samples::EnableTargetOnStart::__cordl_internal_set__components(::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____components = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& Oculus::Interaction::Samples::EnableTargetOnStart::__cordl_internal_get__gameObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& Oculus::Interaction::Samples::EnableTargetOnStart::__cordl_internal_get__gameObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameObjects;
}
constexpr void Oculus::Interaction::Samples::EnableTargetOnStart::__cordl_internal_set__gameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gameObjects = value;
}
inline void Oculus::Interaction::Samples::EnableTargetOnStart::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::EnableTargetOnStart*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::EnableTargetOnStart::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::EnableTargetOnStart*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::EnableTargetOnStart* Oculus::Interaction::Samples::EnableTargetOnStart::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::EnableTargetOnStart*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::EnableTargetOnStart::EnableTargetOnStart()   {
}
