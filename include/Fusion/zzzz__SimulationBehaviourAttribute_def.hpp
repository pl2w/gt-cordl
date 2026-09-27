#pragma once
// IWYU pragma private; include "Fusion/SimulationBehaviourAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__SimulationModes_def.hpp"
#include "Fusion/zzzz__SimulationStages_def.hpp"
#include "Fusion/zzzz__Topologies_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(SimulationBehaviourAttribute)
namespace Fusion {
struct SimulationModes;
}
namespace Fusion {
struct SimulationStages;
}
namespace Fusion {
struct Topologies;
}
// Forward declare root types
namespace Fusion {
class SimulationBehaviourAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::SimulationBehaviourAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationBehaviourAttribute*, "Fusion", "SimulationBehaviourAttribute");
// [AttributeUsage((System.AttributeTargets)4, AllowMultiple = false, Inherited = false)]
// Dependencies Fusion.SimulationModes, Fusion.SimulationStages, Fusion.Topologies, System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.SimulationBehaviourAttribute
class CORDL_TYPE SimulationBehaviourAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Modes, put=set_Modes)) ::Fusion::SimulationModes  Modes;

 __declspec(property(get=get_Stages, put=set_Stages)) ::Fusion::SimulationStages  Stages;

 __declspec(property(get=get_Topologies, put=set_Topologies)) ::Fusion::Topologies  Topologies;

/// @brief Field <Modes>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__Modes_k__BackingField, put=__cordl_internal_set__Modes_k__BackingField)) ::Fusion::SimulationModes  _Modes_k__BackingField;

/// @brief Field <Stages>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Stages_k__BackingField, put=__cordl_internal_set__Stages_k__BackingField)) ::Fusion::SimulationStages  _Stages_k__BackingField;

/// @brief Field <Topologies>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Topologies_k__BackingField, put=__cordl_internal_set__Topologies_k__BackingField)) ::Fusion::Topologies  _Topologies_k__BackingField;

static inline ::Fusion::SimulationBehaviourAttribute* New_ctor() ;

constexpr ::Fusion::SimulationModes const& __cordl_internal_get__Modes_k__BackingField() const;

constexpr ::Fusion::SimulationModes& __cordl_internal_get__Modes_k__BackingField() ;

constexpr ::Fusion::SimulationStages const& __cordl_internal_get__Stages_k__BackingField() const;

constexpr ::Fusion::SimulationStages& __cordl_internal_get__Stages_k__BackingField() ;

constexpr ::Fusion::Topologies const& __cordl_internal_get__Topologies_k__BackingField() const;

constexpr ::Fusion::Topologies& __cordl_internal_get__Topologies_k__BackingField() ;

constexpr void __cordl_internal_set__Modes_k__BackingField(::Fusion::SimulationModes  value) ;

constexpr void __cordl_internal_set__Stages_k__BackingField(::Fusion::SimulationStages  value) ;

constexpr void __cordl_internal_set__Topologies_k__BackingField(::Fusion::Topologies  value) ;

/// @brief Method .ctor, addr 0x5f86d3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Modes, addr 0x5f86d1c, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::SimulationModes get_Modes() ;

/// [CompilerGenerated]
/// @brief Method get_Stages, addr 0x5f86d0c, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::SimulationStages get_Stages() ;

/// [CompilerGenerated]
/// @brief Method get_Topologies, addr 0x5f86d2c, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Topologies get_Topologies() ;

/// [CompilerGenerated]
/// @brief Method set_Modes, addr 0x5f86d24, size 0x8, virtual false, abstract: false, final false
inline void set_Modes(::Fusion::SimulationModes  value) ;

/// [CompilerGenerated]
/// @brief Method set_Stages, addr 0x5f86d14, size 0x8, virtual false, abstract: false, final false
inline void set_Stages(::Fusion::SimulationStages  value) ;

/// [CompilerGenerated]
/// @brief Method set_Topologies, addr 0x5f86d34, size 0x8, virtual false, abstract: false, final false
inline void set_Topologies(::Fusion::Topologies  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimulationBehaviourAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimulationBehaviourAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimulationBehaviourAttribute(SimulationBehaviourAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimulationBehaviourAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimulationBehaviourAttribute(SimulationBehaviourAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18928};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Stages>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Fusion::SimulationStages  ____Stages_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Modes>k__BackingField, offset: 0x14, size: 0x4, def value: None
 ::Fusion::SimulationModes  ____Modes_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Topologies>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::Fusion::Topologies  ____Topologies_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SimulationBehaviourAttribute, ____Stages_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationBehaviourAttribute, ____Modes_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationBehaviourAttribute, ____Topologies_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::SimulationBehaviourAttribute) == 0x20, "Size mismatch!");

} // namespace end def Fusion
