#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapAccessDoor.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapAccessDoor_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMapAccessDoor.OpenDoor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapAccessDoor::*)()>(&::GlobalNamespace::CustomMapAccessDoor::OpenDoor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x59a7b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapAccessDoor*>(),
                        {"OpenDoor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapAccessDoor.CloseDoor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapAccessDoor::*)()>(&::GlobalNamespace::CustomMapAccessDoor::CloseDoor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x59a7c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapAccessDoor*>(),
                        {"CloseDoor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapAccessDoor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapAccessDoor::*)()>(&::GlobalNamespace::CustomMapAccessDoor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a7d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapAccessDoor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CustomMapAccessDoor::__cordl_internal_get_openDoorObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openDoorObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CustomMapAccessDoor::__cordl_internal_get_openDoorObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openDoorObject;
}
constexpr void GlobalNamespace::CustomMapAccessDoor::__cordl_internal_set_openDoorObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openDoorObject = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CustomMapAccessDoor::__cordl_internal_get_closedDoorObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedDoorObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CustomMapAccessDoor::__cordl_internal_get_closedDoorObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedDoorObject;
}
constexpr void GlobalNamespace::CustomMapAccessDoor::__cordl_internal_set_closedDoorObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closedDoorObject = value;
}
inline void GlobalNamespace::CustomMapAccessDoor::OpenDoor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapAccessDoor*>(),
                        {"OpenDoor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapAccessDoor::CloseDoor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapAccessDoor*>(),
                        {"CloseDoor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapAccessDoor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapAccessDoor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomMapAccessDoor* GlobalNamespace::CustomMapAccessDoor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapAccessDoor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapAccessDoor::CustomMapAccessDoor()   {
}
