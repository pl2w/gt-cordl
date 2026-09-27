#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Comfort/LocomotionVignetteProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LocomotionVignetteProvider)
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
class ITunnelingVignetteProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
class VignetteParameters;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class LocomotionProvider;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
class LocomotionVignetteProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Comfort", "LocomotionVignetteProvider");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Comfort.LocomotionVignetteProvider
class CORDL_TYPE LocomotionVignetteProvider : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_locomotionProvider, put=set_locomotionProvider)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>  locomotionProvider;

/// @brief Field m_Enabled, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Enabled, put=__cordl_internal_set_m_Enabled)) bool  m_Enabled;

/// @brief Field m_LocomotionProvider, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LocomotionProvider, put=__cordl_internal_set_m_LocomotionProvider)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>  m_LocomotionProvider;

/// @brief Field m_OverrideDefaultParameters, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_OverrideDefaultParameters, put=__cordl_internal_set_m_OverrideDefaultParameters)) bool  m_OverrideDefaultParameters;

/// @brief Field m_OverrideParameters, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OverrideParameters, put=__cordl_internal_set_m_OverrideParameters)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  m_OverrideParameters;

 __declspec(property(get=get_overrideDefaultParameters, put=set_overrideDefaultParameters)) bool  overrideDefaultParameters;

 __declspec(property(get=get_overrideParameters, put=set_overrideParameters)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  overrideParameters;

 __declspec(property(get=get_vignetteParameters)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  vignetteParameters;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*() noexcept;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider* New_ctor() ;

constexpr bool const& __cordl_internal_get_m_Enabled() const;

constexpr bool& __cordl_internal_get_m_Enabled() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider> const& __cordl_internal_get_m_LocomotionProvider() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>& __cordl_internal_get_m_LocomotionProvider() ;

constexpr bool const& __cordl_internal_get_m_OverrideDefaultParameters() const;

constexpr bool& __cordl_internal_get_m_OverrideDefaultParameters() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters* const& __cordl_internal_get_m_OverrideParameters() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*& __cordl_internal_get_m_OverrideParameters() ;

constexpr void __cordl_internal_set_m_Enabled(bool  value) ;

constexpr void __cordl_internal_set_m_LocomotionProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>  value) ;

constexpr void __cordl_internal_set_m_OverrideDefaultParameters(bool  value) ;

constexpr void __cordl_internal_set_m_OverrideParameters(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  value) ;

/// @brief Method .ctor, addr 0xb455164, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_enabled, addr 0xb45511c, size 0x8, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_locomotionProvider, addr 0xb45510c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider> get_locomotionProvider() ;

/// @brief Method get_overrideDefaultParameters, addr 0xb45512c, size 0x8, virtual false, abstract: false, final false
inline bool get_overrideDefaultParameters() ;

/// @brief Method get_overrideParameters, addr 0xb45513c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters* get_overrideParameters() ;

/// @brief Method get_vignetteParameters, addr 0xb45514c, size 0x18, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters* get_vignetteParameters() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider* i___UnityEngine__XR__Interaction__Toolkit__Locomotion__Comfort__ITunnelingVignetteProvider() noexcept;

/// @brief Method set_enabled, addr 0xb455124, size 0x8, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_locomotionProvider, addr 0xb455114, size 0x8, virtual false, abstract: false, final false
inline void set_locomotionProvider(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  value) ;

/// @brief Method set_overrideDefaultParameters, addr 0xb455134, size 0x8, virtual false, abstract: false, final false
inline void set_overrideDefaultParameters(bool  value) ;

/// @brief Method set_overrideParameters, addr 0xb455144, size 0x8, virtual false, abstract: false, final false
inline void set_overrideParameters(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionVignetteProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionVignetteProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionVignetteProvider(LocomotionVignetteProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionVignetteProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionVignetteProvider(LocomotionVignetteProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11383};

/// [SerializeField]
/// @brief Field m_LocomotionProvider, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>  ___m_LocomotionProvider;

/// [SerializeField]
/// @brief Field m_Enabled, offset: 0x18, size: 0x1, def value: None
 bool  ___m_Enabled;

/// [SerializeField]
/// @brief Field m_OverrideDefaultParameters, offset: 0x19, size: 0x1, def value: None
 bool  ___m_OverrideDefaultParameters;

/// [SerializeField]
/// @brief Field m_OverrideParameters, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  ___m_OverrideParameters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider, ___m_LocomotionProvider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider, ___m_Enabled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider, ___m_OverrideDefaultParameters) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider, ___m_OverrideParameters) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort
