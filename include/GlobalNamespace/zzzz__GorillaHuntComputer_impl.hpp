#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaHuntComputer.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaHuntComputer_def.hpp"
#include "GlobalNamespace/zzzz__GorillaHuntComputer_def.hpp"
#include "GlobalNamespace/zzzz__GorillaHuntManager_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntComputer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntComputer::*)()>(&::GlobalNamespace::GorillaHuntComputer::Update)> {
  constexpr static std::size_t size = 0xb08;
  constexpr static std::size_t addrs = 0x590ee18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntComputer*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntComputer.SetImage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntComputer::*)(::StringW, ::by_ref<::UnityEngine::UI::Image*>)>(&::GlobalNamespace::GorillaHuntComputer::SetImage)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x590fc94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntComputer*>(),
                        {"SetImage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::UI::Image*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntComputer.NormalizeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GorillaHuntComputer::*)(bool, ::StringW)>(&::GlobalNamespace::GorillaHuntComputer::NormalizeName)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x590fac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntComputer*>(),
                        {"NormalizeName", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntComputer.GetPrioritizedItemForHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CosmeticsController_CosmeticItem (::GlobalNamespace::GorillaHuntComputer::*)(::GlobalNamespace::VRRig*, bool)>(&::GlobalNamespace::GorillaHuntComputer::GetPrioritizedItemForHand)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x590fe3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntComputer*>(),
                        {"GetPrioritizedItemForHand", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntComputer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntComputer::*)()>(&::GlobalNamespace::GorillaHuntComputer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59100a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntComputer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr void GlobalNamespace::GorillaHuntComputer::__cordl_internal_set_text(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void GlobalNamespace::GorillaHuntComputer::__cordl_internal_set_material(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_hat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hat;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_hat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hat;
}
constexpr void GlobalNamespace::GorillaHuntComputer::__cordl_internal_set_hat(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hat = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_face()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___face;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_face() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___face;
}
constexpr void GlobalNamespace::GorillaHuntComputer::__cordl_internal_set_face(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___face = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_badge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badge;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_badge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badge;
}
constexpr void GlobalNamespace::GorillaHuntComputer::__cordl_internal_set_badge(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___badge = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_leftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHand;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_leftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHand;
}
constexpr void GlobalNamespace::GorillaHuntComputer::__cordl_internal_set_leftHand(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHand = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_rightHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHand;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_rightHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHand;
}
constexpr void GlobalNamespace::GorillaHuntComputer::__cordl_internal_set_rightHand(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHand = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_myTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myTarget;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_myTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myTarget;
}
constexpr void GlobalNamespace::GorillaHuntComputer::__cordl_internal_set_myTarget(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myTarget = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_tempTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempTarget;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_tempTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempTarget;
}
constexpr void GlobalNamespace::GorillaHuntComputer::__cordl_internal_set_tempTarget(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempTarget = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GlobalNamespace::GorillaHuntComputer::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_tempSprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_tempSprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempSprite;
}
constexpr void GlobalNamespace::GorillaHuntComputer::__cordl_internal_set_tempSprite(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempSprite = value;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_tempItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempItem;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_tempItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempItem;
}
constexpr void GlobalNamespace::GorillaHuntComputer::__cordl_internal_set_tempItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempItem = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaHuntManager>& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_huntManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___huntManager;
}
constexpr ::UnityW<::GlobalNamespace::GorillaHuntManager> const& GlobalNamespace::GorillaHuntComputer::__cordl_internal_get_huntManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___huntManager;
}
constexpr void GlobalNamespace::GorillaHuntComputer::__cordl_internal_set_huntManager(::UnityW<::GlobalNamespace::GorillaHuntManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___huntManager = value;
}
inline void GlobalNamespace::GorillaHuntComputer::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntComputer*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHuntComputer::SetImage(::StringW  itemDisplayName, ::by_ref<::UnityEngine::UI::Image*>  image)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntComputer*>(),
                        {"SetImage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::UI::Image*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemDisplayName, image);
}
inline ::StringW GlobalNamespace::GorillaHuntComputer::NormalizeName(bool  doIt, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntComputer*>(),
                        {"NormalizeName", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, doIt, text);
}
inline ::GlobalNamespace::CosmeticsController_CosmeticItem GlobalNamespace::GorillaHuntComputer::GetPrioritizedItemForHand(::GlobalNamespace::VRRig*  targetRig, bool  forLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntComputer*>(),
                        {"GetPrioritizedItemForHand", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CosmeticsController_CosmeticItem>(this, ___internal_method, targetRig, forLeftHand);
}
inline void GlobalNamespace::GorillaHuntComputer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntComputer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaHuntComputer* GlobalNamespace::GorillaHuntComputer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaHuntComputer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaHuntComputer::GorillaHuntComputer()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntComputer___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntComputer___c::*)()>(&::GlobalNamespace::GorillaHuntComputer___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5910114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntComputer___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntComputer___c._NormalizeName_b__15_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaHuntComputer___c::*)(char16_t)>(&::GlobalNamespace::GorillaHuntComputer___c::_NormalizeName_b__15_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x591011c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntComputer___c*>(),
                        {"<NormalizeName>b__15_0", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GorillaHuntComputer___c::setStaticF___9(::GlobalNamespace::GorillaHuntComputer___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GorillaHuntComputer___c*, "<>9", ::GlobalNamespace::GorillaHuntComputer___c*>(std::forward<::GlobalNamespace::GorillaHuntComputer___c*>(value));
}
inline ::GlobalNamespace::GorillaHuntComputer___c* GlobalNamespace::GorillaHuntComputer___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GorillaHuntComputer___c*, "<>9", ::GlobalNamespace::GorillaHuntComputer___c*>();
}
inline void GlobalNamespace::GorillaHuntComputer___c::setStaticF___9__15_0(::System::Predicate_1<char16_t>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<char16_t>*, "<>9__15_0", ::GlobalNamespace::GorillaHuntComputer___c*>(std::forward<::System::Predicate_1<char16_t>*>(value));
}
inline ::System::Predicate_1<char16_t>* GlobalNamespace::GorillaHuntComputer___c::getStaticF___9__15_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<char16_t>*, "<>9__15_0", ::GlobalNamespace::GorillaHuntComputer___c*>();
}
inline void GlobalNamespace::GorillaHuntComputer___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntComputer___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaHuntComputer___c::_NormalizeName_b__15_0(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntComputer___c*>(),
                        {"<NormalizeName>b__15_0", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline ::GlobalNamespace::GorillaHuntComputer___c* GlobalNamespace::GorillaHuntComputer___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaHuntComputer___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaHuntComputer___c::GorillaHuntComputer___c()   {
}
