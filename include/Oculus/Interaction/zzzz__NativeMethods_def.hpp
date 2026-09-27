#pragma once
// IWYU pragma private; include "Oculus/Interaction/NativeMethods.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeMethods)
// Forward declare root types
namespace Oculus::Interaction {
class NativeMethods;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::NativeMethods*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::NativeMethods*, "Oculus.Interaction", "NativeMethods");
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.NativeMethods
class CORDL_TYPE NativeMethods : public ::System::Object {
public:
// Declarations
/// @brief Method isdk_NativeComponent_Activate, addr 0xa48c008, size 0x7c, virtual false, abstract: false, final false
static inline int32_t isdk_NativeComponent_Activate(uint64_t  id) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeMethods() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeMethods", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeMethods(NativeMethods && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeMethods", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeMethods(NativeMethods const& ) = delete;

/// @brief Field IsdkSuccess offset 0xffffffff size 0x4
static constexpr int32_t  IsdkSuccess{static_cast<int32_t>(0x0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16031};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::NativeMethods) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
