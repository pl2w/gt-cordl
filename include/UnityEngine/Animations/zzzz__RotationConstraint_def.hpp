#pragma once
// IWYU pragma private; include "UnityEngine/Animations/RotationConstraint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RotationConstraint)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Animations {
struct Axis;
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
class RotationConstraint;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::RotationConstraint*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::RotationConstraint*, "UnityEngine.Animations", "RotationConstraint");
// [NativeHeader("Modules/Animation/Constraints/RotationConstraint.h")]
// [NativeHeader("Modules/Animation/Constraints/Constraint.bindings.h")]
// [UsedByNativeCode]
// [RequireComponent(typeof(UnityEngine.Transform))]
// Dependencies UnityEngine.Behaviour
namespace UnityEngine::Animations {
// Is value type: false
// CS Name: UnityEngine.Animations.RotationConstraint
class CORDL_TYPE RotationConstraint : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_constraintActive, put=set_constraintActive)) bool  constraintActive;

 __declspec(property(get=get_locked, put=set_locked)) bool  locked;

 __declspec(property(get=get_rotationAtRest, put=set_rotationAtRest)) ::UnityEngine::Vector3  rotationAtRest;

 __declspec(property(get=get_rotationAxis, put=set_rotationAxis)) ::UnityEngine::Animations::Axis  rotationAxis;

 __declspec(property(get=get_rotationOffset, put=set_rotationOffset)) ::UnityEngine::Vector3  rotationOffset;

 __declspec(property(get=get_sourceCount)) int32_t  sourceCount;

 __declspec(property(get=get_weight, put=set_weight)) float_t  weight;

/// @brief Convert operator to "::UnityEngine::Animations::IConstraint"
constexpr operator  ::UnityEngine::Animations::IConstraint*() noexcept;

/// @brief Convert operator to "::UnityEngine::Animations::IConstraintInternal"
constexpr operator  ::UnityEngine::Animations::IConstraintInternal*() noexcept;

/// @brief Method AddSource, addr 0xb54f8dc, size 0x8c, virtual true, abstract: false, final true
inline int32_t AddSource(::UnityEngine::Animations::ConstraintSource  source) ;

/// @brief Method AddSource_Injected, addr 0xb54f968, size 0x44, virtual false, abstract: false, final false
static inline int32_t AddSource_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Animations::ConstraintSource>  source) ;

/// @brief Method GetSource, addr 0xb54fbc8, size 0x28, virtual true, abstract: false, final true
inline ::UnityEngine::Animations::ConstraintSource GetSource(int32_t  index) ;

/// [FreeFunction("ConstraintBindings::GetSourceCount")]
/// @brief Method GetSourceCountInternal, addr 0xb54f5bc, size 0xa8, virtual false, abstract: false, final false
static inline int32_t GetSourceCountInternal(/* [NotNull] */ ::UnityEngine::Animations::RotationConstraint*  self) ;

/// @brief Method GetSourceCountInternal_Injected, addr 0xb54f664, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetSourceCountInternal_Injected(::System::IntPtr  self) ;

/// [NativeName("GetSource")]
/// @brief Method GetSourceInternal, addr 0xb54fbf0, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::Animations::ConstraintSource GetSourceInternal(int32_t  index) ;

/// @brief Method GetSourceInternal_Injected, addr 0xb54fc88, size 0x54, virtual false, abstract: false, final false
static inline void GetSourceInternal_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Animations::ConstraintSource>  ret) ;

/// [FreeFunction(Name = "ConstraintBindings::GetSources", HasExplicitThis = true)]
/// @brief Method GetSources, addr 0xb54f6a0, size 0xb0, virtual true, abstract: false, final true
inline void GetSources(/* [NotNull] */ ::System::Collections::Generic::List_1<::UnityEngine::Animations::ConstraintSource>*  sources) ;

/// @brief Method GetSources_Injected, addr 0xb54f750, size 0x44, virtual false, abstract: false, final false
static inline void GetSources_Injected(::System::IntPtr  _unity_self, ::System::Collections::Generic::List_1<::UnityEngine::Animations::ConstraintSource>*  sources) ;

/// @brief Method Internal_Create, addr 0xb54ec2c, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_Create(/* [Writable] */ ::UnityEngine::Animations::RotationConstraint*  self) ;

static inline ::UnityEngine::Animations::RotationConstraint* New_ctor() ;

/// @brief Method RemoveSource, addr 0xb54f9ac, size 0x28, virtual true, abstract: false, final true
inline void RemoveSource(int32_t  index) ;

/// [NativeName("RemoveSource")]
/// @brief Method RemoveSourceInternal, addr 0xb54fb04, size 0x80, virtual false, abstract: false, final false
inline void RemoveSourceInternal(int32_t  index) ;

/// @brief Method RemoveSourceInternal_Injected, addr 0xb54fb84, size 0x44, virtual false, abstract: false, final false
static inline void RemoveSourceInternal_Injected(::System::IntPtr  _unity_self, int32_t  index) ;

/// @brief Method SetSource, addr 0xb54fcdc, size 0x40, virtual true, abstract: false, final true
inline void SetSource(int32_t  index, ::UnityEngine::Animations::ConstraintSource  source) ;

/// [NativeName("SetSource")]
/// @brief Method SetSourceInternal, addr 0xb54fd1c, size 0x94, virtual false, abstract: false, final false
inline void SetSourceInternal(int32_t  index, ::UnityEngine::Animations::ConstraintSource  source) ;

/// @brief Method SetSourceInternal_Injected, addr 0xb54fdb0, size 0x54, virtual false, abstract: false, final false
static inline void SetSourceInternal_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Animations::ConstraintSource>  source) ;

/// @brief Method SetSources, addr 0xb54f794, size 0x54, virtual true, abstract: false, final true
inline void SetSources(::System::Collections::Generic::List_1<::UnityEngine::Animations::ConstraintSource>*  sources) ;

/// [FreeFunction("ConstraintBindings::SetSources", ThrowsException = true)]
/// @brief Method SetSourcesInternal, addr 0xb54f7e8, size 0xb0, virtual false, abstract: false, final false
static inline void SetSourcesInternal(/* [NotNull] */ ::UnityEngine::Animations::RotationConstraint*  self, ::System::Collections::Generic::List_1<::UnityEngine::Animations::ConstraintSource>*  sources) ;

/// @brief Method SetSourcesInternal_Injected, addr 0xb54f898, size 0x44, virtual false, abstract: false, final false
static inline void SetSourcesInternal_Injected(::System::IntPtr  self, ::System::Collections::Generic::List_1<::UnityEngine::Animations::ConstraintSource>*  sources) ;

/// @brief Method ValidateSourceIndex, addr 0xb54f9d4, size 0x130, virtual false, abstract: false, final false
inline void ValidateSourceIndex(int32_t  index) ;

/// @brief Method .ctor, addr 0xb54ebe8, size 0x44, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_constraintActive, addr 0xb54f2c8, size 0x78, virtual true, abstract: false, final true
inline bool get_constraintActive() ;

/// @brief Method get_constraintActive_Injected, addr 0xb54f340, size 0x3c, virtual false, abstract: false, final false
static inline bool get_constraintActive_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_locked, addr 0xb54f440, size 0x78, virtual true, abstract: false, final true
inline bool get_locked() ;

/// @brief Method get_locked_Injected, addr 0xb54f4b8, size 0x3c, virtual false, abstract: false, final false
static inline bool get_locked_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_rotationAtRest, addr 0xb54edf0, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_rotationAtRest() ;

/// @brief Method get_rotationAtRest_Injected, addr 0xb54ee88, size 0x44, virtual false, abstract: false, final false
static inline void get_rotationAtRest_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_rotationAxis, addr 0xb54f150, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Animations::Axis get_rotationAxis() ;

/// @brief Method get_rotationAxis_Injected, addr 0xb54f1c8, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Animations::Axis get_rotationAxis_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_rotationOffset, addr 0xb54efa0, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_rotationOffset() ;

/// @brief Method get_rotationOffset_Injected, addr 0xb54f038, size 0x44, virtual false, abstract: false, final false
static inline void get_rotationOffset_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_sourceCount, addr 0xb54f5b8, size 0x4, virtual true, abstract: false, final true
inline int32_t get_sourceCount() ;

/// @brief Method get_weight, addr 0xb54ec68, size 0x78, virtual true, abstract: false, final true
inline float_t get_weight() ;

/// @brief Method get_weight_Injected, addr 0xb54ece0, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_weight_Injected(::System::IntPtr  _unity_self) ;

/// @brief Convert to "::UnityEngine::Animations::IConstraint"
constexpr ::UnityEngine::Animations::IConstraint* i___UnityEngine__Animations__IConstraint() noexcept;

/// @brief Convert to "::UnityEngine::Animations::IConstraintInternal"
constexpr ::UnityEngine::Animations::IConstraintInternal* i___UnityEngine__Animations__IConstraintInternal() noexcept;

/// @brief Method set_constraintActive, addr 0xb54f37c, size 0x80, virtual true, abstract: false, final true
inline void set_constraintActive(bool  value) ;

/// @brief Method set_constraintActive_Injected, addr 0xb54f3fc, size 0x44, virtual false, abstract: false, final false
static inline void set_constraintActive_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_locked, addr 0xb54f4f4, size 0x80, virtual true, abstract: false, final true
inline void set_locked(bool  value) ;

/// @brief Method set_locked_Injected, addr 0xb54f574, size 0x44, virtual false, abstract: false, final false
static inline void set_locked_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_rotationAtRest, addr 0xb54eecc, size 0x90, virtual false, abstract: false, final false
inline void set_rotationAtRest(::UnityEngine::Vector3  value) ;

/// @brief Method set_rotationAtRest_Injected, addr 0xb54ef5c, size 0x44, virtual false, abstract: false, final false
static inline void set_rotationAtRest_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

/// @brief Method set_rotationAxis, addr 0xb54f204, size 0x80, virtual false, abstract: false, final false
inline void set_rotationAxis(::UnityEngine::Animations::Axis  value) ;

/// @brief Method set_rotationAxis_Injected, addr 0xb54f284, size 0x44, virtual false, abstract: false, final false
static inline void set_rotationAxis_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Animations::Axis  value) ;

/// @brief Method set_rotationOffset, addr 0xb54f07c, size 0x90, virtual false, abstract: false, final false
inline void set_rotationOffset(::UnityEngine::Vector3  value) ;

/// @brief Method set_rotationOffset_Injected, addr 0xb54f10c, size 0x44, virtual false, abstract: false, final false
static inline void set_rotationOffset_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

/// @brief Method set_weight, addr 0xb54ed1c, size 0x88, virtual true, abstract: false, final true
inline void set_weight(float_t  value) ;

/// @brief Method set_weight_Injected, addr 0xb54eda4, size 0x4c, virtual false, abstract: false, final false
static inline void set_weight_Injected(::System::IntPtr  _unity_self, float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RotationConstraint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotationConstraint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RotationConstraint(RotationConstraint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotationConstraint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotationConstraint(RotationConstraint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29832};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Animations::RotationConstraint) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Animations
