#pragma once
// IWYU pragma private; include "UnityEngine/Animations/PositionConstraint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PositionConstraint)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Animations {
struct ConstraintSource;
}
namespace UnityEngine::Animations {
class IConstraintInternal;
}
namespace UnityEngine::Animations {
class IConstraint;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Animations {
class PositionConstraint;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::PositionConstraint*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::PositionConstraint*, "UnityEngine.Animations", "PositionConstraint");
// [NativeHeader("Modules/Animation/Constraints/Constraint.bindings.h")]
// [NativeHeader("Modules/Animation/Constraints/PositionConstraint.h")]
// [RequireComponent(typeof(UnityEngine.Transform))]
// [UsedByNativeCode]
// Dependencies UnityEngine.Behaviour
namespace UnityEngine::Animations {
// Is value type: false
// CS Name: UnityEngine.Animations.PositionConstraint
class CORDL_TYPE PositionConstraint : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(put=set_constraintActive)) bool  constraintActive;

 __declspec(property(put=set_translationOffset)) ::UnityEngine::Vector3  translationOffset;

/// @brief Convert operator to "::UnityEngine::Animations::IConstraint"
constexpr operator  ::UnityEngine::Animations::IConstraint*() noexcept;

/// @brief Convert operator to "::UnityEngine::Animations::IConstraintInternal"
constexpr operator  ::UnityEngine::Animations::IConstraintInternal*() noexcept;

/// @brief Method AddSource, addr 0xb54eb18, size 0x8c, virtual true, abstract: false, final true
inline int32_t AddSource(::UnityEngine::Animations::ConstraintSource  source) ;

/// @brief Method AddSource_Injected, addr 0xb54eba4, size 0x44, virtual false, abstract: false, final false
static inline int32_t AddSource_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Animations::ConstraintSource>  source) ;

/// @brief Method Internal_Create, addr 0xb54e944, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_Create(/* [Writable] */ ::UnityEngine::Animations::PositionConstraint*  self) ;

static inline ::UnityEngine::Animations::PositionConstraint* New_ctor() ;

/// @brief Method .ctor, addr 0xb54e900, size 0x44, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::Animations::IConstraint"
constexpr ::UnityEngine::Animations::IConstraint* i___UnityEngine__Animations__IConstraint() noexcept;

/// @brief Convert to "::UnityEngine::Animations::IConstraintInternal"
constexpr ::UnityEngine::Animations::IConstraintInternal* i___UnityEngine__Animations__IConstraintInternal() noexcept;

/// @brief Method set_constraintActive, addr 0xb54ea54, size 0x80, virtual true, abstract: false, final true
inline void set_constraintActive(bool  value) ;

/// @brief Method set_constraintActive_Injected, addr 0xb54ead4, size 0x44, virtual false, abstract: false, final false
static inline void set_constraintActive_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_translationOffset, addr 0xb54e980, size 0x90, virtual false, abstract: false, final false
inline void set_translationOffset(::UnityEngine::Vector3  value) ;

/// @brief Method set_translationOffset_Injected, addr 0xb54ea10, size 0x44, virtual false, abstract: false, final false
static inline void set_translationOffset_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PositionConstraint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PositionConstraint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PositionConstraint(PositionConstraint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PositionConstraint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PositionConstraint(PositionConstraint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29831};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Animations::PositionConstraint) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Animations
