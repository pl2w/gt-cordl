#pragma once
// IWYU pragma private; include "GlobalNamespace/OverridePaperDoll.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OverridePaperDoll_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OverridePaperDoll._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OverridePaperDoll::*)()>(&::GlobalNamespace::OverridePaperDoll::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5760bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OverridePaperDoll*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OverridePaperDoll::__cordl_internal_get_rightSideOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightSideOverride;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OverridePaperDoll::__cordl_internal_get_rightSideOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightSideOverride;
}
constexpr void GlobalNamespace::OverridePaperDoll::__cordl_internal_set_rightSideOverride(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightSideOverride = value;
}
constexpr bool& GlobalNamespace::OverridePaperDoll::__cordl_internal_get_replacesHeadMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___replacesHeadMesh;
}
constexpr bool const& GlobalNamespace::OverridePaperDoll::__cordl_internal_get_replacesHeadMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___replacesHeadMesh;
}
constexpr void GlobalNamespace::OverridePaperDoll::__cordl_internal_set_replacesHeadMesh(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___replacesHeadMesh = value;
}
inline void GlobalNamespace::OverridePaperDoll::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OverridePaperDoll*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OverridePaperDoll* GlobalNamespace::OverridePaperDoll::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OverridePaperDoll*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OverridePaperDoll::OverridePaperDoll()   {
}
