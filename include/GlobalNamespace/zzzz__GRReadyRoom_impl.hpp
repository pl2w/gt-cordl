#pragma once
// IWYU pragma private; include "GlobalNamespace/GRReadyRoom.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRReadyRoom_def.hpp"
#include "GlobalNamespace/zzzz__GRNameDisplayPlate_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRReadyRoom.RefreshRigs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRReadyRoom::*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*)>(&::GlobalNamespace::GRReadyRoom::RefreshRigs)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x58a77dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReadyRoom*>(),
                        {"RefreshRigs", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRReadyRoom._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRReadyRoom::*)()>(&::GlobalNamespace::GRReadyRoom::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a7958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReadyRoom*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRNameDisplayPlate>>*& GlobalNamespace::GRReadyRoom::__cordl_internal_get_nameDisplayPlates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameDisplayPlates;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRNameDisplayPlate>>* const& GlobalNamespace::GRReadyRoom::__cordl_internal_get_nameDisplayPlates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameDisplayPlates;
}
constexpr void GlobalNamespace::GRReadyRoom::__cordl_internal_set_nameDisplayPlates(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRNameDisplayPlate>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nameDisplayPlates = value;
}
inline void GlobalNamespace::GRReadyRoom::RefreshRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  vrRigs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReadyRoom*>(),
                        {"RefreshRigs", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vrRigs);
}
inline void GlobalNamespace::GRReadyRoom::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReadyRoom*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRReadyRoom* GlobalNamespace::GRReadyRoom::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRReadyRoom*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRReadyRoom::GRReadyRoom()   {
}
