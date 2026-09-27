#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsGalleryView.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapsGalleryView_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsGalleryView_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsModTile_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGalleryView.ResetGallery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGalleryView::*)()>(&::GlobalNamespace::CustomMapsGalleryView::ResetGallery)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x59fdd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView*>(),
                        {"ResetGallery", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGalleryView.DisplayGallery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsGalleryView::*)(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*, bool, ::by_ref<::StringW>)>(&::GlobalNamespace::CustomMapsGalleryView::DisplayGallery)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x59fddcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView*>(),
                        {"DisplayGallery", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGalleryView.ShowTileText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGalleryView::*)(bool, bool)>(&::GlobalNamespace::CustomMapsGalleryView::ShowTileText)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x59fe130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView*>(),
                        {"ShowTileText", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGalleryView.ShowDetailsForEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGalleryView::*)(int32_t)>(&::GlobalNamespace::CustomMapsGalleryView::ShowDetailsForEntry)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x59fe1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView*>(),
                        {"ShowDetailsForEntry", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGalleryView.HighlightTileAtIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGalleryView::*)(int32_t)>(&::GlobalNamespace::CustomMapsGalleryView::HighlightTileAtIndex)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x59fe25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView*>(),
                        {"HighlightTileAtIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGalleryView._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGalleryView::*)()>(&::GlobalNamespace::CustomMapsGalleryView::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x59fe2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CustomMapsModTile>>*& GlobalNamespace::CustomMapsGalleryView::__cordl_internal_get_modTiles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modTiles;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CustomMapsModTile>>* const& GlobalNamespace::CustomMapsGalleryView::__cordl_internal_get_modTiles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modTiles;
}
constexpr void GlobalNamespace::CustomMapsGalleryView::__cordl_internal_set_modTiles(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CustomMapsModTile>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modTiles = value;
}
constexpr ::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*& GlobalNamespace::CustomMapsGalleryView::__cordl_internal_get__synchronizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____synchronizer;
}
constexpr ::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer* const& GlobalNamespace::CustomMapsGalleryView::__cordl_internal_get__synchronizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____synchronizer;
}
constexpr void GlobalNamespace::CustomMapsGalleryView::__cordl_internal_set__synchronizer(::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____synchronizer = value;
}
inline void GlobalNamespace::CustomMapsGalleryView::ResetGallery()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView*>(),
                        {"ResetGallery", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapsGalleryView::DisplayGallery(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  mods, bool  useMapName, ::by_ref<::StringW>  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView*>(),
                        {"DisplayGallery", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mods, useMapName, error);
}
inline void GlobalNamespace::CustomMapsGalleryView::ShowTileText(bool  show, bool  useMapName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView*>(),
                        {"ShowTileText", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, show, useMapName);
}
inline void GlobalNamespace::CustomMapsGalleryView::ShowDetailsForEntry(int32_t  entryIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView*>(),
                        {"ShowDetailsForEntry", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entryIndex);
}
inline void GlobalNamespace::CustomMapsGalleryView::HighlightTileAtIndex(int32_t  tileIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView*>(),
                        {"HighlightTileAtIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tileIndex);
}
inline void GlobalNamespace::CustomMapsGalleryView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomMapsGalleryView* GlobalNamespace::CustomMapsGalleryView::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsGalleryView*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsGalleryView::CustomMapsGalleryView()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0::*)()>(&::GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59fe0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0._DisplayGallery_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0::*)(::StringW)>(&::GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0::_DisplayGallery_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x59fe974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0*>(),
                        {"<DisplayGallery>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0::__cordl_internal_get_idx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idx;
}
constexpr int32_t const& GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0::__cordl_internal_get_idx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idx;
}
constexpr void GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0::__cordl_internal_set_idx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idx = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsGalleryView>& GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsGalleryView> const& GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CustomMapsGalleryView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0::_DisplayGallery_b__0(::StringW  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0*>(),
                        {"<DisplayGallery>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline ::GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0* GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsGalleryView___c__DisplayClass3_0::CustomMapsGalleryView___c__DisplayClass3_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest::*)(::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*, int32_t, ::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*, ::System::Action_1<::PlayFab::PlayFabError*>*)>(&::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x59fe3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest::*)()>(&::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest::Send)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x59fe434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest*>(),
                        {"Send", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest.WrapCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::StringW>* (::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest::*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest::WrapCallback)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x59fe850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest*>(),
                        {"WrapCallback", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*& GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest::__cordl_internal_get__parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr ::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer* const& GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest::__cordl_internal_get__parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr void GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest::__cordl_internal_set__parent(::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parent = value;
}
constexpr int32_t& GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest::__cordl_internal_get__id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr int32_t const& GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest::__cordl_internal_get__id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr void GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest::__cordl_internal_set__id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____id = value;
}
constexpr ::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*& GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest::__cordl_internal_get__modsAndCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modsAndCallbacks;
}
constexpr ::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>* const& GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest::__cordl_internal_get__modsAndCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modsAndCallbacks;
}
constexpr void GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest::__cordl_internal_set__modsAndCallbacks(::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____modsAndCallbacks = value;
}
constexpr ::System::Action_1<::PlayFab::PlayFabError*>*& GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest::__cordl_internal_get__errorCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorCallback;
}
constexpr ::System::Action_1<::PlayFab::PlayFabError*>* const& GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest::__cordl_internal_get__errorCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorCallback;
}
constexpr void GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest::__cordl_internal_set__errorCallback(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____errorCallback = value;
}
inline void GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest::_ctor(::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*  parent, int32_t  id, ::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*  modsAndCallbacks, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, id, modsAndCallbacks, errorCallback);
}
inline void GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest::Send()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest*>(),
                        {"Send", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Action_1<::StringW>* GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest::WrapCallback(::System::Action_1<::StringW>*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest*>(),
                        {"WrapCallback", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::StringW>*>(this, ___internal_method, source);
}
inline ::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest* GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest::New_ctor(::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*  parent, int32_t  id, ::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*  modsAndCallbacks, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest*>(parent, id, modsAndCallbacks, errorCallback));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest::CustomMapsGalleryView_SynchronizedRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0::*)()>(&::GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59fe920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0._WrapCallback_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0::*)(::StringW)>(&::GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0::_WrapCallback_b__0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x59fe928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0*>(),
                        {"<WrapCallback>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest*& GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest* const& GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0::__cordl_internal_set___4__this(::GlobalNamespace::CustomMapsGalleryView_SynchronizedRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr void GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0::__cordl_internal_set_source(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
inline void GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0::_WrapCallback_b__0(::StringW  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0*>(),
                        {"<WrapCallback>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0* GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0::SynchronizedRequest_CustomMapsGalleryView___c__DisplayClass6_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer.get_LatestRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer::*)()>(&::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer::get_LatestRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59fe3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*>(),
                        {"get_LatestRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer.set_LatestRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer::*)(int32_t)>(&::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer::set_LatestRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59fe3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*>(),
                        {"set_LatestRequest", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer.SendRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer::*)(::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*, ::System::Action_1<::PlayFab::PlayFabError*>*)>(&::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer::SendRequest)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x59fe0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*>(),
                        {"SendRequest", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer::*)()>(&::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59fe3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer::__cordl_internal_get__LatestRequest_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LatestRequest_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer::__cordl_internal_get__LatestRequest_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LatestRequest_k__BackingField;
}
constexpr void GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer::__cordl_internal_set__LatestRequest_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LatestRequest_k__BackingField = value;
}
inline int32_t GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer::get_LatestRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*>(),
                        {"get_LatestRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer::set_LatestRequest(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*>(),
                        {"set_LatestRequest", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer::SendRequest(::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*  modsAndCallbacks, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*>(),
                        {"SendRequest", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modsAndCallbacks, errorCallback);
}
inline void GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer* GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsGalleryView_RequestSynchronizer::CustomMapsGalleryView_RequestSynchronizer()   {
}
