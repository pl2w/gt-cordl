#pragma once
// IWYU pragma private; include "GlobalNamespace/BubbleGumEvents.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BubbleGumEvents_def.hpp"
#include "GlobalNamespace/zzzz__BubbleGumEvents_EdibleState_def.hpp"
#include "GlobalNamespace/zzzz__BubbleGumEvents_def.hpp"
#include "GlobalNamespace/zzzz__EdibleHoldable_def.hpp"
#include "GlobalNamespace/zzzz__GumBubble_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BubbleGumEvents.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BubbleGumEvents::*)()>(&::GlobalNamespace::BubbleGumEvents::OnEnable)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5789454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BubbleGumEvents*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BubbleGumEvents.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BubbleGumEvents::*)()>(&::GlobalNamespace::BubbleGumEvents::OnDisable)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5789550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BubbleGumEvents*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BubbleGumEvents.OnBiteView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BubbleGumEvents::*)(::GlobalNamespace::VRRig*, int32_t)>(&::GlobalNamespace::BubbleGumEvents::OnBiteView)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x578964c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BubbleGumEvents*>(),
                        {"OnBiteView", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BubbleGumEvents.OnBiteWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BubbleGumEvents::*)(::GlobalNamespace::VRRig*, int32_t)>(&::GlobalNamespace::BubbleGumEvents::OnBiteWorld)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5789a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BubbleGumEvents*>(),
                        {"OnBiteWorld", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BubbleGumEvents.OnBite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BubbleGumEvents::*)(::GlobalNamespace::VRRig*, int32_t, bool)>(&::GlobalNamespace::BubbleGumEvents::OnBite)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x5789654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BubbleGumEvents*>(),
                        {"OnBite", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BubbleGumEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BubbleGumEvents::*)()>(&::GlobalNamespace::BubbleGumEvents::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5789a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BubbleGumEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::EdibleHoldable>& GlobalNamespace::BubbleGumEvents::__cordl_internal_get__edible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____edible;
}
constexpr ::UnityW<::GlobalNamespace::EdibleHoldable> const& GlobalNamespace::BubbleGumEvents::__cordl_internal_get__edible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____edible;
}
constexpr void GlobalNamespace::BubbleGumEvents::__cordl_internal_set__edible(::UnityW<::GlobalNamespace::EdibleHoldable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____edible = value;
}
constexpr ::UnityW<::GlobalNamespace::GumBubble>& GlobalNamespace::BubbleGumEvents::__cordl_internal_get__bubble()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bubble;
}
constexpr ::UnityW<::GlobalNamespace::GumBubble> const& GlobalNamespace::BubbleGumEvents::__cordl_internal_get__bubble() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bubble;
}
constexpr void GlobalNamespace::BubbleGumEvents::__cordl_internal_set__bubble(::UnityW<::GlobalNamespace::GumBubble>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bubble = value;
}
inline void GlobalNamespace::BubbleGumEvents::setStaticF_gTargetCache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::GlobalNamespace::GumBubble>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::GlobalNamespace::GumBubble>>*, "gTargetCache", ::GlobalNamespace::BubbleGumEvents*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::GlobalNamespace::GumBubble>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::GlobalNamespace::GumBubble>>* GlobalNamespace::BubbleGumEvents::getStaticF_gTargetCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::GlobalNamespace::GumBubble>>*, "gTargetCache", ::GlobalNamespace::BubbleGumEvents*>();
}
inline void GlobalNamespace::BubbleGumEvents::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BubbleGumEvents*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BubbleGumEvents::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BubbleGumEvents*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BubbleGumEvents::OnBiteView(::GlobalNamespace::VRRig*  rig, int32_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BubbleGumEvents*>(),
                        {"OnBiteView", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig, nextState);
}
inline void GlobalNamespace::BubbleGumEvents::OnBiteWorld(::GlobalNamespace::VRRig*  rig, int32_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BubbleGumEvents*>(),
                        {"OnBiteWorld", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig, nextState);
}
inline void GlobalNamespace::BubbleGumEvents::OnBite(::GlobalNamespace::VRRig*  rig, int32_t  nextState, bool  isViewRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BubbleGumEvents*>(),
                        {"OnBite", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig, nextState, isViewRig);
}
inline void GlobalNamespace::BubbleGumEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BubbleGumEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BubbleGumEvents* GlobalNamespace::BubbleGumEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BubbleGumEvents*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BubbleGumEvents::BubbleGumEvents()   {
}
//  Writing Method size for method: ::GlobalNamespace::BubbleGumEvents___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BubbleGumEvents___c::*)()>(&::GlobalNamespace::BubbleGumEvents___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5789b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BubbleGumEvents___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BubbleGumEvents___c._OnBite_b__7_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BubbleGumEvents___c::*)(::GlobalNamespace::GumBubble*)>(&::GlobalNamespace::BubbleGumEvents___c::_OnBite_b__7_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5789b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BubbleGumEvents___c*>(),
                        {"<OnBite>b__7_0", {}, {::i2c::type_of<::GlobalNamespace::GumBubble*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BubbleGumEvents___c::setStaticF___9(::GlobalNamespace::BubbleGumEvents___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::BubbleGumEvents___c*, "<>9", ::GlobalNamespace::BubbleGumEvents___c*>(std::forward<::GlobalNamespace::BubbleGumEvents___c*>(value));
}
inline ::GlobalNamespace::BubbleGumEvents___c* GlobalNamespace::BubbleGumEvents___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::BubbleGumEvents___c*, "<>9", ::GlobalNamespace::BubbleGumEvents___c*>();
}
inline void GlobalNamespace::BubbleGumEvents___c::setStaticF___9__7_0(::System::Func_2<::UnityW<::GlobalNamespace::GumBubble>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::GumBubble>,bool>*, "<>9__7_0", ::GlobalNamespace::BubbleGumEvents___c*>(std::forward<::System::Func_2<::UnityW<::GlobalNamespace::GumBubble>,bool>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::GumBubble>,bool>* GlobalNamespace::BubbleGumEvents___c::getStaticF___9__7_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::GumBubble>,bool>*, "<>9__7_0", ::GlobalNamespace::BubbleGumEvents___c*>();
}
inline void GlobalNamespace::BubbleGumEvents___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BubbleGumEvents___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BubbleGumEvents___c::_OnBite_b__7_0(::GlobalNamespace::GumBubble*  g)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BubbleGumEvents___c*>(),
                        {"<OnBite>b__7_0", {}, {::i2c::type_of<::GlobalNamespace::GumBubble*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, g);
}
inline ::GlobalNamespace::BubbleGumEvents___c* GlobalNamespace::BubbleGumEvents___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BubbleGumEvents___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BubbleGumEvents___c::BubbleGumEvents___c()   {
}
