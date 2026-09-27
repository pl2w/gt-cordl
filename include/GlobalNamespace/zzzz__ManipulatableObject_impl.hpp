#pragma once
// IWYU pragma private; include "GlobalNamespace/ManipulatableObject.hpp"
#include "GlobalNamespace/zzzz__HoldableObject_impl.hpp"
#include "GlobalNamespace/zzzz__ManipulatableObject_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ManipulatableObject.OnStartManipulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableObject::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::ManipulatableObject::OnStartManipulation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x575cae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableObject.OnStopManipulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableObject::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3)>(&::GlobalNamespace::ManipulatableObject::OnStopManipulation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x575caec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableObject.ShouldHandDetach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ManipulatableObject::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::ManipulatableObject::ShouldHandDetach)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x575caf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableObject.OnHeldUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableObject::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::ManipulatableObject::OnHeldUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x575caf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableObject.OnReleasedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableObject::*)()>(&::GlobalNamespace::ManipulatableObject::OnReleasedUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x575cafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableObject.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableObject::*)()>(&::GlobalNamespace::ManipulatableObject::LateUpdate)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x575cb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableObject.OnHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableObject::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::ManipulatableObject::OnHover)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x575cc04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableObject.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableObject::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::ManipulatableObject::OnGrab)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x575cc08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableObject.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ManipulatableObject::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::ManipulatableObject::OnRelease)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x575cd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableObject.DropItemCleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableObject::*)()>(&::GlobalNamespace::ManipulatableObject::DropItemCleanup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x575ced8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableObject::*)()>(&::GlobalNamespace::ManipulatableObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x575cad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::ManipulatableObject::__cordl_internal_get_isHeld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHeld;
}
constexpr bool const& GlobalNamespace::ManipulatableObject::__cordl_internal_get_isHeld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHeld;
}
constexpr void GlobalNamespace::ManipulatableObject::__cordl_internal_set_isHeld(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHeld = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ManipulatableObject::__cordl_internal_get_holdingHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdingHand;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ManipulatableObject::__cordl_internal_get_holdingHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdingHand;
}
constexpr void GlobalNamespace::ManipulatableObject::__cordl_internal_set_holdingHand(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holdingHand = value;
}
inline void GlobalNamespace::ManipulatableObject::OnStartManipulation(::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbingHand);
}
inline void GlobalNamespace::ManipulatableObject::OnStopManipulation(::UnityEngine::GameObject*  releasingHand, ::UnityEngine::Vector3  releaseVelocity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, releasingHand, releaseVelocity);
}
inline bool GlobalNamespace::ManipulatableObject::ShouldHandDetach(::UnityEngine::GameObject*  hand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hand);
}
inline void GlobalNamespace::ManipulatableObject::OnHeldUpdate(::UnityEngine::GameObject*  hand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void GlobalNamespace::ManipulatableObject::OnReleasedUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ManipulatableObject::LateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ManipulatableObject::OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointHovered, hoveringHand);
}
inline void GlobalNamespace::ManipulatableObject::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline bool GlobalNamespace::ManipulatableObject::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GlobalNamespace::ManipulatableObject::DropItemCleanup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ManipulatableObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ManipulatableObject* GlobalNamespace::ManipulatableObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ManipulatableObject*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ManipulatableObject::ManipulatableObject()   {
}
