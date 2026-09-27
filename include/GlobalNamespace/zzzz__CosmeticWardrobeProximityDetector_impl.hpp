#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticWardrobeProximityDetector.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticWardrobeProximityDetector_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__SphereCollider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobeProximityDetector.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticWardrobeProximityDetector::*)()>(&::GlobalNamespace::CosmeticWardrobeProximityDetector::OnEnable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5786afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobeProximityDetector*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobeProximityDetector.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticWardrobeProximityDetector::*)()>(&::GlobalNamespace::CosmeticWardrobeProximityDetector::OnDisable)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5786c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobeProximityDetector*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobeProximityDetector.IsUserNearWardrobe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::GlobalNamespace::CosmeticWardrobeProximityDetector::IsUserNearWardrobe)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x5786cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobeProximityDetector*>(),
                        {"IsUserNearWardrobe", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobeProximityDetector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticWardrobeProximityDetector::*)()>(&::GlobalNamespace::CosmeticWardrobeProximityDetector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5787120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobeProximityDetector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::SphereCollider>& GlobalNamespace::CosmeticWardrobeProximityDetector::__cordl_internal_get_wardrobeNearbyCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wardrobeNearbyCollider;
}
constexpr ::UnityW<::UnityEngine::SphereCollider> const& GlobalNamespace::CosmeticWardrobeProximityDetector::__cordl_internal_get_wardrobeNearbyCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wardrobeNearbyCollider;
}
constexpr void GlobalNamespace::CosmeticWardrobeProximityDetector::__cordl_internal_set_wardrobeNearbyCollider(::UnityW<::UnityEngine::SphereCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wardrobeNearbyCollider = value;
}
inline void GlobalNamespace::CosmeticWardrobeProximityDetector::setStaticF_rigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "rigs", ::GlobalNamespace::CosmeticWardrobeProximityDetector*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* GlobalNamespace::CosmeticWardrobeProximityDetector::getStaticF_rigs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "rigs", ::GlobalNamespace::CosmeticWardrobeProximityDetector*>();
}
inline void GlobalNamespace::CosmeticWardrobeProximityDetector::setStaticF_wardrobeNearbyDetection(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::SphereCollider>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::SphereCollider>>*, "wardrobeNearbyDetection", ::GlobalNamespace::CosmeticWardrobeProximityDetector*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::SphereCollider>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::SphereCollider>>* GlobalNamespace::CosmeticWardrobeProximityDetector::getStaticF_wardrobeNearbyDetection()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::SphereCollider>>*, "wardrobeNearbyDetection", ::GlobalNamespace::CosmeticWardrobeProximityDetector*>();
}
inline void GlobalNamespace::CosmeticWardrobeProximityDetector::setStaticF_overlapColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityW<::UnityEngine::Collider>>, "overlapColliders", ::GlobalNamespace::CosmeticWardrobeProximityDetector*>(std::forward<::ArrayW<::UnityW<::UnityEngine::Collider>>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> GlobalNamespace::CosmeticWardrobeProximityDetector::getStaticF_overlapColliders()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::UnityEngine::Collider>>, "overlapColliders", ::GlobalNamespace::CosmeticWardrobeProximityDetector*>();
}
inline void GlobalNamespace::CosmeticWardrobeProximityDetector::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobeProximityDetector*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticWardrobeProximityDetector::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobeProximityDetector*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CosmeticWardrobeProximityDetector::IsUserNearWardrobe(int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobeProximityDetector*>(),
                        {"IsUserNearWardrobe", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, actorNr);
}
inline void GlobalNamespace::CosmeticWardrobeProximityDetector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobeProximityDetector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticWardrobeProximityDetector* GlobalNamespace::CosmeticWardrobeProximityDetector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticWardrobeProximityDetector*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticWardrobeProximityDetector::CosmeticWardrobeProximityDetector()   {
}
