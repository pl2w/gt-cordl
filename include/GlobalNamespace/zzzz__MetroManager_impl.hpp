#pragma once
// IWYU pragma private; include "GlobalNamespace/MetroManager.hpp"
#include "GlobalNamespace/zzzz__MetroBlimp_impl.hpp"
#include "GlobalNamespace/zzzz__MetroSpotlight_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MetroManager_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MetroManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetroManager::*)()>(&::GlobalNamespace::MetroManager::Update)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d08f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetroManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetroManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetroManager::*)()>(&::GlobalNamespace::MetroManager::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d092a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetroManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MetroBlimp>>& GlobalNamespace::MetroManager::__cordl_internal_get__blimps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blimps;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MetroBlimp>> const& GlobalNamespace::MetroManager::__cordl_internal_get__blimps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blimps;
}
constexpr void GlobalNamespace::MetroManager::__cordl_internal_set__blimps(::ArrayW<::UnityW<::GlobalNamespace::MetroBlimp>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____blimps = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MetroSpotlight>>& GlobalNamespace::MetroManager::__cordl_internal_get__spotlights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spotlights;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MetroSpotlight>> const& GlobalNamespace::MetroManager::__cordl_internal_get__spotlights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spotlights;
}
constexpr void GlobalNamespace::MetroManager::__cordl_internal_set__spotlights(::ArrayW<::UnityW<::GlobalNamespace::MetroSpotlight>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spotlights = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MetroManager::__cordl_internal_get__blimpsRotationAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blimpsRotationAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MetroManager::__cordl_internal_get__blimpsRotationAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blimpsRotationAnchor;
}
constexpr void GlobalNamespace::MetroManager::__cordl_internal_set__blimpsRotationAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____blimpsRotationAnchor = value;
}
inline void GlobalNamespace::MetroManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetroManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetroManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetroManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetroManager* GlobalNamespace::MetroManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetroManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetroManager::MetroManager()   {
}
