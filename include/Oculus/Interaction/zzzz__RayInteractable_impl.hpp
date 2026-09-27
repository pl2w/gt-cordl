#pragma once
// IWYU pragma private; include "Oculus/Interaction/RayInteractable.hpp"
#include "Oculus/Interaction/zzzz__PointerInteractable_2_impl.hpp"
#include "Oculus/Interaction/zzzz__RayInteractable_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__ISurface_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__SurfaceHit_def.hpp"
#include "Oculus/Interaction/zzzz__IMovementProvider_def.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
#include "Oculus/Interaction/zzzz__RayInteractor_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::RayInteractable.get_Surface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Surfaces::ISurface* (::Oculus::Interaction::RayInteractable::*)()>(&::Oculus::Interaction::RayInteractable::get_Surface)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45b5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"get_Surface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractable.set_Surface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractable::*)(::Oculus::Interaction::Surfaces::ISurface*)>(&::Oculus::Interaction::RayInteractable::set_Surface)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45b5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"set_Surface", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractable.get_MovementProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IMovementProvider* (::Oculus::Interaction::RayInteractable::*)()>(&::Oculus::Interaction::RayInteractable::get_MovementProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45b5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"get_MovementProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractable.set_MovementProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractable::*)(::Oculus::Interaction::IMovementProvider*)>(&::Oculus::Interaction::RayInteractable::set_MovementProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45b5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"set_MovementProvider", {}, {::i2c::type_of<::Oculus::Interaction::IMovementProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractable.get_TiebreakerScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::RayInteractable::*)()>(&::Oculus::Interaction::RayInteractable::get_TiebreakerScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45b5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"get_TiebreakerScore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractable.set_TiebreakerScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractable::*)(int32_t)>(&::Oculus::Interaction::RayInteractable::set_TiebreakerScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45b5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"set_TiebreakerScore", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractable::*)()>(&::Oculus::Interaction::RayInteractable::Awake)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa45b5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::RayInteractable*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractable.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractable::*)()>(&::Oculus::Interaction::RayInteractable::Start)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa45b6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::RayInteractable*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractable.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::RayInteractable::*)(::UnityEngine::Ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, ::by_ref<float_t>, bool)>(&::Oculus::Interaction::RayInteractable::Raycast)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa45b858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractable.GenerateMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IMovement* (::Oculus::Interaction::RayInteractable::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::RayInteractable::GenerateMovement)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa45b944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"GenerateMovement", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractable.InjectAllRayInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractable::*)(::Oculus::Interaction::Surfaces::ISurface*)>(&::Oculus::Interaction::RayInteractable::InjectAllRayInteractable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa45bb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"InjectAllRayInteractable", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractable.InjectSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractable::*)(::Oculus::Interaction::Surfaces::ISurface*)>(&::Oculus::Interaction::RayInteractable::InjectSurface)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa45bb2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"InjectSurface", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractable.InjectOptionalSelectSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractable::*)(::Oculus::Interaction::Surfaces::ISurface*)>(&::Oculus::Interaction::RayInteractable::InjectOptionalSelectSurface)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa45bbf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"InjectOptionalSelectSurface", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractable.InjectOptionalMovementProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractable::*)(::Oculus::Interaction::IMovementProvider*)>(&::Oculus::Interaction::RayInteractable::InjectOptionalMovementProvider)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa45bcc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"InjectOptionalMovementProvider", {}, {::i2c::type_of<::Oculus::Interaction::IMovementProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractable::*)()>(&::Oculus::Interaction::RayInteractable::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa45bd94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractable._Start_b__17_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractable::*)()>(&::Oculus::Interaction::RayInteractable::_Start_b__17_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa45bddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"<Start>b__17_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::RayInteractable::__cordl_internal_get__surface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____surface;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::RayInteractable::__cordl_internal_get__surface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____surface;
}
constexpr void Oculus::Interaction::RayInteractable::__cordl_internal_set__surface(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____surface = value;
}
constexpr ::Oculus::Interaction::Surfaces::ISurface*& Oculus::Interaction::RayInteractable::__cordl_internal_get__Surface_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Surface_k__BackingField;
}
constexpr ::Oculus::Interaction::Surfaces::ISurface* const& Oculus::Interaction::RayInteractable::__cordl_internal_get__Surface_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Surface_k__BackingField;
}
constexpr void Oculus::Interaction::RayInteractable::__cordl_internal_set__Surface_k__BackingField(::Oculus::Interaction::Surfaces::ISurface*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Surface_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::RayInteractable::__cordl_internal_get__selectSurface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectSurface;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::RayInteractable::__cordl_internal_get__selectSurface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectSurface;
}
constexpr void Oculus::Interaction::RayInteractable::__cordl_internal_set__selectSurface(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectSurface = value;
}
constexpr ::Oculus::Interaction::Surfaces::ISurface*& Oculus::Interaction::RayInteractable::__cordl_internal_get_SelectSurface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectSurface;
}
constexpr ::Oculus::Interaction::Surfaces::ISurface* const& Oculus::Interaction::RayInteractable::__cordl_internal_get_SelectSurface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectSurface;
}
constexpr void Oculus::Interaction::RayInteractable::__cordl_internal_set_SelectSurface(::Oculus::Interaction::Surfaces::ISurface*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SelectSurface = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::RayInteractable::__cordl_internal_get__movementProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movementProvider;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::RayInteractable::__cordl_internal_get__movementProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movementProvider;
}
constexpr void Oculus::Interaction::RayInteractable::__cordl_internal_set__movementProvider(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____movementProvider = value;
}
constexpr ::Oculus::Interaction::IMovementProvider*& Oculus::Interaction::RayInteractable::__cordl_internal_get__MovementProvider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MovementProvider_k__BackingField;
}
constexpr ::Oculus::Interaction::IMovementProvider* const& Oculus::Interaction::RayInteractable::__cordl_internal_get__MovementProvider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MovementProvider_k__BackingField;
}
constexpr void Oculus::Interaction::RayInteractable::__cordl_internal_set__MovementProvider_k__BackingField(::Oculus::Interaction::IMovementProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MovementProvider_k__BackingField = value;
}
constexpr int32_t& Oculus::Interaction::RayInteractable::__cordl_internal_get__tiebreakerScore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tiebreakerScore;
}
constexpr int32_t const& Oculus::Interaction::RayInteractable::__cordl_internal_get__tiebreakerScore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tiebreakerScore;
}
constexpr void Oculus::Interaction::RayInteractable::__cordl_internal_set__tiebreakerScore(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tiebreakerScore = value;
}
inline ::Oculus::Interaction::Surfaces::ISurface* Oculus::Interaction::RayInteractable::get_Surface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"get_Surface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Surfaces::ISurface*>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractable::set_Surface(::Oculus::Interaction::Surfaces::ISurface*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"set_Surface", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::IMovementProvider* Oculus::Interaction::RayInteractable::get_MovementProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"get_MovementProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IMovementProvider*>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractable::set_MovementProvider(::Oculus::Interaction::IMovementProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"set_MovementProvider", {}, {::i2c::type_of<::Oculus::Interaction::IMovementProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Oculus::Interaction::RayInteractable::get_TiebreakerScore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"get_TiebreakerScore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractable::set_TiebreakerScore(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"set_TiebreakerScore", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::RayInteractable::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RayInteractable*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractable::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RayInteractable*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::RayInteractable::Raycast(::UnityEngine::Ray  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, /* [IsReadOnly] */ ::by_ref<float_t>  maxDistance, bool  selectSurface)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, hit, maxDistance, selectSurface);
}
inline ::Oculus::Interaction::IMovement* Oculus::Interaction::RayInteractable::GenerateMovement(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"GenerateMovement", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IMovement*>(this, ___internal_method, to, source);
}
inline void Oculus::Interaction::RayInteractable::InjectAllRayInteractable(::Oculus::Interaction::Surfaces::ISurface*  surface)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"InjectAllRayInteractable", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, surface);
}
inline void Oculus::Interaction::RayInteractable::InjectSurface(::Oculus::Interaction::Surfaces::ISurface*  surface)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"InjectSurface", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, surface);
}
inline void Oculus::Interaction::RayInteractable::InjectOptionalSelectSurface(::Oculus::Interaction::Surfaces::ISurface*  surface)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"InjectOptionalSelectSurface", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, surface);
}
inline void Oculus::Interaction::RayInteractable::InjectOptionalMovementProvider(::Oculus::Interaction::IMovementProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"InjectOptionalMovementProvider", {}, {::i2c::type_of<::Oculus::Interaction::IMovementProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider);
}
inline void Oculus::Interaction::RayInteractable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractable::_Start_b__17_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractable*>(),
                        {"<Start>b__17_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::RayInteractable* Oculus::Interaction::RayInteractable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::RayInteractable*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::RayInteractable::RayInteractable()   {
}
