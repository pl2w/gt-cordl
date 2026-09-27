#pragma once
// IWYU pragma private; include "Unity/Cinemachine/IInputAxisResetSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInputAxisResetSource)
namespace System {
class Action;
}
// Forward declare root types
namespace Unity::Cinemachine {
class IInputAxisResetSource;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::IInputAxisResetSource*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::IInputAxisResetSource*, "Unity.Cinemachine", "IInputAxisResetSource");
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.IInputAxisResetSource
class CORDL_TYPE IInputAxisResetSource {
public:
// Declarations
 __declspec(property(get=get_HasResetHandler)) bool  HasResetHandler;

/// @brief Method RegisterResetHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RegisterResetHandler(::System::Action*  handler) ;

/// @brief Method UnregisterResetHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UnregisterResetHandler(::System::Action*  handler) ;

/// @brief Method get_HasResetHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_HasResetHandler() ;

// Ctor Parameters [CppParam { name: "", ty: "IInputAxisResetSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IInputAxisResetSource(IInputAxisResetSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22328};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
