#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHuntGrabbableProp.hpp"
#include "GlobalNamespace/zzzz__HoldableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PropHuntGrabbableProp_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__PropHuntHandFollower_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PropHuntGrabbableProp.OnHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntGrabbableProp::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::PropHuntGrabbableProp::OnHover)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5637ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PropHuntGrabbableProp*>(),
                    {::i2c::class_of<::GlobalNamespace::PropHuntGrabbableProp*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntGrabbableProp.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntGrabbableProp::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::PropHuntGrabbableProp::OnGrab)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5637ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PropHuntGrabbableProp*>(),
                    {::i2c::class_of<::GlobalNamespace::PropHuntGrabbableProp*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntGrabbableProp.DropItemCleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntGrabbableProp::*)()>(&::GlobalNamespace::PropHuntGrabbableProp::DropItemCleanup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56380ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PropHuntGrabbableProp*>(),
                    {::i2c::class_of<::GlobalNamespace::PropHuntGrabbableProp*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntGrabbableProp.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PropHuntGrabbableProp::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::PropHuntGrabbableProp::OnRelease)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x56380f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PropHuntGrabbableProp*>(),
                    {::i2c::class_of<::GlobalNamespace::PropHuntGrabbableProp*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntGrabbableProp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntGrabbableProp::*)()>(&::GlobalNamespace::PropHuntGrabbableProp::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5638220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntGrabbableProp*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PropHuntHandFollower>& GlobalNamespace::PropHuntGrabbableProp::__cordl_internal_get_handFollower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handFollower;
}
constexpr ::UnityW<::GlobalNamespace::PropHuntHandFollower> const& GlobalNamespace::PropHuntGrabbableProp::__cordl_internal_get_handFollower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handFollower;
}
constexpr void GlobalNamespace::PropHuntGrabbableProp::__cordl_internal_set_handFollower(::UnityW<::GlobalNamespace::PropHuntHandFollower>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handFollower = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PropHuntGrabbableProp::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PropHuntGrabbableProp::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void GlobalNamespace::PropHuntGrabbableProp::__cordl_internal_set_offset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*& GlobalNamespace::PropHuntGrabbableProp::__cordl_internal_get_interactionPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactionPoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>* const& GlobalNamespace::PropHuntGrabbableProp::__cordl_internal_get_interactionPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactionPoints;
}
constexpr void GlobalNamespace::PropHuntGrabbableProp::__cordl_internal_set_interactionPoints(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactionPoints = value;
}
inline void GlobalNamespace::PropHuntGrabbableProp::OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PropHuntGrabbableProp*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointHovered, hoveringHand);
}
inline void GlobalNamespace::PropHuntGrabbableProp::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PropHuntGrabbableProp*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline void GlobalNamespace::PropHuntGrabbableProp::DropItemCleanup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PropHuntGrabbableProp*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PropHuntGrabbableProp::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PropHuntGrabbableProp*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GlobalNamespace::PropHuntGrabbableProp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntGrabbableProp*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PropHuntGrabbableProp* GlobalNamespace::PropHuntGrabbableProp::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropHuntGrabbableProp*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropHuntGrabbableProp::PropHuntGrabbableProp()   {
}
