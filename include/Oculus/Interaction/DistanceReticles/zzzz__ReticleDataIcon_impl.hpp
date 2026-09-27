#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceReticles/ReticleDataIcon.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/DistanceReticles/zzzz__ReticleDataIcon_def.hpp"
#include "Oculus/Interaction/DistanceReticles/zzzz__IReticleData_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleDataIcon.get_CustomIcon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::Oculus::Interaction::DistanceReticles::ReticleDataIcon::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleDataIcon::get_CustomIcon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f0734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataIcon*>(),
                        {"get_CustomIcon", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleDataIcon.set_CustomIcon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleDataIcon::*)(::UnityEngine::Texture*)>(&::Oculus::Interaction::DistanceReticles::ReticleDataIcon::set_CustomIcon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f073c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataIcon*>(),
                        {"set_CustomIcon", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleDataIcon.get_Snappiness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::DistanceReticles::ReticleDataIcon::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleDataIcon::get_Snappiness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f0744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataIcon*>(),
                        {"get_Snappiness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleDataIcon.set_Snappiness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleDataIcon::*)(float_t)>(&::Oculus::Interaction::DistanceReticles::ReticleDataIcon::set_Snappiness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f074c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataIcon*>(),
                        {"set_Snappiness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleDataIcon.GetTargetSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::DistanceReticles::ReticleDataIcon::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleDataIcon::GetTargetSize)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa4f0754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataIcon*>(),
                        {"GetTargetSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleDataIcon.ProcessHitPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::DistanceReticles::ReticleDataIcon::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::DistanceReticles::ReticleDataIcon::ProcessHitPoint)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa4f080c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataIcon*>(),
                        {"ProcessHitPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleDataIcon.InjectOptionalRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleDataIcon::*)(::UnityEngine::MeshRenderer*)>(&::Oculus::Interaction::DistanceReticles::ReticleDataIcon::InjectOptionalRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f0890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataIcon*>(),
                        {"InjectOptionalRenderer", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleDataIcon._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleDataIcon::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleDataIcon::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f0898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataIcon*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshRenderer>& Oculus::Interaction::DistanceReticles::ReticleDataIcon::__cordl_internal_get__renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& Oculus::Interaction::DistanceReticles::ReticleDataIcon::__cordl_internal_get__renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr void Oculus::Interaction::DistanceReticles::ReticleDataIcon::__cordl_internal_set__renderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderer = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& Oculus::Interaction::DistanceReticles::ReticleDataIcon::__cordl_internal_get__customIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customIcon;
}
constexpr ::UnityW<::UnityEngine::Texture> const& Oculus::Interaction::DistanceReticles::ReticleDataIcon::__cordl_internal_get__customIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customIcon;
}
constexpr void Oculus::Interaction::DistanceReticles::ReticleDataIcon::__cordl_internal_set__customIcon(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customIcon = value;
}
constexpr float_t& Oculus::Interaction::DistanceReticles::ReticleDataIcon::__cordl_internal_get__snappiness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snappiness;
}
constexpr float_t const& Oculus::Interaction::DistanceReticles::ReticleDataIcon::__cordl_internal_get__snappiness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snappiness;
}
constexpr void Oculus::Interaction::DistanceReticles::ReticleDataIcon::__cordl_internal_set__snappiness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snappiness = value;
}
inline ::UnityW<::UnityEngine::Texture> Oculus::Interaction::DistanceReticles::ReticleDataIcon::get_CustomIcon()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataIcon*>(),
                        {"get_CustomIcon", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::ReticleDataIcon::set_CustomIcon(::UnityEngine::Texture*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataIcon*>(),
                        {"set_CustomIcon", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::DistanceReticles::ReticleDataIcon::get_Snappiness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataIcon*>(),
                        {"get_Snappiness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::ReticleDataIcon::set_Snappiness(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataIcon*>(),
                        {"set_Snappiness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::DistanceReticles::ReticleDataIcon::GetTargetSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataIcon*>(),
                        {"GetTargetSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::DistanceReticles::ReticleDataIcon::ProcessHitPoint(::UnityEngine::Vector3  hitPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataIcon*>(),
                        {"ProcessHitPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, hitPoint);
}
inline void Oculus::Interaction::DistanceReticles::ReticleDataIcon::InjectOptionalRenderer(::UnityEngine::MeshRenderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataIcon*>(),
                        {"InjectOptionalRenderer", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer);
}
inline void Oculus::Interaction::DistanceReticles::ReticleDataIcon::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataIcon*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::DistanceReticles::ReticleDataIcon* Oculus::Interaction::DistanceReticles::ReticleDataIcon::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DistanceReticles::ReticleDataIcon*>());
}
/// @brief Convert operator to "::Oculus::Interaction::DistanceReticles::IReticleData"
constexpr  Oculus::Interaction::DistanceReticles::ReticleDataIcon::operator ::Oculus::Interaction::DistanceReticles::IReticleData*() noexcept {
return static_cast<::Oculus::Interaction::DistanceReticles::IReticleData*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::DistanceReticles::IReticleData"
constexpr ::Oculus::Interaction::DistanceReticles::IReticleData* Oculus::Interaction::DistanceReticles::ReticleDataIcon::i___Oculus__Interaction__DistanceReticles__IReticleData() noexcept {
return static_cast<::Oculus::Interaction::DistanceReticles::IReticleData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::DistanceReticles::ReticleDataIcon::ReticleDataIcon()   {
}
