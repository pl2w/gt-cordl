#pragma once
// IWYU pragma private; include "GlobalNamespace/DevWatch.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DevWatch_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "GlobalNamespace/zzzz__DevWatchButton_def.hpp"
#include "GlobalNamespace/zzzz__DevWatchSelectableItem_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DevWatch.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevWatch::*)()>(&::GlobalNamespace::DevWatch::Awake)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x57ecce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevWatch*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DevWatch.SearchItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevWatch::*)()>(&::GlobalNamespace::DevWatch::SearchItems)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x57ece18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevWatch*>(),
                        {"SearchItems", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DevWatch.Cleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevWatch::*)()>(&::GlobalNamespace::DevWatch::Cleanup)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x57ed12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevWatch*>(),
                        {"Cleanup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DevWatch.ItemSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevWatch::*)(::GlobalNamespace::DevWatchSelectableItem*)>(&::GlobalNamespace::DevWatch::ItemSelected)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x57ed288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevWatch*>(),
                        {"ItemSelected", {}, {::i2c::type_of<::GlobalNamespace::DevWatchSelectableItem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DevWatch.TryDestroyItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevWatch::*)()>(&::GlobalNamespace::DevWatch::TryDestroyItem)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57ed318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevWatch*>(),
                        {"TryDestroyItem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DevWatch.TakeOwneshipOfItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevWatch::*)()>(&::GlobalNamespace::DevWatch::TakeOwneshipOfItem)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57ed31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevWatch*>(),
                        {"TakeOwneshipOfItem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DevWatch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevWatch::*)()>(&::GlobalNamespace::DevWatch::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x57ed320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevWatch*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::DevWatchButton>& GlobalNamespace::DevWatch::__cordl_internal_get_SearchButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SearchButton;
}
constexpr ::UnityW<::GlobalNamespace::DevWatchButton> const& GlobalNamespace::DevWatch::__cordl_internal_get_SearchButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SearchButton;
}
constexpr void GlobalNamespace::DevWatch::__cordl_internal_set_SearchButton(::UnityW<::GlobalNamespace::DevWatchButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SearchButton = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::DevWatch::__cordl_internal_get_Panel1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Panel1;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::DevWatch::__cordl_internal_get_Panel1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Panel1;
}
constexpr void GlobalNamespace::DevWatch::__cordl_internal_set_Panel1(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Panel1 = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::DevWatch::__cordl_internal_get_Panel2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Panel2;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::DevWatch::__cordl_internal_get_Panel2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Panel2;
}
constexpr void GlobalNamespace::DevWatch::__cordl_internal_set_Panel2(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Panel2 = value;
}
constexpr ::UnityW<::GlobalNamespace::DevWatchSelectableItem>& GlobalNamespace::DevWatch::__cordl_internal_get_SelectableItemPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectableItemPrefab;
}
constexpr ::UnityW<::GlobalNamespace::DevWatchSelectableItem> const& GlobalNamespace::DevWatch::__cordl_internal_get_SelectableItemPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectableItemPrefab;
}
constexpr void GlobalNamespace::DevWatch::__cordl_internal_set_SelectableItemPrefab(::UnityW<::GlobalNamespace::DevWatchSelectableItem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SelectableItemPrefab = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::DevWatchSelectableItem>>*& GlobalNamespace::DevWatch::__cordl_internal_get_Items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Items;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::DevWatchSelectableItem>>* const& GlobalNamespace::DevWatch::__cordl_internal_get_Items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Items;
}
constexpr void GlobalNamespace::DevWatch::__cordl_internal_set_Items(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::DevWatchSelectableItem>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Items = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::DevWatch::__cordl_internal_get_RayCastStartPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RayCastStartPos;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::DevWatch::__cordl_internal_get_RayCastStartPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RayCastStartPos;
}
constexpr void GlobalNamespace::DevWatch::__cordl_internal_set_RayCastStartPos(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RayCastStartPos = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::DevWatch::__cordl_internal_get_RayCastDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RayCastDirection;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::DevWatch::__cordl_internal_get_RayCastDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RayCastDirection;
}
constexpr void GlobalNamespace::DevWatch::__cordl_internal_set_RayCastDirection(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RayCastDirection = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::DevWatch::__cordl_internal_get_ItemsFoundContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemsFoundContainer;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::DevWatch::__cordl_internal_get_ItemsFoundContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemsFoundContainer;
}
constexpr void GlobalNamespace::DevWatch::__cordl_internal_set_ItemsFoundContainer(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ItemsFoundContainer = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::DevWatch::__cordl_internal_get_TakeOwnershipButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TakeOwnershipButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::DevWatch::__cordl_internal_get_TakeOwnershipButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TakeOwnershipButton;
}
constexpr void GlobalNamespace::DevWatch::__cordl_internal_set_TakeOwnershipButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TakeOwnershipButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::DevWatch::__cordl_internal_get_DestroyObjectButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DestroyObjectButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::DevWatch::__cordl_internal_get_DestroyObjectButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DestroyObjectButton;
}
constexpr void GlobalNamespace::DevWatch::__cordl_internal_set_DestroyObjectButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DestroyObjectButton = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*& GlobalNamespace::DevWatch::__cordl_internal_get_FoundNetworkObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FoundNetworkObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>* const& GlobalNamespace::DevWatch::__cordl_internal_get_FoundNetworkObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FoundNetworkObjects;
}
constexpr void GlobalNamespace::DevWatch::__cordl_internal_set_FoundNetworkObjects(::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FoundNetworkObjects = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::DevWatch::__cordl_internal_get_SelectedItemName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedItemName;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::DevWatch::__cordl_internal_get_SelectedItemName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedItemName;
}
constexpr void GlobalNamespace::DevWatch::__cordl_internal_set_SelectedItemName(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SelectedItemName = value;
}
constexpr ::UnityW<::GlobalNamespace::DevWatchSelectableItem>& GlobalNamespace::DevWatch::__cordl_internal_get_SelectedItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedItem;
}
constexpr ::UnityW<::GlobalNamespace::DevWatchSelectableItem> const& GlobalNamespace::DevWatch::__cordl_internal_get_SelectedItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedItem;
}
constexpr void GlobalNamespace::DevWatch::__cordl_internal_set_SelectedItem(::UnityW<::GlobalNamespace::DevWatchSelectableItem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SelectedItem = value;
}
inline void GlobalNamespace::DevWatch::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevWatch*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DevWatch::SearchItems()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevWatch*>(),
                        {"SearchItems", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DevWatch::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevWatch*>(),
                        {"Cleanup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DevWatch::ItemSelected(::GlobalNamespace::DevWatchSelectableItem*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevWatch*>(),
                        {"ItemSelected", {}, {::i2c::type_of<::GlobalNamespace::DevWatchSelectableItem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void GlobalNamespace::DevWatch::TryDestroyItem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevWatch*>(),
                        {"TryDestroyItem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DevWatch::TakeOwneshipOfItem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevWatch*>(),
                        {"TakeOwneshipOfItem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DevWatch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevWatch*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DevWatch* GlobalNamespace::DevWatch::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DevWatch*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DevWatch::DevWatch()   {
}
