#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKRoom_CouchSeat.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKRoom_CouchSeat_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MRUKRoom_CouchSeat.get_couchAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> (::GlobalNamespace::MRUKRoom_CouchSeat::*)()>(&::GlobalNamespace::MRUKRoom_CouchSeat::get_couchAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f39c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MRUKRoom_CouchSeat>(),
                        {"get_couchAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MRUKRoom_CouchSeat.set_couchAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MRUKRoom_CouchSeat::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::GlobalNamespace::MRUKRoom_CouchSeat::set_couchAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f39c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MRUKRoom_CouchSeat>(),
                        {"set_couchAnchor", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MRUKRoom_CouchSeat.get_couchPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Pose>* (::GlobalNamespace::MRUKRoom_CouchSeat::*)()>(&::GlobalNamespace::MRUKRoom_CouchSeat::get_couchPoses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f39c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MRUKRoom_CouchSeat>(),
                        {"get_couchPoses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MRUKRoom_CouchSeat.set_couchPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MRUKRoom_CouchSeat::*)(::System::Collections::Generic::List_1<::UnityEngine::Pose>*)>(&::GlobalNamespace::MRUKRoom_CouchSeat::set_couchPoses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f39c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MRUKRoom_CouchSeat>(),
                        {"set_couchPoses", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Pose>*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> GlobalNamespace::MRUKRoom_CouchSeat::get_couchAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MRUKRoom_CouchSeat>(),
                        {"get_couchAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>(*this, ___internal_method);
}
inline void GlobalNamespace::MRUKRoom_CouchSeat::set_couchAnchor(::Meta::XR::MRUtilityKit::MRUKAnchor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MRUKRoom_CouchSeat>(),
                        {"set_couchAnchor", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Pose>* GlobalNamespace::MRUKRoom_CouchSeat::get_couchPoses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MRUKRoom_CouchSeat>(),
                        {"get_couchPoses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Pose>*>(*this, ___internal_method);
}
inline void GlobalNamespace::MRUKRoom_CouchSeat::set_couchPoses(::System::Collections::Generic::List_1<::UnityEngine::Pose>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MRUKRoom_CouchSeat>(),
                        {"set_couchPoses", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Pose>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_couchAnchor_k__BackingField", ty: "::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_couchPoses_k__BackingField", ty: "::System::Collections::Generic::List_1<::UnityEngine::Pose>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUKRoom_CouchSeat::MRUKRoom_CouchSeat(::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  _couchAnchor_k__BackingField, ::System::Collections::Generic::List_1<::UnityEngine::Pose>*  _couchPoses_k__BackingField) noexcept  {
this->_couchAnchor_k__BackingField = _couchAnchor_k__BackingField;
this->_couchPoses_k__BackingField = _couchPoses_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUKRoom_CouchSeat::MRUKRoom_CouchSeat()   {
}
