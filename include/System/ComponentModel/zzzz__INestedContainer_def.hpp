#pragma once
// IWYU pragma private; include "System/ComponentModel/INestedContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INestedContainer)
namespace System::ComponentModel {
class IComponent;
}
namespace System::ComponentModel {
class IContainer;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::ComponentModel {
class INestedContainer;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::INestedContainer*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::INestedContainer*, "System.ComponentModel", "INestedContainer");
// Dependencies 
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.INestedContainer
class CORDL_TYPE INestedContainer {
public:
// Declarations
 __declspec(property(get=get_Owner)) ::System::ComponentModel::IComponent*  Owner;

/// @brief Convert operator to "::System::ComponentModel::IContainer"
constexpr operator  ::System::ComponentModel::IContainer*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method get_Owner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::ComponentModel::IComponent* get_Owner() ;

/// @brief Convert to "::System::ComponentModel::IContainer"
constexpr ::System::ComponentModel::IContainer* i___System__ComponentModel__IContainer() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "INestedContainer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INestedContainer(INestedContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10176};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
