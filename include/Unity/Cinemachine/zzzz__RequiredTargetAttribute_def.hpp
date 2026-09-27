#pragma once
// IWYU pragma private; include "Unity/Cinemachine/RequiredTargetAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "Unity/Cinemachine/zzzz__RequiredTargetAttribute_RequiredTargets_def.hpp"
CORDL_MODULE_EXPORT(RequiredTargetAttribute)
namespace GlobalNamespace {
struct RequiredTargetAttribute_RequiredTargets;
}
// Forward declare root types
namespace Unity::Cinemachine {
class RequiredTargetAttribute;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::RequiredTargetAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::RequiredTargetAttribute*, "Unity.Cinemachine", "RequiredTargetAttribute");
// Dependencies System.Attribute, Unity.Cinemachine.RequiredTargetAttribute::RequiredTargets
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.RequiredTargetAttribute
class CORDL_TYPE RequiredTargetAttribute : public ::System::Attribute {
public:
// Declarations
using RequiredTargets = ::GlobalNamespace::RequiredTargetAttribute_RequiredTargets;

 __declspec(property(get=get_RequiredTarget, put=set_RequiredTarget)) ::GlobalNamespace::RequiredTargetAttribute_RequiredTargets  RequiredTarget;

/// @brief Field <RequiredTarget>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__RequiredTarget_k__BackingField, put=__cordl_internal_set__RequiredTarget_k__BackingField)) ::GlobalNamespace::RequiredTargetAttribute_RequiredTargets  _RequiredTarget_k__BackingField;

static inline ::Unity::Cinemachine::RequiredTargetAttribute* New_ctor(::GlobalNamespace::RequiredTargetAttribute_RequiredTargets  requiredTarget) ;

constexpr ::GlobalNamespace::RequiredTargetAttribute_RequiredTargets const& __cordl_internal_get__RequiredTarget_k__BackingField() const;

constexpr ::GlobalNamespace::RequiredTargetAttribute_RequiredTargets& __cordl_internal_get__RequiredTarget_k__BackingField() ;

constexpr void __cordl_internal_set__RequiredTarget_k__BackingField(::GlobalNamespace::RequiredTargetAttribute_RequiredTargets  value) ;

/// @brief Method .ctor, addr 0xaeb377c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::RequiredTargetAttribute_RequiredTargets  requiredTarget) ;

/// [CompilerGenerated]
/// @brief Method get_RequiredTarget, addr 0xaeb376c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::RequiredTargetAttribute_RequiredTargets get_RequiredTarget() ;

/// [CompilerGenerated]
/// @brief Method set_RequiredTarget, addr 0xaeb3774, size 0x8, virtual false, abstract: false, final false
inline void set_RequiredTarget(::GlobalNamespace::RequiredTargetAttribute_RequiredTargets  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RequiredTargetAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RequiredTargetAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RequiredTargetAttribute(RequiredTargetAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RequiredTargetAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RequiredTargetAttribute(RequiredTargetAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22304};

/// [CompilerGenerated]
/// @brief Field <RequiredTarget>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::RequiredTargetAttribute_RequiredTargets  ____RequiredTarget_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::RequiredTargetAttribute, ____RequiredTarget_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::RequiredTargetAttribute) == 0x18, "Size mismatch!");

} // namespace end def Unity::Cinemachine
