#pragma once
// IWYU pragma private; include "GlobalNamespace/DevWatchSelectableItem.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DevWatchSelectableItem_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DevWatchSelectableItem.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevWatchSelectableItem::*)(::Fusion::NetworkObject*)>(&::GlobalNamespace::DevWatchSelectableItem::Init)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x57ed42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevWatchSelectableItem*>(),
                        {"Init", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DevWatchSelectableItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevWatchSelectableItem::*)()>(&::GlobalNamespace::DevWatchSelectableItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57ed504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevWatchSelectableItem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DevWatchSelectableItem._Init_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevWatchSelectableItem::*)()>(&::GlobalNamespace::DevWatchSelectableItem::_Init_b__4_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x57ed50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevWatchSelectableItem*>(),
                        {"<Init>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::DevWatchSelectableItem::__cordl_internal_get_Button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Button;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::DevWatchSelectableItem::__cordl_internal_get_Button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Button;
}
constexpr void GlobalNamespace::DevWatchSelectableItem::__cordl_internal_set_Button(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Button = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::DevWatchSelectableItem::__cordl_internal_get_ItemName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemName;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::DevWatchSelectableItem::__cordl_internal_get_ItemName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemName;
}
constexpr void GlobalNamespace::DevWatchSelectableItem::__cordl_internal_set_ItemName(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ItemName = value;
}
constexpr ::UnityW<::Fusion::NetworkObject>& GlobalNamespace::DevWatchSelectableItem::__cordl_internal_get_SelectedObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedObject;
}
constexpr ::UnityW<::Fusion::NetworkObject> const& GlobalNamespace::DevWatchSelectableItem::__cordl_internal_get_SelectedObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedObject;
}
constexpr void GlobalNamespace::DevWatchSelectableItem::__cordl_internal_set_SelectedObject(::UnityW<::Fusion::NetworkObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SelectedObject = value;
}
constexpr ::System::Action_2<::StringW,::UnityW<::Fusion::NetworkObject>>*& GlobalNamespace::DevWatchSelectableItem::__cordl_internal_get_OnSelected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSelected;
}
constexpr ::System::Action_2<::StringW,::UnityW<::Fusion::NetworkObject>>* const& GlobalNamespace::DevWatchSelectableItem::__cordl_internal_get_OnSelected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSelected;
}
constexpr void GlobalNamespace::DevWatchSelectableItem::__cordl_internal_set_OnSelected(::System::Action_2<::StringW,::UnityW<::Fusion::NetworkObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSelected = value;
}
inline void GlobalNamespace::DevWatchSelectableItem::Init(::Fusion::NetworkObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevWatchSelectableItem*>(),
                        {"Init", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GlobalNamespace::DevWatchSelectableItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevWatchSelectableItem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DevWatchSelectableItem::_Init_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevWatchSelectableItem*>(),
                        {"<Init>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DevWatchSelectableItem* GlobalNamespace::DevWatchSelectableItem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DevWatchSelectableItem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DevWatchSelectableItem::DevWatchSelectableItem()   {
}
