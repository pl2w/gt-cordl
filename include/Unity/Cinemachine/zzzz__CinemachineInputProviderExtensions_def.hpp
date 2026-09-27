#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineInputProviderExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CinemachineInputProviderExtensions)
namespace Unity::Cinemachine {
class AxisState_IInputAxisProvider;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineInputProviderExtensions;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineInputProviderExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineInputProviderExtensions*, "Unity.Cinemachine", "CinemachineInputProviderExtensions");
// [Extension]
// [Obsolete("IInputAxisProvider is deprecated.  Use InputAxis and InputAxisController instead")]
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineInputProviderExtensions
class CORDL_TYPE CinemachineInputProviderExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetInputAxisProvider, addr 0xaed3edc, size 0xc0, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::AxisState_IInputAxisProvider* GetInputAxisProvider(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineInputProviderExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineInputProviderExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineInputProviderExtensions(CinemachineInputProviderExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineInputProviderExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineInputProviderExtensions(CinemachineInputProviderExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22419};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachineInputProviderExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
