#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Fusion/AvatarSpawnerFusion.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__AvatarStreamLOD_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Fusion/zzzz__AvatarSpawnerFusion_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f5d788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion::__cordl_internal_get_loadAvatarWhenConnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadAvatarWhenConnected;
}
constexpr bool const& Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion::__cordl_internal_get_loadAvatarWhenConnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadAvatarWhenConnected;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion::__cordl_internal_set_loadAvatarWhenConnected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadAvatarWhenConnected = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion::__cordl_internal_get_avatarBehavior()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___avatarBehavior;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion::__cordl_internal_get_avatarBehavior() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___avatarBehavior;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion::__cordl_internal_set_avatarBehavior(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___avatarBehavior = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion::__cordl_internal_get_avatarBehaviorSdk28Plus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___avatarBehaviorSdk28Plus;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion::__cordl_internal_get_avatarBehaviorSdk28Plus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___avatarBehaviorSdk28Plus;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion::__cordl_internal_set_avatarBehaviorSdk28Plus(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___avatarBehaviorSdk28Plus = value;
}
constexpr int32_t& Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion::__cordl_internal_get_preloadedSampleAvatarSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preloadedSampleAvatarSize;
}
constexpr int32_t const& Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion::__cordl_internal_get_preloadedSampleAvatarSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preloadedSampleAvatarSize;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion::__cordl_internal_set_preloadedSampleAvatarSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preloadedSampleAvatarSize = value;
}
constexpr ::Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD& Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion::__cordl_internal_get_avatarStreamLOD()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___avatarStreamLOD;
}
constexpr ::Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD const& Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion::__cordl_internal_get_avatarStreamLOD() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___avatarStreamLOD;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion::__cordl_internal_set_avatarStreamLOD(::Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___avatarStreamLOD = value;
}
constexpr float_t& Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion::__cordl_internal_get_avatarUpdateIntervalInSec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___avatarUpdateIntervalInSec;
}
constexpr float_t const& Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion::__cordl_internal_get_avatarUpdateIntervalInSec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___avatarUpdateIntervalInSec;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion::__cordl_internal_set_avatarUpdateIntervalInSec(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___avatarUpdateIntervalInSec = value;
}
inline void Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion* Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Fusion::AvatarSpawnerFusion::AvatarSpawnerFusion()   {
}
