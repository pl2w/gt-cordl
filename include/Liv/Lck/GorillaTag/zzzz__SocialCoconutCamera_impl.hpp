#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/SocialCoconutCamera.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__SocialCoconutCamera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::SocialCoconutCamera.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::SocialCoconutCamera::*)()>(&::Liv::Lck::GorillaTag::SocialCoconutCamera::Awake)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5cd2c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::SocialCoconutCamera*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::SocialCoconutCamera.SetVisualsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::SocialCoconutCamera::*)(bool)>(&::Liv::Lck::GorillaTag::SocialCoconutCamera::SetVisualsActive)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cd2cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::SocialCoconutCamera*>(),
                        {"SetVisualsActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::SocialCoconutCamera.SetRecordingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::SocialCoconutCamera::*)(bool)>(&::Liv::Lck::GorillaTag::SocialCoconutCamera::SetRecordingState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5cd2cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::SocialCoconutCamera*>(),
                        {"SetRecordingState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::SocialCoconutCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::SocialCoconutCamera::*)()>(&::Liv::Lck::GorillaTag::SocialCoconutCamera::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cd2d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::SocialCoconutCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::GorillaTag::SocialCoconutCamera::__cordl_internal_get__visuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visuals;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::GorillaTag::SocialCoconutCamera::__cordl_internal_get__visuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visuals;
}
constexpr void Liv::Lck::GorillaTag::SocialCoconutCamera::__cordl_internal_set__visuals(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visuals = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& Liv::Lck::GorillaTag::SocialCoconutCamera::__cordl_internal_get__bodyRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& Liv::Lck::GorillaTag::SocialCoconutCamera::__cordl_internal_get__bodyRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyRenderer;
}
constexpr void Liv::Lck::GorillaTag::SocialCoconutCamera::__cordl_internal_set__bodyRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bodyRenderer = value;
}
constexpr bool& Liv::Lck::GorillaTag::SocialCoconutCamera::__cordl_internal_get__isActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActive;
}
constexpr bool const& Liv::Lck::GorillaTag::SocialCoconutCamera::__cordl_internal_get__isActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActive;
}
constexpr void Liv::Lck::GorillaTag::SocialCoconutCamera::__cordl_internal_set__isActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isActive = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& Liv::Lck::GorillaTag::SocialCoconutCamera::__cordl_internal_get__propertyBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& Liv::Lck::GorillaTag::SocialCoconutCamera::__cordl_internal_get__propertyBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propertyBlock;
}
constexpr void Liv::Lck::GorillaTag::SocialCoconutCamera::__cordl_internal_set__propertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____propertyBlock = value;
}
constexpr ::StringW& Liv::Lck::GorillaTag::SocialCoconutCamera::__cordl_internal_get_IS_RECORDING()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IS_RECORDING;
}
constexpr ::StringW const& Liv::Lck::GorillaTag::SocialCoconutCamera::__cordl_internal_get_IS_RECORDING() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IS_RECORDING;
}
constexpr void Liv::Lck::GorillaTag::SocialCoconutCamera::__cordl_internal_set_IS_RECORDING(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IS_RECORDING = value;
}
inline void Liv::Lck::GorillaTag::SocialCoconutCamera::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::SocialCoconutCamera*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::SocialCoconutCamera::SetVisualsActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::SocialCoconutCamera*>(),
                        {"SetVisualsActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void Liv::Lck::GorillaTag::SocialCoconutCamera::SetRecordingState(bool  isRecording)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::SocialCoconutCamera*>(),
                        {"SetRecordingState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isRecording);
}
inline void Liv::Lck::GorillaTag::SocialCoconutCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::SocialCoconutCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::SocialCoconutCamera* Liv::Lck::GorillaTag::SocialCoconutCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::SocialCoconutCamera*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::SocialCoconutCamera::SocialCoconutCamera()   {
}
