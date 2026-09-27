#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Capabilities/StandardCapabilityKeys.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StandardCapabilityKeys)
// Forward declare root types
namespace Unity::XR::CoreUtils::Capabilities {
class StandardCapabilityKeys;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::Capabilities::StandardCapabilityKeys*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::Capabilities::StandardCapabilityKeys*, "Unity.XR.CoreUtils.Capabilities", "StandardCapabilityKeys");
// Dependencies System.Object
namespace Unity::XR::CoreUtils::Capabilities {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.Capabilities.StandardCapabilityKeys
class CORDL_TYPE StandardCapabilityKeys : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr StandardCapabilityKeys() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StandardCapabilityKeys", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StandardCapabilityKeys(StandardCapabilityKeys && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandardCapabilityKeys", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandardCapabilityKeys(StandardCapabilityKeys const& ) = delete;

/// @brief Field ControllersInput offset 0xffffffff size 0x8
static constexpr ::ConstString  ControllersInput{u"Controllers Input"};

/// @brief Field EyeGazeInput offset 0xffffffff size 0x8
static constexpr ::ConstString  EyeGazeInput{u"Eye Gaze Input"};

/// @brief Field FaceTracking offset 0xffffffff size 0x8
static constexpr ::ConstString  FaceTracking{u"Face Tracking"};

/// @brief Field HandsInput offset 0xffffffff size 0x8
static constexpr ::ConstString  HandsInput{u"Hands Input"};

/// @brief Field WorldDataInput offset 0xffffffff size 0x8
static constexpr ::ConstString  WorldDataInput{u"World Data Input"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30458};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::Capabilities::StandardCapabilityKeys) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils::Capabilities
