#pragma once
// IWYU pragma private; include "GlobalNamespace/NewMapsDisplay.hpp"
#include "Modio/Mods/zzzz__ModId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NewMapsDisplay_def.hpp"
#include "GlobalNamespace/zzzz__NewMapsDisplay_NewMapData_def.hpp"
#include "GlobalNamespace/zzzz__NewMapsDisplay__Initialize_d__28_def.hpp"
#include "GlobalNamespace/zzzz__NewMapsDisplay_def.hpp"
#include "Modio/Images/zzzz__LazyImage_1_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NewMapsDisplay.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NewMapsDisplay::*)()>(&::GlobalNamespace::NewMapsDisplay::OnEnable)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x59f3164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NewMapsDisplay.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NewMapsDisplay::*)()>(&::GlobalNamespace::NewMapsDisplay::OnDisable)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x59f351c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NewMapsDisplay.OnUGCEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NewMapsDisplay::*)()>(&::GlobalNamespace::NewMapsDisplay::OnUGCEnabled)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x59f3704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay*>(),
                        {"OnUGCEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NewMapsDisplay.OnUGCDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NewMapsDisplay::*)()>(&::GlobalNamespace::NewMapsDisplay::OnUGCDisabled)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x59f384c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay*>(),
                        {"OnUGCDisabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NewMapsDisplay.DelayedInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::NewMapsDisplay::*)()>(&::GlobalNamespace::NewMapsDisplay::DelayedInitialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x59f33a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay*>(),
                        {"DelayedInitialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NewMapsDisplay.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::GlobalNamespace::NewMapsDisplay::*)()>(&::GlobalNamespace::NewMapsDisplay::Initialize)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x59f3410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NewMapsDisplay.StartSlideshow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NewMapsDisplay::*)()>(&::GlobalNamespace::NewMapsDisplay::StartSlideshow)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x59f394c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay*>(),
                        {"StartSlideshow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NewMapsDisplay.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NewMapsDisplay::*)()>(&::GlobalNamespace::NewMapsDisplay::Update)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x59f3c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NewMapsDisplay.UpdateSlideshow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NewMapsDisplay::*)()>(&::GlobalNamespace::NewMapsDisplay::UpdateSlideshow)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x59f39d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay*>(),
                        {"UpdateSlideshow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NewMapsDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NewMapsDisplay::*)()>(&::GlobalNamespace::NewMapsDisplay::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x59f3c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NewMapsDisplay._Initialize_b__28_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NewMapsDisplay::*)(::UnityEngine::Texture2D*)>(&::GlobalNamespace::NewMapsDisplay::_Initialize_b__28_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59f3da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay*>(),
                        {"<Initialize>b__28_0", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_mapImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapImage;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_mapImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapImage;
}
constexpr void GlobalNamespace::NewMapsDisplay::__cordl_internal_set_mapImage(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapImage = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_loadingText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_loadingText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingText;
}
constexpr void GlobalNamespace::NewMapsDisplay::__cordl_internal_set_loadingText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadingText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_modNameText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modNameText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_modNameText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modNameText;
}
constexpr void GlobalNamespace::NewMapsDisplay::__cordl_internal_set_modNameText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modNameText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_modCreatorLabelText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modCreatorLabelText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_modCreatorLabelText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modCreatorLabelText;
}
constexpr void GlobalNamespace::NewMapsDisplay::__cordl_internal_set_modCreatorLabelText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modCreatorLabelText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_modCreatorText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modCreatorText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_modCreatorText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modCreatorText;
}
constexpr void GlobalNamespace::NewMapsDisplay::__cordl_internal_set_modCreatorText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modCreatorText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_mapInfoTMP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapInfoTMP;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_mapInfoTMP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapInfoTMP;
}
constexpr void GlobalNamespace::NewMapsDisplay::__cordl_internal_set_mapInfoTMP(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapInfoTMP = value;
}
constexpr float_t& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_slideshowUpdateInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slideshowUpdateInterval;
}
constexpr float_t const& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_slideshowUpdateInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slideshowUpdateInterval;
}
constexpr void GlobalNamespace::NewMapsDisplay::__cordl_internal_set_slideshowUpdateInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slideshowUpdateInterval = value;
}
constexpr ::StringW& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_loadingString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingString;
}
constexpr ::StringW const& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_loadingString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingString;
}
constexpr void GlobalNamespace::NewMapsDisplay::__cordl_internal_set_loadingString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadingString = value;
}
constexpr ::StringW& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_ugcDisabledString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ugcDisabledString;
}
constexpr ::StringW const& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_ugcDisabledString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ugcDisabledString;
}
constexpr void GlobalNamespace::NewMapsDisplay::__cordl_internal_set_ugcDisabledString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ugcDisabledString = value;
}
constexpr ::Modio::Mods::ModId& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_newMapsModId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newMapsModId;
}
constexpr ::Modio::Mods::ModId const& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_newMapsModId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newMapsModId;
}
constexpr void GlobalNamespace::NewMapsDisplay::__cordl_internal_set_newMapsModId(::Modio::Mods::ModId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newMapsModId = value;
}
constexpr ::Modio::Mods::Mod*& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_newMapsModProfile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newMapsModProfile;
}
constexpr ::Modio::Mods::Mod* const& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_newMapsModProfile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newMapsModProfile;
}
constexpr void GlobalNamespace::NewMapsDisplay::__cordl_internal_set_newMapsModProfile(::Modio::Mods::Mod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newMapsModProfile = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NewMapsDisplay_NewMapData>*& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_newMapDatas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newMapDatas;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NewMapsDisplay_NewMapData>* const& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_newMapDatas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newMapDatas;
}
constexpr void GlobalNamespace::NewMapsDisplay::__cordl_internal_set_newMapDatas(::System::Collections::Generic::List_1<::GlobalNamespace::NewMapsDisplay_NewMapData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newMapDatas = value;
}
constexpr bool& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_slideshowActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slideshowActive;
}
constexpr bool const& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_slideshowActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slideshowActive;
}
constexpr void GlobalNamespace::NewMapsDisplay::__cordl_internal_set_slideshowActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slideshowActive = value;
}
constexpr int32_t& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_slideshowIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slideshowIndex;
}
constexpr int32_t const& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_slideshowIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slideshowIndex;
}
constexpr void GlobalNamespace::NewMapsDisplay::__cordl_internal_set_slideshowIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slideshowIndex = value;
}
constexpr float_t& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_lastSlideshowUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSlideshowUpdate;
}
constexpr float_t const& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_lastSlideshowUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSlideshowUpdate;
}
constexpr void GlobalNamespace::NewMapsDisplay::__cordl_internal_set_lastSlideshowUpdate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSlideshowUpdate = value;
}
constexpr bool& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_requestingNewMapsModProfile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestingNewMapsModProfile;
}
constexpr bool const& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_requestingNewMapsModProfile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestingNewMapsModProfile;
}
constexpr void GlobalNamespace::NewMapsDisplay::__cordl_internal_set_requestingNewMapsModProfile(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestingNewMapsModProfile = value;
}
constexpr ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_lazyImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyImage;
}
constexpr ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>* const& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_lazyImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyImage;
}
constexpr void GlobalNamespace::NewMapsDisplay::__cordl_internal_set_lazyImage(::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lazyImage = value;
}
constexpr bool& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_downloadingImages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downloadingImages;
}
constexpr bool const& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_downloadingImages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downloadingImages;
}
constexpr void GlobalNamespace::NewMapsDisplay::__cordl_internal_set_downloadingImages(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___downloadingImages = value;
}
constexpr bool& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_downloadingImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downloadingImage;
}
constexpr bool const& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_downloadingImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downloadingImage;
}
constexpr void GlobalNamespace::NewMapsDisplay::__cordl_internal_set_downloadingImage(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___downloadingImage = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_lastDownloadedImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDownloadedImage;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_lastDownloadedImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDownloadedImage;
}
constexpr void GlobalNamespace::NewMapsDisplay::__cordl_internal_set_lastDownloadedImage(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastDownloadedImage = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_initCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_initCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initCoroutine;
}
constexpr void GlobalNamespace::NewMapsDisplay::__cordl_internal_set_initCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initCoroutine = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,::UnityW<::UnityEngine::Sprite>>*& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_cachedTextures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedTextures;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,::UnityW<::UnityEngine::Sprite>>* const& GlobalNamespace::NewMapsDisplay::__cordl_internal_get_cachedTextures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedTextures;
}
constexpr void GlobalNamespace::NewMapsDisplay::__cordl_internal_set_cachedTextures(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,::UnityW<::UnityEngine::Sprite>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedTextures = value;
}
inline void GlobalNamespace::NewMapsDisplay::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NewMapsDisplay::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NewMapsDisplay::OnUGCEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay*>(),
                        {"OnUGCEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NewMapsDisplay::OnUGCDisabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay*>(),
                        {"OnUGCDisabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::NewMapsDisplay::DelayedInitialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay*>(),
                        {"DelayedInitialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* GlobalNamespace::NewMapsDisplay::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline void GlobalNamespace::NewMapsDisplay::StartSlideshow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay*>(),
                        {"StartSlideshow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NewMapsDisplay::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NewMapsDisplay::UpdateSlideshow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay*>(),
                        {"UpdateSlideshow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NewMapsDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NewMapsDisplay::_Initialize_b__28_0(::UnityEngine::Texture2D*  loadedImage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay*>(),
                        {"<Initialize>b__28_0", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loadedImage);
}
inline ::GlobalNamespace::NewMapsDisplay* GlobalNamespace::NewMapsDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NewMapsDisplay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NewMapsDisplay::NewMapsDisplay()   {
}
//  Writing Method size for method: ::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::*)(int32_t)>(&::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59f3924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::*)()>(&::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59f3db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::*)()>(&::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x59f3db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::*)()>(&::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f3ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::*)()>(&::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59f3ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::*)()>(&::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f3efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::NewMapsDisplay>& GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::NewMapsDisplay> const& GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::NewMapsDisplay>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27* GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27::NewMapsDisplay__DelayedInitialize_d__27()   {
}
