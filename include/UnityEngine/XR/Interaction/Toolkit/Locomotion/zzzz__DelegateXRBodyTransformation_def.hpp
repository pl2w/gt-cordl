#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/DelegateXRBodyTransformation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DelegateXRBodyTransformation)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class IXRBodyTransformation;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XRMovableBody;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class DelegateXRBodyTransformation;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation*, "UnityEngine.XR.Interaction.Toolkit.Locomotion", "DelegateXRBodyTransformation");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.DelegateXRBodyTransformation
class CORDL_TYPE DelegateXRBodyTransformation : public ::System::Object {
public:
// Declarations
/// @brief Field transformation, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_transformation, put=__cordl_internal_set_transformation)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>*  transformation;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*() noexcept;

/// @brief Method Apply, addr 0xb449820, size 0x1c, virtual true, abstract: false, final true
inline void Apply(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*  body) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation* New_ctor() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation* New_ctor(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>*  transformation) ;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>* const& __cordl_internal_get_transformation() const;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>*& __cordl_internal_get_transformation() ;

constexpr void __cordl_internal_set_transformation(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>*  value) ;

/// @brief Method .ctor, addr 0xb4497e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb4497f0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>*  transformation) ;

/// [CompilerGenerated]
/// @brief Method add_transformation, addr 0xb449688, size 0xb0, virtual false, abstract: false, final false
inline void add_transformation(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>*  value) ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation* i___UnityEngine__XR__Interaction__Toolkit__Locomotion__IXRBodyTransformation() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_transformation, addr 0xb449738, size 0xb0, virtual false, abstract: false, final false
inline void remove_transformation(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DelegateXRBodyTransformation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DelegateXRBodyTransformation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DelegateXRBodyTransformation(DelegateXRBodyTransformation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DelegateXRBodyTransformation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DelegateXRBodyTransformation(DelegateXRBodyTransformation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11339};

/// [CompilerGenerated]
/// @brief Field transformation, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>*  ___transformation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation, ___transformation) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion
