#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/SceneGroupLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SceneGroupLoader)
namespace Oculus::Interaction::Samples {
class SampleSceneGroup_ISceneInfo;
}
namespace Oculus::Interaction::Samples {
class SampleSceneGroup;
}
namespace Oculus::Interaction::Samples {
class SceneGroupLoader_SceneGroupView;
}
namespace Oculus::Interaction::Samples {
class SceneGroupLoader_SceneTileView;
}
namespace Oculus::Interaction::Samples {
class SceneGroupLoader___c;
}
namespace Oculus::Interaction::Samples {
class SceneGroupLoader___c__DisplayClass12_0;
}
namespace Oculus::Interaction::Samples {
class SceneLoader;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class SceneGroupLoader;
}
namespace Oculus::Interaction::Samples {
class SceneGroupLoader_SceneGroupView;
}
namespace Oculus::Interaction::Samples {
class SceneGroupLoader_SceneTileView;
}
namespace Oculus::Interaction::Samples {
class SceneGroupLoader___c;
}
namespace Oculus::Interaction::Samples {
class SceneGroupLoader___c__DisplayClass12_0;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::SceneGroupLoader*);
MARK_REF_T(::Oculus::Interaction::Samples::SceneGroupLoader_SceneGroupView*);
MARK_REF_T(::Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView*);
MARK_REF_T(::Oculus::Interaction::Samples::SceneGroupLoader___c*);
MARK_REF_T(::Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::SceneGroupLoader*, "Oculus.Interaction.Samples", "SceneGroupLoader");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::SceneGroupLoader_SceneGroupView*, "Oculus.Interaction.Samples", "SceneGroupLoader/SceneGroupView");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView*, "Oculus.Interaction.Samples", "SceneGroupLoader/SceneTileView");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::SceneGroupLoader___c*, "Oculus.Interaction.Samples", "SceneGroupLoader/<>c");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0*, "Oculus.Interaction.Samples", "SceneGroupLoader/<>c__DisplayClass12_0");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.SceneGroupLoader
class CORDL_TYPE SceneGroupLoader : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SceneGroupView = ::Oculus::Interaction::Samples::SceneGroupLoader_SceneGroupView;

using SceneTileView = ::Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView;

using __c = ::Oculus::Interaction::Samples::SceneGroupLoader___c;

using __c__DisplayClass12_0 = ::Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0;

/// @brief Field _groupTemplateLabel, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__groupTemplateLabel, put=__cordl_internal_set__groupTemplateLabel)) ::UnityW<::TMPro::TextMeshProUGUI>  _groupTemplateLabel;

/// @brief Field _groupTemplateParent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__groupTemplateParent, put=__cordl_internal_set__groupTemplateParent)) ::UnityW<::UnityEngine::GameObject>  _groupTemplateParent;

/// @brief Field _groupTileContainer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__groupTileContainer, put=__cordl_internal_set__groupTileContainer)) ::UnityW<::UnityEngine::RectTransform>  _groupTileContainer;

/// @brief Field _missingSceneWarning, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__missingSceneWarning, put=__cordl_internal_set__missingSceneWarning)) ::UnityW<::UnityEngine::GameObject>  _missingSceneWarning;

/// @brief Field _sceneGroupContainer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__sceneGroupContainer, put=__cordl_internal_set__sceneGroupContainer)) ::UnityW<::UnityEngine::Transform>  _sceneGroupContainer;

/// @brief Field _sceneLoader, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__sceneLoader, put=__cordl_internal_set__sceneLoader)) ::UnityW<::Oculus::Interaction::Samples::SceneLoader>  _sceneLoader;

/// @brief Field _tileTemplateImage, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__tileTemplateImage, put=__cordl_internal_set__tileTemplateImage)) ::UnityW<::UnityEngine::UI::Image>  _tileTemplateImage;

/// @brief Field _tileTemplateLabel, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__tileTemplateLabel, put=__cordl_internal_set__tileTemplateLabel)) ::UnityW<::TMPro::TextMeshProUGUI>  _tileTemplateLabel;

/// @brief Field _tileTemplateParent, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__tileTemplateParent, put=__cordl_internal_set__tileTemplateParent)) ::UnityW<::UnityEngine::GameObject>  _tileTemplateParent;

/// @brief Field _tileTemplateSceneMissingOverlay, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__tileTemplateSceneMissingOverlay, put=__cordl_internal_set__tileTemplateSceneMissingOverlay)) ::UnityW<::UnityEngine::UI::Image>  _tileTemplateSceneMissingOverlay;

/// @brief Field _tileTemplateToggle, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__tileTemplateToggle, put=__cordl_internal_set__tileTemplateToggle)) ::UnityW<::UnityEngine::UI::Toggle>  _tileTemplateToggle;

/// @brief Method BuildSceneGroups, addr 0xa43f1f4, size 0xd2c, virtual false, abstract: false, final false
inline void BuildSceneGroups() ;

/// @brief Method CheckSceneExists, addr 0xa440100, size 0xb4, virtual false, abstract: false, final false
static inline bool CheckSceneExists(::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*  sceneInfo) ;

/// @brief Method FindSceneGroupAssets, addr 0xa43ff20, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>>* FindSceneGroupAssets() ;

/// @brief Method LoadScene, addr 0xa4401b4, size 0xb8, virtual false, abstract: false, final false
inline void LoadScene(::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*  sceneInfo) ;

static inline ::Oculus::Interaction::Samples::SceneGroupLoader* New_ctor() ;

/// @brief Method Start, addr 0xa43f1f0, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// [CompilerGenerated]
/// @brief Method <BuildSceneGroups>g__InitializeGroupViewTemplate|12_0, addr 0xa43ff78, size 0xac, virtual false, abstract: false, final false
inline void _BuildSceneGroups_g__InitializeGroupViewTemplate_12_0() ;

/// [CompilerGenerated]
/// @brief Method <BuildSceneGroups>g__InitializeTileViewTemplate|12_1, addr 0xa44002c, size 0xd4, virtual false, abstract: false, final false
inline void _BuildSceneGroups_g__InitializeTileViewTemplate_12_1() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__groupTemplateLabel() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__groupTemplateLabel() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__groupTemplateParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__groupTemplateParent() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__groupTileContainer() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__groupTileContainer() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__missingSceneWarning() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__missingSceneWarning() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__sceneGroupContainer() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__sceneGroupContainer() ;

constexpr ::UnityW<::Oculus::Interaction::Samples::SceneLoader> const& __cordl_internal_get__sceneLoader() const;

constexpr ::UnityW<::Oculus::Interaction::Samples::SceneLoader>& __cordl_internal_get__sceneLoader() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__tileTemplateImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__tileTemplateImage() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__tileTemplateLabel() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__tileTemplateLabel() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__tileTemplateParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__tileTemplateParent() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__tileTemplateSceneMissingOverlay() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__tileTemplateSceneMissingOverlay() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__tileTemplateToggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__tileTemplateToggle() ;

constexpr void __cordl_internal_set__groupTemplateLabel(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set__groupTemplateParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__groupTileContainer(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__missingSceneWarning(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__sceneGroupContainer(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__sceneLoader(::UnityW<::Oculus::Interaction::Samples::SceneLoader>  value) ;

constexpr void __cordl_internal_set__tileTemplateImage(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__tileTemplateLabel(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set__tileTemplateParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__tileTemplateSceneMissingOverlay(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__tileTemplateToggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

/// @brief Method .ctor, addr 0xa4402fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneGroupLoader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneGroupLoader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneGroupLoader(SceneGroupLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneGroupLoader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneGroupLoader(SceneGroupLoader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28343};

/// [SerializeField]
/// @brief Field _sceneLoader, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Samples::SceneLoader>  ____sceneLoader;

/// [SerializeField]
/// @brief Field _sceneGroupContainer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____sceneGroupContainer;

/// [SerializeField]
/// @brief Field _missingSceneWarning, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____missingSceneWarning;

/// [Header("Group Template")]
/// [SerializeField]
/// @brief Field _groupTemplateParent, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____groupTemplateParent;

/// [SerializeField]
/// @brief Field _groupTemplateLabel, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ____groupTemplateLabel;

/// [SerializeField]
/// @brief Field _groupTileContainer, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____groupTileContainer;

/// [Header("Tile Template")]
/// [SerializeField]
/// @brief Field _tileTemplateParent, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____tileTemplateParent;

/// [SerializeField]
/// @brief Field _tileTemplateLabel, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ____tileTemplateLabel;

/// [SerializeField]
/// @brief Field _tileTemplateImage, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____tileTemplateImage;

/// [SerializeField]
/// @brief Field _tileTemplateToggle, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____tileTemplateToggle;

/// [SerializeField]
/// @brief Field _tileTemplateSceneMissingOverlay, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____tileTemplateSceneMissingOverlay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::SceneGroupLoader, ____sceneLoader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SceneGroupLoader, ____sceneGroupContainer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SceneGroupLoader, ____missingSceneWarning) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SceneGroupLoader, ____groupTemplateParent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SceneGroupLoader, ____groupTemplateLabel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SceneGroupLoader, ____groupTileContainer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SceneGroupLoader, ____tileTemplateParent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SceneGroupLoader, ____tileTemplateLabel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SceneGroupLoader, ____tileTemplateImage) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SceneGroupLoader, ____tileTemplateToggle) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SceneGroupLoader, ____tileTemplateSceneMissingOverlay) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::SceneGroupLoader) == 0x78, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.SceneGroupLoader/<>c__DisplayClass12_0
class CORDL_TYPE SceneGroupLoader___c__DisplayClass12_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Interaction::Samples::SceneGroupLoader>  __4__this;

/// @brief Field sceneMenuItem, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneMenuItem, put=__cordl_internal_set_sceneMenuItem)) ::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*  sceneMenuItem;

static inline ::Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0* New_ctor() ;

/// @brief Method <BuildSceneGroups>b__5, addr 0xa4403d4, size 0x1c, virtual false, abstract: false, final false
inline void _BuildSceneGroups_b__5(bool  v) ;

constexpr ::UnityW<::Oculus::Interaction::Samples::SceneGroupLoader> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Interaction::Samples::SceneGroupLoader>& __cordl_internal_get___4__this() ;

constexpr ::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo* const& __cordl_internal_get_sceneMenuItem() const;

constexpr ::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*& __cordl_internal_get_sceneMenuItem() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::Samples::SceneGroupLoader>  value) ;

constexpr void __cordl_internal_set_sceneMenuItem(::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*  value) ;

/// @brief Method .ctor, addr 0xa440024, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneGroupLoader___c__DisplayClass12_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneGroupLoader___c__DisplayClass12_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneGroupLoader___c__DisplayClass12_0(SceneGroupLoader___c__DisplayClass12_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneGroupLoader___c__DisplayClass12_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneGroupLoader___c__DisplayClass12_0(SceneGroupLoader___c__DisplayClass12_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28342};

/// @brief Field sceneMenuItem, offset: 0x10, size: 0x8, def value: None
 ::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*  ___sceneMenuItem;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Samples::SceneGroupLoader>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0, ___sceneMenuItem) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::SceneGroupLoader___c__DisplayClass12_0) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.SceneGroupLoader/<>c
class CORDL_TYPE SceneGroupLoader___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Samples::SceneGroupLoader___c*  __9;

/// @brief Field <>9__12_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_2, put=setStaticF___9__12_2)) ::System::Func_2<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>,bool>*  __9__12_2;

/// @brief Field <>9__12_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_3, put=setStaticF___9__12_3)) ::System::Func_2<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>,bool>*  __9__12_3;

/// @brief Field <>9__12_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_4, put=setStaticF___9__12_4)) ::System::Func_2<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>,int32_t>*  __9__12_4;

static inline ::Oculus::Interaction::Samples::SceneGroupLoader___c* New_ctor() ;

/// @brief Method <BuildSceneGroups>b__12_2, addr 0xa440384, size 0x14, virtual false, abstract: false, final false
inline bool _BuildSceneGroups_b__12_2(::Oculus::Interaction::Samples::SampleSceneGroup*  x) ;

/// @brief Method <BuildSceneGroups>b__12_3, addr 0xa440398, size 0x28, virtual false, abstract: false, final false
inline bool _BuildSceneGroups_b__12_3(::Oculus::Interaction::Samples::SampleSceneGroup*  g) ;

/// @brief Method <BuildSceneGroups>b__12_4, addr 0xa4403c0, size 0x14, virtual false, abstract: false, final false
inline int32_t _BuildSceneGroups_b__12_4(::Oculus::Interaction::Samples::SampleSceneGroup*  g) ;

/// @brief Method .ctor, addr 0xa44037c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Samples::SceneGroupLoader___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>,bool>* getStaticF___9__12_2() ;

static inline ::System::Func_2<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>,bool>* getStaticF___9__12_3() ;

static inline ::System::Func_2<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>,int32_t>* getStaticF___9__12_4() ;

static inline void setStaticF___9(::Oculus::Interaction::Samples::SceneGroupLoader___c*  value) ;

static inline void setStaticF___9__12_2(::System::Func_2<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>,bool>*  value) ;

static inline void setStaticF___9__12_3(::System::Func_2<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>,bool>*  value) ;

static inline void setStaticF___9__12_4(::System::Func_2<::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneGroupLoader___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneGroupLoader___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneGroupLoader___c(SceneGroupLoader___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneGroupLoader___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneGroupLoader___c(SceneGroupLoader___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28341};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Samples::SceneGroupLoader___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.SceneGroupLoader/SceneTileView
class CORDL_TYPE SceneGroupLoader_SceneTileView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Image, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Image, put=__cordl_internal_set_Image)) ::UnityW<::UnityEngine::UI::Image>  Image;

/// @brief Field Label, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Label, put=__cordl_internal_set_Label)) ::UnityW<::TMPro::TextMeshProUGUI>  Label;

/// @brief Field SceneMissingOverlay, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_SceneMissingOverlay, put=__cordl_internal_set_SceneMissingOverlay)) ::UnityW<::UnityEngine::UI::Image>  SceneMissingOverlay;

/// @brief Field Toggle, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Toggle, put=__cordl_internal_set_Toggle)) ::UnityW<::UnityEngine::UI::Toggle>  Toggle;

static inline ::Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView* New_ctor() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_Image() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_Image() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_Label() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_Label() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_SceneMissingOverlay() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_SceneMissingOverlay() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get_Toggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get_Toggle() ;

constexpr void __cordl_internal_set_Image(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_Label(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_SceneMissingOverlay(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_Toggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

/// @brief Method .ctor, addr 0xa44030c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneGroupLoader_SceneTileView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneGroupLoader_SceneTileView", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneGroupLoader_SceneTileView(SceneGroupLoader_SceneTileView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneGroupLoader_SceneTileView", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneGroupLoader_SceneTileView(SceneGroupLoader_SceneTileView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28340};

/// @brief Field Label, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___Label;

/// @brief Field Image, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___Image;

/// @brief Field Toggle, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ___Toggle;

/// @brief Field SceneMissingOverlay, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___SceneMissingOverlay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView, ___Label) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView, ___Image) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView, ___Toggle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView, ___SceneMissingOverlay) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::SceneGroupLoader_SceneTileView) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.SceneGroupLoader/SceneGroupView
class CORDL_TYPE SceneGroupLoader_SceneGroupView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field GroupName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_GroupName, put=__cordl_internal_set_GroupName)) ::UnityW<::TMPro::TextMeshProUGUI>  GroupName;

/// @brief Field TileContainer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TileContainer, put=__cordl_internal_set_TileContainer)) ::UnityW<::UnityEngine::RectTransform>  TileContainer;

static inline ::Oculus::Interaction::Samples::SceneGroupLoader_SceneGroupView* New_ctor() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_GroupName() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_GroupName() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_TileContainer() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_TileContainer() ;

constexpr void __cordl_internal_set_GroupName(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_TileContainer(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0xa440304, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneGroupLoader_SceneGroupView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneGroupLoader_SceneGroupView", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneGroupLoader_SceneGroupView(SceneGroupLoader_SceneGroupView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneGroupLoader_SceneGroupView", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneGroupLoader_SceneGroupView(SceneGroupLoader_SceneGroupView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28339};

/// @brief Field GroupName, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___GroupName;

/// @brief Field TileContainer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___TileContainer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::SceneGroupLoader_SceneGroupView, ___GroupName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SceneGroupLoader_SceneGroupView, ___TileContainer) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::SceneGroupLoader_SceneGroupView) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
