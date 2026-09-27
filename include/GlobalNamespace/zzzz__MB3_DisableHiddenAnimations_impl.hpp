#pragma once
// IWYU pragma private; include "GlobalNamespace/MB3_DisableHiddenAnimations.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MB3_DisableHiddenAnimations_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB3_DisableHiddenAnimations.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_DisableHiddenAnimations::*)()>(&::GlobalNamespace::MB3_DisableHiddenAnimations::Start)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9d7557c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_DisableHiddenAnimations*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_DisableHiddenAnimations.OnBecameVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_DisableHiddenAnimations::*)()>(&::GlobalNamespace::MB3_DisableHiddenAnimations::OnBecameVisible)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9d756a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_DisableHiddenAnimations*>(),
                        {"OnBecameVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_DisableHiddenAnimations.OnBecameInvisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_DisableHiddenAnimations::*)()>(&::GlobalNamespace::MB3_DisableHiddenAnimations::OnBecameInvisible)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9d7578c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_DisableHiddenAnimations*>(),
                        {"OnBecameInvisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_DisableHiddenAnimations._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_DisableHiddenAnimations::*)()>(&::GlobalNamespace::MB3_DisableHiddenAnimations::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9d75878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_DisableHiddenAnimations*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animation>>*& GlobalNamespace::MB3_DisableHiddenAnimations::__cordl_internal_get_animationsToCull()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationsToCull;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animation>>* const& GlobalNamespace::MB3_DisableHiddenAnimations::__cordl_internal_get_animationsToCull() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationsToCull;
}
constexpr void GlobalNamespace::MB3_DisableHiddenAnimations::__cordl_internal_set_animationsToCull(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animation>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationsToCull = value;
}
inline void GlobalNamespace::MB3_DisableHiddenAnimations::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_DisableHiddenAnimations*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_DisableHiddenAnimations::OnBecameVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_DisableHiddenAnimations*>(),
                        {"OnBecameVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_DisableHiddenAnimations::OnBecameInvisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_DisableHiddenAnimations*>(),
                        {"OnBecameInvisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_DisableHiddenAnimations::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_DisableHiddenAnimations*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB3_DisableHiddenAnimations* GlobalNamespace::MB3_DisableHiddenAnimations::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB3_DisableHiddenAnimations*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_DisableHiddenAnimations::MB3_DisableHiddenAnimations()   {
}
