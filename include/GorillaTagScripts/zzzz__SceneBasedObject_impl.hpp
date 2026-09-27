#pragma once
// IWYU pragma private; include "GorillaTagScripts/SceneBasedObject.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/zzzz__SceneBasedObject_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::SceneBasedObject.IsLocalPlayerInScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::SceneBasedObject::*)()>(&::GorillaTagScripts::SceneBasedObject::IsLocalPlayerInScene)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5bd4048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SceneBasedObject*>(),
                        {"IsLocalPlayerInScene", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SceneBasedObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::SceneBasedObject::*)()>(&::GorillaTagScripts::SceneBasedObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bd40d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SceneBasedObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GTZone& GorillaTagScripts::SceneBasedObject::__cordl_internal_get_zone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr ::GlobalNamespace::GTZone const& GorillaTagScripts::SceneBasedObject::__cordl_internal_get_zone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr void GorillaTagScripts::SceneBasedObject::__cordl_internal_set_zone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zone = value;
}
inline bool GorillaTagScripts::SceneBasedObject::IsLocalPlayerInScene()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SceneBasedObject*>(),
                        {"IsLocalPlayerInScene", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::SceneBasedObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SceneBasedObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::SceneBasedObject* GorillaTagScripts::SceneBasedObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::SceneBasedObject*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::SceneBasedObject::SceneBasedObject()   {
}
