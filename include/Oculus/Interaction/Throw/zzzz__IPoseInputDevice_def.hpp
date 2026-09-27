#pragma once
// IWYU pragma private; include "Oculus/Interaction/Throw/IPoseInputDevice.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPoseInputDevice)
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Throw {
class IPoseInputDevice;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Throw::IPoseInputDevice*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Throw::IPoseInputDevice*, "Oculus.Interaction.Throw", "IPoseInputDevice");
// Dependencies 
namespace Oculus::Interaction::Throw {
// Is value type: false
// CS Name: Oculus.Interaction.Throw.IPoseInputDevice
class CORDL_TYPE IPoseInputDevice {
public:
// Declarations
 __declspec(property(get=get_IsHighConfidence)) bool  IsHighConfidence;

 __declspec(property(get=get_IsInputValid)) bool  IsInputValid;

/// @brief Method GetExternalVelocities, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> GetExternalVelocities() ;

/// @brief Method GetRootPose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetRootPose(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method get_IsHighConfidence, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsHighConfidence() ;

/// @brief Method get_IsInputValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsInputValid() ;

// Ctor Parameters [CppParam { name: "", ty: "IPoseInputDevice", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPoseInputDevice(IPoseInputDevice const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16070};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Throw
