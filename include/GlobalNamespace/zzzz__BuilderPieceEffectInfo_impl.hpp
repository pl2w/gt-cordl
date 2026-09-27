#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPieceEffectInfo.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceEffectInfo_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceEffectInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceEffectInfo::*)()>(&::GlobalNamespace::BuilderPieceEffectInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b3508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceEffectInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BuilderPieceEffectInfo::__cordl_internal_get_placeVFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placeVFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BuilderPieceEffectInfo::__cordl_internal_get_placeVFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placeVFX;
}
constexpr void GlobalNamespace::BuilderPieceEffectInfo::__cordl_internal_set_placeVFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placeVFX = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BuilderPieceEffectInfo::__cordl_internal_get_disconnectVFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disconnectVFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BuilderPieceEffectInfo::__cordl_internal_get_disconnectVFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disconnectVFX;
}
constexpr void GlobalNamespace::BuilderPieceEffectInfo::__cordl_internal_set_disconnectVFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disconnectVFX = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BuilderPieceEffectInfo::__cordl_internal_get_grabbedVFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedVFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BuilderPieceEffectInfo::__cordl_internal_get_grabbedVFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedVFX;
}
constexpr void GlobalNamespace::BuilderPieceEffectInfo::__cordl_internal_set_grabbedVFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabbedVFX = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BuilderPieceEffectInfo::__cordl_internal_get_locationLockVFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locationLockVFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BuilderPieceEffectInfo::__cordl_internal_get_locationLockVFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locationLockVFX;
}
constexpr void GlobalNamespace::BuilderPieceEffectInfo::__cordl_internal_set_locationLockVFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___locationLockVFX = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BuilderPieceEffectInfo::__cordl_internal_get_recycleVFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recycleVFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BuilderPieceEffectInfo::__cordl_internal_get_recycleVFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recycleVFX;
}
constexpr void GlobalNamespace::BuilderPieceEffectInfo::__cordl_internal_set_recycleVFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recycleVFX = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BuilderPieceEffectInfo::__cordl_internal_get_tooHeavyVFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tooHeavyVFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BuilderPieceEffectInfo::__cordl_internal_get_tooHeavyVFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tooHeavyVFX;
}
constexpr void GlobalNamespace::BuilderPieceEffectInfo::__cordl_internal_set_tooHeavyVFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tooHeavyVFX = value;
}
inline void GlobalNamespace::BuilderPieceEffectInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceEffectInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderPieceEffectInfo* GlobalNamespace::BuilderPieceEffectInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderPieceEffectInfo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderPieceEffectInfo::BuilderPieceEffectInfo()   {
}
