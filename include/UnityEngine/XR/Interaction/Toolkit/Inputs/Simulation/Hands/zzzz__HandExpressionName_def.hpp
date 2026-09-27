#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/Hands/HandExpressionName.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandExpressionName)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands {
struct HandExpressionName;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands", "HandExpressionName");
// [IsReadOnly]
// Dependencies UnityEngine.InputSystem.Utilities.InternedString
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName
struct CORDL_TYPE HandExpressionName {
public:
// Declarations
/// @brief Field Default, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  Default;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName>*() ;

/// @brief Method Equals, addr 0xb4c89a8, size 0xa8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xb4c8a50, size 0x2c, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  other) ;

/// @brief Method GetHashCode, addr 0xb4c8a7c, size 0x28, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xb4c2e84, size 0x28, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xb4c3244, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::StringW  value) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName getStaticF_Default() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName>"
constexpr ::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName>* i___System__IEquatable_1___UnityEngine__XR__Interaction__Toolkit__Inputs__Simulation__Hands__HandExpressionName_() ;

/// @brief Method op_Equality, addr 0xb4c8aa4, size 0x8, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  lhs, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  rhs) ;

/// @brief Method op_Implicit, addr 0xb4c8ab4, size 0x24, virtual false, abstract: false, final false
static inline ::StringW op_Implicit___StringW(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  value) ;

/// @brief Method op_Implicit, addr 0xb4c8ad8, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName op_Implicit___UnityEngine__XR__Interaction__Toolkit__Inputs__Simulation__Hands__HandExpressionName(::StringW  value) ;

/// @brief Method op_Inequality, addr 0xb4c8aac, size 0x8, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  lhs, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  rhs) ;

static inline void setStaticF_Default(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr HandExpressionName() ;

// Ctor Parameters [CppParam { name: "m_InternedString", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None, comment: None }]
constexpr HandExpressionName(::UnityEngine::InputSystem::Utilities::InternedString  m_InternedString) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11641};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_InternedString, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::InternedString  m_InternedString;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName, m_InternedString) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands
