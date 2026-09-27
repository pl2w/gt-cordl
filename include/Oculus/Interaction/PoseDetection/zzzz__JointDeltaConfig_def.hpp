#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/JointDeltaConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JointDeltaConfig)
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class JointDeltaConfig;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::JointDeltaConfig*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::JointDeltaConfig*, "Oculus.Interaction.PoseDetection", "JointDeltaConfig");
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.JointDeltaConfig
class CORDL_TYPE JointDeltaConfig : public ::System::Object {
public:
// Declarations
/// @brief Field InstanceID, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_InstanceID, put=__cordl_internal_set_InstanceID)) int32_t  InstanceID;

/// @brief Field JointIDs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_JointIDs, put=__cordl_internal_set_JointIDs)) ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Input::HandJointId>*  JointIDs;

static inline ::Oculus::Interaction::PoseDetection::JointDeltaConfig* New_ctor(int32_t  instanceID, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Input::HandJointId>*  jointIDs) ;

constexpr int32_t const& __cordl_internal_get_InstanceID() const;

constexpr int32_t& __cordl_internal_get_InstanceID() ;

constexpr ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Input::HandJointId>* const& __cordl_internal_get_JointIDs() const;

constexpr ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Input::HandJointId>*& __cordl_internal_get_JointIDs() ;

constexpr void __cordl_internal_set_InstanceID(int32_t  value) ;

constexpr void __cordl_internal_set_JointIDs(::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Input::HandJointId>*  value) ;

/// @brief Method .ctor, addr 0xa49e9ac, size 0x38, virtual false, abstract: false, final false
inline void _ctor(int32_t  instanceID, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Input::HandJointId>*  jointIDs) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JointDeltaConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JointDeltaConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JointDeltaConfig(JointDeltaConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JointDeltaConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JointDeltaConfig(JointDeltaConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16120};

/// @brief Field InstanceID, offset: 0x10, size: 0x4, def value: None
 int32_t  ___InstanceID;

/// @brief Field JointIDs, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Input::HandJointId>*  ___JointIDs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDeltaConfig, ___InstanceID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDeltaConfig, ___JointIDs) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::JointDeltaConfig) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
