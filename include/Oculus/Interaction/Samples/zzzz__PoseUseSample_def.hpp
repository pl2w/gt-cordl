#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/PoseUseSample.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__ActiveStateSelector_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PoseUseSample)
namespace Oculus::Interaction::Input {
class IHmd;
}
namespace Oculus::Interaction::Samples {
class PoseUseSample___c__DisplayClass10_0;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class PoseUseSample;
}
namespace Oculus::Interaction::Samples {
class PoseUseSample___c__DisplayClass10_0;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::PoseUseSample*);
MARK_REF_T(::Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::PoseUseSample*, "Oculus.Interaction.Samples", "PoseUseSample");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0*, "Oculus.Interaction.Samples", "PoseUseSample/<>c__DisplayClass10_0");
// Dependencies Oculus.Interaction.ActiveStateSelector, UnityEngine.GameObject, UnityEngine.Material, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.PoseUseSample
class CORDL_TYPE PoseUseSample : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass10_0 = ::Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0;

 __declspec(property(get=get_Hmd, put=set_Hmd)) ::Oculus::Interaction::Input::IHmd*  Hmd;

/// @brief Field <Hmd>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hmd_k__BackingField, put=__cordl_internal_set__Hmd_k__BackingField)) ::Oculus::Interaction::Input::IHmd*  _Hmd_k__BackingField;

/// @brief Field _hmd, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hmd, put=__cordl_internal_set__hmd)) ::UnityW<::UnityEngine::Object>  _hmd;

/// @brief Field _onSelectIcons, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__onSelectIcons, put=__cordl_internal_set__onSelectIcons)) ::ArrayW<::UnityW<::UnityEngine::Material>>  _onSelectIcons;

/// @brief Field _poseActiveVisualPrefab, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__poseActiveVisualPrefab, put=__cordl_internal_set__poseActiveVisualPrefab)) ::UnityW<::UnityEngine::GameObject>  _poseActiveVisualPrefab;

/// @brief Field _poseActiveVisuals, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__poseActiveVisuals, put=__cordl_internal_set__poseActiveVisuals)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  _poseActiveVisuals;

/// @brief Field _poses, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__poses, put=__cordl_internal_set__poses)) ::ArrayW<::UnityW<::Oculus::Interaction::ActiveStateSelector>>  _poses;

/// @brief Method Awake, addr 0xa43d638, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HideVisuals, addr 0xa43de44, size 0x48, virtual false, abstract: false, final false
inline void HideVisuals(int32_t  poseNumber) ;

static inline ::Oculus::Interaction::Samples::PoseUseSample* New_ctor() ;

/// @brief Method ShowVisuals, addr 0xa43d9e0, size 0x464, virtual false, abstract: false, final false
inline void ShowVisuals(int32_t  poseNumber) ;

/// @brief Method Start, addr 0xa43d690, size 0x348, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IHmd* const& __cordl_internal_get__Hmd_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHmd*& __cordl_internal_get__Hmd_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hmd() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hmd() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get__onSelectIcons() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get__onSelectIcons() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__poseActiveVisualPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__poseActiveVisualPrefab() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__poseActiveVisuals() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__poseActiveVisuals() ;

constexpr ::ArrayW<::UnityW<::Oculus::Interaction::ActiveStateSelector>> const& __cordl_internal_get__poses() const;

constexpr ::ArrayW<::UnityW<::Oculus::Interaction::ActiveStateSelector>>& __cordl_internal_get__poses() ;

constexpr void __cordl_internal_set__Hmd_k__BackingField(::Oculus::Interaction::Input::IHmd*  value) ;

constexpr void __cordl_internal_set__hmd(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__onSelectIcons(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set__poseActiveVisualPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__poseActiveVisuals(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set__poses(::ArrayW<::UnityW<::Oculus::Interaction::ActiveStateSelector>>  value) ;

/// @brief Method .ctor, addr 0xa43de8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Hmd, addr 0xa43d628, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHmd* get_Hmd() ;

/// [CompilerGenerated]
/// @brief Method set_Hmd, addr 0xa43d630, size 0x8, virtual false, abstract: false, final false
inline void set_Hmd(::Oculus::Interaction::Input::IHmd*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PoseUseSample() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PoseUseSample", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PoseUseSample(PoseUseSample && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoseUseSample", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoseUseSample(PoseUseSample const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28327};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHmd), new[] {  })]
/// @brief Field _hmd, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hmd;

/// [CompilerGenerated]
/// @brief Field <Hmd>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHmd*  ____Hmd_k__BackingField;

/// [SerializeField]
/// @brief Field _poses, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Oculus::Interaction::ActiveStateSelector>>  ____poses;

/// [SerializeField]
/// @brief Field _onSelectIcons, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ____onSelectIcons;

/// [SerializeField]
/// @brief Field _poseActiveVisualPrefab, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____poseActiveVisualPrefab;

/// @brief Field _poseActiveVisuals, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ____poseActiveVisuals;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::PoseUseSample, ____hmd) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PoseUseSample, ____Hmd_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PoseUseSample, ____poses) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PoseUseSample, ____onSelectIcons) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PoseUseSample, ____poseActiveVisualPrefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PoseUseSample, ____poseActiveVisuals) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::PoseUseSample) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.PoseUseSample/<>c__DisplayClass10_0
class CORDL_TYPE PoseUseSample___c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Interaction::Samples::PoseUseSample>  __4__this;

/// @brief Field poseNumber, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_poseNumber, put=__cordl_internal_set_poseNumber)) int32_t  poseNumber;

static inline ::Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0* New_ctor() ;

/// @brief Method <Start>b__0, addr 0xa43de94, size 0x1c, virtual false, abstract: false, final false
inline void _Start_b__0() ;

/// @brief Method <Start>b__1, addr 0xa43deb0, size 0x1c, virtual false, abstract: false, final false
inline void _Start_b__1() ;

constexpr ::UnityW<::Oculus::Interaction::Samples::PoseUseSample> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Interaction::Samples::PoseUseSample>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get_poseNumber() const;

constexpr int32_t& __cordl_internal_get_poseNumber() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::Samples::PoseUseSample>  value) ;

constexpr void __cordl_internal_set_poseNumber(int32_t  value) ;

/// @brief Method .ctor, addr 0xa43d9d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PoseUseSample___c__DisplayClass10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PoseUseSample___c__DisplayClass10_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PoseUseSample___c__DisplayClass10_0(PoseUseSample___c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoseUseSample___c__DisplayClass10_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoseUseSample___c__DisplayClass10_0(PoseUseSample___c__DisplayClass10_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28326};

/// @brief Field poseNumber, offset: 0x10, size: 0x4, def value: None
 int32_t  ___poseNumber;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Samples::PoseUseSample>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0, ___poseNumber) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
