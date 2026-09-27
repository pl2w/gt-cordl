#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/SceneGroupLoader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__SceneGroupLoader_def.hpp"
#include "Oculus/Interaction/Samples/zzzz__SampleSceneGroup_def.hpp"
#include "Oculus/Interaction/Samples/zzzz__SceneGroupLoader_def.hpp"
#include "Oculus/Interaction/Samples/zzzz__SceneLoader_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneGroupLoader.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SceneGroupLoader::*)()>(&::Oculus::Interaction::Samples::SceneGroupLoader::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa43f1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneGroupLoader.BuildSceneGroups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SceneGroupLoader::*)()>(&::Oculus::Interaction::Samples::SceneGroupLoader::BuildSceneGroups)> {
  constexpr static std::size_t size = 0xd2c;
  constexpr static std::size_t addrs = 0xa43f1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader*>(),
                        {"BuildSceneGroups", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneGroupLoader.LoadScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SceneGroupLoader::*)(::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*)>(&::Oculus::Interaction::Samples::SceneGroupLoader::LoadScene)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa4401b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader*>(),
                        {"LoadScene", {}, {::i2c::type_of<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneGroupLoader.CheckSceneExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*)>(&::Oculus::Interaction::Samples::SceneGroupLoader::CheckSceneExists)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa440100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader*>(),
                        {"CheckSceneExists", {}, {::i2c::type_of<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneGroupLoader.FindSceneGroupAssets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>>* (*)()>(&::Oculus::Interaction::Samples::SceneGroupLoader::FindSceneGroupAssets)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa43ff20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader*>(),
                        {"FindSceneGroupAssets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneGroupLoader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SceneGroupLoader::*)()>(&::Oculus::Interaction::Samples::SceneGroupLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4402fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneGroupLoader._BuildSceneGroups_g__InitializeGroupViewTemplate_12_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SceneGroupLoader::*)()>(&::Oculus::Interaction::Samples::SceneGroupLoader::_BuildSceneGroups_g__InitializeGroupViewTemplate_12_0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa43ff78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader*>(),
                        {"<BuildSceneGroups>g__InitializeGroupViewTemplate|12_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneGroupLoader._BuildSceneGroups_g__InitializeTileViewTemplate_12_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SceneGroupLoader::*)()>(&::Oculus::Interaction::Samples::SceneGroupLoader::_BuildSceneGroups_g__InitializeTileViewTemplate_12_1)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa44002c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader*>(),
                        {"<BuildSceneGroups>g__InitializeTileViewTemplate|12_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::Samples::SceneLoader>& Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_get__sceneLoader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneLoader;
}
constexpr ::UnityW<::Oculus::Interaction::Samples::SceneLoader> const& Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_get__sceneLoader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneLoader;
}
constexpr void Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_set__sceneLoader(::UnityW<::Oculus::Interaction::Samples::SceneLoader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sceneLoader = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_get__sceneGroupContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneGroupContainer;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_get__sceneGroupContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneGroupContainer;
}
constexpr void Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_set__sceneGroupContainer(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sceneGroupContainer = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_get__missingSceneWarning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____missingSceneWarning;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_get__missingSceneWarning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____missingSceneWarning;
}
constexpr void Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_set__missingSceneWarning(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____missingSceneWarning = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_get__groupTemplateParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupTemplateParent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_get__groupTemplateParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupTemplateParent;
}
constexpr void Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_set__groupTemplateParent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____groupTemplateParent = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_get__groupTemplateLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupTemplateLabel;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_get__groupTemplateLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupTemplateLabel;
}
constexpr void Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_set__groupTemplateLabel(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____groupTemplateLabel = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_get__groupTileContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupTileContainer;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_get__groupTileContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupTileContainer;
}
constexpr void Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_set__groupTileContainer(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____groupTileContainer = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_get__tileTemplateParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tileTemplateParent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_get__tileTemplateParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tileTemplateParent;
}
constexpr void Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_set__tileTemplateParent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tileTemplateParent = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_get__tileTemplateLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tileTemplateLabel;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_get__tileTemplateLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tileTemplateLabel;
}
constexpr void Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_set__tileTemplateLabel(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tileTemplateLabel = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_get__tileTemplateImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tileTemplateImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_get__tileTemplateImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tileTemplateImage;
}
constexpr void Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_set__tileTemplateImage(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tileTemplateImage = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_get__tileTemplateToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tileTemplateToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_get__tileTemplateToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tileTemplateToggle;
}
constexpr void Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_set__tileTemplateToggle(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tileTemplateToggle = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_get__tileTemplateSceneMissingOverlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tileTemplateSceneMissingOverlay;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_get__tileTemplateSceneMissingOverlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tileTemplateSceneMissingOverlay;
}
constexpr void Oculus::Interaction::Samples::SceneGroupLoader::__cordl_internal_set__tileTemplateSceneMissingOverlay(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tileTemplateSceneMissingOverlay = value;
}
inline void Oculus::Interaction::Samples::SceneGroupLoader::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::SceneGroupLoader::BuildSceneGroups()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader*>(),
                        {"BuildSceneGroups", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::SceneGroupLoader::LoadScene(::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*  sceneInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader*>(),
                        {"LoadScene", {}, {::i2c::type_of<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneInfo);
}
inline bool Oculus::Interaction::Samples::SceneGroupLoader::CheckSceneExists(::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*  sceneInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader*>(),
                        {"CheckSceneExists", {}, {::i2c::type_of<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sceneInfo);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>>* Oculus::Interaction::Samples::SceneGroupLoader::FindSceneGroupAssets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader*>(),
                        {"FindSceneGroupAssets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>>*>(nullptr, ___internal_method);
}
inline void Oculus::Interaction::Samples::SceneGroupLoader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::SceneGroupLoader::_BuildSceneGroups_g__InitializeGroupViewTemplate_12_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader*>(),
                        {"<BuildSceneGroups>g__InitializeGroupViewTemplate|12_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::SceneGroupLoader::_BuildSceneGroups_g__InitializeTileViewTemplate_12_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader*>(),
                        {"<BuildSceneGroups>g__InitializeTileViewTemplate|12_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::SceneGroupLoader* Oculus::Interaction::Samples::SceneGroupLoader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::SceneGroupLoader*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::SceneGroupLoader::SceneGroupLoader()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0::*)()>(&::Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa440024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0._BuildSceneGroups_b__5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0::*)(bool)>(&::Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0::_BuildSceneGroups_b__5)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa4403d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0*>(),
                        {"<BuildSceneGroups>b__5", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*& Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0::__cordl_internal_get_sceneMenuItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneMenuItem;
}
constexpr ::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo* const& Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0::__cordl_internal_get_sceneMenuItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneMenuItem;
}
constexpr void Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0::__cordl_internal_set_sceneMenuItem(::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneMenuItem = value;
}
constexpr ::UnityW<::Oculus::Interaction::Samples::SceneGroupLoader>& Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Oculus::Interaction::Samples::SceneGroupLoader> const& Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0::__cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::Samples::SceneGroupLoader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0::_BuildSceneGroups_b__5(bool  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0*>(),
                        {"<BuildSceneGroups>b__5", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline ::Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0* Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0::SceneGroupLoader___c__DisplayClass12_0()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneGroupLoader___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SceneGroupLoader___c::*)()>(&::Oculus::Interaction::Samples::SceneGroupLoader___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44037c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneGroupLoader___c._BuildSceneGroups_b__12_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Samples::SceneGroupLoader___c::*)(::Oculus::Interaction::Samples::SampleSceneGroup*)>(&::Oculus::Interaction::Samples::SceneGroupLoader___c::_BuildSceneGroups_b__12_2)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa440384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader___c*>(),
                        {"<BuildSceneGroups>b__12_2", {}, {::i2c::type_of<::Oculus::Interaction::Samples::SampleSceneGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneGroupLoader___c._BuildSceneGroups_b__12_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Samples::SceneGroupLoader___c::*)(::Oculus::Interaction::Samples::SampleSceneGroup*)>(&::Oculus::Interaction::Samples::SceneGroupLoader___c::_BuildSceneGroups_b__12_3)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa440398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader___c*>(),
                        {"<BuildSceneGroups>b__12_3", {}, {::i2c::type_of<::Oculus::Interaction::Samples::SampleSceneGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneGroupLoader___c._BuildSceneGroups_b__12_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Samples::SceneGroupLoader___c::*)(::Oculus::Interaction::Samples::SampleSceneGroup*)>(&::Oculus::Interaction::Samples::SceneGroupLoader___c::_BuildSceneGroups_b__12_4)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4403c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader___c*>(),
                        {"<BuildSceneGroups>b__12_4", {}, {::i2c::type_of<::Oculus::Interaction::Samples::SampleSceneGroup*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Samples::SceneGroupLoader___c::setStaticF___9(::Oculus::Interaction::Samples::SceneGroupLoader___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Samples::SceneGroupLoader___c*, "<>9", ::Oculus::Interaction::Samples::SceneGroupLoader___c*>(std::forward<::Oculus::Interaction::Samples::SceneGroupLoader___c*>(value));
}
inline ::Oculus::Interaction::Samples::SceneGroupLoader___c* Oculus::Interaction::Samples::SceneGroupLoader___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Samples::SceneGroupLoader___c*, "<>9", ::Oculus::Interaction::Samples::SceneGroupLoader___c*>();
}
inline void Oculus::Interaction::Samples::SceneGroupLoader___c::setStaticF___9__12_2(::System::Func_2<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>,bool>*, "<>9__12_2", ::Oculus::Interaction::Samples::SceneGroupLoader___c*>(std::forward<::System::Func_2<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>,bool>*>(value));
}
inline ::System::Func_2<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>,bool>* Oculus::Interaction::Samples::SceneGroupLoader___c::getStaticF___9__12_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>,bool>*, "<>9__12_2", ::Oculus::Interaction::Samples::SceneGroupLoader___c*>();
}
inline void Oculus::Interaction::Samples::SceneGroupLoader___c::setStaticF___9__12_3(::System::Func_2<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>,bool>*, "<>9__12_3", ::Oculus::Interaction::Samples::SceneGroupLoader___c*>(std::forward<::System::Func_2<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>,bool>*>(value));
}
inline ::System::Func_2<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>,bool>* Oculus::Interaction::Samples::SceneGroupLoader___c::getStaticF___9__12_3()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>,bool>*, "<>9__12_3", ::Oculus::Interaction::Samples::SceneGroupLoader___c*>();
}
inline void Oculus::Interaction::Samples::SceneGroupLoader___c::setStaticF___9__12_4(::System::Func_2<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>,int32_t>*, "<>9__12_4", ::Oculus::Interaction::Samples::SceneGroupLoader___c*>(std::forward<::System::Func_2<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>,int32_t>*>(value));
}
inline ::System::Func_2<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>,int32_t>* Oculus::Interaction::Samples::SceneGroupLoader___c::getStaticF___9__12_4()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>,int32_t>*, "<>9__12_4", ::Oculus::Interaction::Samples::SceneGroupLoader___c*>();
}
inline void Oculus::Interaction::Samples::SceneGroupLoader___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Samples::SceneGroupLoader___c::_BuildSceneGroups_b__12_2(::Oculus::Interaction::Samples::SampleSceneGroup*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader___c*>(),
                        {"<BuildSceneGroups>b__12_2", {}, {::i2c::type_of<::Oculus::Interaction::Samples::SampleSceneGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool Oculus::Interaction::Samples::SceneGroupLoader___c::_BuildSceneGroups_b__12_3(::Oculus::Interaction::Samples::SampleSceneGroup*  g)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader___c*>(),
                        {"<BuildSceneGroups>b__12_3", {}, {::i2c::type_of<::Oculus::Interaction::Samples::SampleSceneGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, g);
}
inline int32_t Oculus::Interaction::Samples::SceneGroupLoader___c::_BuildSceneGroups_b__12_4(::Oculus::Interaction::Samples::SampleSceneGroup*  g)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader___c*>(),
                        {"<BuildSceneGroups>b__12_4", {}, {::i2c::type_of<::Oculus::Interaction::Samples::SampleSceneGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, g);
}
inline ::Oculus::Interaction::Samples::SceneGroupLoader___c* Oculus::Interaction::Samples::SceneGroupLoader___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::SceneGroupLoader___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::SceneGroupLoader___c::SceneGroupLoader___c()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView::*)()>(&::Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44030c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView::__cordl_internal_get_Label()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Label;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView::__cordl_internal_get_Label() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Label;
}
constexpr void Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView::__cordl_internal_set_Label(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Label = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView::__cordl_internal_get_Image()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Image;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView::__cordl_internal_get_Image() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Image;
}
constexpr void Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView::__cordl_internal_set_Image(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Image = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView::__cordl_internal_get_Toggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Toggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView::__cordl_internal_get_Toggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Toggle;
}
constexpr void Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView::__cordl_internal_set_Toggle(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Toggle = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView::__cordl_internal_get_SceneMissingOverlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneMissingOverlay;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView::__cordl_internal_get_SceneMissingOverlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneMissingOverlay;
}
constexpr void Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView::__cordl_internal_set_SceneMissingOverlay(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SceneMissingOverlay = value;
}
inline void Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView* Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView::SceneGroupLoader_SceneTileView()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneGroupLoader_SceneGroupView._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SceneGroupLoader_SceneGroupView::*)()>(&::Oculus::Interaction::Samples::SceneGroupLoader_SceneGroupView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa440304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader_SceneGroupView*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& Oculus::Interaction::Samples::SceneGroupLoader_SceneGroupView::__cordl_internal_get_GroupName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupName;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& Oculus::Interaction::Samples::SceneGroupLoader_SceneGroupView::__cordl_internal_get_GroupName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupName;
}
constexpr void Oculus::Interaction::Samples::SceneGroupLoader_SceneGroupView::__cordl_internal_set_GroupName(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GroupName = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Oculus::Interaction::Samples::SceneGroupLoader_SceneGroupView::__cordl_internal_get_TileContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TileContainer;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Oculus::Interaction::Samples::SceneGroupLoader_SceneGroupView::__cordl_internal_get_TileContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TileContainer;
}
constexpr void Oculus::Interaction::Samples::SceneGroupLoader_SceneGroupView::__cordl_internal_set_TileContainer(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TileContainer = value;
}
inline void Oculus::Interaction::Samples::SceneGroupLoader_SceneGroupView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneGroupLoader_SceneGroupView*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::SceneGroupLoader_SceneGroupView* Oculus::Interaction::Samples::SceneGroupLoader_SceneGroupView::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::SceneGroupLoader_SceneGroupView*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::SceneGroupLoader_SceneGroupView::SceneGroupLoader_SceneGroupView()   {
}
