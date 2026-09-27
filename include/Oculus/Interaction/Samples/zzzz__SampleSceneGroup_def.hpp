#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/SampleSceneGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SampleSceneGroup)
namespace Oculus::Interaction::Samples {
class SampleSceneGroup_ISceneInfo;
}
namespace Oculus::Interaction::Samples {
class SampleSceneGroup_SceneInfo;
}
namespace Oculus::Interaction::Samples {
class SampleSceneGroup__GetScenes_d__14;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class SampleSceneGroup;
}
namespace Oculus::Interaction::Samples {
class SampleSceneGroup_ISceneInfo;
}
namespace Oculus::Interaction::Samples {
class SampleSceneGroup_SceneInfo;
}
namespace Oculus::Interaction::Samples {
class SampleSceneGroup__GetScenes_d__14;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::SampleSceneGroup*);
MARK_REF_T(::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*);
MARK_REF_T(::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*);
MARK_REF_T(::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::SampleSceneGroup*, "Oculus.Interaction.Samples", "SampleSceneGroup");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*, "Oculus.Interaction.Samples", "SampleSceneGroup/ISceneInfo");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*, "Oculus.Interaction.Samples", "SampleSceneGroup/SceneInfo");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14*, "Oculus.Interaction.Samples", "SampleSceneGroup/<GetScenes>d__14");
// [CreateAssetMenu(menuName = "Meta/Interaction/SDK/Scene Group")]
// Dependencies Oculus.Interaction.Samples.SampleSceneGroup::SceneInfo, UnityEngine.ScriptableObject
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.SampleSceneGroup
class CORDL_TYPE SampleSceneGroup : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using ISceneInfo = ::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo;

using SceneInfo = ::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo;

using _GetScenes_d__14 = ::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14;

 __declspec(property(get=get_GroupDisplayOrder)) int32_t  GroupDisplayOrder;

 __declspec(property(get=get_GroupEnabled)) bool  GroupEnabled;

 __declspec(property(get=get_GroupName)) ::StringW  GroupName;

 __declspec(property(get=get_SceneCount)) int32_t  SceneCount;

/// @brief Field _groupDisplayOrder, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__groupDisplayOrder, put=__cordl_internal_set__groupDisplayOrder)) int32_t  _groupDisplayOrder;

/// @brief Field _groupEnabled, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__groupEnabled, put=__cordl_internal_set__groupEnabled)) bool  _groupEnabled;

/// @brief Field _groupName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__groupName, put=__cordl_internal_set__groupName)) ::StringW  _groupName;

/// @brief Field _sceneInfos, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__sceneInfos, put=__cordl_internal_set__sceneInfos)) ::ArrayW<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*>  _sceneInfos;

/// [IteratorStateMachine(typeof(Oculus.Interaction.Samples.SampleSceneGroup::<GetScenes>d__14))]
/// @brief Method GetScenes, addr 0xa43e830, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>* GetScenes() ;

static inline ::Oculus::Interaction::Samples::SampleSceneGroup* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__groupDisplayOrder() const;

constexpr int32_t& __cordl_internal_get__groupDisplayOrder() ;

constexpr bool const& __cordl_internal_get__groupEnabled() const;

constexpr bool& __cordl_internal_get__groupEnabled() ;

constexpr ::StringW const& __cordl_internal_get__groupName() const;

constexpr ::StringW& __cordl_internal_get__groupName() ;

constexpr ::ArrayW<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*> const& __cordl_internal_get__sceneInfos() const;

constexpr ::ArrayW<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*>& __cordl_internal_get__sceneInfos() ;

constexpr void __cordl_internal_set__groupDisplayOrder(int32_t  value) ;

constexpr void __cordl_internal_set__groupEnabled(bool  value) ;

constexpr void __cordl_internal_set__groupName(::StringW  value) ;

constexpr void __cordl_internal_set__sceneInfos(::ArrayW<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*>  value) ;

/// @brief Method .ctor, addr 0xa43e8e4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_GroupDisplayOrder, addr 0xa43e810, size 0x8, virtual false, abstract: false, final false
inline int32_t get_GroupDisplayOrder() ;

/// @brief Method get_GroupEnabled, addr 0xa43e808, size 0x8, virtual false, abstract: false, final false
inline bool get_GroupEnabled() ;

/// @brief Method get_GroupName, addr 0xa43e800, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_GroupName() ;

/// @brief Method get_SceneCount, addr 0xa43e818, size 0x18, virtual false, abstract: false, final false
inline int32_t get_SceneCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SampleSceneGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SampleSceneGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SampleSceneGroup(SampleSceneGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SampleSceneGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SampleSceneGroup(SampleSceneGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28334};

/// [Tooltip("Scenes in this group will be displayed under this header in the scene menu.")]
/// [SerializeField]
/// @brief Field _groupName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____groupName;

/// [Tooltip("Only Enabled scene groups will be shown in the scene menu.")]
/// [SerializeField]
/// @brief Field _groupEnabled, offset: 0x20, size: 0x1, def value: None
 bool  ____groupEnabled;

/// [Tooltip("Scene groups will appear in the scene menu sorted in ascending order by this value.")]
/// [SerializeField]
/// @brief Field _groupDisplayOrder, offset: 0x24, size: 0x4, def value: None
 int32_t  ____groupDisplayOrder;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field _sceneInfos, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*>  ____sceneInfos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::SampleSceneGroup, ____groupName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SampleSceneGroup, ____groupEnabled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SampleSceneGroup, ____groupDisplayOrder) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SampleSceneGroup, ____sceneInfos) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::SampleSceneGroup) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
// [CompilerGenerated]
// Dependencies Oculus.Interaction.Samples.SampleSceneGroup::SceneInfo, System.Object
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.SampleSceneGroup/<GetScenes>d__14
class CORDL_TYPE SampleSceneGroup__GetScenes_d__14 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo__get_Current)) ::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*  System_Collections_Generic_IEnumerator_Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>  __4__this;

/// @brief Field <>7__wrap1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::ArrayW<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*>  __7__wrap1;

/// @brief Field <>7__wrap2, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get___7__wrap2, put=__cordl_internal_set___7__wrap2)) int32_t  __7__wrap2;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa43e920, size 0xc0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<Oculus.Interaction.Samples.SampleSceneGroup.ISceneInfo>.GetEnumerator, addr 0xa43ea28, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>* System_Collections_Generic_IEnumerable_Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<Oculus.Interaction.Samples.SampleSceneGroup.ISceneInfo>.get_Current, addr 0xa43e9e0, size 0x8, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo* System_Collections_Generic_IEnumerator_Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xa43eacc, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa43e9e8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa43ea20, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa43e91c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo* const& __cordl_internal_get___2__current() const;

constexpr ::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*> const& __cordl_internal_get___7__wrap1() const;

constexpr ::ArrayW<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*>& __cordl_internal_get___7__wrap1() ;

constexpr int32_t const& __cordl_internal_get___7__wrap2() const;

constexpr int32_t& __cordl_internal_get___7__wrap2() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>  value) ;

constexpr void __cordl_internal_set___7__wrap1(::ArrayW<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*>  value) ;

constexpr void __cordl_internal_set___7__wrap2(int32_t  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa43e8b0, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>* i___System__Collections__Generic__IEnumerable_1___Oculus__Interaction__Samples__SampleSceneGroup_ISceneInfo__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>* i___System__Collections__Generic__IEnumerator_1___Oculus__Interaction__Samples__SampleSceneGroup_ISceneInfo__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SampleSceneGroup__GetScenes_d__14() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SampleSceneGroup__GetScenes_d__14", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SampleSceneGroup__GetScenes_d__14(SampleSceneGroup__GetScenes_d__14 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SampleSceneGroup__GetScenes_d__14", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SampleSceneGroup__GetScenes_d__14(SampleSceneGroup__GetScenes_d__14 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28333};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*>  _____7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x38, size: 0x4, def value: None
 int32_t  _____7__wrap2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14, _____7__wrap2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
// Dependencies System.Object
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.SampleSceneGroup/SceneInfo
class CORDL_TYPE SampleSceneGroup_SceneInfo : public ::System::Object {
public:
// Declarations
/// @brief Field DisplayName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayName, put=__cordl_internal_set_DisplayName)) ::StringW  DisplayName;

 __declspec(property(get=Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo_get_DisplayName)) ::StringW  Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo_DisplayName;

 __declspec(property(get=Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo_get_SceneGuid)) ::StringW  Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo_SceneGuid;

 __declspec(property(get=Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo_get_SceneName)) ::StringW  Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo_SceneName;

 __declspec(property(get=Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo_get_Thumbnail)) ::UnityW<::UnityEngine::Sprite>  Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo_Thumbnail;

/// @brief Field SceneGuid, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SceneGuid, put=__cordl_internal_set_SceneGuid)) ::StringW  SceneGuid;

/// @brief Field SceneName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_SceneName, put=__cordl_internal_set_SceneName)) ::StringW  SceneName;

/// @brief Field Thumbnail, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Thumbnail, put=__cordl_internal_set_Thumbnail)) ::UnityW<::UnityEngine::Sprite>  Thumbnail;

/// @brief Convert operator to "::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo"
constexpr operator  ::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*() noexcept;

static inline ::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo* New_ctor() ;

/// @brief Method Oculus.Interaction.Samples.SampleSceneGroup.ISceneInfo.get_DisplayName, addr 0xa43e8f4, size 0x8, virtual true, abstract: false, final true
inline ::StringW Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo_get_DisplayName() ;

/// @brief Method Oculus.Interaction.Samples.SampleSceneGroup.ISceneInfo.get_SceneGuid, addr 0xa43e90c, size 0x8, virtual true, abstract: false, final true
inline ::StringW Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo_get_SceneGuid() ;

/// @brief Method Oculus.Interaction.Samples.SampleSceneGroup.ISceneInfo.get_SceneName, addr 0xa43e8fc, size 0x8, virtual true, abstract: false, final true
inline ::StringW Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo_get_SceneName() ;

/// @brief Method Oculus.Interaction.Samples.SampleSceneGroup.ISceneInfo.get_Thumbnail, addr 0xa43e904, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Sprite> Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo_get_Thumbnail() ;

constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

constexpr ::StringW& __cordl_internal_get_DisplayName() ;

constexpr ::StringW const& __cordl_internal_get_SceneGuid() const;

constexpr ::StringW& __cordl_internal_get_SceneGuid() ;

constexpr ::StringW const& __cordl_internal_get_SceneName() const;

constexpr ::StringW& __cordl_internal_get_SceneName() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_Thumbnail() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_Thumbnail() ;

constexpr void __cordl_internal_set_DisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_SceneGuid(::StringW  value) ;

constexpr void __cordl_internal_set_SceneName(::StringW  value) ;

constexpr void __cordl_internal_set_Thumbnail(::UnityW<::UnityEngine::Sprite>  value) ;

/// @brief Method .ctor, addr 0xa43e914, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo"
constexpr ::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo* i___Oculus__Interaction__Samples__SampleSceneGroup_ISceneInfo() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SampleSceneGroup_SceneInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SampleSceneGroup_SceneInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SampleSceneGroup_SceneInfo(SampleSceneGroup_SceneInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SampleSceneGroup_SceneInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SampleSceneGroup_SceneInfo(SampleSceneGroup_SceneInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28332};

/// @brief Field DisplayName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___DisplayName;

/// @brief Field SceneName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___SceneName;

/// @brief Field SceneGuid, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___SceneGuid;

/// @brief Field Thumbnail, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___Thumbnail;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo, ___DisplayName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo, ___SceneName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo, ___SceneGuid) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo, ___Thumbnail) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
// Dependencies 
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.SampleSceneGroup/ISceneInfo
class CORDL_TYPE SampleSceneGroup_ISceneInfo {
public:
// Declarations
 __declspec(property(get=get_DisplayName)) ::StringW  DisplayName;

 __declspec(property(get=get_SceneGuid)) ::StringW  SceneGuid;

 __declspec(property(get=get_SceneName)) ::StringW  SceneName;

 __declspec(property(get=get_Thumbnail)) ::UnityW<::UnityEngine::Sprite>  Thumbnail;

/// @brief Method get_DisplayName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_DisplayName() ;

/// @brief Method get_SceneGuid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_SceneGuid() ;

/// @brief Method get_SceneName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_SceneName() ;

/// @brief Method get_Thumbnail, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Sprite> get_Thumbnail() ;

// Ctor Parameters [CppParam { name: "", ty: "SampleSceneGroup_ISceneInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SampleSceneGroup_ISceneInfo(SampleSceneGroup_ISceneInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28331};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Samples
