#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersGrabber.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersGrabber_def.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersGrabber.ProcessRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersGrabber::*)()>(&::GlobalNamespace::CrittersGrabber::ProcessRemote)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x55ff1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersGrabber*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersGrabber*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersGrabber.ProcessLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersGrabber::*)()>(&::GlobalNamespace::CrittersGrabber::ProcessLocal)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x55ff240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersGrabber*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersGrabber*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersGrabber._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersGrabber::*)()>(&::GlobalNamespace::CrittersGrabber::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x55ff2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersGrabber*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CrittersGrabber::__cordl_internal_get_grabPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CrittersGrabber::__cordl_internal_get_grabPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPosition;
}
constexpr void GlobalNamespace::CrittersGrabber::__cordl_internal_set_grabPosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabPosition = value;
}
constexpr bool& GlobalNamespace::CrittersGrabber::__cordl_internal_get_grabbing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbing;
}
constexpr bool const& GlobalNamespace::CrittersGrabber::__cordl_internal_get_grabbing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbing;
}
constexpr void GlobalNamespace::CrittersGrabber::__cordl_internal_set_grabbing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabbing = value;
}
constexpr float_t& GlobalNamespace::CrittersGrabber::__cordl_internal_get_grabDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabDistance;
}
constexpr float_t const& GlobalNamespace::CrittersGrabber::__cordl_internal_get_grabDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabDistance;
}
constexpr void GlobalNamespace::CrittersGrabber::__cordl_internal_set_grabDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabDistance = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*& GlobalNamespace::CrittersGrabber::__cordl_internal_get_grabbedActors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedActors;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>* const& GlobalNamespace::CrittersGrabber::__cordl_internal_get_grabbedActors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedActors;
}
constexpr void GlobalNamespace::CrittersGrabber::__cordl_internal_set_grabbedActors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabbedActors = value;
}
constexpr bool& GlobalNamespace::CrittersGrabber::__cordl_internal_get_isLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeft;
}
constexpr bool const& GlobalNamespace::CrittersGrabber::__cordl_internal_get_isLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeft;
}
constexpr void GlobalNamespace::CrittersGrabber::__cordl_internal_set_isLeft(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLeft = value;
}
inline void GlobalNamespace::CrittersGrabber::ProcessRemote()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersGrabber*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CrittersGrabber::ProcessLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersGrabber*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersGrabber::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersGrabber*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersGrabber* GlobalNamespace::CrittersGrabber::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersGrabber*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersGrabber::CrittersGrabber()   {
}
