#pragma once
// IWYU pragma private; include "GlobalNamespace/ReplaceGOLayers.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ReplaceGOLayers_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ReplaceGOLayers._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReplaceGOLayers::*)()>(&::GlobalNamespace::ReplaceGOLayers::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c22a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReplaceGOLayers*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ReplaceGOLayers::__cordl_internal_get_fromLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromLayer;
}
constexpr int32_t const& GlobalNamespace::ReplaceGOLayers::__cordl_internal_get_fromLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromLayer;
}
constexpr void GlobalNamespace::ReplaceGOLayers::__cordl_internal_set_fromLayer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fromLayer = value;
}
constexpr int32_t& GlobalNamespace::ReplaceGOLayers::__cordl_internal_get_toLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toLayer;
}
constexpr int32_t const& GlobalNamespace::ReplaceGOLayers::__cordl_internal_get_toLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toLayer;
}
constexpr void GlobalNamespace::ReplaceGOLayers::__cordl_internal_set_toLayer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toLayer = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ReplaceGOLayers::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ReplaceGOLayers::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::ReplaceGOLayers::__cordl_internal_set_target(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
inline void GlobalNamespace::ReplaceGOLayers::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReplaceGOLayers*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ReplaceGOLayers* GlobalNamespace::ReplaceGOLayers::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ReplaceGOLayers*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ReplaceGOLayers::ReplaceGOLayers()   {
}
