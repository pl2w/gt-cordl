#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/IDataSource_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDataSource_1)
namespace Oculus::Interaction::Input {
class IDataSource;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
template<typename TData>
class IDataSource_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::Input::IDataSource_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::Input::IDataSource_1, "Oculus.Interaction.Input", "IDataSource`1");
// Dependencies 
namespace Oculus::Interaction::Input {
// cpp template
template<typename TData>
// Is value type: false
// CS Name: Oculus.Interaction.Input.IDataSource`1<TData>
class CORDL_TYPE IDataSource_1 {
public:
// Declarations
/// @brief Convert operator to "::Oculus::Interaction::Input::IDataSource"
constexpr operator  ::Oculus::Interaction::Input::IDataSource*() noexcept;

/// @brief Method GetData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline TData GetData() ;

/// @brief Convert to "::Oculus::Interaction::Input::IDataSource"
constexpr ::Oculus::Interaction::Input::IDataSource* i___Oculus__Interaction__Input__IDataSource() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IDataSource_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDataSource_1(IDataSource_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16467};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Input
