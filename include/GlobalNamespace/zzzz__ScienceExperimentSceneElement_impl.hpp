#pragma once
// IWYU pragma private; include "GlobalNamespace/ScienceExperimentSceneElement.hpp"
#include "GlobalNamespace/zzzz__ScienceExperimentElementID_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ScienceExperimentSceneElement_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemPost_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScienceExperimentSceneElement.ITickSystemPost_get_PostTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ScienceExperimentSceneElement::*)()>(&::GlobalNamespace::ScienceExperimentSceneElement::ITickSystemPost_get_PostTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5983590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentSceneElement*>(),
                        {"ITickSystemPost.get_PostTickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScienceExperimentSceneElement.ITickSystemPost_set_PostTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScienceExperimentSceneElement::*)(bool)>(&::GlobalNamespace::ScienceExperimentSceneElement::ITickSystemPost_set_PostTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5983598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentSceneElement*>(),
                        {"ITickSystemPost.set_PostTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScienceExperimentSceneElement.ITickSystemPost_PostTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScienceExperimentSceneElement::*)()>(&::GlobalNamespace::ScienceExperimentSceneElement::ITickSystemPost_PostTick)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x59835a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentSceneElement*>(),
                        {"ITickSystemPost.PostTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScienceExperimentSceneElement.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScienceExperimentSceneElement::*)()>(&::GlobalNamespace::ScienceExperimentSceneElement::Start)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5983650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentSceneElement*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScienceExperimentSceneElement.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScienceExperimentSceneElement::*)()>(&::GlobalNamespace::ScienceExperimentSceneElement::OnDestroy)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5983710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentSceneElement*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScienceExperimentSceneElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScienceExperimentSceneElement::*)()>(&::GlobalNamespace::ScienceExperimentSceneElement::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598377c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentSceneElement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ScienceExperimentElementID& GlobalNamespace::ScienceExperimentSceneElement::__cordl_internal_get_elementID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementID;
}
constexpr ::GlobalNamespace::ScienceExperimentElementID const& GlobalNamespace::ScienceExperimentSceneElement::__cordl_internal_get_elementID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementID;
}
constexpr void GlobalNamespace::ScienceExperimentSceneElement::__cordl_internal_set_elementID(::GlobalNamespace::ScienceExperimentElementID  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementID = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ScienceExperimentSceneElement::__cordl_internal_get_followElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followElement;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ScienceExperimentSceneElement::__cordl_internal_get_followElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followElement;
}
constexpr void GlobalNamespace::ScienceExperimentSceneElement::__cordl_internal_set_followElement(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___followElement = value;
}
constexpr bool& GlobalNamespace::ScienceExperimentSceneElement::__cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemPost_PostTickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::ScienceExperimentSceneElement::__cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemPost_PostTickRunning_k__BackingField;
}
constexpr void GlobalNamespace::ScienceExperimentSceneElement::__cordl_internal_set__ITickSystemPost_PostTickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ITickSystemPost_PostTickRunning_k__BackingField = value;
}
inline bool GlobalNamespace::ScienceExperimentSceneElement::ITickSystemPost_get_PostTickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentSceneElement*>(),
                        {"ITickSystemPost.get_PostTickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ScienceExperimentSceneElement::ITickSystemPost_set_PostTickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentSceneElement*>(),
                        {"ITickSystemPost.set_PostTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ScienceExperimentSceneElement::ITickSystemPost_PostTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentSceneElement*>(),
                        {"ITickSystemPost.PostTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScienceExperimentSceneElement::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentSceneElement*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScienceExperimentSceneElement::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentSceneElement*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScienceExperimentSceneElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentSceneElement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ScienceExperimentSceneElement* GlobalNamespace::ScienceExperimentSceneElement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScienceExperimentSceneElement*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr  GlobalNamespace::ScienceExperimentSceneElement::operator ::GlobalNamespace::ITickSystemPost*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPost*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* GlobalNamespace::ScienceExperimentSceneElement::i___GlobalNamespace__ITickSystemPost() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPost*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScienceExperimentSceneElement::ScienceExperimentSceneElement()   {
}
