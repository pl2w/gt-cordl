#pragma once
// IWYU pragma private; include "Unity/Cinemachine/IInputAxisController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInputAxisController)
// Forward declare root types
namespace Unity::Cinemachine {
class IInputAxisController;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::IInputAxisController*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::IInputAxisController*, "Unity.Cinemachine", "IInputAxisController");
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.IInputAxisController
class CORDL_TYPE IInputAxisController {
public:
// Declarations
/// @brief Method SynchronizeControllers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SynchronizeControllers() ;

// Ctor Parameters [CppParam { name: "", ty: "IInputAxisController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IInputAxisController(IInputAxisController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22335};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
