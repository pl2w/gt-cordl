#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetListEntry.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetListEntry_def.hpp"
#include "GlobalNamespace/zzzz__ITouchScreenStation_def.hpp"
#include "GlobalNamespace/zzzz__ObjectHierarchyFlattener_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreePage_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButtonContainer_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_SITouchscreenButtonType_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadgetListEntry.get_ButtonContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SITouchscreenButtonContainer> (::GlobalNamespace::SIGadgetListEntry::*)()>(&::GlobalNamespace::SIGadgetListEntry::get_ButtonContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59deac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetListEntry*>(),
                        {"get_ButtonContainer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetListEntry.get_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SIGadgetListEntry::*)()>(&::GlobalNamespace::SIGadgetListEntry::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59dead0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetListEntry*>(),
                        {"get_Id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetListEntry.set_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetListEntry::*)(int32_t)>(&::GlobalNamespace::SIGadgetListEntry::set_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59dead8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetListEntry*>(),
                        {"set_Id", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetListEntry.Configure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetListEntry::*)(::GlobalNamespace::ITouchScreenStation*, ::GlobalNamespace::SITechTreePage*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType, int32_t, float_t, int32_t)>(&::GlobalNamespace::SIGadgetListEntry::Configure)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x59dd51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetListEntry*>(),
                        {"Configure", {}, {::i2c::type_of<::GlobalNamespace::ITouchScreenStation*>(), ::i2c::type_of<::GlobalNamespace::SITechTreePage*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetListEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetListEntry::*)()>(&::GlobalNamespace::SIGadgetListEntry::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59deae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetListEntry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SIGadgetListEntry::__cordl_internal_get_gadgetText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SIGadgetListEntry::__cordl_internal_get_gadgetText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetText;
}
constexpr void GlobalNamespace::SIGadgetListEntry::__cordl_internal_set_gadgetText(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gadgetText = value;
}
constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>& GlobalNamespace::SIGadgetListEntry::__cordl_internal_get_buttonContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonContainer;
}
constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer> const& GlobalNamespace::SIGadgetListEntry::__cordl_internal_get_buttonContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonContainer;
}
constexpr void GlobalNamespace::SIGadgetListEntry::__cordl_internal_set_buttonContainer(::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonContainer = value;
}
constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>& GlobalNamespace::SIGadgetListEntry::__cordl_internal_get_imageFlattener()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___imageFlattener;
}
constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener> const& GlobalNamespace::SIGadgetListEntry::__cordl_internal_get_imageFlattener() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___imageFlattener;
}
constexpr void GlobalNamespace::SIGadgetListEntry::__cordl_internal_set_imageFlattener(::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___imageFlattener = value;
}
constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>& GlobalNamespace::SIGadgetListEntry::__cordl_internal_get_textFlattener()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textFlattener;
}
constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener> const& GlobalNamespace::SIGadgetListEntry::__cordl_internal_get_textFlattener() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textFlattener;
}
constexpr void GlobalNamespace::SIGadgetListEntry::__cordl_internal_set_textFlattener(::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textFlattener = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIGadgetListEntry::__cordl_internal_get_selectionIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectionIndicator;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIGadgetListEntry::__cordl_internal_get_selectionIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectionIndicator;
}
constexpr void GlobalNamespace::SIGadgetListEntry::__cordl_internal_set_selectionIndicator(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectionIndicator = value;
}
constexpr int32_t& GlobalNamespace::SIGadgetListEntry::__cordl_internal_get__Id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::SIGadgetListEntry::__cordl_internal_get__Id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr void GlobalNamespace::SIGadgetListEntry::__cordl_internal_set__Id_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Id_k__BackingField = value;
}
inline ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer> GlobalNamespace::SIGadgetListEntry::get_ButtonContainer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetListEntry*>(),
                        {"get_ButtonContainer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>>(this, ___internal_method);
}
inline int32_t GlobalNamespace::SIGadgetListEntry::get_Id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetListEntry*>(),
                        {"get_Id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetListEntry::set_Id(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetListEntry*>(),
                        {"set_Id", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SIGadgetListEntry::Configure(::GlobalNamespace::ITouchScreenStation*  station, ::GlobalNamespace::SITechTreePage*  page, ::UnityEngine::Transform*  imageTarget, ::UnityEngine::Transform*  textTarget, ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  index, float_t  positionInterval, int32_t  listSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetListEntry*>(),
                        {"Configure", {}, {::i2c::type_of<::GlobalNamespace::ITouchScreenStation*>(), ::i2c::type_of<::GlobalNamespace::SITechTreePage*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, station, page, imageTarget, textTarget, buttonType, index, positionInterval, listSize);
}
inline void GlobalNamespace::SIGadgetListEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetListEntry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGadgetListEntry* GlobalNamespace::SIGadgetListEntry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGadgetListEntry*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetListEntry::SIGadgetListEntry()   {
}
