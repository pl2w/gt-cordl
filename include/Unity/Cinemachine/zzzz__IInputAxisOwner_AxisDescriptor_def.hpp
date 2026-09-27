#pragma once
// IWYU pragma private; include "Unity/Cinemachine/IInputAxisOwner_AxisDescriptor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__IInputAxisOwner_AxisDescriptor_Hints_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(IInputAxisOwner_AxisDescriptor)
namespace GlobalNamespace {
struct AxisDescriptor_IInputAxisOwner_Hints;
}
namespace Unity::Cinemachine {
class AxisDescriptor_IInputAxisOwner_AxisGetter;
}
// Forward declare root types
namespace GlobalNamespace {
struct IInputAxisOwner_AxisDescriptor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::IInputAxisOwner_AxisDescriptor);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IInputAxisOwner_AxisDescriptor, "Unity.Cinemachine", "IInputAxisOwner/AxisDescriptor");
// Dependencies Unity.Cinemachine.IInputAxisOwner::AxisDescriptor::Hints
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.IInputAxisOwner/AxisDescriptor
struct CORDL_TYPE IInputAxisOwner_AxisDescriptor {
public:
// Declarations
using Hints = ::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints;

using AxisGetter = ::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter;

// Ctor Parameters []
// @brief default ctor
constexpr IInputAxisOwner_AxisDescriptor() ;

// Ctor Parameters [CppParam { name: "DrivenAxis", ty: "::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Hint", ty: "::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints", modifiers: "", def_value: None, comment: None }]
constexpr IInputAxisOwner_AxisDescriptor(::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter*  DrivenAxis, ::StringW  Name, ::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints  Hint) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22326};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field DrivenAxis, offset: 0x0, size: 0x8, def value: None
 ::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter*  DrivenAxis;

/// @brief Field Name, offset: 0x8, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field Hint, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints  Hint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IInputAxisOwner_AxisDescriptor, DrivenAxis) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IInputAxisOwner_AxisDescriptor, Name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IInputAxisOwner_AxisDescriptor, Hint) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::IInputAxisOwner_AxisDescriptor) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
