#pragma once
// IWYU pragma private; include "GlobalNamespace/SIDispenserGadgetListEntry.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIDispenserGadgetListEntry_def.hpp"
#include "GlobalNamespace/zzzz__ITouchScreenStation_def.hpp"
#include "GlobalNamespace/zzzz__ObjectHierarchyFlattener_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeNode_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButtonContainer_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_SITouchscreenButtonType_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIDispenserGadgetListEntry.get_DispenseButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SITouchscreenButtonContainer> (::GlobalNamespace::SIDispenserGadgetListEntry::*)()>(&::GlobalNamespace::SIDispenserGadgetListEntry::get_DispenseButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59dc338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIDispenserGadgetListEntry*>(),
                        {"get_DispenseButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIDispenserGadgetListEntry.SetStation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIDispenserGadgetListEntry::*)(::GlobalNamespace::ITouchScreenStation*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GlobalNamespace::SIDispenserGadgetListEntry::SetStation)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x59dc340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIDispenserGadgetListEntry*>(),
                        {"SetStation", {}, {::i2c::type_of<::GlobalNamespace::ITouchScreenStation*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIDispenserGadgetListEntry.SetTechTreeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIDispenserGadgetListEntry::*)(::GlobalNamespace::SITechTreeNode*)>(&::GlobalNamespace::SIDispenserGadgetListEntry::SetTechTreeNode)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x59dc6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIDispenserGadgetListEntry*>(),
                        {"SetTechTreeNode", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIDispenserGadgetListEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIDispenserGadgetListEntry::*)()>(&::GlobalNamespace::SIDispenserGadgetListEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59dc77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIDispenserGadgetListEntry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIDispenserGadgetListEntry._SetTechTreeNode_g__ConfigureButton_10_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SITouchscreenButton*, ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType, int32_t)>(&::GlobalNamespace::SIDispenserGadgetListEntry::_SetTechTreeNode_g__ConfigureButton_10_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59dc768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIDispenserGadgetListEntry*>(),
                        {"<SetTechTreeNode>g__ConfigureButton|10_0", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton*>(), ::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SIDispenserGadgetListEntry::__cordl_internal_get_gadgetText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SIDispenserGadgetListEntry::__cordl_internal_get_gadgetText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetText;
}
constexpr void GlobalNamespace::SIDispenserGadgetListEntry::__cordl_internal_set_gadgetText(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gadgetText = value;
}
constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>& GlobalNamespace::SIDispenserGadgetListEntry::__cordl_internal_get_dispenseButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispenseButton;
}
constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer> const& GlobalNamespace::SIDispenserGadgetListEntry::__cordl_internal_get_dispenseButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispenseButton;
}
constexpr void GlobalNamespace::SIDispenserGadgetListEntry::__cordl_internal_set_dispenseButton(::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dispenseButton = value;
}
constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>& GlobalNamespace::SIDispenserGadgetListEntry::__cordl_internal_get_infoButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___infoButton;
}
constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer> const& GlobalNamespace::SIDispenserGadgetListEntry::__cordl_internal_get_infoButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___infoButton;
}
constexpr void GlobalNamespace::SIDispenserGadgetListEntry::__cordl_internal_set_infoButton(::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___infoButton = value;
}
constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>& GlobalNamespace::SIDispenserGadgetListEntry::__cordl_internal_get_image1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___image1;
}
constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener> const& GlobalNamespace::SIDispenserGadgetListEntry::__cordl_internal_get_image1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___image1;
}
constexpr void GlobalNamespace::SIDispenserGadgetListEntry::__cordl_internal_set_image1(::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___image1 = value;
}
constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>& GlobalNamespace::SIDispenserGadgetListEntry::__cordl_internal_get_image2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___image2;
}
constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener> const& GlobalNamespace::SIDispenserGadgetListEntry::__cordl_internal_get_image2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___image2;
}
constexpr void GlobalNamespace::SIDispenserGadgetListEntry::__cordl_internal_set_image2(::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___image2 = value;
}
constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>& GlobalNamespace::SIDispenserGadgetListEntry::__cordl_internal_get_text1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text1;
}
constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener> const& GlobalNamespace::SIDispenserGadgetListEntry::__cordl_internal_get_text1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text1;
}
constexpr void GlobalNamespace::SIDispenserGadgetListEntry::__cordl_internal_set_text1(::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text1 = value;
}
constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>& GlobalNamespace::SIDispenserGadgetListEntry::__cordl_internal_get_text2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text2;
}
constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener> const& GlobalNamespace::SIDispenserGadgetListEntry::__cordl_internal_get_text2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text2;
}
constexpr void GlobalNamespace::SIDispenserGadgetListEntry::__cordl_internal_set_text2(::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text2 = value;
}
inline ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer> GlobalNamespace::SIDispenserGadgetListEntry::get_DispenseButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIDispenserGadgetListEntry*>(),
                        {"get_DispenseButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>>(this, ___internal_method);
}
inline void GlobalNamespace::SIDispenserGadgetListEntry::SetStation(::GlobalNamespace::ITouchScreenStation*  station, ::UnityEngine::Transform*  imageTarget, ::UnityEngine::Transform*  textTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIDispenserGadgetListEntry*>(),
                        {"SetStation", {}, {::i2c::type_of<::GlobalNamespace::ITouchScreenStation*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, station, imageTarget, textTarget);
}
inline void GlobalNamespace::SIDispenserGadgetListEntry::SetTechTreeNode(::GlobalNamespace::SITechTreeNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIDispenserGadgetListEntry*>(),
                        {"SetTechTreeNode", {}, {::i2c::type_of<::GlobalNamespace::SITechTreeNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void GlobalNamespace::SIDispenserGadgetListEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIDispenserGadgetListEntry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIDispenserGadgetListEntry::_SetTechTreeNode_g__ConfigureButton_10_0(::GlobalNamespace::SITouchscreenButton*  button, ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  type, int32_t  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIDispenserGadgetListEntry*>(),
                        {"<SetTechTreeNode>g__ConfigureButton|10_0", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton*>(), ::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, button, type, data);
}
inline ::GlobalNamespace::SIDispenserGadgetListEntry* GlobalNamespace::SIDispenserGadgetListEntry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIDispenserGadgetListEntry*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIDispenserGadgetListEntry::SIDispenserGadgetListEntry()   {
}
