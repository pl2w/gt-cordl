#pragma once
// IWYU pragma private; include "Fusion/FusionGlobalScriptableObjectUnloadDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(FusionGlobalScriptableObjectUnloadDelegate)
namespace Fusion {
class FusionGlobalScriptableObject;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion {
class FusionGlobalScriptableObjectUnloadDelegate;
}
// Write type traits
MARK_REF_T(::Fusion::FusionGlobalScriptableObjectUnloadDelegate*);
DEFINE_IL2CPP_CLASS(::Fusion::FusionGlobalScriptableObjectUnloadDelegate*, "Fusion", "FusionGlobalScriptableObjectUnloadDelegate");
// Dependencies System.MulticastDelegate
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionGlobalScriptableObjectUnloadDelegate
class CORDL_TYPE FusionGlobalScriptableObjectUnloadDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x5f3e690, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Fusion::FusionGlobalScriptableObject*  instance) ;

static inline ::Fusion::FusionGlobalScriptableObjectUnloadDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5f3e588, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionGlobalScriptableObjectUnloadDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionGlobalScriptableObjectUnloadDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionGlobalScriptableObjectUnloadDelegate(FusionGlobalScriptableObjectUnloadDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionGlobalScriptableObjectUnloadDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionGlobalScriptableObjectUnloadDelegate(FusionGlobalScriptableObjectUnloadDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31299};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::FusionGlobalScriptableObjectUnloadDelegate) == 0x80, "Size mismatch!");

} // namespace end def Fusion
