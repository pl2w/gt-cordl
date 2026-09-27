#pragma once
// IWYU pragma private; include "GlobalNamespace/GRDoorWrapper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRDoorWrapper_def.hpp"
#include "GlobalNamespace/zzzz__GRDoor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRDoorWrapper.ToggleDoor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDoorWrapper::*)(bool)>(&::GlobalNamespace::GRDoorWrapper::ToggleDoor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56bd028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDoorWrapper*>(),
                        {"ToggleDoor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDoorWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDoorWrapper::*)()>(&::GlobalNamespace::GRDoorWrapper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bd044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDoorWrapper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GRDoor*& GlobalNamespace::GRDoorWrapper::__cordl_internal_get_grDoor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grDoor;
}
constexpr ::GlobalNamespace::GRDoor* const& GlobalNamespace::GRDoorWrapper::__cordl_internal_get_grDoor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grDoor;
}
constexpr void GlobalNamespace::GRDoorWrapper::__cordl_internal_set_grDoor(::GlobalNamespace::GRDoor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grDoor = value;
}
inline void GlobalNamespace::GRDoorWrapper::ToggleDoor(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDoorWrapper*>(),
                        {"ToggleDoor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GRDoorWrapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDoorWrapper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRDoorWrapper* GlobalNamespace::GRDoorWrapper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRDoorWrapper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRDoorWrapper::GRDoorWrapper()   {
}
