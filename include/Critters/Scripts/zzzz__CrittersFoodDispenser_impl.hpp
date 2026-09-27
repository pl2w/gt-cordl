#pragma once
// IWYU pragma private; include "Critters/Scripts/CrittersFoodDispenser.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_impl.hpp"
#include "Critters/Scripts/zzzz__CrittersFoodDispenser_def.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Critters::Scripts::CrittersFoodDispenser.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Critters::Scripts::CrittersFoodDispenser::*)()>(&::Critters::Scripts::CrittersFoodDispenser::Initialize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ddd91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Critters::Scripts::CrittersFoodDispenser*>(),
                    {::i2c::class_of<::Critters::Scripts::CrittersFoodDispenser*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Critters::Scripts::CrittersFoodDispenser.GrabbedBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Critters::Scripts::CrittersFoodDispenser::*)(::GlobalNamespace::CrittersActor*, bool, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, bool)>(&::Critters::Scripts::CrittersFoodDispenser::GrabbedBy)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ddd938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Critters::Scripts::CrittersFoodDispenser*>(),
                    {::i2c::class_of<::Critters::Scripts::CrittersFoodDispenser*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Critters::Scripts::CrittersFoodDispenser.RemoteGrabbedBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Critters::Scripts::CrittersFoodDispenser::*)(::GlobalNamespace::CrittersActor*)>(&::Critters::Scripts::CrittersFoodDispenser::RemoteGrabbedBy)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ddd96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Critters::Scripts::CrittersFoodDispenser*>(),
                    {::i2c::class_of<::Critters::Scripts::CrittersFoodDispenser*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Critters::Scripts::CrittersFoodDispenser.Released
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Critters::Scripts::CrittersFoodDispenser::*)(bool, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Critters::Scripts::CrittersFoodDispenser::Released)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddd9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Critters::Scripts::CrittersFoodDispenser*>(),
                    {::i2c::class_of<::Critters::Scripts::CrittersFoodDispenser*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Critters::Scripts::CrittersFoodDispenser.HandleRemoteReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Critters::Scripts::CrittersFoodDispenser::*)()>(&::Critters::Scripts::CrittersFoodDispenser::HandleRemoteReleased)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ddd9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Critters::Scripts::CrittersFoodDispenser*>(),
                    {::i2c::class_of<::Critters::Scripts::CrittersFoodDispenser*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Critters::Scripts::CrittersFoodDispenser._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Critters::Scripts::CrittersFoodDispenser::*)()>(&::Critters::Scripts::CrittersFoodDispenser::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ddda00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersFoodDispenser*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Critters::Scripts::CrittersFoodDispenser::__cordl_internal_get_heldByPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldByPlayer;
}
constexpr bool const& Critters::Scripts::CrittersFoodDispenser::__cordl_internal_get_heldByPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldByPlayer;
}
constexpr void Critters::Scripts::CrittersFoodDispenser::__cordl_internal_set_heldByPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldByPlayer = value;
}
inline void Critters::Scripts::CrittersFoodDispenser::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Critters::Scripts::CrittersFoodDispenser*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Critters::Scripts::CrittersFoodDispenser::GrabbedBy(::GlobalNamespace::CrittersActor*  grabbingActor, bool  positionOverride, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Vector3  localOffset, bool  disableGrabbing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Critters::Scripts::CrittersFoodDispenser*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbingActor, positionOverride, localRotation, localOffset, disableGrabbing);
}
inline void Critters::Scripts::CrittersFoodDispenser::RemoteGrabbedBy(::GlobalNamespace::CrittersActor*  grabbingActor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Critters::Scripts::CrittersFoodDispenser*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbingActor);
}
inline void Critters::Scripts::CrittersFoodDispenser::Released(bool  keepWorldPosition, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  impulseVelocity, ::UnityEngine::Vector3  impulseAngularVelocity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Critters::Scripts::CrittersFoodDispenser*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keepWorldPosition, rotation, position, impulseVelocity, impulseAngularVelocity);
}
inline void Critters::Scripts::CrittersFoodDispenser::HandleRemoteReleased()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Critters::Scripts::CrittersFoodDispenser*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Critters::Scripts::CrittersFoodDispenser::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersFoodDispenser*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Critters::Scripts::CrittersFoodDispenser* Critters::Scripts::CrittersFoodDispenser::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Critters::Scripts::CrittersFoodDispenser*>());
}
// Ctor Parameters []
constexpr ::Critters::Scripts::CrittersFoodDispenser::CrittersFoodDispenser()   {
}
