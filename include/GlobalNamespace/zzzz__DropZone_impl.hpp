#pragma once
// IWYU pragma private; include "GlobalNamespace/DropZone.hpp"
#include "GlobalNamespace/zzzz__BodyDockPositions_DropPositions_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__BodyDockPositions_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DropZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DropZone::*)()>(&::GlobalNamespace::DropZone::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x571aed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DropZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BodyDockPositions>& GlobalNamespace::DropZone::__cordl_internal_get_forBodyDock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forBodyDock;
}
constexpr ::UnityW<::GlobalNamespace::BodyDockPositions> const& GlobalNamespace::DropZone::__cordl_internal_get_forBodyDock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forBodyDock;
}
constexpr void GlobalNamespace::DropZone::__cordl_internal_set_forBodyDock(::UnityW<::GlobalNamespace::BodyDockPositions>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forBodyDock = value;
}
constexpr ::GlobalNamespace::BodyDockPositions_DropPositions& GlobalNamespace::DropZone::__cordl_internal_get_dropPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropPosition;
}
constexpr ::GlobalNamespace::BodyDockPositions_DropPositions const& GlobalNamespace::DropZone::__cordl_internal_get_dropPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropPosition;
}
constexpr void GlobalNamespace::DropZone::__cordl_internal_set_dropPosition(::GlobalNamespace::BodyDockPositions_DropPositions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dropPosition = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::DropZone::__cordl_internal_get_anchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::DropZone::__cordl_internal_get_anchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchor;
}
constexpr void GlobalNamespace::DropZone::__cordl_internal_set_anchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchor = value;
}
inline void GlobalNamespace::DropZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DropZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DropZone* GlobalNamespace::DropZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DropZone*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DropZone::DropZone()   {
}
