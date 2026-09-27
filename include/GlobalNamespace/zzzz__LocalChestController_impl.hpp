#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalChestController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LocalChestController_def.hpp"
#include "GlobalNamespace/zzzz__MazePlayerCollection_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalChestController.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalChestController::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::LocalChestController::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x567bdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalChestController*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalChestController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalChestController::*)()>(&::GlobalNamespace::LocalChestController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x567bf48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalChestController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& GlobalNamespace::LocalChestController::__cordl_internal_get_director()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___director;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& GlobalNamespace::LocalChestController::__cordl_internal_get_director() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___director;
}
constexpr void GlobalNamespace::LocalChestController::__cordl_internal_set_director(::UnityW<::UnityEngine::Playables::PlayableDirector>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___director = value;
}
constexpr ::UnityW<::GlobalNamespace::MazePlayerCollection>& GlobalNamespace::LocalChestController::__cordl_internal_get_playerCollectionVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCollectionVolume;
}
constexpr ::UnityW<::GlobalNamespace::MazePlayerCollection> const& GlobalNamespace::LocalChestController::__cordl_internal_get_playerCollectionVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCollectionVolume;
}
constexpr void GlobalNamespace::LocalChestController::__cordl_internal_set_playerCollectionVolume(::UnityW<::GlobalNamespace::MazePlayerCollection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCollectionVolume = value;
}
constexpr bool& GlobalNamespace::LocalChestController::__cordl_internal_get_isOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOpen;
}
constexpr bool const& GlobalNamespace::LocalChestController::__cordl_internal_get_isOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOpen;
}
constexpr void GlobalNamespace::LocalChestController::__cordl_internal_set_isOpen(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOpen = value;
}
inline void GlobalNamespace::LocalChestController::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalChestController*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::LocalChestController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalChestController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalChestController* GlobalNamespace::LocalChestController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalChestController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalChestController::LocalChestController()   {
}
