#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/ShapeRecognizer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureConfigBase_1_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerFeature_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShapeRecognizer)
namespace GlobalNamespace {
struct ShapeRecognizer___c__DisplayClass22_0;
}
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::PoseDetection {
class ShapeRecognizer_FingerFeatureConfigList;
}
namespace Oculus::Interaction::PoseDetection {
class ShapeRecognizer_FingerFeatureConfig;
}
namespace Oculus::Interaction::PoseDetection {
class ShapeRecognizer__GetFingerFeatureConfigs_d__21;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class ShapeRecognizer;
}
namespace Oculus::Interaction::PoseDetection {
class ShapeRecognizer_FingerFeatureConfig;
}
namespace Oculus::Interaction::PoseDetection {
class ShapeRecognizer_FingerFeatureConfigList;
}
namespace Oculus::Interaction::PoseDetection {
class ShapeRecognizer__GetFingerFeatureConfigs_d__21;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::ShapeRecognizer*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::ShapeRecognizer__GetFingerFeatureConfigs_d__21*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::ShapeRecognizer*, "Oculus.Interaction.PoseDetection", "ShapeRecognizer");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*, "Oculus.Interaction.PoseDetection", "ShapeRecognizer/FingerFeatureConfig");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList*, "Oculus.Interaction.PoseDetection", "ShapeRecognizer/FingerFeatureConfigList");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::ShapeRecognizer__GetFingerFeatureConfigs_d__21*, "Oculus.Interaction.PoseDetection", "ShapeRecognizer/<GetFingerFeatureConfigs>d__21");
// [CreateAssetMenu(menuName = "Meta/Interaction/SDK/Pose Detection/Shape")]
// Dependencies UnityEngine.ScriptableObject
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.ShapeRecognizer
class CORDL_TYPE ShapeRecognizer : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using __c__DisplayClass22_0 = ::GlobalNamespace::ShapeRecognizer___c__DisplayClass22_0;

using FingerFeatureConfig = ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig;

using FingerFeatureConfigList = ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList;

using _GetFingerFeatureConfigs_d__21 = ::Oculus::Interaction::PoseDetection::ShapeRecognizer__GetFingerFeatureConfigs_d__21;

 __declspec(property(get=get_IndexFeatureConfigs)) ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*  IndexFeatureConfigs;

 __declspec(property(get=get_MiddleFeatureConfigs)) ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*  MiddleFeatureConfigs;

 __declspec(property(get=get_PinkyFeatureConfigs)) ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*  PinkyFeatureConfigs;

 __declspec(property(get=get_RingFeatureConfigs)) ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*  RingFeatureConfigs;

 __declspec(property(get=get_ShapeName)) ::StringW  ShapeName;

 __declspec(property(get=get_ThumbFeatureConfigs)) ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*  ThumbFeatureConfigs;

/// @brief Field _indexFeatureConfigs, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__indexFeatureConfigs, put=__cordl_internal_set__indexFeatureConfigs)) ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList*  _indexFeatureConfigs;

/// @brief Field _middleFeatureConfigs, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__middleFeatureConfigs, put=__cordl_internal_set__middleFeatureConfigs)) ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList*  _middleFeatureConfigs;

/// @brief Field _pinkyFeatureConfigs, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__pinkyFeatureConfigs, put=__cordl_internal_set__pinkyFeatureConfigs)) ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList*  _pinkyFeatureConfigs;

/// @brief Field _ringFeatureConfigs, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__ringFeatureConfigs, put=__cordl_internal_set__ringFeatureConfigs)) ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList*  _ringFeatureConfigs;

/// @brief Field _shapeName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__shapeName, put=__cordl_internal_set__shapeName)) ::StringW  _shapeName;

/// @brief Field _thumbFeatureConfigs, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__thumbFeatureConfigs, put=__cordl_internal_set__thumbFeatureConfigs)) ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList*  _thumbFeatureConfigs;

/// [IteratorStateMachine(typeof(Oculus.Interaction.PoseDetection.ShapeRecognizer::<GetFingerFeatureConfigs>d__21))]
/// @brief Method GetFingerFeatureConfigs, addr 0xa4a4d68, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>* GetFingerFeatureConfigs() ;

/// @brief Method GetFingerFeatureConfigs, addr 0xa4a4c90, size 0xd8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>* GetFingerFeatureConfigs(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method InjectAllShapeRecognizer, addr 0xa4a4e1c, size 0xb0, virtual false, abstract: false, final false
inline void InjectAllShapeRecognizer(::System::Collections::Generic::IDictionary_2<::Oculus::Interaction::Input::HandFinger,::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>>*  fingerFeatureConfigs) ;

/// @brief Method InjectIndexFeatureConfigs, addr 0xa4a5180, size 0xc4, virtual false, abstract: false, final false
inline void InjectIndexFeatureConfigs(::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>  configs) ;

/// @brief Method InjectMiddleFeatureConfigs, addr 0xa4a5244, size 0xc4, virtual false, abstract: false, final false
inline void InjectMiddleFeatureConfigs(::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>  configs) ;

/// @brief Method InjectPinkyFeatureConfigs, addr 0xa4a53cc, size 0xc4, virtual false, abstract: false, final false
inline void InjectPinkyFeatureConfigs(::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>  configs) ;

/// @brief Method InjectRingFeatureConfigs, addr 0xa4a5308, size 0xc4, virtual false, abstract: false, final false
inline void InjectRingFeatureConfigs(::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>  configs) ;

/// @brief Method InjectShapeName, addr 0xa4a5490, size 0x8, virtual false, abstract: false, final false
inline void InjectShapeName(::StringW  shapeName) ;

/// @brief Method InjectThumbFeatureConfigs, addr 0xa4a508c, size 0xc4, virtual false, abstract: false, final false
inline void InjectThumbFeatureConfigs(::ArrayW<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>  configs) ;

static inline ::Oculus::Interaction::PoseDetection::ShapeRecognizer* New_ctor() ;

/// [CompilerGenerated]
/// @brief Method <InjectAllShapeRecognizer>g__ReadFeatureConfigs|22_0, addr 0xa4a4ecc, size 0x1c0, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList* _InjectAllShapeRecognizer_g__ReadFeatureConfigs_22_0(::Oculus::Interaction::Input::HandFinger  finger, ::by_ref<::GlobalNamespace::ShapeRecognizer___c__DisplayClass22_0>  _cordl_fixed_empty_name_whitespace) ;

constexpr ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList* const& __cordl_internal_get__indexFeatureConfigs() const;

constexpr ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList*& __cordl_internal_get__indexFeatureConfigs() ;

constexpr ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList* const& __cordl_internal_get__middleFeatureConfigs() const;

constexpr ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList*& __cordl_internal_get__middleFeatureConfigs() ;

constexpr ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList* const& __cordl_internal_get__pinkyFeatureConfigs() const;

constexpr ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList*& __cordl_internal_get__pinkyFeatureConfigs() ;

constexpr ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList* const& __cordl_internal_get__ringFeatureConfigs() const;

constexpr ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList*& __cordl_internal_get__ringFeatureConfigs() ;

constexpr ::StringW const& __cordl_internal_get__shapeName() const;

constexpr ::StringW& __cordl_internal_get__shapeName() ;

constexpr ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList* const& __cordl_internal_get__thumbFeatureConfigs() const;

constexpr ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList*& __cordl_internal_get__thumbFeatureConfigs() ;

constexpr void __cordl_internal_set__indexFeatureConfigs(::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList*  value) ;

constexpr void __cordl_internal_set__middleFeatureConfigs(::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList*  value) ;

constexpr void __cordl_internal_set__pinkyFeatureConfigs(::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList*  value) ;

constexpr void __cordl_internal_set__ringFeatureConfigs(::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList*  value) ;

constexpr void __cordl_internal_set__shapeName(::StringW  value) ;

constexpr void __cordl_internal_set__thumbFeatureConfigs(::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList*  value) ;

/// @brief Method .ctor, addr 0xa4a5498, size 0xfc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IndexFeatureConfigs, addr 0xa4a4c28, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>* get_IndexFeatureConfigs() ;

/// @brief Method get_MiddleFeatureConfigs, addr 0xa4a4c40, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>* get_MiddleFeatureConfigs() ;

/// @brief Method get_PinkyFeatureConfigs, addr 0xa4a4c70, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>* get_PinkyFeatureConfigs() ;

/// @brief Method get_RingFeatureConfigs, addr 0xa4a4c58, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>* get_RingFeatureConfigs() ;

/// @brief Method get_ShapeName, addr 0xa4a4c88, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ShapeName() ;

/// @brief Method get_ThumbFeatureConfigs, addr 0xa4a4c10, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>* get_ThumbFeatureConfigs() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShapeRecognizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShapeRecognizer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShapeRecognizer(ShapeRecognizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShapeRecognizer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShapeRecognizer(ShapeRecognizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16154};

/// [SerializeField]
/// @brief Field _shapeName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____shapeName;

/// [SerializeField]
/// @brief Field _thumbFeatureConfigs, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList*  ____thumbFeatureConfigs;

/// [SerializeField]
/// @brief Field _indexFeatureConfigs, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList*  ____indexFeatureConfigs;

/// [SerializeField]
/// @brief Field _middleFeatureConfigs, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList*  ____middleFeatureConfigs;

/// [SerializeField]
/// @brief Field _ringFeatureConfigs, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList*  ____ringFeatureConfigs;

/// [SerializeField]
/// @brief Field _pinkyFeatureConfigs, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList*  ____pinkyFeatureConfigs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::ShapeRecognizer, ____shapeName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::ShapeRecognizer, ____thumbFeatureConfigs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::ShapeRecognizer, ____indexFeatureConfigs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::ShapeRecognizer, ____middleFeatureConfigs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::ShapeRecognizer, ____ringFeatureConfigs) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::ShapeRecognizer, ____pinkyFeatureConfigs) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::ShapeRecognizer) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// [CompilerGenerated]
// Dependencies Oculus.Interaction.Input.HandFinger, System.Object, System.ValueTuple`2<T1, T2>
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21
class CORDL_TYPE ShapeRecognizer__GetFingerFeatureConfigs_d__21 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator__Oculus_Interaction_Input_HandFinger_System_Collections_Generic_IReadOnlyList_Oculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfig____get_Current)) ::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>  System_Collections_Generic_IEnumerator__Oculus_Interaction_Input_HandFinger_System_Collections_Generic_IReadOnlyList_Oculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfig____Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <fingerIdx>5__2, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__fingerIdx_5__2, put=__cordl_internal_set__fingerIdx_5__2)) int32_t  _fingerIdx_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa4a55a8, size 0x160, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Oculus::Interaction::PoseDetection::ShapeRecognizer__GetFingerFeatureConfigs_d__21* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<(Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList<Oculus.Interaction.PoseDetection.ShapeRecognizer.FingerFeatureConfig>)>.GetEnumerator, addr 0xa4a57a8, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>* System_Collections_Generic_IEnumerable__Oculus_Interaction_Input_HandFinger_System_Collections_Generic_IReadOnlyList_Oculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfig____GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<(Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList<Oculus.Interaction.PoseDetection.ShapeRecognizer.FingerFeatureConfig>)>.get_Current, addr 0xa4a5708, size 0xc, virtual true, abstract: false, final true
inline ::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*> System_Collections_Generic_IEnumerator__Oculus_Interaction_Input_HandFinger_System_Collections_Generic_IReadOnlyList_Oculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfig____get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xa4a584c, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa4a5714, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa4a574c, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa4a55a4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*> const& __cordl_internal_get___2__current() const;

constexpr ::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr int32_t const& __cordl_internal_get__fingerIdx_5__2() const;

constexpr int32_t& __cordl_internal_get__fingerIdx_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__fingerIdx_5__2(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa4a4de8, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>* i___System__Collections__Generic__IEnumerable_1___System__ValueTuple_2___Oculus__Interaction__Input__HandFinger___System__Collections__Generic__IReadOnlyList_1___Oculus__Interaction__PoseDetection__ShapeRecognizer_FingerFeatureConfig_____() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>>* i___System__Collections__Generic__IEnumerator_1___System__ValueTuple_2___Oculus__Interaction__Input__HandFinger___System__Collections__Generic__IReadOnlyList_1___Oculus__Interaction__PoseDetection__ShapeRecognizer_FingerFeatureConfig_____() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShapeRecognizer__GetFingerFeatureConfigs_d__21() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShapeRecognizer__GetFingerFeatureConfigs_d__21", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShapeRecognizer__GetFingerFeatureConfigs_d__21(ShapeRecognizer__GetFingerFeatureConfigs_d__21 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShapeRecognizer__GetFingerFeatureConfigs_d__21", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShapeRecognizer__GetFingerFeatureConfigs_d__21(ShapeRecognizer__GetFingerFeatureConfigs_d__21 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16153};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
 ::System::ValueTuple_2<::Oculus::Interaction::Input::HandFinger,::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*>  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PoseDetection::ShapeRecognizer>  _____4__this;

/// @brief Field <fingerIdx>5__2, offset: 0x38, size: 0x4, def value: None
 int32_t  ____fingerIdx_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::ShapeRecognizer__GetFingerFeatureConfigs_d__21, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::ShapeRecognizer__GetFingerFeatureConfigs_d__21, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::ShapeRecognizer__GetFingerFeatureConfigs_d__21, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::ShapeRecognizer__GetFingerFeatureConfigs_d__21, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::ShapeRecognizer__GetFingerFeatureConfigs_d__21, ____fingerIdx_5__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::ShapeRecognizer__GetFingerFeatureConfigs_d__21) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// Dependencies Oculus.Interaction.PoseDetection.FeatureConfigBase`1<TFeature>, Oculus.Interaction.PoseDetection.FingerFeature
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig
class CORDL_TYPE ShapeRecognizer_FingerFeatureConfig : public ::Oculus::Interaction::PoseDetection::FeatureConfigBase_1<::Oculus::Interaction::PoseDetection::FingerFeature> {
public:
// Declarations
static inline ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig* New_ctor() ;

/// @brief Method .ctor, addr 0xa49975c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShapeRecognizer_FingerFeatureConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShapeRecognizer_FingerFeatureConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShapeRecognizer_FingerFeatureConfig(ShapeRecognizer_FingerFeatureConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShapeRecognizer_FingerFeatureConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShapeRecognizer_FingerFeatureConfig(ShapeRecognizer_FingerFeatureConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16151};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList
class CORDL_TYPE ShapeRecognizer_FingerFeatureConfigList : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Value)) ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*  Value;

/// @brief Field _value, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*  _value;

static inline ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList* New_ctor() ;

static inline ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList* New_ctor(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>* const& __cordl_internal_get__value() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*& __cordl_internal_get__value() ;

constexpr void __cordl_internal_set__value(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*  value) ;

/// @brief Method .ctor, addr 0xa4a5594, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa4a5150, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*  value) ;

/// @brief Method get_Value, addr 0xa4a559c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>* get_Value() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShapeRecognizer_FingerFeatureConfigList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShapeRecognizer_FingerFeatureConfigList", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShapeRecognizer_FingerFeatureConfigList(ShapeRecognizer_FingerFeatureConfigList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShapeRecognizer_FingerFeatureConfigList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShapeRecognizer_FingerFeatureConfigList(ShapeRecognizer_FingerFeatureConfigList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16150};

/// [SerializeField]
/// @brief Field _value, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*>*  ____value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList, ____value) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfigList) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
