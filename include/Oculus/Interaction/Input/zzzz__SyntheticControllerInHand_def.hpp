#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/SyntheticControllerInHand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__Controller_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
CORDL_MODULE_EXPORT(SyntheticControllerInHand)
namespace GlobalNamespace {
template<typename TData>
struct DataSource_1_UpdateModeFlags;
}
namespace Oculus::Interaction::Input {
class ControllerDataAsset;
}
namespace Oculus::Interaction::Input {
template<typename TData>
class IDataSource_1;
}
namespace Oculus::Interaction::Input {
class IDataSource;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class SyntheticControllerInHand;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::SyntheticControllerInHand*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::SyntheticControllerInHand*, "Oculus.Interaction.Input", "SyntheticControllerInHand");
// Dependencies Oculus.Interaction.Input.Controller, UnityEngine.Pose
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.SyntheticControllerInHand
class CORDL_TYPE SyntheticControllerInHand : public ::Oculus::Interaction::Input::Controller {
public:
// Declarations
 __declspec(property(get=get_RawHand, put=set_RawHand)) ::Oculus::Interaction::Input::IHand*  RawHand;

 __declspec(property(get=get_SyntheticHand, put=set_SyntheticHand)) ::Oculus::Interaction::Input::IHand*  SyntheticHand;

/// @brief Field <RawHand>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__RawHand_k__BackingField, put=__cordl_internal_set__RawHand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _RawHand_k__BackingField;

/// @brief Field <SyntheticHand>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__SyntheticHand_k__BackingField, put=__cordl_internal_set__SyntheticHand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _SyntheticHand_k__BackingField;

/// @brief Field _handToController, offset 0x98, size 0x1c 
 __declspec(property(get=__cordl_internal_get__handToController, put=__cordl_internal_set__handToController)) ::UnityEngine::Pose  _handToController;

/// @brief Field _rawHand, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__rawHand, put=__cordl_internal_set__rawHand)) ::UnityW<::UnityEngine::Object>  _rawHand;

/// @brief Field _rootToPointer, offset 0xb4, size 0x1c 
 __declspec(property(get=__cordl_internal_get__rootToPointer, put=__cordl_internal_set__rootToPointer)) ::UnityEngine::Pose  _rootToPointer;

/// @brief Field _syntheticHand, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__syntheticHand, put=__cordl_internal_set__syntheticHand)) ::UnityW<::UnityEngine::Object>  _syntheticHand;

/// @brief Method Apply, addr 0xa506fac, size 0x4, virtual true, abstract: false, final false
inline void Apply(::Oculus::Interaction::Input::ControllerDataAsset*  data) ;

/// @brief Method ApplyOffsets, addr 0xa506fb0, size 0x74, virtual false, abstract: false, final false
inline void ApplyOffsets(::Oculus::Interaction::Input::ControllerDataAsset*  data) ;

/// @brief Method Awake, addr 0xa506cb0, size 0xa0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllSyntheticControllerInHand, addr 0xa5071d0, size 0x4, virtual false, abstract: false, final false
inline void InjectAllSyntheticControllerInHand(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::ControllerDataAsset*>  updateMode, ::Oculus::Interaction::Input::IDataSource*  updateAfter, ::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::ControllerDataAsset*>*  modifyDataFromSource, bool  applyModifier) ;

/// @brief Method InjectOptionalRawHand, addr 0xa5071d4, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalRawHand(::Oculus::Interaction::Input::IHand*  rawHand) ;

/// @brief Method InjectOptionalSyntheticHand, addr 0xa5072a4, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalSyntheticHand(::Oculus::Interaction::Input::IHand*  syntheticHand) ;

/// @brief Method LateUpdate, addr 0xa506e30, size 0xe8, virtual true, abstract: false, final false
inline void LateUpdate() ;

static inline ::Oculus::Interaction::Input::SyntheticControllerInHand* New_ctor() ;

/// @brief Method Start, addr 0xa506d50, size 0xe0, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TryGetTrackingRoot, addr 0xa507024, size 0x1ac, virtual false, abstract: false, final false
inline bool TryGetTrackingRoot(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::Input::ControllerDataAsset*  controller, ::by_ref<::UnityEngine::Pose>  root) ;

/// @brief Method UpdateOffsets, addr 0xa506f18, size 0x94, virtual false, abstract: false, final false
inline void UpdateOffsets(::Oculus::Interaction::Input::ControllerDataAsset*  data) ;

/// [CompilerGenerated]
/// @brief Method <Start>b__13_0, addr 0xa50740c, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__13_0() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__RawHand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__RawHand_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__SyntheticHand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__SyntheticHand_k__BackingField() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__handToController() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__handToController() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__rawHand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__rawHand() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__rootToPointer() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__rootToPointer() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__syntheticHand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__syntheticHand() ;

constexpr void __cordl_internal_set__RawHand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__SyntheticHand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__handToController(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__rawHand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__rootToPointer(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__syntheticHand(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa507374, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_RawHand, addr 0xa506c90, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_RawHand() ;

/// [CompilerGenerated]
/// @brief Method get_SyntheticHand, addr 0xa506ca0, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_SyntheticHand() ;

/// [CompilerGenerated]
/// @brief Method set_RawHand, addr 0xa506c98, size 0x8, virtual false, abstract: false, final false
inline void set_RawHand(::Oculus::Interaction::Input::IHand*  value) ;

/// [CompilerGenerated]
/// @brief Method set_SyntheticHand, addr 0xa506ca8, size 0x8, virtual false, abstract: false, final false
inline void set_SyntheticHand(::Oculus::Interaction::Input::IHand*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SyntheticControllerInHand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SyntheticControllerInHand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SyntheticControllerInHand(SyntheticControllerInHand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SyntheticControllerInHand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SyntheticControllerInHand(SyntheticControllerInHand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16464};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// [Optional]
/// @brief Field _rawHand, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____rawHand;

/// [CompilerGenerated]
/// @brief Field <RawHand>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____RawHand_k__BackingField;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// [Optional]
/// @brief Field _syntheticHand, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____syntheticHand;

/// [CompilerGenerated]
/// @brief Field <SyntheticHand>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____SyntheticHand_k__BackingField;

/// @brief Field _handToController, offset: 0x98, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____handToController;

/// @brief Field _rootToPointer, offset: 0xb4, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____rootToPointer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::SyntheticControllerInHand, ____rawHand) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticControllerInHand, ____RawHand_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticControllerInHand, ____syntheticHand) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticControllerInHand, ____SyntheticHand_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticControllerInHand, ____handToController) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SyntheticControllerInHand, ____rootToPointer) == 0xb4, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::SyntheticControllerInHand) == 0xd0, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
