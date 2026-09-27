#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/RoomGuardian.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__RoomGuardian_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::RoomGuardian.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::RoomGuardian::*)()>(&::Meta::XR::MRUtilityKit::RoomGuardian::Start)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9f3ab94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::RoomGuardian*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::RoomGuardian.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::RoomGuardian::*)()>(&::Meta::XR::MRUtilityKit::RoomGuardian::Update)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x9f3ac60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::RoomGuardian*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::RoomGuardian._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::RoomGuardian::*)()>(&::Meta::XR::MRUtilityKit::RoomGuardian::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f3af7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::RoomGuardian*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& Meta::XR::MRUtilityKit::RoomGuardian::__cordl_internal_get_GuardianMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GuardianMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Meta::XR::MRUtilityKit::RoomGuardian::__cordl_internal_get_GuardianMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GuardianMaterial;
}
constexpr void Meta::XR::MRUtilityKit::RoomGuardian::__cordl_internal_set_GuardianMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GuardianMaterial = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::RoomGuardian::__cordl_internal_get_GuardianDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GuardianDistance;
}
constexpr float_t const& Meta::XR::MRUtilityKit::RoomGuardian::__cordl_internal_get_GuardianDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GuardianDistance;
}
constexpr void Meta::XR::MRUtilityKit::RoomGuardian::__cordl_internal_set_GuardianDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GuardianDistance = value;
}
inline void Meta::XR::MRUtilityKit::RoomGuardian::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::RoomGuardian*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::RoomGuardian::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::RoomGuardian*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::RoomGuardian::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::RoomGuardian*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::RoomGuardian* Meta::XR::MRUtilityKit::RoomGuardian::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::RoomGuardian*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::RoomGuardian::RoomGuardian()   {
}
