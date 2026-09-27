#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Capabilities/CapabilityProfile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(CapabilityProfile)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Unity::XR::CoreUtils::Capabilities {
class CapabilityProfile;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::Capabilities::CapabilityProfile*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::Capabilities::CapabilityProfile*, "Unity.XR.CoreUtils.Capabilities", "CapabilityProfile");
// Dependencies UnityEngine.ScriptableObject
namespace Unity::XR::CoreUtils::Capabilities {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.Capabilities.CapabilityProfile
class CORDL_TYPE CapabilityProfile : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field CapabilityChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CapabilityChanged, put=setStaticF_CapabilityChanged)) ::System::Action_1<::UnityW<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile>>*  CapabilityChanged;

static inline ::Unity::XR::CoreUtils::Capabilities::CapabilityProfile* New_ctor() ;

/// @brief Method ReportCapabilityChanged, addr 0xb3fd67c, size 0x6c, virtual false, abstract: false, final false
inline void ReportCapabilityChanged() ;

/// @brief Method .ctor, addr 0xb3fd6e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_CapabilityChanged, addr 0xb3fd4e4, size 0xcc, virtual false, abstract: false, final false
static inline void add_CapabilityChanged(::System::Action_1<::UnityW<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile>>*  value) ;

static inline ::System::Action_1<::UnityW<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile>>* getStaticF_CapabilityChanged() ;

/// [CompilerGenerated]
/// @brief Method remove_CapabilityChanged, addr 0xb3fd5b0, size 0xcc, virtual false, abstract: false, final false
static inline void remove_CapabilityChanged(::System::Action_1<::UnityW<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile>>*  value) ;

static inline void setStaticF_CapabilityChanged(::System::Action_1<::UnityW<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CapabilityProfile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CapabilityProfile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CapabilityProfile(CapabilityProfile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CapabilityProfile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CapabilityProfile(CapabilityProfile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30454};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::Capabilities::CapabilityProfile) == 0x18, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils::Capabilities
