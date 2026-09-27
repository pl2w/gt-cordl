#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/IDataSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IDataSource)
namespace System {
class Action;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class IDataSource;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::IDataSource*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::IDataSource*, "Oculus.Interaction.Input", "IDataSource");
// Dependencies 
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.IDataSource
class CORDL_TYPE IDataSource {
public:
// Declarations
 __declspec(property(get=get_CurrentDataVersion)) int32_t  CurrentDataVersion;

/// @brief Method MarkInputDataRequiresUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void MarkInputDataRequiresUpdate() ;

/// [CompilerGenerated]
/// @brief Method add_InputDataAvailable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_InputDataAvailable(::System::Action*  value) ;

/// @brief Method get_CurrentDataVersion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_CurrentDataVersion() ;

/// [CompilerGenerated]
/// @brief Method remove_InputDataAvailable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_InputDataAvailable(::System::Action*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IDataSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDataSource(IDataSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16466};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Input
