#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CameraPipelineAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
CORDL_MODULE_EXPORT(CameraPipelineAttribute)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CameraPipelineAttribute;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CameraPipelineAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CameraPipelineAttribute*, "Unity.Cinemachine", "CameraPipelineAttribute");
// Dependencies System.Attribute, Unity.Cinemachine.CinemachineCore::Stage
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CameraPipelineAttribute
class CORDL_TYPE CameraPipelineAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Stage, put=set_Stage)) ::GlobalNamespace::CinemachineCore_Stage  Stage;

/// @brief Field <Stage>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Stage_k__BackingField, put=__cordl_internal_set__Stage_k__BackingField)) ::GlobalNamespace::CinemachineCore_Stage  _Stage_k__BackingField;

static inline ::Unity::Cinemachine::CameraPipelineAttribute* New_ctor(::GlobalNamespace::CinemachineCore_Stage  stage) ;

constexpr ::GlobalNamespace::CinemachineCore_Stage const& __cordl_internal_get__Stage_k__BackingField() const;

constexpr ::GlobalNamespace::CinemachineCore_Stage& __cordl_internal_get__Stage_k__BackingField() ;

constexpr void __cordl_internal_set__Stage_k__BackingField(::GlobalNamespace::CinemachineCore_Stage  value) ;

/// @brief Method .ctor, addr 0xaeb3744, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::CinemachineCore_Stage  stage) ;

/// [CompilerGenerated]
/// @brief Method get_Stage, addr 0xaeb3734, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::CinemachineCore_Stage get_Stage() ;

/// [CompilerGenerated]
/// @brief Method set_Stage, addr 0xaeb373c, size 0x8, virtual false, abstract: false, final false
inline void set_Stage(::GlobalNamespace::CinemachineCore_Stage  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CameraPipelineAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CameraPipelineAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CameraPipelineAttribute(CameraPipelineAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CameraPipelineAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CameraPipelineAttribute(CameraPipelineAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22302};

/// [CompilerGenerated]
/// @brief Field <Stage>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineCore_Stage  ____Stage_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CameraPipelineAttribute, ____Stage_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CameraPipelineAttribute) == 0x18, "Size mismatch!");

} // namespace end def Unity::Cinemachine
