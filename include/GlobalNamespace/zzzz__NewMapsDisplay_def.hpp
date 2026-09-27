#pragma once
// IWYU pragma private; include "GlobalNamespace/NewMapsDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Mods/zzzz__ModId_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NewMapsDisplay)
namespace GlobalNamespace {
struct NewMapsDisplay_NewMapData;
}
namespace GlobalNamespace {
class NewMapsDisplay__DelayedInitialize_d__27;
}
namespace GlobalNamespace {
struct NewMapsDisplay__Initialize_d__28;
}
namespace Modio::Images {
template<typename TImage>
class LazyImage_1;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio {
class Error;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class NewMapsDisplay;
}
namespace GlobalNamespace {
class NewMapsDisplay__DelayedInitialize_d__27;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NewMapsDisplay*);
MARK_REF_T(::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NewMapsDisplay*, "", "NewMapsDisplay");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27*, "", "NewMapsDisplay/<DelayedInitialize>d__27");
// Dependencies Modio.Mods.ModId, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NewMapsDisplay
class CORDL_TYPE NewMapsDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using NewMapData = ::GlobalNamespace::NewMapsDisplay_NewMapData;

using _DelayedInitialize_d__27 = ::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27;

using _Initialize_d__28 = ::GlobalNamespace::NewMapsDisplay__Initialize_d__28;

/// @brief Field cachedTextures, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedTextures, put=__cordl_internal_set_cachedTextures)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,::UnityW<::UnityEngine::Sprite>>*  cachedTextures;

/// @brief Field downloadingImage, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_downloadingImage, put=__cordl_internal_set_downloadingImage)) bool  downloadingImage;

/// @brief Field downloadingImages, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_downloadingImages, put=__cordl_internal_set_downloadingImages)) bool  downloadingImages;

/// @brief Field initCoroutine, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_initCoroutine, put=__cordl_internal_set_initCoroutine)) ::UnityEngine::Coroutine*  initCoroutine;

/// @brief Field lastDownloadedImage, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastDownloadedImage, put=__cordl_internal_set_lastDownloadedImage)) ::UnityW<::UnityEngine::Texture2D>  lastDownloadedImage;

/// @brief Field lastSlideshowUpdate, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastSlideshowUpdate, put=__cordl_internal_set_lastSlideshowUpdate)) float_t  lastSlideshowUpdate;

/// @brief Field lazyImage, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_lazyImage, put=__cordl_internal_set_lazyImage)) ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*  lazyImage;

/// @brief Field loadingString, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadingString, put=__cordl_internal_set_loadingString)) ::StringW  loadingString;

/// @brief Field loadingText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadingText, put=__cordl_internal_set_loadingText)) ::UnityW<::TMPro::TMP_Text>  loadingText;

/// @brief Field mapImage, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapImage, put=__cordl_internal_set_mapImage)) ::UnityW<::UnityEngine::SpriteRenderer>  mapImage;

/// @brief Field mapInfoTMP, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapInfoTMP, put=__cordl_internal_set_mapInfoTMP)) ::UnityW<::TMPro::TMP_Text>  mapInfoTMP;

/// @brief Field modCreatorLabelText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_modCreatorLabelText, put=__cordl_internal_set_modCreatorLabelText)) ::UnityW<::TMPro::TMP_Text>  modCreatorLabelText;

/// @brief Field modCreatorText, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_modCreatorText, put=__cordl_internal_set_modCreatorText)) ::UnityW<::TMPro::TMP_Text>  modCreatorText;

/// @brief Field modNameText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_modNameText, put=__cordl_internal_set_modNameText)) ::UnityW<::TMPro::TMP_Text>  modNameText;

/// @brief Field newMapDatas, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_newMapDatas, put=__cordl_internal_set_newMapDatas)) ::System::Collections::Generic::List_1<::GlobalNamespace::NewMapsDisplay_NewMapData>*  newMapDatas;

/// @brief Field newMapsModId, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_newMapsModId, put=__cordl_internal_set_newMapsModId)) ::Modio::Mods::ModId  newMapsModId;

/// @brief Field newMapsModProfile, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_newMapsModProfile, put=__cordl_internal_set_newMapsModProfile)) ::Modio::Mods::Mod*  newMapsModProfile;

/// @brief Field requestingNewMapsModProfile, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_requestingNewMapsModProfile, put=__cordl_internal_set_requestingNewMapsModProfile)) bool  requestingNewMapsModProfile;

/// @brief Field slideshowActive, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_slideshowActive, put=__cordl_internal_set_slideshowActive)) bool  slideshowActive;

/// @brief Field slideshowIndex, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_slideshowIndex, put=__cordl_internal_set_slideshowIndex)) int32_t  slideshowIndex;

/// @brief Field slideshowUpdateInterval, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_slideshowUpdateInterval, put=__cordl_internal_set_slideshowUpdateInterval)) float_t  slideshowUpdateInterval;

/// @brief Field ugcDisabledString, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_ugcDisabledString, put=__cordl_internal_set_ugcDisabledString)) ::StringW  ugcDisabledString;

/// [IteratorStateMachine(typeof(NewMapsDisplay::<DelayedInitialize>d__27))]
/// @brief Method DelayedInitialize, addr 0x59f33a4, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DelayedInitialize() ;

/// [AsyncStateMachine(typeof(NewMapsDisplay::<Initialize>d__28))]
/// @brief Method Initialize, addr 0x59f3410, size 0x10c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Initialize() ;

static inline ::GlobalNamespace::NewMapsDisplay* New_ctor() ;

/// @brief Method OnDisable, addr 0x59f351c, size 0x1e8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x59f3164, size 0x240, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnUGCDisabled, addr 0x59f384c, size 0xd8, virtual false, abstract: false, final false
inline void OnUGCDisabled() ;

/// @brief Method OnUGCEnabled, addr 0x59f3704, size 0x148, virtual false, abstract: false, final false
inline void OnUGCEnabled() ;

/// @brief Method StartSlideshow, addr 0x59f394c, size 0x84, virtual false, abstract: false, final false
inline void StartSlideshow() ;

/// @brief Method Update, addr 0x59f3c20, size 0x40, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateSlideshow, addr 0x59f39d0, size 0x250, virtual false, abstract: false, final false
inline void UpdateSlideshow() ;

/// [CompilerGenerated]
/// @brief Method <Initialize>b__28_0, addr 0x59f3da4, size 0xc, virtual false, abstract: false, final false
inline void _Initialize_b__28_0(::UnityEngine::Texture2D*  loadedImage) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,::UnityW<::UnityEngine::Sprite>>* const& __cordl_internal_get_cachedTextures() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,::UnityW<::UnityEngine::Sprite>>*& __cordl_internal_get_cachedTextures() ;

constexpr bool const& __cordl_internal_get_downloadingImage() const;

constexpr bool& __cordl_internal_get_downloadingImage() ;

constexpr bool const& __cordl_internal_get_downloadingImages() const;

constexpr bool& __cordl_internal_get_downloadingImages() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_initCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_initCoroutine() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_lastDownloadedImage() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_lastDownloadedImage() ;

constexpr float_t const& __cordl_internal_get_lastSlideshowUpdate() const;

constexpr float_t& __cordl_internal_get_lastSlideshowUpdate() ;

constexpr ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_lazyImage() const;

constexpr ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_lazyImage() ;

constexpr ::StringW const& __cordl_internal_get_loadingString() const;

constexpr ::StringW& __cordl_internal_get_loadingString() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_loadingText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_loadingText() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get_mapImage() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get_mapImage() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_mapInfoTMP() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_mapInfoTMP() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_modCreatorLabelText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_modCreatorLabelText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_modCreatorText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_modCreatorText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_modNameText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_modNameText() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NewMapsDisplay_NewMapData>* const& __cordl_internal_get_newMapDatas() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NewMapsDisplay_NewMapData>*& __cordl_internal_get_newMapDatas() ;

constexpr ::Modio::Mods::ModId const& __cordl_internal_get_newMapsModId() const;

constexpr ::Modio::Mods::ModId& __cordl_internal_get_newMapsModId() ;

constexpr ::Modio::Mods::Mod* const& __cordl_internal_get_newMapsModProfile() const;

constexpr ::Modio::Mods::Mod*& __cordl_internal_get_newMapsModProfile() ;

constexpr bool const& __cordl_internal_get_requestingNewMapsModProfile() const;

constexpr bool& __cordl_internal_get_requestingNewMapsModProfile() ;

constexpr bool const& __cordl_internal_get_slideshowActive() const;

constexpr bool& __cordl_internal_get_slideshowActive() ;

constexpr int32_t const& __cordl_internal_get_slideshowIndex() const;

constexpr int32_t& __cordl_internal_get_slideshowIndex() ;

constexpr float_t const& __cordl_internal_get_slideshowUpdateInterval() const;

constexpr float_t& __cordl_internal_get_slideshowUpdateInterval() ;

constexpr ::StringW const& __cordl_internal_get_ugcDisabledString() const;

constexpr ::StringW& __cordl_internal_get_ugcDisabledString() ;

constexpr void __cordl_internal_set_cachedTextures(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,::UnityW<::UnityEngine::Sprite>>*  value) ;

constexpr void __cordl_internal_set_downloadingImage(bool  value) ;

constexpr void __cordl_internal_set_downloadingImages(bool  value) ;

constexpr void __cordl_internal_set_initCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_lastDownloadedImage(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_lastSlideshowUpdate(float_t  value) ;

constexpr void __cordl_internal_set_lazyImage(::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set_loadingString(::StringW  value) ;

constexpr void __cordl_internal_set_loadingText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_mapImage(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set_mapInfoTMP(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_modCreatorLabelText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_modCreatorText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_modNameText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_newMapDatas(::System::Collections::Generic::List_1<::GlobalNamespace::NewMapsDisplay_NewMapData>*  value) ;

constexpr void __cordl_internal_set_newMapsModId(::Modio::Mods::ModId  value) ;

constexpr void __cordl_internal_set_newMapsModProfile(::Modio::Mods::Mod*  value) ;

constexpr void __cordl_internal_set_requestingNewMapsModProfile(bool  value) ;

constexpr void __cordl_internal_set_slideshowActive(bool  value) ;

constexpr void __cordl_internal_set_slideshowIndex(int32_t  value) ;

constexpr void __cordl_internal_set_slideshowUpdateInterval(float_t  value) ;

constexpr void __cordl_internal_set_ugcDisabledString(::StringW  value) ;

/// @brief Method .ctor, addr 0x59f3c60, size 0x144, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NewMapsDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NewMapsDisplay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NewMapsDisplay(NewMapsDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NewMapsDisplay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NewMapsDisplay(NewMapsDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2733};

/// [SerializeField]
/// @brief Field mapImage, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ___mapImage;

/// [SerializeField]
/// @brief Field loadingText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___loadingText;

/// [Tooltip("DEPRECATED")]
/// [SerializeField]
/// @brief Field modNameText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___modNameText;

/// [Tooltip("DEPRECATED")]
/// [SerializeField]
/// @brief Field modCreatorLabelText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___modCreatorLabelText;

/// [Tooltip("DEPRECATED")]
/// [SerializeField]
/// @brief Field modCreatorText, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___modCreatorText;

/// [SerializeField]
/// @brief Field mapInfoTMP, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___mapInfoTMP;

/// [SerializeField]
/// @brief Field slideshowUpdateInterval, offset: 0x50, size: 0x4, def value: None
 float_t  ___slideshowUpdateInterval;

/// [SerializeField]
/// @brief Field loadingString, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___loadingString;

/// [SerializeField]
/// @brief Field ugcDisabledString, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___ugcDisabledString;

/// @brief Field newMapsModId, offset: 0x68, size: 0x8, def value: None
 ::Modio::Mods::ModId  ___newMapsModId;

/// @brief Field newMapsModProfile, offset: 0x70, size: 0x8, def value: None
 ::Modio::Mods::Mod*  ___newMapsModProfile;

/// @brief Field newMapDatas, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::NewMapsDisplay_NewMapData>*  ___newMapDatas;

/// @brief Field slideshowActive, offset: 0x80, size: 0x1, def value: None
 bool  ___slideshowActive;

/// @brief Field slideshowIndex, offset: 0x84, size: 0x4, def value: None
 int32_t  ___slideshowIndex;

/// @brief Field lastSlideshowUpdate, offset: 0x88, size: 0x4, def value: None
 float_t  ___lastSlideshowUpdate;

/// @brief Field requestingNewMapsModProfile, offset: 0x8c, size: 0x1, def value: None
 bool  ___requestingNewMapsModProfile;

/// @brief Field lazyImage, offset: 0x90, size: 0x8, def value: None
 ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*  ___lazyImage;

/// @brief Field downloadingImages, offset: 0x98, size: 0x1, def value: None
 bool  ___downloadingImages;

/// @brief Field downloadingImage, offset: 0x99, size: 0x1, def value: None
 bool  ___downloadingImage;

/// @brief Field lastDownloadedImage, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___lastDownloadedImage;

/// @brief Field initCoroutine, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___initCoroutine;

/// @brief Field cachedTextures, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,::UnityW<::UnityEngine::Sprite>>*  ___cachedTextures;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NewMapsDisplay, ___mapImage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewMapsDisplay, ___loadingText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewMapsDisplay, ___modNameText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewMapsDisplay, ___modCreatorLabelText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewMapsDisplay, ___modCreatorText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewMapsDisplay, ___mapInfoTMP) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewMapsDisplay, ___slideshowUpdateInterval) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewMapsDisplay, ___loadingString) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewMapsDisplay, ___ugcDisabledString) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewMapsDisplay, ___newMapsModId) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewMapsDisplay, ___newMapsModProfile) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewMapsDisplay, ___newMapDatas) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewMapsDisplay, ___slideshowActive) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewMapsDisplay, ___slideshowIndex) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewMapsDisplay, ___lastSlideshowUpdate) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewMapsDisplay, ___requestingNewMapsModProfile) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewMapsDisplay, ___lazyImage) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewMapsDisplay, ___downloadingImages) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewMapsDisplay, ___downloadingImage) == 0x99, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewMapsDisplay, ___lastDownloadedImage) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewMapsDisplay, ___initCoroutine) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewMapsDisplay, ___cachedTextures) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NewMapsDisplay) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NewMapsDisplay/<DelayedInitialize>d__27
class CORDL_TYPE NewMapsDisplay__DelayedInitialize_d__27 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::NewMapsDisplay>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59f3db4, size 0x108, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59f3ebc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59f3ec4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59f3efc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59f3db0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::NewMapsDisplay> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::NewMapsDisplay>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::NewMapsDisplay>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59f3924, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NewMapsDisplay__DelayedInitialize_d__27() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NewMapsDisplay__DelayedInitialize_d__27", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NewMapsDisplay__DelayedInitialize_d__27(NewMapsDisplay__DelayedInitialize_d__27 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NewMapsDisplay__DelayedInitialize_d__27", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NewMapsDisplay__DelayedInitialize_d__27(NewMapsDisplay__DelayedInitialize_d__27 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2731};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NewMapsDisplay>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NewMapsDisplay__DelayedInitialize_d__27) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
