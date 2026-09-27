#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRDisplaySubsystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRDisplaySubsystem)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine::XR {
class XRDisplaySubsystem_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::XRDisplaySubsystem_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::XRDisplaySubsystem_BindingsMarshaller*, "UnityEngine.XR", "XRDisplaySubsystem/BindingsMarshaller");
// Dependencies System.Object
namespace UnityEngine::XR {
// Is value type: false
// CS Name: UnityEngine.XR.XRDisplaySubsystem/BindingsMarshaller
class CORDL_TYPE XRDisplaySubsystem_BindingsMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToNative, addr 0xb937f30, size 0x14, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToNative(Il2CppObject*  xrDisplaySubsystem) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRDisplaySubsystem_BindingsMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRDisplaySubsystem_BindingsMarshaller", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRDisplaySubsystem_BindingsMarshaller(XRDisplaySubsystem_BindingsMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRDisplaySubsystem_BindingsMarshaller", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRDisplaySubsystem_BindingsMarshaller(XRDisplaySubsystem_BindingsMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31630};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::XRDisplaySubsystem_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR
